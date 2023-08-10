/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0309"
 * 	found in "TAP0309.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_09`
 */

#include "MessageDescriptionDefinition.h"

asn_TYPE_member_t asn_MBR_MessageDescriptionDefinition_1[] = {
	{ ATF_POINTER, 2, offsetof(struct MessageDescriptionDefinition, messageDescriptionCode),
		(ASN_TAG_CLASS_APPLICATION | (141 << 2)),
		0,
		&asn_DEF_MessageDescriptionCode,
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
		"messageDescriptionCode"
		},
	{ ATF_POINTER, 1, offsetof(struct MessageDescriptionDefinition, messageDescription),
		(ASN_TAG_CLASS_APPLICATION | (142 << 2)),
		0,
		&asn_DEF_MessageDescription,
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
		"messageDescription"
		},
};
static const int asn_MAP_MessageDescriptionDefinition_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_MessageDescriptionDefinition_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (143 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MessageDescriptionDefinition_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (141 << 2)), 0, 0, 0 }, /* messageDescriptionCode */
    { (ASN_TAG_CLASS_APPLICATION | (142 << 2)), 1, 0, 0 } /* messageDescription */
};
asn_SEQUENCE_specifics_t asn_SPC_MessageDescriptionDefinition_specs_1 = {
	sizeof(struct MessageDescriptionDefinition),
	offsetof(struct MessageDescriptionDefinition, _asn_ctx),
	asn_MAP_MessageDescriptionDefinition_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_MessageDescriptionDefinition_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MessageDescriptionDefinition = {
	"MessageDescriptionDefinition",
	"MessageDescriptionDefinition",
	&asn_OP_SEQUENCE,
	asn_DEF_MessageDescriptionDefinition_tags_1,
	sizeof(asn_DEF_MessageDescriptionDefinition_tags_1)
		/sizeof(asn_DEF_MessageDescriptionDefinition_tags_1[0]) - 1, /* 1 */
	asn_DEF_MessageDescriptionDefinition_tags_1,	/* Same as above */
	sizeof(asn_DEF_MessageDescriptionDefinition_tags_1)
		/sizeof(asn_DEF_MessageDescriptionDefinition_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_MessageDescriptionDefinition_1,
	2,	/* Elements count */
	&asn_SPC_MessageDescriptionDefinition_specs_1	/* Additional specs */
};

