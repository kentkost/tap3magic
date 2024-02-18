/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "e:\repos\tap3magic/specifications/tap3/reading/TAP0301.asn1"
 * 	`asn1c -D e:\repos\tap3magic\src\readers\tap0301\generated`
 */

#include "CamelCallReference.h"

asn_TYPE_member_t asn_MBR_CamelCallReference_1[] = {
	{ ATF_POINTER, 4, offsetof(struct CamelCallReference, typeOfNumber),
		(ASN_TAG_CLASS_APPLICATION | (230 << 2)),
		0,
		&asn_DEF_TypeOfNumber,
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
		"typeOfNumber"
		},
	{ ATF_POINTER, 3, offsetof(struct CamelCallReference, numberingPlan),
		(ASN_TAG_CLASS_APPLICATION | (160 << 2)),
		0,
		&asn_DEF_NumberingPlan,
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
		"numberingPlan"
		},
	{ ATF_POINTER, 2, offsetof(struct CamelCallReference, mscAddress),
		(ASN_TAG_CLASS_APPLICATION | (33 << 2)),
		0,
		&asn_DEF_AddressStringDigits,
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
		"mscAddress"
		},
	{ ATF_POINTER, 1, offsetof(struct CamelCallReference, callReferenceNumber),
		(ASN_TAG_CLASS_APPLICATION | (50 << 2)),
		0,
		&asn_DEF_CamelCallReferenceNumber,
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
		"callReferenceNumber"
		},
};
static const int asn_MAP_CamelCallReference_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_CamelCallReference_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (49 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CamelCallReference_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (33 << 2)), 2, 0, 0 }, /* mscAddress */
    { (ASN_TAG_CLASS_APPLICATION | (50 << 2)), 3, 0, 0 }, /* callReferenceNumber */
    { (ASN_TAG_CLASS_APPLICATION | (160 << 2)), 1, 0, 0 }, /* numberingPlan */
    { (ASN_TAG_CLASS_APPLICATION | (230 << 2)), 0, 0, 0 } /* typeOfNumber */
};
asn_SEQUENCE_specifics_t asn_SPC_CamelCallReference_specs_1 = {
	sizeof(struct CamelCallReference),
	offsetof(struct CamelCallReference, _asn_ctx),
	asn_MAP_CamelCallReference_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_CamelCallReference_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CamelCallReference = {
	"CamelCallReference",
	"CamelCallReference",
	&asn_OP_SEQUENCE,
	asn_DEF_CamelCallReference_tags_1,
	sizeof(asn_DEF_CamelCallReference_tags_1)
		/sizeof(asn_DEF_CamelCallReference_tags_1[0]) - 1, /* 1 */
	asn_DEF_CamelCallReference_tags_1,	/* Same as above */
	sizeof(asn_DEF_CamelCallReference_tags_1)
		/sizeof(asn_DEF_CamelCallReference_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_CamelCallReference_1,
	4,	/* Elements count */
	&asn_SPC_CamelCallReference_specs_1	/* Additional specs */
};

