/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "e:\repos\tap3magic/specifications/tap3/reading/TAP0301.asn1"
 * 	`asn1c -D e:\repos\tap3magic\src\readers\tap0301\generated`
 */

#include "RecEntityId.h"

#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_RecEntityId_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_RecEntityId_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_RecEntityId_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RecEntityId, choice.mscId),
		(ASN_TAG_CLASS_APPLICATION | (151 << 2)),
		0,
		&asn_DEF_MscId,
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
		"mscId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RecEntityId, choice.msisdn),
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
	{ ATF_NOFLAGS, 0, offsetof(struct RecEntityId, choice.gsnaddress),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_GsnAddress,
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
		"gsnaddress"
		},
};
static const unsigned asn_MAP_RecEntityId_to_canonical_1[] = { 2, 0, 1 };
static const unsigned asn_MAP_RecEntityId_from_canonical_1[] = { 1, 2, 0 };
static const asn_TYPE_tag2member_t asn_MAP_RecEntityId_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (131 << 2)), 2, 0, 0 }, /* iPTextV4Address */
    { (ASN_TAG_CLASS_APPLICATION | (132 << 2)), 2, 0, 0 }, /* iPTextV6Address */
    { (ASN_TAG_CLASS_APPLICATION | (151 << 2)), 0, 0, 0 }, /* mscId */
    { (ASN_TAG_CLASS_APPLICATION | (152 << 2)), 1, 0, 0 } /* msisdn */
};
asn_CHOICE_specifics_t asn_SPC_RecEntityId_specs_1 = {
	sizeof(struct RecEntityId),
	offsetof(struct RecEntityId, _asn_ctx),
	offsetof(struct RecEntityId, present),
	sizeof(((struct RecEntityId *)0)->present),
	asn_MAP_RecEntityId_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_RecEntityId_to_canonical_1,
	asn_MAP_RecEntityId_from_canonical_1,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_RecEntityId = {
	"RecEntityId",
	"RecEntityId",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_RecEntityId_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_RecEntityId_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_RecEntityId_1,
	3,	/* Elements count */
	&asn_SPC_RecEntityId_specs_1	/* Additional specs */
};

