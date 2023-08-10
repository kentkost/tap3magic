/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0312"
 * 	found in "TAP0312.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_12`
 */

#include "NetworkInfo.h"

asn_TYPE_member_t asn_MBR_NetworkInfo_1[] = {
	{ ATF_POINTER, 2, offsetof(struct NetworkInfo, utcTimeOffsetInfo),
		(ASN_TAG_CLASS_APPLICATION | (234 << 2)),
		0,
		&asn_DEF_UtcTimeOffsetInfoList,
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
		"utcTimeOffsetInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct NetworkInfo, recEntityInfo),
		(ASN_TAG_CLASS_APPLICATION | (188 << 2)),
		0,
		&asn_DEF_RecEntityInfoList,
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
		"recEntityInfo"
		},
};
static const int asn_MAP_NetworkInfo_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_NetworkInfo_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NetworkInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (188 << 2)), 1, 0, 0 }, /* recEntityInfo */
    { (ASN_TAG_CLASS_APPLICATION | (234 << 2)), 0, 0, 0 } /* utcTimeOffsetInfo */
};
asn_SEQUENCE_specifics_t asn_SPC_NetworkInfo_specs_1 = {
	sizeof(struct NetworkInfo),
	offsetof(struct NetworkInfo, _asn_ctx),
	asn_MAP_NetworkInfo_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_NetworkInfo_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NetworkInfo = {
	"NetworkInfo",
	"NetworkInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_NetworkInfo_tags_1,
	sizeof(asn_DEF_NetworkInfo_tags_1)
		/sizeof(asn_DEF_NetworkInfo_tags_1[0]) - 1, /* 1 */
	asn_DEF_NetworkInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_NetworkInfo_tags_1)
		/sizeof(asn_DEF_NetworkInfo_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NetworkInfo_1,
	2,	/* Elements count */
	&asn_SPC_NetworkInfo_specs_1	/* Additional specs */
};

