/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "E:/repos/tap3magic/specifications/tap3/TAP0311.asn1"
 */

#include "CurrencyConversionList.h"

asn_TYPE_member_t asn_MBR_CurrencyConversionList_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_APPLICATION | (106 << 2)),
		0,
		&asn_DEF_CurrencyConversion,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_CurrencyConversionList_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (80 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_CurrencyConversionList_specs_1 = {
	sizeof(struct CurrencyConversionList),
	offsetof(struct CurrencyConversionList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_CurrencyConversionList = {
	"CurrencyConversionList",
	"CurrencyConversionList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_CurrencyConversionList_tags_1,
	sizeof(asn_DEF_CurrencyConversionList_tags_1)
		/sizeof(asn_DEF_CurrencyConversionList_tags_1[0]) - 1, /* 1 */
	asn_DEF_CurrencyConversionList_tags_1,	/* Same as above */
	sizeof(asn_DEF_CurrencyConversionList_tags_1)
		/sizeof(asn_DEF_CurrencyConversionList_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_CurrencyConversionList_1,
	1,	/* Single element */
	&asn_SPC_CurrencyConversionList_specs_1	/* Additional specs */
};

