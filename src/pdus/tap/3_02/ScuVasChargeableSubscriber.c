/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0302"
 * 	found in "TAP0302.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_02`
 */

#include "ScuVasChargeableSubscriber.h"

#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_ScuVasChargeableSubscriber_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_ScuVasChargeableSubscriber_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_ScuVasChargeableSubscriber_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ScuVasChargeableSubscriber, choice.simChargeableSubscriber),
		(ASN_TAG_CLASS_APPLICATION | (199 << 2)),
		0,
		&asn_DEF_SimChargeableSubscriber,
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
		"simChargeableSubscriber"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ScuVasChargeableSubscriber, choice.msisdn),
		(ASN_TAG_CLASS_APPLICATION | (152 << 2)),
		0,
		&asn_DEF_Msisdn,
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
		"msisdn"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ScuVasChargeableSubscriber, choice.min),
		(ASN_TAG_CLASS_APPLICATION | (146 << 2)),
		0,
		&asn_DEF_Min,
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
		"min"
		},
};
static const unsigned asn_MAP_ScuVasChargeableSubscriber_to_canonical_1[] = { 2, 1, 0 };
static const unsigned asn_MAP_ScuVasChargeableSubscriber_from_canonical_1[] = { 2, 1, 0 };
static const asn_TYPE_tag2member_t asn_MAP_ScuVasChargeableSubscriber_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (146 << 2)), 2, 0, 0 }, /* min */
    { (ASN_TAG_CLASS_APPLICATION | (152 << 2)), 1, 0, 0 }, /* msisdn */
    { (ASN_TAG_CLASS_APPLICATION | (199 << 2)), 0, 0, 0 } /* simChargeableSubscriber */
};
asn_CHOICE_specifics_t asn_SPC_ScuVasChargeableSubscriber_specs_1 = {
	sizeof(struct ScuVasChargeableSubscriber),
	offsetof(struct ScuVasChargeableSubscriber, _asn_ctx),
	offsetof(struct ScuVasChargeableSubscriber, present),
	sizeof(((struct ScuVasChargeableSubscriber *)0)->present),
	asn_MAP_ScuVasChargeableSubscriber_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_ScuVasChargeableSubscriber_to_canonical_1,
	asn_MAP_ScuVasChargeableSubscriber_from_canonical_1,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ScuVasChargeableSubscriber = {
	"ScuVasChargeableSubscriber",
	"ScuVasChargeableSubscriber",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_ScuVasChargeableSubscriber_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_ScuVasChargeableSubscriber_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_ScuVasChargeableSubscriber_1,
	3,	/* Elements count */
	&asn_SPC_ScuVasChargeableSubscriber_specs_1	/* Additional specs */
};

