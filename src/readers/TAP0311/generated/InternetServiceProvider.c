/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "E:/repos/tap3magic/specifications/tap3/TAP0311.asn1"
 */

#include "InternetServiceProvider.h"

asn_TYPE_member_t asn_MBR_InternetServiceProvider_1[] = {
	{ ATF_POINTER, 2, offsetof(struct InternetServiceProvider, ispIdType),
		(ASN_TAG_CLASS_APPLICATION | (293 << 2)),
		0,
		&asn_DEF_IspIdType,
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
		"ispIdType"
		},
	{ ATF_POINTER, 1, offsetof(struct InternetServiceProvider, ispIdentifier),
		(ASN_TAG_CLASS_APPLICATION | (294 << 2)),
		0,
		&asn_DEF_IspIdentifier,
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
		"ispIdentifier"
		},
};
static const int asn_MAP_InternetServiceProvider_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_InternetServiceProvider_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (329 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_InternetServiceProvider_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (293 << 2)), 0, 0, 0 }, /* ispIdType */
    { (ASN_TAG_CLASS_APPLICATION | (294 << 2)), 1, 0, 0 } /* ispIdentifier */
};
asn_SEQUENCE_specifics_t asn_SPC_InternetServiceProvider_specs_1 = {
	sizeof(struct InternetServiceProvider),
	offsetof(struct InternetServiceProvider, _asn_ctx),
	asn_MAP_InternetServiceProvider_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_InternetServiceProvider_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_InternetServiceProvider = {
	"InternetServiceProvider",
	"InternetServiceProvider",
	&asn_OP_SEQUENCE,
	asn_DEF_InternetServiceProvider_tags_1,
	sizeof(asn_DEF_InternetServiceProvider_tags_1)
		/sizeof(asn_DEF_InternetServiceProvider_tags_1[0]) - 1, /* 1 */
	asn_DEF_InternetServiceProvider_tags_1,	/* Same as above */
	sizeof(asn_DEF_InternetServiceProvider_tags_1)
		/sizeof(asn_DEF_InternetServiceProvider_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_InternetServiceProvider_1,
	2,	/* Elements count */
	&asn_SPC_InternetServiceProvider_specs_1	/* Additional specs */
};

