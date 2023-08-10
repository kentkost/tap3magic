/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0302"
 * 	found in "TAP0303.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_03`
 */

#include "BasicHSCSDParameters.h"

asn_TYPE_member_t asn_MBR_BasicHSCSDParameters_1[] = {
	{ ATF_POINTER, 6, offsetof(struct BasicHSCSDParameters, fnur),
		(ASN_TAG_CLASS_APPLICATION | (111 << 2)),
		0,
		&asn_DEF_Fnur,
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
		"fnur"
		},
	{ ATF_POINTER, 5, offsetof(struct BasicHSCSDParameters, aiur),
		(ASN_TAG_CLASS_APPLICATION | (34 << 2)),
		0,
		&asn_DEF_AiurRequested,
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
		"aiur"
		},
	{ ATF_POINTER, 4, offsetof(struct BasicHSCSDParameters, maxNumberOfChannels),
		(ASN_TAG_CLASS_APPLICATION | (161 << 2)),
		0,
		&asn_DEF_NumberOfChannels,
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
		"maxNumberOfChannels"
		},
	{ ATF_POINTER, 3, offsetof(struct BasicHSCSDParameters, channelCodingsAcceptable),
		(ASN_TAG_CLASS_APPLICATION | (61 << 2)),
		0,
		&asn_DEF_ChannelCodingsAcceptable,
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
		"channelCodingsAcceptable"
		},
	{ ATF_POINTER, 2, offsetof(struct BasicHSCSDParameters, channelCodingUsed),
		(ASN_TAG_CLASS_APPLICATION | (60 << 2)),
		0,
		&asn_DEF_ChannelCoding,
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
		"channelCodingUsed"
		},
	{ ATF_POINTER, 1, offsetof(struct BasicHSCSDParameters, numberOfChannelsUsed),
		(ASN_TAG_CLASS_APPLICATION | (252 << 2)),
		0,
		&asn_DEF_NumberOfChannelsUsed,
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
		"numberOfChannelsUsed"
		},
};
static const int asn_MAP_BasicHSCSDParameters_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_BasicHSCSDParameters_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (35 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BasicHSCSDParameters_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (34 << 2)), 1, 0, 0 }, /* aiur */
    { (ASN_TAG_CLASS_APPLICATION | (60 << 2)), 4, 0, 0 }, /* channelCodingUsed */
    { (ASN_TAG_CLASS_APPLICATION | (61 << 2)), 3, 0, 0 }, /* channelCodingsAcceptable */
    { (ASN_TAG_CLASS_APPLICATION | (111 << 2)), 0, 0, 0 }, /* fnur */
    { (ASN_TAG_CLASS_APPLICATION | (161 << 2)), 2, 0, 0 }, /* maxNumberOfChannels */
    { (ASN_TAG_CLASS_APPLICATION | (252 << 2)), 5, 0, 0 } /* numberOfChannelsUsed */
};
asn_SEQUENCE_specifics_t asn_SPC_BasicHSCSDParameters_specs_1 = {
	sizeof(struct BasicHSCSDParameters),
	offsetof(struct BasicHSCSDParameters, _asn_ctx),
	asn_MAP_BasicHSCSDParameters_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_BasicHSCSDParameters_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BasicHSCSDParameters = {
	"BasicHSCSDParameters",
	"BasicHSCSDParameters",
	&asn_OP_SEQUENCE,
	asn_DEF_BasicHSCSDParameters_tags_1,
	sizeof(asn_DEF_BasicHSCSDParameters_tags_1)
		/sizeof(asn_DEF_BasicHSCSDParameters_tags_1[0]) - 1, /* 1 */
	asn_DEF_BasicHSCSDParameters_tags_1,	/* Same as above */
	sizeof(asn_DEF_BasicHSCSDParameters_tags_1)
		/sizeof(asn_DEF_BasicHSCSDParameters_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_BasicHSCSDParameters_1,
	6,	/* Elements count */
	&asn_SPC_BasicHSCSDParameters_specs_1	/* Additional specs */
};

