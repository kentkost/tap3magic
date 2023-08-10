/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0302"
 * 	found in "TAP0302.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_02`
 */

#include "Destination.h"

asn_TYPE_member_t asn_MBR_Destination_1[] = {
	{ ATF_POINTER, 7, offsetof(struct Destination, typeOfNumber),
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
	{ ATF_POINTER, 6, offsetof(struct Destination, numberingPlan),
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
	{ ATF_POINTER, 5, offsetof(struct Destination, calledNumber),
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
		"calledNumber"
		},
	{ ATF_POINTER, 4, offsetof(struct Destination, modificationIndicator),
		(ASN_TAG_CLASS_APPLICATION | (149 << 2)),
		0,
		&asn_DEF_ModificationIndicator,
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
		"modificationIndicator"
		},
	{ ATF_POINTER, 3, offsetof(struct Destination, calledPlace),
		(ASN_TAG_CLASS_APPLICATION | (42 << 2)),
		0,
		&asn_DEF_CalledPlace,
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
		"calledPlace"
		},
	{ ATF_POINTER, 2, offsetof(struct Destination, calledRegion),
		(ASN_TAG_CLASS_APPLICATION | (46 << 2)),
		0,
		&asn_DEF_CalledRegion,
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
		"calledRegion"
		},
	{ ATF_POINTER, 1, offsetof(struct Destination, calledNumAnalysisCode),
		(ASN_TAG_CLASS_APPLICATION | (247 << 2)),
		0,
		&asn_DEF_CalledNumAnalysisCode,
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
		"calledNumAnalysisCode"
		},
};
static const int asn_MAP_Destination_oms_1[] = { 0, 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_Destination_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (89 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Destination_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (33 << 2)), 2, 0, 0 }, /* calledNumber */
    { (ASN_TAG_CLASS_APPLICATION | (42 << 2)), 4, 0, 0 }, /* calledPlace */
    { (ASN_TAG_CLASS_APPLICATION | (46 << 2)), 5, 0, 0 }, /* calledRegion */
    { (ASN_TAG_CLASS_APPLICATION | (149 << 2)), 3, 0, 0 }, /* modificationIndicator */
    { (ASN_TAG_CLASS_APPLICATION | (160 << 2)), 1, 0, 0 }, /* numberingPlan */
    { (ASN_TAG_CLASS_APPLICATION | (230 << 2)), 0, 0, 0 }, /* typeOfNumber */
    { (ASN_TAG_CLASS_APPLICATION | (247 << 2)), 6, 0, 0 } /* calledNumAnalysisCode */
};
asn_SEQUENCE_specifics_t asn_SPC_Destination_specs_1 = {
	sizeof(struct Destination),
	offsetof(struct Destination, _asn_ctx),
	asn_MAP_Destination_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_Destination_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Destination = {
	"Destination",
	"Destination",
	&asn_OP_SEQUENCE,
	asn_DEF_Destination_tags_1,
	sizeof(asn_DEF_Destination_tags_1)
		/sizeof(asn_DEF_Destination_tags_1[0]) - 1, /* 1 */
	asn_DEF_Destination_tags_1,	/* Same as above */
	sizeof(asn_DEF_Destination_tags_1)
		/sizeof(asn_DEF_Destination_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_Destination_1,
	7,	/* Elements count */
	&asn_SPC_Destination_specs_1	/* Additional specs */
};

