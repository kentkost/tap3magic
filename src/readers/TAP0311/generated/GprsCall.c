/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "E:/repos/tap3magic/specifications/tap3/TAP0311.asn1"
 */

#include "GprsCall.h"

asn_TYPE_member_t asn_MBR_GprsCall_1[] = {
	{ ATF_POINTER, 6, offsetof(struct GprsCall, gprsBasicCallInformation),
		(ASN_TAG_CLASS_APPLICATION | (114 << 2)),
		0,
		&asn_DEF_GprsBasicCallInformation,
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
		"gprsBasicCallInformation"
		},
	{ ATF_POINTER, 5, offsetof(struct GprsCall, gprsLocationInformation),
		(ASN_TAG_CLASS_APPLICATION | (117 << 2)),
		0,
		&asn_DEF_GprsLocationInformation,
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
		"gprsLocationInformation"
		},
	{ ATF_POINTER, 4, offsetof(struct GprsCall, equipmentIdentifier),
		(ASN_TAG_CLASS_APPLICATION | (429 << 2)),
		0,
		&asn_DEF_ImeiOrEsn,
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
		"equipmentIdentifier"
		},
	{ ATF_POINTER, 3, offsetof(struct GprsCall, gprsServiceUsed),
		(ASN_TAG_CLASS_APPLICATION | (121 << 2)),
		0,
		&asn_DEF_GprsServiceUsed,
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
		"gprsServiceUsed"
		},
	{ ATF_POINTER, 2, offsetof(struct GprsCall, camelServiceUsed),
		(ASN_TAG_CLASS_APPLICATION | (57 << 2)),
		0,
		&asn_DEF_CamelServiceUsed,
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
		"camelServiceUsed"
		},
	{ ATF_POINTER, 1, offsetof(struct GprsCall, operatorSpecInformation),
		(ASN_TAG_CLASS_APPLICATION | (162 << 2)),
		0,
		&asn_DEF_OperatorSpecInfoList,
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
		"operatorSpecInformation"
		},
};
static const int asn_MAP_GprsCall_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_GprsCall_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (14 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GprsCall_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (57 << 2)), 4, 0, 0 }, /* camelServiceUsed */
    { (ASN_TAG_CLASS_APPLICATION | (114 << 2)), 0, 0, 0 }, /* gprsBasicCallInformation */
    { (ASN_TAG_CLASS_APPLICATION | (117 << 2)), 1, 0, 0 }, /* gprsLocationInformation */
    { (ASN_TAG_CLASS_APPLICATION | (121 << 2)), 3, 0, 0 }, /* gprsServiceUsed */
    { (ASN_TAG_CLASS_APPLICATION | (162 << 2)), 5, 0, 0 }, /* operatorSpecInformation */
    { (ASN_TAG_CLASS_APPLICATION | (429 << 2)), 2, 0, 0 } /* equipmentIdentifier */
};
asn_SEQUENCE_specifics_t asn_SPC_GprsCall_specs_1 = {
	sizeof(struct GprsCall),
	offsetof(struct GprsCall, _asn_ctx),
	asn_MAP_GprsCall_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_GprsCall_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GprsCall = {
	"GprsCall",
	"GprsCall",
	&asn_OP_SEQUENCE,
	asn_DEF_GprsCall_tags_1,
	sizeof(asn_DEF_GprsCall_tags_1)
		/sizeof(asn_DEF_GprsCall_tags_1[0]) - 1, /* 1 */
	asn_DEF_GprsCall_tags_1,	/* Same as above */
	sizeof(asn_DEF_GprsCall_tags_1)
		/sizeof(asn_DEF_GprsCall_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_GprsCall_1,
	6,	/* Elements count */
	&asn_SPC_GprsCall_specs_1	/* Additional specs */
};

