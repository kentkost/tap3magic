/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0304"
 * 	found in "TAP0304.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_04`
 */

#include "NetworkIdGroup.h"

asn_TYPE_member_t asn_MBR_NetworkIdGroup_1[] = {
	{ ATF_POINTER, 2, offsetof(struct NetworkIdGroup, networkIdType),
		(ASN_TAG_CLASS_APPLICATION | (331 << 2)),
		0,
		&asn_DEF_NetworkIdType,
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
		"networkIdType"
		},
	{ ATF_POINTER, 1, offsetof(struct NetworkIdGroup, networkId),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_NetworkDesc,
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
		"networkId"
		},
};
static const int asn_MAP_NetworkIdGroup_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_NetworkIdGroup_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (332 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NetworkIdGroup_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (32 << 2)), 1, 0, 0 }, /* apn */
    { (ASN_TAG_CLASS_APPLICATION | (122 << 2)), 1, 0, 0 }, /* homeBid */
    { (ASN_TAG_CLASS_APPLICATION | (137 << 2)), 1, 0, 0 }, /* homeLocationDescription */
    { (ASN_TAG_CLASS_APPLICATION | (169 << 2)), 1, 0, 0 }, /* tadigCode */
    { (ASN_TAG_CLASS_APPLICATION | (312 << 2)), 1, 0, 0 }, /* name */
    { (ASN_TAG_CLASS_APPLICATION | (331 << 2)), 0, 0, 0 } /* networkIdType */
};
asn_SEQUENCE_specifics_t asn_SPC_NetworkIdGroup_specs_1 = {
	sizeof(struct NetworkIdGroup),
	offsetof(struct NetworkIdGroup, _asn_ctx),
	asn_MAP_NetworkIdGroup_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_NetworkIdGroup_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NetworkIdGroup = {
	"NetworkIdGroup",
	"NetworkIdGroup",
	&asn_OP_SEQUENCE,
	asn_DEF_NetworkIdGroup_tags_1,
	sizeof(asn_DEF_NetworkIdGroup_tags_1)
		/sizeof(asn_DEF_NetworkIdGroup_tags_1[0]) - 1, /* 1 */
	asn_DEF_NetworkIdGroup_tags_1,	/* Same as above */
	sizeof(asn_DEF_NetworkIdGroup_tags_1)
		/sizeof(asn_DEF_NetworkIdGroup_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NetworkIdGroup_1,
	2,	/* Elements count */
	&asn_SPC_NetworkIdGroup_specs_1	/* Additional specs */
};

