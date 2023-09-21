#include "tap3reader.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "DataInterChange.h"
#include <asn_application.h>
#include <asn_internal.h>

typedef struct {
    const char *name;
    enum asn_transfer_syntax syntax;
} syntax_selector;

static void tap0311_menu();
extern char* decode_tap0311_datainterchange(int inputSelector, int outputSelector, char *file_path);

// Decoders
static DataInterChange_t* decode_datainterchange_buffer(int input_selector, uint8_t* buffer, size_t size);
static DataInterChange_t* decode_datainterchange_file(int input_selector, char *file_path);

// For testing decode_di_buffer
static size_t read_file_into_buffer(char *file_path, uint8_t** buffer);

// Encoders
static char* encode_datainterchange_2buffer(DataInterChange_t* datainterchange, int output_selector);
static int encode_datainterchange_2file(DataInterChange_t* datainterchange, int output_selector, char* filename);

// Library exposed functions
extern int decode_tap0311_datainterchange_file2file(int input_selector, int output_selector, char *file_path, char *newfileName);
extern int decode_tap0311_datainterchange_buffer2file(int input_selector, int output_selector, char *in_buffer, unsigned long long in_buffer_size, char *newFileName);
extern char* decode_tap0311_datainterchange_buffer2buffer(int input_selector, int output_selector, char *in_buffer, unsigned long long in_buffer_size);
extern char* decode_tap0311_datainterchange_file2buffer(int input_encoding, int output_encoding, char *file_path);
extern int DllTest(int input);

static int write_out(const void *buffer, size_t size, void *key) {
    FILE *fp = (FILE *)key;
    return (fwrite(buffer, 1, size, fp) == size) ? 0 : -1;
}

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
}

static void tap0311_menu()
{
    int in_encoding =0; // BER/DER
    int out_encoding = 2; // XER
    char *in_file_path = "E:\\repos\\tap3magic\\build\\debug-readers\\tap3-sample-DataInterChange-3_11.ber";
    char *out_file_path = "E:\\repos\\tap3magic\\build\\debug-readers\\new_results.xml";
    
    uint8_t **buffer;
    *buffer = 0;
    size_t bytes_to_encode = read_file_into_buffer(in_file_path, buffer);
    unsigned long long size =(unsigned long long)bytes_to_encode;
    // decode_tap0311_datainterchange_file2file(in_encoding, out_encoding,in_file_path, out_file_path); // ✅
    // decode_tap0311_datainterchange_buffer2file(in_encoding,out_encoding, *buffer, size, out_file_path); // ✅
    // char *out_str = decode_tap0311_datainterchange_buffer2buffer(in_encoding,out_encoding, *buffer, size); // ✅
    // char *out_str = decode_tap0311_datainterchange_file2buffer(in_encoding, out_encoding, in_file_path); // ✅
}

/* Returns number of written bytes. -1 if failed */
/* Only used in testing when a buffer is needed */
static size_t read_file_into_buffer(char *file_path, uint8_t** buffer){
    FILE *fp; /* Input file handler */
    size_t size; /* Number of bytes read */
    
    char *path = file_path;

    /* Open input file as read-only binary */
    fp = fopen(path, "rb");

    if(!fp) {
        perror(path);
        exit(1);
    }
    
    fseek(fp, 0L, SEEK_END);
    int buffer_size = ftell(fp);
    rewind(fp);
    
    // set the size of the byte array to some length. buffer_size is minimal.
    static uint8_t *buf;
    buf = (uint8_t *)REALLOC(buf, buffer_size);
    size = fread(buf, 1, buffer_size, fp);

    fclose(fp);
    if(!size) {
        fprintf(stderr, "%s: Empty or broken\n", path);
        exit(1);
    }

    *buffer = buf;


    return size;
}

static DataInterChange_t* decode_datainterchange_file(int input_selector, char *file_path){
    // function to validate selection.
    syntax_selector input_sel = encodings[input_selector];
    asn_dec_rval_t decode_result; /* Decoder return value */
    DataInterChange_t *datainterchange = 0; /* Type to decode. Note this 0! */
    FILE *fp; /* Input file handler */
    size_t size; /* Number of bytes read */
    
    char *path = file_path;

    /* Open input file as read-only binary */
    fp = fopen(path, "rb");
    if(!fp) {
        perror(path);
        exit(1);
    }
    
    fseek(fp, 0L, SEEK_END);
    int buffer_size = ftell(fp);
    rewind(fp);
    
    uint8_t *buffer = 0;
    buffer = (uint8_t *)REALLOC(buffer, buffer_size);
    size = fread(buffer, 1, buffer_size, fp);

    fclose(fp);
    if(!size) {
        fprintf(stderr, "%s: Empty or broken\n", path);
        exit(1);
    }


    asn_codec_ctx_t *opt_codec_ctx = 0;
    enum asn_transfer_syntax isyntax = input_sel.syntax;
    asn_TYPE_descriptor_t *pduType = &asn_DEF_DataInterChange;
    
    /* Decode the input buffer as circle type */
    decode_result = asn_decode(opt_codec_ctx, isyntax, pduType, (void **)&datainterchange, buffer, size); //using asn_application.h

    if(decode_result.code != RC_OK) {
        fprintf(stderr, "%s: Broken datainterchange encoding at byte %ld\n", path, (long)decode_result.consumed);
        exit(1);
    }

    free(buffer);

    return datainterchange;
}

