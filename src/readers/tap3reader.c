#include "tap3reader.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "DataInterChange.h"
#include <asn_application.h>
#include <asn_internal.h>    /* for ASN__DEFAULT_STACK_MAX */

typedef struct {
    const char *name;
    enum asn_transfer_syntax syntax;
} syntax_selector;

static void tap0311_menu();
extern char* decode_tap0311_datainterchange(int inputSelector, int outputSelector, char *file_path);

// Decoders
static char* decode_datainterchange_buffer(int input_selector, char *file_path);
static DataInterChange_t* decode_datainterchange_file(int input_selector, char *file_path);
// Encoders
static char* encode_datainterchange_2buffer(DataInterChange_t* datainterchange, int output_selector);
static char* encode_datainterchange_2file(DataInterChange_t* datainterchange, int output_selector, char* filename);

extern char* decode_tap0311_datainterchange_file2file(int input_selector, int output_selector, char *file_path, char *newfileName);
extern char* decode_tap0311_datainterchange_buffer2file(int input_selector, int output_selector, char *in_buffer, char *newFileName);
extern char* decode_tap0311_datainterchange_buffer2buffer(int input_selector, int output_selector, char *in_buffer, char *out_buffer);

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
    return 1;
}

static void tap0311_menu(){

    DataInterChange_t *ree = decode_datainterchange_file(0, "reee");
    char* encoded_xml = encode_datainterchange_2buffer(ree, 2);
    // decode_tap0311_datainterchange(0,2,"E:\\repos\\tap3magic\\sample-data\\tap3-sample-DataInterChange-3_11.ber");
    // decode_tap0311(0,1,"ree");
}

static DataInterChange_t* decode_datainterchange_file(int input_selector, char *file_path){
        // function to validate selection.
    syntax_selector input_sel = encodings[input_selector];
    asn_dec_rval_t decode_result; /* Decoder return value */
    DataInterChange_t *datainterchange = 0; /* Type to decode. Note this 0! */
    FILE *fp; /* Input file handler */
    size_t size; /* Number of bytes read */
    
    char *path="E:\\repos\\tap3magic\\build\\debug-readers\\tap3-sample-DataInterChange-3_11.ber"; /* Input file name */
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

    return datainterchange;
}


static char* decode_datainterchange_buffer(int input_selector, char *file_path){
    return 0;
}

static char* encode_datainterchange_2buffer(DataInterChange_t* datainterchange, int output_selector){

    asn_TYPE_descriptor_t *pduType = &asn_DEF_DataInterChange;

    enum asn_transfer_syntax osyntax = encodings[output_selector].syntax;

    asn_encode_to_new_buffer_result_t res = asn_encode_to_new_buffer(NULL, osyntax, pduType, datainterchange);
    char *ree = calloc(res.result.encoded, sizeof(char));
    memcpy(ree, res.buffer, res.result.encoded);
#ifdef DEBUGGER_ATTACHED
    puts(ree);
#endif
    return ree;
}

static char* encode_datainterchange_2file(DataInterChange_t* datainterchange, int output_selector, char* filename){
    
}

extern char* decode_tap0311_datainterchange_file2file(int input_selector, int output_selector, char *file_path, char *newfileName){
    return 0;
}

extern char* decode_tap0311_datainterchange_buffer2file(int input_selector, int output_selector, char *in_buffer, char *newFileName){
    return 0;
}

extern char* decode_tap0311_datainterchange_buffer2buffer(int input_selector, int output_selector, char *in_buffer, char *out_buffer){
    return 0;
}


extern char* decode_tap0311_datainterchange_file2buffer(int input_selector, int output_selector, char *file_path)
{
    // function to validate selection.
    syntax_selector input_sel = encodings[input_selector];
    syntax_selector output_sel = encodings[output_selector];

    asn_dec_rval_t decode_result; /* Decoder return value */
    DataInterChange_t *datainterchange = 0; /* Type to decode. Note this 0! */
    FILE *fp; /* Input file handler */
    size_t size; /* Number of bytes read */
    
    char *path="E:\\repos\\tap3magic\\build\\debug-readers\\tap3-sample-DataInterChange-3_11.ber"; /* Input file name */
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
    // global_buf = malloc(sizeof(char)*8192);

    // FILE *res;
    //res = fopen("E:\\repos\\tap3reader\\build\\debug-readers\\resultHere.xml", "w+");
    // xer_fprint(stdout, &asn_DEF_DataInterChange, datainterchange);

    // const char **buffer = malloc(0);
    // int enc = xer_assign(buffer, &asn_DEF_DataInterChange, datainterchange);

    // struct xer_buffer xer_buf = {0, 0, 0};
    // int enc = new_xer_assign(xer_buf, &asn_DEF_DataInterChange, datainterchange);

    asn_encode_to_new_buffer_result_t res = asn_encode_to_new_buffer(NULL, osyntax, pduType, datainterchange);

    // enc = xer_assign(buffer, &asn_DEF_DataInterChange, datainterchange);
    // xer_fprint(res, &asn_DEF_DataInterChange, datainterchange);
    // xer_fprint(stdout, &asn_DEF_DataInterChange, datainterchange);
    // asn_enc_rval_t encode_res = asn_encode(NULL, osyntax, pduType, datainterchange, write_out, stdout);

    char *ree = calloc(res.result.encoded, sizeof(char));
    memcpy(ree, res.buffer, res.result.encoded);
    // ree[enc+1] = 0;
    printf("%s", ree);
    // free(buf);
    free(ree);
    return ree;
}