/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "e:\repos\tap3magic/specifications/tap3/reading/TAP0301.asn1"
 * 	`asn1c -D e:\repos\tap3magic\src\readers\tap0301\generated`
 */

#include "IpAddress.h"

#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_IpAddress_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_IpAddress_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_IpAddress_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IpAddress, choice.iPTextV4Address),
		(ASN_TAG_CLASS_APPLICATION | (131 << 2)),
		0,
		&asn_DEF_IPTextV4Address,
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
		"iPTextV4Address"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IpAddress, choice.iPTextV6Address),
		(ASN_TAG_CLASS_APPLICATION | (132 << 2)),
		0,
		&asn_DEF_IPTextV6Address,
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
		"iPTextV6Address"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_IpAddress_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (131 << 2)), 0, 0, 0 }, /* iPTextV4Address */
    { (ASN_TAG_CLASS_APPLICATION | (132 << 2)), 1, 0, 0 } /* iPTextV6Address */
};
asn_CHOICE_specifics_t asn_SPC_IpAddress_specs_1 = {
	sizeof(struct IpAddress),
	offsetof(struct IpAddress, _asn_ctx),
	offsetof(struct IpAddress, present),
	sizeof(((struct IpAddress *)0)->present),
	asn_MAP_IpAddress_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_IpAddress = {
	"IpAddress",
	"IpAddress",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_IpAddress_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_IpAddress_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_IpAddress_1,
	2,	/* Elements count */
	&asn_SPC_IpAddress_specs_1	/* Additional specs */
};

