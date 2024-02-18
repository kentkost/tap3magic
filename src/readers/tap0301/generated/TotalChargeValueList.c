/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "e:\repos\tap3magic/specifications/tap3/reading/TAP0301.asn1"
 * 	`asn1c -D e:\repos\tap3magic\src\readers\tap0301\generated`
 */

#include "TotalChargeValueList.h"

asn_TYPE_member_t asn_MBR_TotalChargeValueList_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_APPLICATION | (222 << 2)),
		0,
		&asn_DEF_TotalChargeValue,
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
static const ber_tlv_tag_t asn_DEF_TotalChargeValueList_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (224 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_TotalChargeValueList_specs_1 = {
	sizeof(struct TotalChargeValueList),
	offsetof(struct TotalChargeValueList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_TotalChargeValueList = {
	"TotalChargeValueList",
	"TotalChargeValueList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_TotalChargeValueList_tags_1,
	sizeof(asn_DEF_TotalChargeValueList_tags_1)
		/sizeof(asn_DEF_TotalChargeValueList_tags_1[0]) - 1, /* 1 */
	asn_DEF_TotalChargeValueList_tags_1,	/* Same as above */
	sizeof(asn_DEF_TotalChargeValueList_tags_1)
		/sizeof(asn_DEF_TotalChargeValueList_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_TotalChargeValueList_1,
	1,	/* Single element */
	&asn_SPC_TotalChargeValueList_specs_1	/* Additional specs */
};

