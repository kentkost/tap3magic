#ifndef __TAP3READER_H__
#define __TAP3R3EADER_H__

enum codec{BER=0, DER, XER, OER, UPER, PER, JER};
enum version{TAP0301=1, TAP0302=2,TAP0303=3,TAP0304=4,TAP0309=9,TAP0310=10,TAP0311=11,TAP0312=12};

extern int decode_tap0311_datainterchange_file2file(int input_encoding, int output_encoding, char *file_path, char *newfileName);
extern int decode_tap0311_datainterchange_buffer2file(int input_encoding, int output_encoding, char *in_buffer, unsigned long long in_buffer_size, char *newFileName);
extern char* decode_tap0311_datainterchange_buffer2buffer(int input_encoding, int output_encoding, char *in_buffer, unsigned long long in_buffer_size);
extern char* decode_tap0311_datainterchange_buffer2buffer_new(int input_encoding, int output_encoding, char *in_buffer, unsigned long long in_buffer_size, char** out_buffer);
extern char* decode_tap0311_datainterchange_file2buffer(int input_encoding, int output_encoding, char *file_path);
extern int DllTest(int input);
extern int perror_test();
extern int exit_test1();
extern int exit_text0();

const char * const codec_str[] =
{
    [BER]   = "BER",
    [DER]   = "DER",
    [XER]   = "XER",
    [JER]   = "JER",
    [OER]   = "OER",
    [UPER]  = "UPER",
    [PER]   = "PER",
};

const char * const version_str[] =
{
    [TAP0301] = "TAP0301",
    [TAP0302] = "TAP0302",
    [TAP0303] = "TAP0303",
    [TAP0304] = "TAP0304",
    [TAP0309] = "TAP0309",
    [TAP0310] = "TAP0310",
    [TAP0311] = "TAP0311",
    [TAP0312] = "TAP0312",
};


#endif