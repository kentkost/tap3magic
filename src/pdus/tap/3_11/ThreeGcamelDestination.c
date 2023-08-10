/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "TAP0311.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_11`
 */

#include "ThreeGcamelDestination.h"

#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_ThreeGcamelDestination_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_ThreeGcamelDestination_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_ThreeGcamelDestination_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ThreeGcamelDestination, choice.camelDestinationNumber),
		(ASN_TAG_CLASS_APPLICATION | (404 << 2)),
		0,
		&asn_DEF_CamelDestinationNumber,
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
	{ ATF_NOFLAGS, 0, offsetof(struct ThreeGcamelDestination, choice.gprsDestination),
		(ASN_TAG_CLASS_APPLICATION | (116 << 2)),
		0,
		&asn_DEF_GprsDestination,
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
		"gprsDestination"
		},
};
static const unsigned asn_MAP_ThreeGcamelDestination_to_canonical_1[] = { 1, 0 };
static const unsigned asn_MAP_ThreeGcamelDestination_from_canonical_1[] = { 1, 0 };
static const ber_tlv_tag_t asn_DEF_ThreeGcamelDestination_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (431 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ThreeGcamelDestination_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (116 << 2)), 1, 0, 0 }, /* gprsDestination */
    { (ASN_TAG_CLASS_APPLICATION | (404 << 2)), 0, 0, 0 } /* camelDestinationNumber */
};
asn_CHOICE_specifics_t asn_SPC_ThreeGcamelDestination_specs_1 = {
	sizeof(struct ThreeGcamelDestination),
	offsetof(struct ThreeGcamelDestination, _asn_ctx),
	offsetof(struct ThreeGcamelDestination, present),
	sizeof(((struct ThreeGcamelDestination *)0)->present),
	asn_MAP_ThreeGcamelDestination_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_ThreeGcamelDestination_to_canonical_1,
	asn_MAP_ThreeGcamelDestination_from_canonical_1,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ThreeGcamelDestination = {
	"ThreeGcamelDestination",
	"ThreeGcamelDestination",
	&asn_OP_CHOICE,
	asn_DEF_ThreeGcamelDestination_tags_1,
	sizeof(asn_DEF_ThreeGcamelDestination_tags_1)
		/sizeof(asn_DEF_ThreeGcamelDestination_tags_1[0]), /* 1 */
	asn_DEF_ThreeGcamelDestination_tags_1,	/* Same as above */
	sizeof(asn_DEF_ThreeGcamelDestination_tags_1)
		/sizeof(asn_DEF_ThreeGcamelDestination_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_ThreeGcamelDestination_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_ThreeGcamelDestination_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_ThreeGcamelDestination_1,
	2,	/* Elements count */
	&asn_SPC_ThreeGcamelDestination_specs_1	/* Additional specs */
};

