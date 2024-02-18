/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "e:\repos\tap3magic/specifications/tap3/reading/TAP0301.asn1"
 * 	`asn1c -D e:\repos\tap3magic\src\readers\tap0301\generated`
 */

#include "HSCSDInformation.h"

asn_TYPE_member_t asn_MBR_HSCSDInformation_1[] = {
	{ ATF_POINTER, 2, offsetof(struct HSCSDInformation, basicHSCSDParameters),
		(ASN_TAG_CLASS_APPLICATION | (35 << 2)),
		0,
		&asn_DEF_BasicHSCSDParameters,
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
		"basicHSCSDParameters"
		},
	{ ATF_POINTER, 1, offsetof(struct HSCSDInformation, hSCSDParameterModification),
		(ASN_TAG_CLASS_APPLICATION | (125 << 2)),
		0,
		&asn_DEF_HSCSDParameterModification,
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
		"hSCSDParameterModification"
		},
};
static const int asn_MAP_HSCSDInformation_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_HSCSDInformation_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (124 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_HSCSDInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (35 << 2)), 0, 0, 0 }, /* basicHSCSDParameters */
    { (ASN_TAG_CLASS_APPLICATION | (125 << 2)), 1, 0, 0 } /* hSCSDParameterModification */
};
asn_SEQUENCE_specifics_t asn_SPC_HSCSDInformation_specs_1 = {
	sizeof(struct HSCSDInformation),
	offsetof(struct HSCSDInformation, _asn_ctx),
	asn_MAP_HSCSDInformation_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_HSCSDInformation_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_HSCSDInformation = {
	"HSCSDInformation",
	"HSCSDInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_HSCSDInformation_tags_1,
	sizeof(asn_DEF_HSCSDInformation_tags_1)
		/sizeof(asn_DEF_HSCSDInformation_tags_1[0]) - 1, /* 1 */
	asn_DEF_HSCSDInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_HSCSDInformation_tags_1)
		/sizeof(asn_DEF_HSCSDInformation_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_HSCSDInformation_1,
	2,	/* Elements count */
	&asn_SPC_HSCSDInformation_specs_1	/* Additional specs */
};

