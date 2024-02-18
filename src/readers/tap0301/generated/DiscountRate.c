/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "e:\repos\tap3magic/specifications/tap3/reading/TAP0301.asn1"
 * 	`asn1c -D e:\repos\tap3magic\src\readers\tap0301\generated`
 */

#include "DiscountRate.h"

/*
 * This type is implemented using PercentageRate,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_DiscountRate_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (92 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_DiscountRate = {
	"DiscountRate",
	"DiscountRate",
	&asn_OP_NativeInteger,
	asn_DEF_DiscountRate_tags_1,
	sizeof(asn_DEF_DiscountRate_tags_1)
		/sizeof(asn_DEF_DiscountRate_tags_1[0]) - 1, /* 1 */
	asn_DEF_DiscountRate_tags_1,	/* Same as above */
	sizeof(asn_DEF_DiscountRate_tags_1)
		/sizeof(asn_DEF_DiscountRate_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeInteger_constraint
	},
	0, 0,	/* No members */
	0	/* No specifics */
};

