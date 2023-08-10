/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0302"
 * 	found in "TAP0302.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_02`
 */

#include "DualServiceCode.h"

#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_DualServiceCode_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_DualServiceCode_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_DualServiceCode_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DualServiceCode, choice.dualTeleServiceCode),
		(ASN_TAG_CLASS_APPLICATION | (100 << 2)),
		0,
		&asn_DEF_DualTeleServiceCode,
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
		"dualTeleServiceCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DualServiceCode, choice.dualBearerServiceCode),
		(ASN_TAG_CLASS_APPLICATION | (99 << 2)),
		0,
		&asn_DEF_DualBearerServiceCode,
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
		"dualBearerServiceCode"
		},
};
static const unsigned asn_MAP_DualServiceCode_to_canonical_1[] = { 1, 0 };
static const unsigned asn_MAP_DualServiceCode_from_canonical_1[] = { 1, 0 };
static const asn_TYPE_tag2member_t asn_MAP_DualServiceCode_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (99 << 2)), 1, 0, 0 }, /* dualBearerServiceCode */
    { (ASN_TAG_CLASS_APPLICATION | (100 << 2)), 0, 0, 0 } /* dualTeleServiceCode */
};
asn_CHOICE_specifics_t asn_SPC_DualServiceCode_specs_1 = {
	sizeof(struct DualServiceCode),
	offsetof(struct DualServiceCode, _asn_ctx),
	offsetof(struct DualServiceCode, present),
	sizeof(((struct DualServiceCode *)0)->present),
	asn_MAP_DualServiceCode_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_DualServiceCode_to_canonical_1,
	asn_MAP_DualServiceCode_from_canonical_1,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_DualServiceCode = {
	"DualServiceCode",
	"DualServiceCode",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_DualServiceCode_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_DualServiceCode_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_DualServiceCode_1,
	2,	/* Elements count */
	&asn_SPC_DualServiceCode_specs_1	/* Additional specs */
};

