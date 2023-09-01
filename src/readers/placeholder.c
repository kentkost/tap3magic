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

