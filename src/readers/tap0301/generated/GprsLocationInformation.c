/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "e:\repos\tap3magic/specifications/tap3/reading/TAP0301.asn1"
 * 	`asn1c -D e:\repos\tap3magic\src\readers\tap0301\generated`
 */

#include "GprsLocationInformation.h"

asn_TYPE_member_t asn_MBR_GprsLocationInformation_1[] = {
	{ ATF_POINTER, 3, offsetof(struct GprsLocationInformation, gprsNetworkLocation),
		(ASN_TAG_CLASS_APPLICATION | (118 << 2)),
		0,
		&asn_DEF_GprsNetworkLocation,
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
		"gprsNetworkLocation"
		},
	{ ATF_POINTER, 2, offsetof(struct GprsLocationInformation, homeLocationInformation),
		(ASN_TAG_CLASS_APPLICATION | (123 << 2)),
		0,
		&asn_DEF_HomeLocationInformation,
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
		"homeLocationInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct GprsLocationInformation, geographicalLocation),
		(ASN_TAG_CLASS_APPLICATION | (113 << 2)),
		0,
		&asn_DEF_GeographicalLocation,
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
		"geographicalLocation"
		},
};
static const int asn_MAP_GprsLocationInformation_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_GprsLocationInformation_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (117 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GprsLocationInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (113 << 2)), 2, 0, 0 }, /* geographicalLocation */
    { (ASN_TAG_CLASS_APPLICATION | (118 << 2)), 0, 0, 0 }, /* gprsNetworkLocation */
    { (ASN_TAG_CLASS_APPLICATION | (123 << 2)), 1, 0, 0 } /* homeLocationInformation */
};
asn_SEQUENCE_specifics_t asn_SPC_GprsLocationInformation_specs_1 = {
	sizeof(struct GprsLocationInformation),
	offsetof(struct GprsLocationInformation, _asn_ctx),
	asn_MAP_GprsLocationInformation_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_GprsLocationInformation_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GprsLocationInformation = {
	"GprsLocationInformation",
	"GprsLocationInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_GprsLocationInformation_tags_1,
	sizeof(asn_DEF_GprsLocationInformation_tags_1)
		/sizeof(asn_DEF_GprsLocationInformation_tags_1[0]) - 1, /* 1 */
	asn_DEF_GprsLocationInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_GprsLocationInformation_tags_1)
		/sizeof(asn_DEF_GprsLocationInformation_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_GprsLocationInformation_1,
	3,	/* Elements count */
	&asn_SPC_GprsLocationInformation_specs_1	/* Additional specs */
};