/* Decodes a buffer to a datainterchange */
static DataInterChange_t* decode_datainterchange_buffer(int input_selector, uint8_t* buffer, size_t size){
    syntax_selector input_sel = encodings[input_selector];
    asn_dec_rval_t decode_result; /* Decoder return value */
    DataInterChange_t *datainterchange = 0; /* Type to decode. Note this 0! */

    asn_codec_ctx_t *opt_codec_ctx = 0;
    enum asn_transfer_syntax isyntax = input_sel.syntax;
    asn_TYPE_descriptor_t *pduType = &asn_DEF_DataInterChange;

    /* Decode the input buffer as circle type */
    decode_result = asn_decode(opt_codec_ctx, isyntax, pduType, (void **)&datainterchange, buffer, size); //using asn_application.h

    if(decode_result.code != RC_OK) {
        fprintf(stderr, "Broken datainterchange encoding at byte %ld\n", (long)decode_result.consumed);
        exit(1);
    }

    return datainterchange;
}

static char* encode_datainterchange_2buffer(DataInterChange_t* datainterchange, int output_selector){

    asn_TYPE_descriptor_t *pduType = &asn_DEF_DataInterChange;

    enum asn_transfer_syntax osyntax = encodings[output_selector].syntax;

    asn_encode_to_new_buffer_result_t res = asn_encode_to_new_buffer(NULL, osyntax, pduType, datainterchange);
    char *encoded_content = calloc(res.result.encoded, sizeof(char));
    memcpy(encoded_content, res.buffer, res.result.encoded);

#ifdef DEBUGGER_ATTACHED
    puts(encoded_content);
#endif

    return encoded_content;
}

/* Returns number of written bytes. -1 if failed*/
static int encode_datainterchange_2file(DataInterChange_t* datainterchange, int output_selector, char* filename){
    asn_TYPE_descriptor_t *pduType = &asn_DEF_DataInterChange;

    enum asn_transfer_syntax osyntax = encodings[output_selector].syntax;
    // FILE *fp = stdout;  // To write to terminal directly.
    FILE *fp;
    fp = fopen(filename, "w+");

    if(!fp) {
        perror("Couldn't read file.");
        exit(1);
    }

    asn_enc_rval_t encode_res = asn_encode(NULL, osyntax, pduType, datainterchange, write_out, fp);
    
    fclose(fp);

    return encode_res.encoded;
}

/* From here are the functions that should be exposed */
/* These functions are to be used with a dll */

/* This function takes a path to a file and creates a new file with the new encoding */
extern int decode_tap0311_datainterchange_file2file(int input_encoding, int output_encoding, char *file_path, char *newfileName){
    DataInterChange_t *decoded_content = decode_datainterchange_file(input_encoding, file_path);
    int encode_res = encode_datainterchange_2file(decoded_content, output_encoding, newfileName);
    free(decoded_content);
    return encode_res;
}

/* This function takes an buffer input and size and out puts a new file with new encoding */
extern int decode_tap0311_datainterchange_buffer2file(int input_encoding, int output_encoding, char *in_buffer, unsigned long long in_buffer_size, char *new_filename){
    size_t size = (size_t)in_buffer_size;

    DataInterChange_t *decoded_content = decode_datainterchange_buffer(input_encoding, in_buffer, size);
    
    int encode_res = encode_datainterchange_2file(decoded_content, output_encoding, new_filename);
    // free(*buffer);
    free(decoded_content);
    return encode_res;
}


extern char* decode_tap0311_datainterchange_buffer2buffer(int input_encoding, int output_encoding, char *in_buffer, unsigned long long in_buffer_size){
    size_t size = (size_t)in_buffer_size;
    
    DataInterChange_t *decoded_content = decode_datainterchange_buffer(input_encoding, in_buffer, size);
    
    char *encoded_content = encode_datainterchange_2buffer(decoded_content,output_encoding);
    // free(*buffer);
    free(decoded_content);
    return encoded_content; // possible memory leak. Return void* instead? Such that the we can create a function that frees memory at pointer. (HANDL)
}


extern char* decode_tap0311_datainterchange_file2buffer(int input_encoding, int output_encoding, char *file_path)
{
    DataInterChange_t *decoded_content = decode_datainterchange_file(input_encoding, file_path);

    char *encoded_content = encode_datainterchange_2buffer(decoded_content,output_encoding);
    free(decoded_content);
    return encoded_content; // possible memory leak. Return void* instead? Such that the we can create a function that frees memory at pointer. (HANDL)
}

/* This is just a test function to see if dll is working */
extern int DllTest(int input)
{
    fprintf(stdout,"hello world");
    printf("goodbye satan");
    return input+42;
}