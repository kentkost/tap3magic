/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0309"
 * 	found in "TAP0309.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_09`
 */

#include "ExchangeRateDefinition.h"

asn_TYPE_member_t asn_MBR_ExchangeRateDefinition_1[] = {
	{ ATF_POINTER, 3, offsetof(struct ExchangeRateDefinition, exchangeRateCode),
		(ASN_TAG_CLASS_APPLICATION | (105 << 2)),
		0,
		&asn_DEF_ExchangeRateCode,
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
		"exchangeRateCode"
		},
	{ ATF_POINTER, 2, offsetof(struct ExchangeRateDefinition, numberOfDecimalPlaces),
		(ASN_TAG_CLASS_APPLICATION | (159 << 2)),
		0,
		&asn_DEF_NumberOfDecimalPlaces,
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
		"numberOfDecimalPlaces"
		},
	{ ATF_POINTER, 1, offsetof(struct ExchangeRateDefinition, exchangeRate),
		(ASN_TAG_CLASS_APPLICATION | (104 << 2)),
		0,
		&asn_DEF_ExchangeRate,
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
		"exchangeRate"
		},
};
static const int asn_MAP_ExchangeRateDefinition_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_ExchangeRateDefinition_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (106 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ExchangeRateDefinition_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (104 << 2)), 2, 0, 0 }, /* exchangeRate */
    { (ASN_TAG_CLASS_APPLICATION | (105 << 2)), 0, 0, 0 }, /* exchangeRateCode */
    { (ASN_TAG_CLASS_APPLICATION | (159 << 2)), 1, 0, 0 } /* numberOfDecimalPlaces */
};
asn_SEQUENCE_specifics_t asn_SPC_ExchangeRateDefinition_specs_1 = {
	sizeof(struct ExchangeRateDefinition),
	offsetof(struct ExchangeRateDefinition, _asn_ctx),
	asn_MAP_ExchangeRateDefinition_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_ExchangeRateDefinition_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ExchangeRateDefinition = {
	"ExchangeRateDefinition",
	"ExchangeRateDefinition",
	&asn_OP_SEQUENCE,
	asn_DEF_ExchangeRateDefinition_tags_1,
	sizeof(asn_DEF_ExchangeRateDefinition_tags_1)
		/sizeof(asn_DEF_ExchangeRateDefinition_tags_1[0]) - 1, /* 1 */
	asn_DEF_ExchangeRateDefinition_tags_1,	/* Same as above */
	sizeof(asn_DEF_ExchangeRateDefinition_tags_1)
		/sizeof(asn_DEF_ExchangeRateDefinition_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ExchangeRateDefinition_1,
	3,	/* Elements count */
	&asn_SPC_ExchangeRateDefinition_specs_1	/* Additional specs */
};

