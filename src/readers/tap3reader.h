#ifndef __TAP3READER_H__
#define __TAP3R3EADER_H__

#define ASSERT_ENUM_TO_STR(sarray, max) \
    typedef char assert_sizeof_##max[(sizeof(sarray)/sizeof(sarray[0]) == (max)) ? 1 : -1]

ASSERT_ENUM_TO_STR(codec_str, CODEC_MAX);
ASSERT_ENUM_TO_STR(version_str, VERSION_MAX);

enum codec{BER=0, DER, XER, JER, OER, UPER, PER};
enum version{TAP0301=1, TAP0302=2,TAP0303=3,TAP0304=4,TAP0309=9,TAP0310=10,TAP0311=11,TAP0312=12};

const char * const codec_str[] =
{
    [BER] = "ber",
    [DER] = "der",
    [XER]  = "xer",
    [JER]  = "jer",
    [OER] = "oer",
    [UPER]  = "uper",
    [PER]  = "per",
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