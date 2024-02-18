typedef asn_dec_rval_t (*pfn_decoder)(const asn_codec_ctx_t *opt_codec_ctx,
                                        const asn_TYPE_descriptor_t *type_descriptor,
                                        void **struct_ptr,
                                        const void *ptr,
                                        size_t size) ;
typedef asn_enc_rval_t (*pfn_encoder)(const asn_codec_ctx_t *opt_codec_ctx,
                                        enum asn_transfer_syntax syntax, 
                                        const asn_TYPE_descriptor_t *td,
                                        const void *sptr, asn_app_consume_bytes_f *callback,
                                        void *callback_key);

typedef struct {
    const char *name;
    enum asn_transfer_syntax syntax;
    pfn_decoder decoder_fun;
    const char *full_name;
} input_syntax_selector;

void decode_ber_datainterchange(char *path)
{
    asn_dec_rval_t rval; /* Decoder return value */
    DataInterChange_t *datainterchange = 0; /* Type to decode. Note this 0! */
    FILE *fp; /* Input file handler */
    size_t bytesRead; /* Number of bytes read */
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
    
    // char buf[buffer_size];
    static uint8_t *buf;
    buf = (uint8_t *)REALLOC(buf, buffer_size);
    /* Read the entire file */
    bytesRead = fread(buf, 1, buffer_size, fp);

    fclose(fp);
    if(!bytesRead) {
        fprintf(stderr, "%s: Empty or broken\n", filename);
        exit(1);
    }

    /* Decode the input buffer as circle type */
    input_syntax_selector sel = input_encoders[0];
    rval = sel.decoder_fun(0, &asn_DEF_DataInterChange, (void **)&datainterchange, buf, bytesRead); // using function pointer
    // rval = ber_decode(0, &asn_DEF_DataInterChange, (void **)&datainterchange, buf, size); // direct reference

    if(rval.code != RC_OK) {
        fprintf(stderr, "%s: Broken datainterchange encoding at byte %ld\n", filename, (long)rval.consumed);
        exit(1);
    }

    /* Print the decoded circle type as XML */
    xer_fprint(stdout, &asn_DEF_DataInterChange, datainterchange);
    jer_fprint(stdout, &asn_DEF_DataInterChange, datainterchange);
    free(buf);
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
    buf = (uint8_t *)REALLOC(buf, buffer_size);
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
    free(buf);
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

    char *encoded_content = calloc(res.result.encoded, sizeof(char));
    memcpy(encoded_content, res.buffer, res.result.encoded);
    // encoded_content[enc+1] = 0;
    printf("%s", encoded_content);
    // fencoded_content(buf);
    fencoded_content(encoded_content);
    return encoded_content;
}