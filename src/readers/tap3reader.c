#include "tap3reader.h"
#include <string.h>
#include <stdio.h>
#include "DataInterChange.h"
#include <asn_application.h>
#include <asn_internal.h>    /* for ASN__DEFAULT_STACK_MAX */

typedef struct {
    const char *name;
    enum asn_transfer_syntax syntax;
} syntax_selector;

static void tap0311_menu();
extern char* decode_tap0311_datainterchange(int inputSelector, int outputSelector, char *inputBytes);

static const syntax_selector encodings[] = {
    [BER]   = {"BER", ATS_BER},
    [DER]   = {"DER", ATS_DER},
    [XER]   = {"XER", ATS_BASIC_XER},
    [JER]   = {"JER", ATS_JER}, // not implemented for decode yet.
    [OER]   = {"OER", ATS_BASIC_OER},
    [PER]   = {"PER", ATS_ALIGNED_BASIC_PER},
    [UPER]  = {"UPER", ATS_UNALIGNED_BASIC_PER},
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
    decode_tap0311_datainterchange(0,2,"E:\\repos\\tap3reader\\sample-data\\tap3-sample-DataInterChange-3_11.ber");
    // decode_tap0311(0,1,"ree");
}

/* Dump the buffer out to the specified FILE */
static int write_out(const void *buffer, size_t size, void *key) {
    FILE *fp = (FILE *)key;
    return (fwrite(buffer, 1, size, fp) == size) ? 0 : -1;
}

extern char* decode_tap0311_datainterchange(int input_selector, int output_selector, char *file_path)
{
    // function to validate selection.
    syntax_selector input_sel = encodings[input_selector];
    syntax_selector output_sel = encodings[output_selector];

    asn_dec_rval_t decode_result; /* Decoder return value */
    DataInterChange_t *datainterchange = 0; /* Type to decode. Note this 0! */
    FILE *fp; /* Input file handler */
    size_t size; /* Number of bytes read */
    
    char *path="E:\\repos\\tap3reader\\build\\debug-readers\\tap3-sample-DataInterChange-3_11.ber"; /* Input file name */
    // char *path = file_path;

    /* Open input file as read-only binary */
    fp = fopen(path, "rb");
    if(!fp) {
        perror(path);
        exit(1);
    }
    
    fseek(fp, 0L, SEEK_END);
    int buffer_size = ftell(fp);
    rewind(fp);
    
    // set the size of the byte array to some arbitrary length. buffer_size is enough.
    static uint8_t *buf;
    buf = (uint8_t *)REALLOC(buf, buffer_size);
    size = fread(buf, 1, buffer_size, fp);

    fclose(fp);
    if(!size) {
        fprintf(stderr, "%s: Empty or broken\n", path);
        exit(1);
    }


    asn_codec_ctx_t *opt_codec_ctx = 0;
    enum asn_transfer_syntax isyntax = input_sel.syntax;
    asn_TYPE_descriptor_t *pduType = &asn_DEF_DataInterChange;
    uint8_t *i_bptr = buf; //the next place to read from. The idea is that you update this constantly as you buffer through the file.
    size_t   i_size = size;
    
    /* Decode the input buffer as circle type */
    decode_result = asn_decode(opt_codec_ctx, isyntax, pduType, (void **)&datainterchange, i_bptr, i_size); //using asn_application.h

    if(decode_result.code != RC_OK) {
        fprintf(stderr, "%s: Broken datainterchange encoding at byte %ld\n", path, (long)decode_result.consumed);
        exit(1);
    }

    /* Print the decoded circle type as XML */
    // xer_fprint(stdout, &asn_DEF_DataInterChange, datainterchange);
    enum asn_transfer_syntax osyntax = output_sel.syntax;
    asn_enc_rval_t encode_res = asn_encode(NULL, osyntax, pduType, datainterchange, write_out, stdout);
    
    free(buf);
}