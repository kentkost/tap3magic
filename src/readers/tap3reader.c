#include "tap3reader.h"
#include <string.h>
#include <stdio.h>
#include "DataInterChange.h"

void decode_ber_datainterchange();
void tap0311_menu();

int main(int argc, char** argv)
{
    tap0311_menu();
    return 0;

    // enum version tap3version;
    // printf("What version: ");
    // scanf("%d", &tap3version);
    
    // // DER, BER, OER, XER, PER, UPER, JER
    // enum codec codec;
    // printf("What codec: ");
    // scanf("%d", &codec);    

    // printf("You've chosen version %s with %s codec", version_str[tap3version], codec_str[codec]);
}

void tap0311_menu(){
    decode_ber_datainterchange();
}

void decode_ber_datainterchange()
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