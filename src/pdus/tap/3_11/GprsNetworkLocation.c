/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "TAP0311.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_11`
 */

#include "GprsNetworkLocation.h"

asn_TYPE_member_t asn_MBR_GprsNetworkLocation_1[] = {
	{ ATF_POINTER, 3, offsetof(struct GprsNetworkLocation, recEntity),
		(ASN_TAG_CLASS_APPLICATION | (185 << 2)),
		0,
		&asn_DEF_RecEntityCodeList,
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
		"recEntity"
		},
	{ ATF_POINTER, 2, offsetof(struct GprsNetworkLocation, locationArea),
		(ASN_TAG_CLASS_APPLICATION | (136 << 2)),
		0,
		&asn_DEF_LocationArea,
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
		"locationArea"
		},
	{ ATF_POINTER, 1, offsetof(struct GprsNetworkLocation, cellId),
		(ASN_TAG_CLASS_APPLICATION | (59 << 2)),
		0,
		&asn_DEF_CellId,
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
		"cellId"
		},
};
static const int asn_MAP_GprsNetworkLocation_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_GprsNetworkLocation_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (118 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GprsNetworkLocation_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (59 << 2)), 2, 0, 0 }, /* cellId */
    { (ASN_TAG_CLASS_APPLICATION | (136 << 2)), 1, 0, 0 }, /* locationArea */
    { (ASN_TAG_CLASS_APPLICATION | (185 << 2)), 0, 0, 0 } /* recEntity */
};
asn_SEQUENCE_specifics_t asn_SPC_GprsNetworkLocation_specs_1 = {
	sizeof(struct GprsNetworkLocation),
	offsetof(struct GprsNetworkLocation, _asn_ctx),
	asn_MAP_GprsNetworkLocation_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_GprsNetworkLocation_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GprsNetworkLocation = {
	"GprsNetworkLocation",
	"GprsNetworkLocation",
	&asn_OP_SEQUENCE,
	asn_DEF_GprsNetworkLocation_tags_1,
	sizeof(asn_DEF_GprsNetworkLocation_tags_1)
		/sizeof(asn_DEF_GprsNetworkLocation_tags_1[0]) - 1, /* 1 */
	asn_DEF_GprsNetworkLocation_tags_1,	/* Same as above */
	sizeof(asn_DEF_GprsNetworkLocation_tags_1)
		/sizeof(asn_DEF_GprsNetworkLocation_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_GprsNetworkLocation_1,
	3,	/* Elements count */
	&asn_SPC_GprsNetworkLocation_specs_1	/* Additional specs */
};

