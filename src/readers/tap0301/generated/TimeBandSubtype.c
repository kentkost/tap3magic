/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "e:\repos\tap3magic/specifications/tap3/reading/TAP0301.asn1"
 * 	`asn1c -D e:\repos\tap3magic\src\readers\tap0301\generated`
 */

#include "TimeBandSubtype.h"

/*
 * This type is implemented using AsciiString,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_TimeBandSubtype_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (221 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (4 << 2))
};
asn_TYPE_descriptor_t asn_DEF_TimeBandSubtype = {
	"TimeBandSubtype",
	"TimeBandSubtype",
	&asn_OP_OCTET_STRING,
	asn_DEF_TimeBandSubtype_tags_1,
	sizeof(asn_DEF_TimeBandSubtype_tags_1)
		/sizeof(asn_DEF_TimeBandSubtype_tags_1[0]) - 1, /* 1 */
	asn_DEF_TimeBandSubtype_tags_1,	/* Same as above */
	sizeof(asn_DEF_TimeBandSubtype_tags_1)
		/sizeof(asn_DEF_TimeBandSubtype_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		OCTET_STRING_constraint
	},
	0, 0,	/* No members */
	&asn_SPC_OCTET_STRING_specs	/* Additional specs */
};

