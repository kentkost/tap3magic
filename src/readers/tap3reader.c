#include "tap3reader.h"
#include <string.h>
#include <stdio.h>

int main(int argc, char** argv)
{
    enum version tap3version;
    printf("What version: ");
    scanf("%d", &tap3version);
    
    // DER, BER, OER, XER, PER, UPER, JER
    enum codec codec;
    printf("What codec: ");
    scanf("%d", &codec);    

    printf("You've chosen version %s with %s codec", version_str[tap3version], codec_str[codec]);


    return 0;
}