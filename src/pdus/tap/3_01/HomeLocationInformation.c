/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "TAP0301.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_01`
 */

#include "HomeLocationInformation.h"

asn_TYPE_member_t asn_MBR_HomeLocationInformation_1[] = {
	{ ATF_POINTER, 2, offsetof(struct HomeLocationInformation, homeBid),
		(ASN_TAG_CLASS_APPLICATION | (122 << 2)),
		0,
		&asn_DEF_HomeBid,
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
		"homeBid"
		},
	{ ATF_POINTER, 1, offsetof(struct HomeLocationInformation, homeLocationDescription),
		(ASN_TAG_CLASS_APPLICATION | (137 << 2)),
		0,
		&asn_DEF_LocationDescription,
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
		"homeLocationDescription"
		},
};
static const int asn_MAP_HomeLocationInformation_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_HomeLocationInformation_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (123 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_HomeLocationInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (122 << 2)), 0, 0, 0 }, /* homeBid */
    { (ASN_TAG_CLASS_APPLICATION | (137 << 2)), 1, 0, 0 } /* homeLocationDescription */
};
asn_SEQUENCE_specifics_t asn_SPC_HomeLocationInformation_specs_1 = {
	sizeof(struct HomeLocationInformation),
	offsetof(struct HomeLocationInformation, _asn_ctx),
	asn_MAP_HomeLocationInformation_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_HomeLocationInformation_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_HomeLocationInformation = {
	"HomeLocationInformation",
	"HomeLocationInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_HomeLocationInformation_tags_1,
	sizeof(asn_DEF_HomeLocationInformation_tags_1)
		/sizeof(asn_DEF_HomeLocationInformation_tags_1[0]) - 1, /* 1 */
	asn_DEF_HomeLocationInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_HomeLocationInformation_tags_1)
		/sizeof(asn_DEF_HomeLocationInformation_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_HomeLocationInformation_1,
	2,	/* Elements count */
	&asn_SPC_HomeLocationInformation_specs_1	/* Additional specs */
};

