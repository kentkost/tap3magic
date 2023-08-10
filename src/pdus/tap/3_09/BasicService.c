/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0309"
 * 	found in "TAP0309.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_09`
 */

#include "BasicService.h"

asn_TYPE_member_t asn_MBR_BasicService_1[] = {
	{ ATF_POINTER, 6, offsetof(struct BasicService, serviceCode),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_BasicServiceCode,
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
		"serviceCode"
		},
	{ ATF_POINTER, 5, offsetof(struct BasicService, radioChannelRequested),
		(ASN_TAG_CLASS_APPLICATION | (179 << 2)),
		0,
		&asn_DEF_RadioChannelRequested,
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
		"radioChannelRequested"
		},
	{ ATF_POINTER, 4, offsetof(struct BasicService, radioChannelUsed),
		(ASN_TAG_CLASS_APPLICATION | (180 << 2)),
		0,
		&asn_DEF_RadioChannelUsed,
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
		"radioChannelUsed"
		},
	{ ATF_POINTER, 3, offsetof(struct BasicService, speechVersionRequested),
		(ASN_TAG_CLASS_APPLICATION | (202 << 2)),
		0,
		&asn_DEF_SpeechVersionRequested,
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
		"speechVersionRequested"
		},
	{ ATF_POINTER, 2, offsetof(struct BasicService, speechVersionUsed),
		(ASN_TAG_CLASS_APPLICATION | (203 << 2)),
		0,
		&asn_DEF_SpeechVersionUsed,
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
		"speechVersionUsed"
		},
	{ ATF_POINTER, 1, offsetof(struct BasicService, transparencyIndicator),
		(ASN_TAG_CLASS_APPLICATION | (228 << 2)),
		0,
		&asn_DEF_TransparencyIndicator,
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
		"transparencyIndicator"
		},
};
static const int asn_MAP_BasicService_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_BasicService_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (36 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BasicService_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (40 << 2)), 0, 0, 0 }, /* bearerServiceCode */
    { (ASN_TAG_CLASS_APPLICATION | (179 << 2)), 1, 0, 0 }, /* radioChannelRequested */
    { (ASN_TAG_CLASS_APPLICATION | (180 << 2)), 2, 0, 0 }, /* radioChannelUsed */
    { (ASN_TAG_CLASS_APPLICATION | (202 << 2)), 3, 0, 0 }, /* speechVersionRequested */
    { (ASN_TAG_CLASS_APPLICATION | (203 << 2)), 4, 0, 0 }, /* speechVersionUsed */
    { (ASN_TAG_CLASS_APPLICATION | (218 << 2)), 0, 0, 0 }, /* teleServiceCode */
    { (ASN_TAG_CLASS_APPLICATION | (228 << 2)), 5, 0, 0 } /* transparencyIndicator */
};
asn_SEQUENCE_specifics_t asn_SPC_BasicService_specs_1 = {
	sizeof(struct BasicService),
	offsetof(struct BasicService, _asn_ctx),
	asn_MAP_BasicService_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_BasicService_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BasicService = {
	"BasicService",
	"BasicService",
	&asn_OP_SEQUENCE,
	asn_DEF_BasicService_tags_1,
	sizeof(asn_DEF_BasicService_tags_1)
		/sizeof(asn_DEF_BasicService_tags_1[0]) - 1, /* 1 */
	asn_DEF_BasicService_tags_1,	/* Same as above */
	sizeof(asn_DEF_BasicService_tags_1)
		/sizeof(asn_DEF_BasicService_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_BasicService_1,
	6,	/* Elements count */
	&asn_SPC_BasicService_specs_1	/* Additional specs */
};

