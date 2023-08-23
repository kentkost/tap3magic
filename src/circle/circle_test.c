#include <stdio.h>
#include <sys/types.h>
#include "circle.h"
#include "circle_test.h"

static int write_out(const void *buffer, size_t size, void *app_key);


//30 09 02 01 05 02 01 0d 02 01 45
static char circleData[] = {0x30, 0x09, 0x02, 0x01, 0x05, 0x02, 0x01, 0x0d, 0x02, 0x01, 0x45};

int main(int argc, char **argv)
{
    circle_menu();
    return 0;
}

void circle_menu(){
    printf("Enter a choice: ");
    char choice = 'r';
    scanf("%c", &choice);

    switch(choice){
        case 'p':
            print_circle();
            break;
        case 'j':
            print_jer_circle();
            break;
        case 'w':
            write_circle();
            break;
        case 'd':
            decode_circle();
            break;
        default:
            printf("Didn't select a proper choice");
    }
}

static int write_out(const void *buffer, size_t size, void *app_key) {
    FILE *out_fp = app_key;
    size_t wrote = fwrite(buffer, 1, size, out_fp);
    return (wrote == size) ? 0 : -1;
}

void write_circle()
{
    Circle_t *circle; /* Type to encode */
    asn_enc_rval_t ec; /* Encoder return value */
    
    /* Allocate the Circle_t */
    circle = calloc(1, sizeof(Circle_t)); /* not malloc! */

    if(!circle) {
        perror("calloc() failed");
        exit(1);
    }

    /* Initialize the circle members */
    circle->position_x = 42;
    circle->position_y = 23;
    circle->radius = 123;

    /* BER encode the data if filename is given */
    const char *filename = "circleBerEncoded.ber";

    FILE *fp = fopen(filename, "wb"); /* for BER output */
    if(!fp) {
        perror(filename);
        exit(1);
    }
    
    /* Encode the circle type as BER (DER) */
    ec = der_encode(&asn_DEF_Circle, circle, write_out, fp);
    fclose(fp);

    if(ec.encoded == -1) {
        fprintf(stderr, "Could not encode Rectangle (at %s)\n",
        ec.failed_type ? ec.failed_type->name : "unknown");
        exit(1);
    } else {
        fprintf(stderr, "Created %s with BER encoded Rectangle\n", filename);
    }

    /* Also print the constructed Rectangle XER encoded (XML) */
    xer_fprint(stdout, &asn_DEF_Circle, circle);
}

void decode_circle()
{
    char buf[1024]; /* Temporary buffer */
    asn_dec_rval_t rval; /* Decoder return value */
    Circle_t *circle = 0; /* Type to decode. Note this 0! */
    FILE *fp; /* Input file handler */
    size_t size; /* Number of bytes read */
    char *filename="circleBerEncoded.ber"; /* Input file name */

    /* Open input file as read-only binary */
    fp = fopen(filename, "rb");
    if(!fp) {
        perror(filename);
        exit(1);
    }

    /* Read up to the buffer size */
    size = fread(buf, 1, sizeof(buf), fp);
    fclose(fp);

    if(!size) {
        fprintf(stderr, "%s: Empty or broken\n", filename);
        exit(1);
    }

    /* Decode the input buffer as circle type */
    // rval = ber_decode(0, &asn_DEF_Circle, (void **)&circle, buf, size);
    rval = ber_decode(0, &asn_DEF_Circle, (void **)&circle, circleData, size);
    
    if(rval.code != RC_OK) {
        fprintf(stderr, "%s: Broken Circle encoding at byte %ld\n", filename, (long)rval.consumed);
        exit(1);
    }

    /* Print the decoded circle type as XML */
    xer_fprint(stdout, &asn_DEF_Circle, circle);
}

void print_circle()
{
    Circle_t *c;
    /* Allocate a new Circle */
    c = calloc(1, sizeof *c);
    assert(c); /* Infinite memory! */
    /* Fill in the data */
    c->position_x = 123;
    c->position_y = 321;
    c->radius = 33;
    /* Print out the structure in XER */
    xer_fprint(stdout, &asn_DEF_Circle, c);
}

void print_jer_circle()
{
    Circle_t *c;
    /* Allocate a new Circle */
    c = calloc(1, sizeof *c);
    assert(c); /* Infinite memory! */
    /* Fill in the data */
    c->position_x = 321;
    c->position_y = 564584;
    c->radius = 5;
    /* Print out the structure in XER */
    jer_fprint(stdout, &asn_DEF_Circle, c);
}