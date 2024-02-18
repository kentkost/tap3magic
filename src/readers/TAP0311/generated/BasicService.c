/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "E:/repos/tap3magic/specifications/tap3/TAP0311.asn1"
 */

#include "BasicService.h"

asn_TYPE_member_t asn_MBR_BasicService_1[] = {
	{ ATF_POINTER, 6, offsetof(struct BasicService, serviceCode),
		(ASN_TAG_CLASS_APPLICATION | (426 << 2)),
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
	{ ATF_POINTER, 5, offsetof(struct BasicService, transparencyIndicator),
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
	{ ATF_POINTER, 4, offsetof(struct BasicService, fnur),
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
	{ ATF_POINTER, 3, offsetof(struct BasicService, userProtocolIndicator),
		(ASN_TAG_CLASS_APPLICATION | (280 << 2)),
		0,
		&asn_DEF_UserProtocolIndicator,
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
		"userProtocolIndicator"
		},
	{ ATF_POINTER, 2, offsetof(struct BasicService, guaranteedBitRate),
		(ASN_TAG_CLASS_APPLICATION | (420 << 2)),
		0,
		&asn_DEF_GuaranteedBitRate,
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
		"guaranteedBitRate"
		},
	{ ATF_POINTER, 1, offsetof(struct BasicService, maximumBitRate),
		(ASN_TAG_CLASS_APPLICATION | (421 << 2)),
		0,
		&asn_DEF_MaximumBitRate,
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
		"maximumBitRate"
		},
};
static const int asn_MAP_BasicService_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_BasicService_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (36 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BasicService_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (111 << 2)), 2, 0, 0 }, /* fnur */
    { (ASN_TAG_CLASS_APPLICATION | (228 << 2)), 1, 0, 0 }, /* transparencyIndicator */
    { (ASN_TAG_CLASS_APPLICATION | (280 << 2)), 3, 0, 0 }, /* userProtocolIndicator */
    { (ASN_TAG_CLASS_APPLICATION | (420 << 2)), 4, 0, 0 }, /* guaranteedBitRate */
    { (ASN_TAG_CLASS_APPLICATION | (421 << 2)), 5, 0, 0 }, /* maximumBitRate */
    { (ASN_TAG_CLASS_APPLICATION | (426 << 2)), 0, 0, 0 } /* serviceCode */
};
asn_SEQUENCE_specifics_t asn_SPC_BasicService_specs_1 = {
	sizeof(struct BasicService),
	offsetof(struct BasicService, _asn_ctx),
	asn_MAP_BasicService_tag2el_1,
	6,	/* Count of tags in the map */
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

