/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "E:/repos/tap3magic/specifications/tap3/TAP0311.asn1"
 */

#include "DiscountApplied.h"

#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_DiscountApplied_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_DiscountApplied_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_DiscountApplied_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DiscountApplied, choice.fixedDiscountValue),
		(ASN_TAG_CLASS_APPLICATION | (411 << 2)),
		0,
		&asn_DEF_FixedDiscountValue,
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
		"fixedDiscountValue"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DiscountApplied, choice.discountRate),
		(ASN_TAG_CLASS_APPLICATION | (92 << 2)),
		0,
		&asn_DEF_DiscountRate,
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
		"discountRate"
		},
};
static const unsigned asn_MAP_DiscountApplied_to_canonical_1[] = { 1, 0 };
static const unsigned asn_MAP_DiscountApplied_from_canonical_1[] = { 1, 0 };
static const ber_tlv_tag_t asn_DEF_DiscountApplied_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (428 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DiscountApplied_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (92 << 2)), 1, 0, 0 }, /* discountRate */
    { (ASN_TAG_CLASS_APPLICATION | (411 << 2)), 0, 0, 0 } /* fixedDiscountValue */
};
asn_CHOICE_specifics_t asn_SPC_DiscountApplied_specs_1 = {
	sizeof(struct DiscountApplied),
	offsetof(struct DiscountApplied, _asn_ctx),
	offsetof(struct DiscountApplied, present),
	sizeof(((struct DiscountApplied *)0)->present),
	asn_MAP_DiscountApplied_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_DiscountApplied_to_canonical_1,
	asn_MAP_DiscountApplied_from_canonical_1,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_DiscountApplied = {
	"DiscountApplied",
	"DiscountApplied",
	&asn_OP_CHOICE,
	asn_DEF_DiscountApplied_tags_1,
	sizeof(asn_DEF_DiscountApplied_tags_1)
		/sizeof(asn_DEF_DiscountApplied_tags_1[0]), /* 1 */
	asn_DEF_DiscountApplied_tags_1,	/* Same as above */
	sizeof(asn_DEF_DiscountApplied_tags_1)
		/sizeof(asn_DEF_DiscountApplied_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_DiscountApplied_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_DiscountApplied_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_DiscountApplied_1,
	2,	/* Elements count */
	&asn_SPC_DiscountApplied_specs_1	/* Additional specs */
};

