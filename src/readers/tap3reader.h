#ifndef __TAP3READER_H__
#define __TAP3R3EADER_H__

enum codec{BER=0, DER, XER, JER, OER, UPER, PER};
enum version{TAP0301=1, TAP0302=2,TAP0303=3,TAP0304=4,TAP0309=9,TAP0310=10,TAP0311=11,TAP0312=12};

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