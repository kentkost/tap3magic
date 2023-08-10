/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0309"
 * 	found in "TAP0309.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_09`
 */

#include "TaxRateDefinition.h"

asn_TYPE_member_t asn_MBR_TaxRateDefinition_1[] = {
	{ ATF_POINTER, 3, offsetof(struct TaxRateDefinition, taxCode),
		(ASN_TAG_CLASS_APPLICATION | (212 << 2)),
		0,
		&asn_DEF_TaxCode,
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
		"taxCode"
		},
	{ ATF_POINTER, 2, offsetof(struct TaxRateDefinition, taxType),
		(ASN_TAG_CLASS_APPLICATION | (217 << 2)),
		0,
		&asn_DEF_TaxType,
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
		"taxType"
		},
	{ ATF_POINTER, 1, offsetof(struct TaxRateDefinition, taxRate),
		(ASN_TAG_CLASS_APPLICATION | (215 << 2)),
		0,
		&asn_DEF_TaxRate,
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
		"taxRate"
		},
};
static const int asn_MAP_TaxRateDefinition_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_TaxRateDefinition_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (216 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TaxRateDefinition_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (212 << 2)), 0, 0, 0 }, /* taxCode */
    { (ASN_TAG_CLASS_APPLICATION | (215 << 2)), 2, 0, 0 }, /* taxRate */
    { (ASN_TAG_CLASS_APPLICATION | (217 << 2)), 1, 0, 0 } /* taxType */
};
asn_SEQUENCE_specifics_t asn_SPC_TaxRateDefinition_specs_1 = {
	sizeof(struct TaxRateDefinition),
	offsetof(struct TaxRateDefinition, _asn_ctx),
	asn_MAP_TaxRateDefinition_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_TaxRateDefinition_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TaxRateDefinition = {
	"TaxRateDefinition",
	"TaxRateDefinition",
	&asn_OP_SEQUENCE,
	asn_DEF_TaxRateDefinition_tags_1,
	sizeof(asn_DEF_TaxRateDefinition_tags_1)
		/sizeof(asn_DEF_TaxRateDefinition_tags_1[0]) - 1, /* 1 */
	asn_DEF_TaxRateDefinition_tags_1,	/* Same as above */
	sizeof(asn_DEF_TaxRateDefinition_tags_1)
		/sizeof(asn_DEF_TaxRateDefinition_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_TaxRateDefinition_1,
	3,	/* Elements count */
	&asn_SPC_TaxRateDefinition_specs_1	/* Additional specs */
};

