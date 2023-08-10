/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0302"
 * 	found in "TAP0302.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_02`
 */

#include "CamelDestination.h"

asn_TYPE_member_t asn_MBR_CamelDestination_1[] = {
	{ ATF_POINTER, 3, offsetof(struct CamelDestination, typeOfNumber),
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
	{ ATF_POINTER, 2, offsetof(struct CamelDestination, numberingPlan),
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
	{ ATF_POINTER, 1, offsetof(struct CamelDestination, camelDestinationNumber),
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
		"camelDestinationNumber"
		},
};
static const int asn_MAP_CamelDestination_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_CamelDestination_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (51 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CamelDestination_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (33 << 2)), 2, 0, 0 }, /* camelDestinationNumber */
    { (ASN_TAG_CLASS_APPLICATION | (160 << 2)), 1, 0, 0 }, /* numberingPlan */
    { (ASN_TAG_CLASS_APPLICATION | (230 << 2)), 0, 0, 0 } /* typeOfNumber */
};
asn_SEQUENCE_specifics_t asn_SPC_CamelDestination_specs_1 = {
	sizeof(struct CamelDestination),
	offsetof(struct CamelDestination, _asn_ctx),
	asn_MAP_CamelDestination_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_CamelDestination_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CamelDestination = {
	"CamelDestination",
	"CamelDestination",
	&asn_OP_SEQUENCE,
	asn_DEF_CamelDestination_tags_1,
	sizeof(asn_DEF_CamelDestination_tags_1)
		/sizeof(asn_DEF_CamelDestination_tags_1[0]) - 1, /* 1 */
	asn_DEF_CamelDestination_tags_1,	/* Same as above */
	sizeof(asn_DEF_CamelDestination_tags_1)
		/sizeof(asn_DEF_CamelDestination_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_CamelDestination_1,
	3,	/* Elements count */
	&asn_SPC_CamelDestination_specs_1	/* Additional specs */
};

