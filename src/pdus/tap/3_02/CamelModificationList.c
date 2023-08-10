/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0302"
 * 	found in "TAP0302.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_02`
 */

#include "CamelModificationList.h"

asn_TYPE_member_t asn_MBR_CamelModificationList_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_APPLICATION | (53 << 2)),
		0,
		&asn_DEF_CamelModification,
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
		""
		},
};
static const ber_tlv_tag_t asn_DEF_CamelModificationList_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (54 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_CamelModificationList_specs_1 = {
	sizeof(struct CamelModificationList),
	offsetof(struct CamelModificationList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_CamelModificationList = {
	"CamelModificationList",
	"CamelModificationList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_CamelModificationList_tags_1,
	sizeof(asn_DEF_CamelModificationList_tags_1)
		/sizeof(asn_DEF_CamelModificationList_tags_1[0]) - 1, /* 1 */
	asn_DEF_CamelModificationList_tags_1,	/* Same as above */
	sizeof(asn_DEF_CamelModificationList_tags_1)
		/sizeof(asn_DEF_CamelModificationList_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_CamelModificationList_1,
	1,	/* Single element */
	&asn_SPC_CamelModificationList_specs_1	/* Additional specs */
};

