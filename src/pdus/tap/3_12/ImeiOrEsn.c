/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0312"
 * 	found in "TAP0312.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_12`
 */

#include "ImeiOrEsn.h"

#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_ImeiOrEsn_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_ImeiOrEsn_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_ImeiOrEsn_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ImeiOrEsn, choice.imei),
		(ASN_TAG_CLASS_APPLICATION | (128 << 2)),
		0,
		&asn_DEF_Imei,
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
		"imei"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ImeiOrEsn, choice.esn),
		(ASN_TAG_CLASS_APPLICATION | (103 << 2)),
		0,
		&asn_DEF_Esn,
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
		"esn"
		},
};
static const unsigned asn_MAP_ImeiOrEsn_to_canonical_1[] = { 1, 0 };
static const unsigned asn_MAP_ImeiOrEsn_from_canonical_1[] = { 1, 0 };
static const ber_tlv_tag_t asn_DEF_ImeiOrEsn_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (429 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ImeiOrEsn_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (103 << 2)), 1, 0, 0 }, /* esn */
    { (ASN_TAG_CLASS_APPLICATION | (128 << 2)), 0, 0, 0 } /* imei */
};
asn_CHOICE_specifics_t asn_SPC_ImeiOrEsn_specs_1 = {
	sizeof(struct ImeiOrEsn),
	offsetof(struct ImeiOrEsn, _asn_ctx),
	offsetof(struct ImeiOrEsn, present),
	sizeof(((struct ImeiOrEsn *)0)->present),
	asn_MAP_ImeiOrEsn_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_ImeiOrEsn_to_canonical_1,
	asn_MAP_ImeiOrEsn_from_canonical_1,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ImeiOrEsn = {
	"ImeiOrEsn",
	"ImeiOrEsn",
	&asn_OP_CHOICE,
	asn_DEF_ImeiOrEsn_tags_1,
	sizeof(asn_DEF_ImeiOrEsn_tags_1)
		/sizeof(asn_DEF_ImeiOrEsn_tags_1[0]), /* 1 */
	asn_DEF_ImeiOrEsn_tags_1,	/* Same as above */
	sizeof(asn_DEF_ImeiOrEsn_tags_1)
		/sizeof(asn_DEF_ImeiOrEsn_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_ImeiOrEsn_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_ImeiOrEsn_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_ImeiOrEsn_1,
	2,	/* Elements count */
	&asn_SPC_ImeiOrEsn_specs_1	/* Additional specs */
};

