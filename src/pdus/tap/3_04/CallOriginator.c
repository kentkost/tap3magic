/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0304"
 * 	found in "TAP0304.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_04`
 */

#include "CallOriginator.h"

asn_TYPE_member_t asn_MBR_CallOriginator_1[] = {
	{ ATF_POINTER, 5, offsetof(struct CallOriginator, typeOfNumber),
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
	{ ATF_POINTER, 4, offsetof(struct CallOriginator, numberingPlan),
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
	{ ATF_POINTER, 3, offsetof(struct CallOriginator, callingNumber),
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
		"callingNumber"
		},
	{ ATF_POINTER, 2, offsetof(struct CallOriginator, modificationIndicator),
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
	{ ATF_POINTER, 1, offsetof(struct CallOriginator, clirIndicator),
		(ASN_TAG_CLASS_APPLICATION | (75 << 2)),
		0,
		&asn_DEF_ClirIndicator,
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
		"clirIndicator"
		},
};
static const int asn_MAP_CallOriginator_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_CallOriginator_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (41 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CallOriginator_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (33 << 2)), 2, 0, 0 }, /* callingNumber */
    { (ASN_TAG_CLASS_APPLICATION | (75 << 2)), 4, 0, 0 }, /* clirIndicator */
    { (ASN_TAG_CLASS_APPLICATION | (149 << 2)), 3, 0, 0 }, /* modificationIndicator */
    { (ASN_TAG_CLASS_APPLICATION | (160 << 2)), 1, 0, 0 }, /* numberingPlan */
    { (ASN_TAG_CLASS_APPLICATION | (230 << 2)), 0, 0, 0 } /* typeOfNumber */
};
asn_SEQUENCE_specifics_t asn_SPC_CallOriginator_specs_1 = {
	sizeof(struct CallOriginator),
	offsetof(struct CallOriginator, _asn_ctx),
	asn_MAP_CallOriginator_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_CallOriginator_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CallOriginator = {
	"CallOriginator",
	"CallOriginator",
	&asn_OP_SEQUENCE,
	asn_DEF_CallOriginator_tags_1,
	sizeof(asn_DEF_CallOriginator_tags_1)
		/sizeof(asn_DEF_CallOriginator_tags_1[0]) - 1, /* 1 */
	asn_DEF_CallOriginator_tags_1,	/* Same as above */
	sizeof(asn_DEF_CallOriginator_tags_1)
		/sizeof(asn_DEF_CallOriginator_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_CallOriginator_1,
	5,	/* Elements count */
	&asn_SPC_CallOriginator_specs_1	/* Additional specs */
};

