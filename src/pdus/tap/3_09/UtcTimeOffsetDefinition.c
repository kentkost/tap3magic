/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0309"
 * 	found in "TAP0309.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_09`
 */

#include "UtcTimeOffsetDefinition.h"

asn_TYPE_member_t asn_MBR_UtcTimeOffsetDefinition_1[] = {
	{ ATF_POINTER, 2, offsetof(struct UtcTimeOffsetDefinition, utcTimeOffsetCode),
		(ASN_TAG_CLASS_APPLICATION | (232 << 2)),
		0,
		&asn_DEF_UtcTimeOffsetCode,
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
		"utcTimeOffsetCode"
		},
	{ ATF_POINTER, 1, offsetof(struct UtcTimeOffsetDefinition, utcTimeOffset),
		(ASN_TAG_CLASS_APPLICATION | (231 << 2)),
		0,
		&asn_DEF_UtcTimeOffset,
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
		"utcTimeOffset"
		},
};
static const int asn_MAP_UtcTimeOffsetDefinition_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_UtcTimeOffsetDefinition_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (233 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UtcTimeOffsetDefinition_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (231 << 2)), 1, 0, 0 }, /* utcTimeOffset */
    { (ASN_TAG_CLASS_APPLICATION | (232 << 2)), 0, 0, 0 } /* utcTimeOffsetCode */
};
asn_SEQUENCE_specifics_t asn_SPC_UtcTimeOffsetDefinition_specs_1 = {
	sizeof(struct UtcTimeOffsetDefinition),
	offsetof(struct UtcTimeOffsetDefinition, _asn_ctx),
	asn_MAP_UtcTimeOffsetDefinition_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_UtcTimeOffsetDefinition_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UtcTimeOffsetDefinition = {
	"UtcTimeOffsetDefinition",
	"UtcTimeOffsetDefinition",
	&asn_OP_SEQUENCE,
	asn_DEF_UtcTimeOffsetDefinition_tags_1,
	sizeof(asn_DEF_UtcTimeOffsetDefinition_tags_1)
		/sizeof(asn_DEF_UtcTimeOffsetDefinition_tags_1[0]) - 1, /* 1 */
	asn_DEF_UtcTimeOffsetDefinition_tags_1,	/* Same as above */
	sizeof(asn_DEF_UtcTimeOffsetDefinition_tags_1)
		/sizeof(asn_DEF_UtcTimeOffsetDefinition_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_UtcTimeOffsetDefinition_1,
	2,	/* Elements count */
	&asn_SPC_UtcTimeOffsetDefinition_specs_1	/* Additional specs */
};

