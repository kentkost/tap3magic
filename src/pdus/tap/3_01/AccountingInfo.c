/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "TAP0301.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_01`
 */

#include "AccountingInfo.h"

asn_TYPE_member_t asn_MBR_AccountingInfo_1[] = {
	{ ATF_POINTER, 6, offsetof(struct AccountingInfo, taxation),
		(ASN_TAG_CLASS_APPLICATION | (211 << 2)),
		0,
		&asn_DEF_Taxation,
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
		"taxation"
		},
	{ ATF_POINTER, 5, offsetof(struct AccountingInfo, discounting),
		(ASN_TAG_CLASS_APPLICATION | (95 << 2)),
		0,
		&asn_DEF_Discounting,
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
		"discounting"
		},
	{ ATF_POINTER, 4, offsetof(struct AccountingInfo, localCurrency),
		(ASN_TAG_CLASS_APPLICATION | (135 << 2)),
		0,
		&asn_DEF_LocalCurrency,
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
		"localCurrency"
		},
	{ ATF_POINTER, 3, offsetof(struct AccountingInfo, tapCurrency),
		(ASN_TAG_CLASS_APPLICATION | (210 << 2)),
		0,
		&asn_DEF_TapCurrency,
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
		"tapCurrency"
		},
	{ ATF_POINTER, 2, offsetof(struct AccountingInfo, currencyConversion),
		(ASN_TAG_CLASS_APPLICATION | (80 << 2)),
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
		"currencyConversion"
		},
	{ ATF_POINTER, 1, offsetof(struct AccountingInfo, tapDecimalPlaces),
		(ASN_TAG_CLASS_APPLICATION | (244 << 2)),
		0,
		&asn_DEF_TapDecimalPlaces,
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
		"tapDecimalPlaces"
		},
};
static const int asn_MAP_AccountingInfo_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_AccountingInfo_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AccountingInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (80 << 2)), 4, 0, 0 }, /* currencyConversion */
    { (ASN_TAG_CLASS_APPLICATION | (95 << 2)), 1, 0, 0 }, /* discounting */
    { (ASN_TAG_CLASS_APPLICATION | (135 << 2)), 2, 0, 0 }, /* localCurrency */
    { (ASN_TAG_CLASS_APPLICATION | (210 << 2)), 3, 0, 0 }, /* tapCurrency */
    { (ASN_TAG_CLASS_APPLICATION | (211 << 2)), 0, 0, 0 }, /* taxation */
    { (ASN_TAG_CLASS_APPLICATION | (244 << 2)), 5, 0, 0 } /* tapDecimalPlaces */
};
asn_SEQUENCE_specifics_t asn_SPC_AccountingInfo_specs_1 = {
	sizeof(struct AccountingInfo),
	offsetof(struct AccountingInfo, _asn_ctx),
	asn_MAP_AccountingInfo_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_AccountingInfo_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AccountingInfo = {
	"AccountingInfo",
	"AccountingInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_AccountingInfo_tags_1,
	sizeof(asn_DEF_AccountingInfo_tags_1)
		/sizeof(asn_DEF_AccountingInfo_tags_1[0]) - 1, /* 1 */
	asn_DEF_AccountingInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_AccountingInfo_tags_1)
		/sizeof(asn_DEF_AccountingInfo_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_AccountingInfo_1,
	6,	/* Elements count */
	&asn_SPC_AccountingInfo_specs_1	/* Additional specs */
};

