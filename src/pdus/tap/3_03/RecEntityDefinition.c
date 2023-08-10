/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0302"
 * 	found in "TAP0303.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_03`
 */

#include "RecEntityDefinition.h"

asn_TYPE_member_t asn_MBR_RecEntityDefinition_1[] = {
	{ ATF_POINTER, 3, offsetof(struct RecEntityDefinition, recEntityCode),
		(ASN_TAG_CLASS_APPLICATION | (184 << 2)),
		0,
		&asn_DEF_RecEntityCode,
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
		"recEntityCode"
		},
	{ ATF_POINTER, 2, offsetof(struct RecEntityDefinition, recEntityType),
		(ASN_TAG_CLASS_APPLICATION | (186 << 2)),
		0,
		&asn_DEF_RecEntityType,
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
		"recEntityType"
		},
	{ ATF_POINTER, 1, offsetof(struct RecEntityDefinition, recEntityId),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_RecEntityId,
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
		"recEntityId"
		},
};
static const int asn_MAP_RecEntityDefinition_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_RecEntityDefinition_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (183 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RecEntityDefinition_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (131 << 2)), 2, 0, 0 }, /* iPTextV4Address */
    { (ASN_TAG_CLASS_APPLICATION | (132 << 2)), 2, 0, 0 }, /* iPTextV6Address */
    { (ASN_TAG_CLASS_APPLICATION | (151 << 2)), 2, 0, 0 }, /* mscId */
    { (ASN_TAG_CLASS_APPLICATION | (152 << 2)), 2, 0, 0 }, /* msisdn */
    { (ASN_TAG_CLASS_APPLICATION | (184 << 2)), 0, 0, 0 }, /* recEntityCode */
    { (ASN_TAG_CLASS_APPLICATION | (186 << 2)), 1, 0, 0 } /* recEntityType */
};
asn_SEQUENCE_specifics_t asn_SPC_RecEntityDefinition_specs_1 = {
	sizeof(struct RecEntityDefinition),
	offsetof(struct RecEntityDefinition, _asn_ctx),
	asn_MAP_RecEntityDefinition_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_RecEntityDefinition_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RecEntityDefinition = {
	"RecEntityDefinition",
	"RecEntityDefinition",
	&asn_OP_SEQUENCE,
	asn_DEF_RecEntityDefinition_tags_1,
	sizeof(asn_DEF_RecEntityDefinition_tags_1)
		/sizeof(asn_DEF_RecEntityDefinition_tags_1[0]) - 1, /* 1 */
	asn_DEF_RecEntityDefinition_tags_1,	/* Same as above */
	sizeof(asn_DEF_RecEntityDefinition_tags_1)
		/sizeof(asn_DEF_RecEntityDefinition_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_RecEntityDefinition_1,
	3,	/* Elements count */
	&asn_SPC_RecEntityDefinition_specs_1	/* Additional specs */
};

