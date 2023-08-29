#include "tap3reader.h"
#include <string.h>
#include <stdio.h>
#include "DataInterChange.h"
#include <asn_application.h>
#include <asn_internal.h>    /* for ASN__DEFAULT_STACK_MAX */

typedef asn_dec_rval_t (*pfn_decoder)(const asn_codec_ctx_t *opt_codec_ctx,const asn_TYPE_descriptor_t *type_descriptor, void **struct_ptr,const void *ptr, size_t size) ;

typedef struct {
    const char *name;
    enum asn_transfer_syntax syntax;
    pfn_decoder func;
    const char *full_name;
} syntax_selector;

void decode_ber_datainterchange(char *path);
void generic_buffer_decode_datainterchange(char *path);
static void tap0311_menu();
static void * get_decoder(int x);
const char* decode_tap0311(int inputSelector, int outputSelector, char *inputBytes);

static const syntax_selector input_encoders[] = {
    {
        "ber", 
        ATS_BER, 
        ber_decode,
        "input is BER or DER"
    },
};

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

static void tap0311_menu(){
    decode_ber_datainterchange("E:\\repos\\tap3reader\\sample-data\\tap3-sample-DataInterChange-3_11.ber");
    // decode_tap0311(0,1,"ree");
}


const char* decode_tap0311(int inputSelector, int outputSelector, char *inputBytes)
{

}

static void * get_decoder(int inputFormat)
{


}

void decode_ber_datainterchange(char *path)
{
    asn_dec_rval_t rval; /* Decoder return value */
    DataInterChange_t *datainterchange = 0; /* Type to decode. Note this 0! */
    FILE *fp; /* Input file handler */
    size_t size; /* Number of bytes read */
    // char *filename="E:\\repos\\tap3reader\\sample-data\\tap3-sample-DataInterChange-3_11.ber"; /* Input file name */
    char *filename="E:\\repos\\tap3reader\\build\\debug-readers\\tap3-sample-DataInterChange-3_11.ber"; /* Input file name */

    /* Open input file as read-only binary */
    fp = fopen(filename, "rb");
    if(!fp) {
        perror(filename);
        exit(1);
    }

    fseek(fp, 0L, SEEK_END);
    int buffer_size = ftell(fp);
    rewind(fp);
    
    char buf[buffer_size];
    /* Read the entire file */
    size = fread(buf, 1, sizeof(buf), fp);

    fclose(fp);
    if(!size) {
        fprintf(stderr, "%s: Empty or broken\n", filename);
        exit(1);
    }

    /* Decode the input buffer as circle type */
    syntax_selector sel = input_encoders[0];
    rval = sel.func(0, &asn_DEF_DataInterChange, (void **)&datainterchange, buf, size); // using function pointer
    // rval = ber_decode(0, &asn_DEF_DataInterChange, (void **)&datainterchange, buf, size); // direct reference

    if(rval.code != RC_OK) {
        fprintf(stderr, "%s: Broken datainterchange encoding at byte %ld\n", filename, (long)rval.consumed);
        exit(1);
    }

    /* Print the decoded circle type as XML */
    // xer_fprint(stdout, &asn_DEF_DataInterChange, datainterchange);
    jer_fprint(stdout, &asn_DEF_DataInterChange, datainterchange);
}

void generic_buffer_decode_datainterchange(char *path)
{
    asn_dec_rval_t rval; /* Decoder return value */
    DataInterChange_t *datainterchange = 0; /* Type to decode. Note this 0! */
    FILE *fp; /* Input file handler */
    size_t size; /* Number of bytes read */
    // char *filename="E:\\repos\\tap3reader\\sample-data\\tap3-sample-DataInterChange-3_11.ber"; /* Input file name */
    char *filename="E:\\repos\\tap3reader\\build\\debug-readers\\tap3-sample-DataInterChange-3_11.ber"; /* Input file name */

    /* Open input file as read-only binary */
    fp = fopen(filename, "rb");
    if(!fp) {
        perror(filename);
        exit(1);
    }

    fseek(fp, 0L, SEEK_END);
    int buffer_size = ftell(fp);
    rewind(fp);
    
    // set the size of the byte array to some arbitrary length. buffer_size is enough.
    static uint8_t *buf;
    buf = (uint8_t *)REALLOC(buf, 8192);
    /* Read up to the buffer size */
    // size = fread(buf, 1, sizeof(buf), fp);
    size = fread(buf, 1, buffer_size, fp);

    fclose(fp);
    if(!size) {
        fprintf(stderr, "%s: Empty or broken\n", filename);
        exit(1);
    }

    // Test code
    asn_codec_ctx_t *opt_codec_ctx = 0;
    enum asn_transfer_syntax isyntax = ATS_BER;
    asn_TYPE_descriptor_t *pduType = &asn_DEF_DataInterChange;
    static uint8_t *fbuf = 0;
    uint8_t *i_bptr = buf; //the next place to read from. The idea is that you update this constantly as you buffer through the file.
    size_t   i_size = size;
    
    /* Decode the input buffer as circle type */
    rval = asn_decode(opt_codec_ctx, isyntax, pduType, (void **)&datainterchange, i_bptr, i_size); //using asn_application.h

    if(rval.code != RC_OK) {
        fprintf(stderr, "%s: Broken datainterchange encoding at byte %ld\n", filename, (long)rval.consumed);
        exit(1);
    }

    /* Print the decoded circle type as XML */
    // xer_fprint(stdout, &asn_DEF_DataInterChange, datainterchange);
    jer_fprint(stdout, &asn_DEF_DataInterChange, datainterchange);
}

