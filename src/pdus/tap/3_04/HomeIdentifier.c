/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0304"
 * 	found in "TAP0304.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_04`
 */

#include "HomeIdentifier.h"

#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_HomeIdentifier_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_HomeIdentifier_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_HomeIdentifier_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HomeIdentifier, choice.name),
		(ASN_TAG_CLASS_APPLICATION | (312 << 2)),
		0,
		&asn_DEF_Name,
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
		"name"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HomeIdentifier, choice.tadigCode),
		(ASN_TAG_CLASS_APPLICATION | (169 << 2)),
		0,
		&asn_DEF_PlmnId,
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
		"tadigCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HomeIdentifier, choice.homeBid),
		(ASN_TAG_CLASS_APPLICATION | (122 << 2)),
		0,
		&asn_DEF_HomeBid,
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
		"homeBid"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HomeIdentifier, choice.homeLocationDescription),
		(ASN_TAG_CLASS_APPLICATION | (137 << 2)),
		0,
		&asn_DEF_LocationDescription,
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
		"homeLocationDescription"
		},
};
static const unsigned asn_MAP_HomeIdentifier_to_canonical_1[] = { 2, 3, 1, 0 };
static const unsigned asn_MAP_HomeIdentifier_from_canonical_1[] = { 3, 2, 0, 1 };
static const asn_TYPE_tag2member_t asn_MAP_HomeIdentifier_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (122 << 2)), 2, 0, 0 }, /* homeBid */
    { (ASN_TAG_CLASS_APPLICATION | (137 << 2)), 3, 0, 0 }, /* homeLocationDescription */
    { (ASN_TAG_CLASS_APPLICATION | (169 << 2)), 1, 0, 0 }, /* tadigCode */
    { (ASN_TAG_CLASS_APPLICATION | (312 << 2)), 0, 0, 0 } /* name */
};
asn_CHOICE_specifics_t asn_SPC_HomeIdentifier_specs_1 = {
	sizeof(struct HomeIdentifier),
	offsetof(struct HomeIdentifier, _asn_ctx),
	offsetof(struct HomeIdentifier, present),
	sizeof(((struct HomeIdentifier *)0)->present),
	asn_MAP_HomeIdentifier_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_HomeIdentifier_to_canonical_1,
	asn_MAP_HomeIdentifier_from_canonical_1,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_HomeIdentifier = {
	"HomeIdentifier",
	"HomeIdentifier",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_HomeIdentifier_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_HomeIdentifier_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_HomeIdentifier_1,
	4,	/* Elements count */
	&asn_SPC_HomeIdentifier_specs_1	/* Additional specs */
};

