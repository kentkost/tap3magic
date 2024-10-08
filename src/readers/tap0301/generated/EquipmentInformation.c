/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "e:\repos\tap3magic/specifications/tap3/reading/TAP0301.asn1"
 * 	`asn1c -D e:\repos\tap3magic\src\readers\tap0301\generated`
 */

#include "EquipmentInformation.h"

asn_TYPE_member_t asn_MBR_EquipmentInformation_1[] = {
	{ ATF_POINTER, 2, offsetof(struct EquipmentInformation, mobileStationClassMark),
		(ASN_TAG_CLASS_APPLICATION | (148 << 2)),
		0,
		&asn_DEF_MobileStationClassMark,
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
		"mobileStationClassMark"
		},
	{ ATF_POINTER, 1, offsetof(struct EquipmentInformation, imeiOrEsn),
		-1 /* Ambiguous tag (CHOICE?) */,
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
		"imeiOrEsn"
		},
};
static const int asn_MAP_EquipmentInformation_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_EquipmentInformation_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (102 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EquipmentInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (103 << 2)), 1, 0, 0 }, /* esn */
    { (ASN_TAG_CLASS_APPLICATION | (128 << 2)), 1, 0, 0 }, /* imei */
    { (ASN_TAG_CLASS_APPLICATION | (148 << 2)), 0, 0, 0 } /* mobileStationClassMark */
};
asn_SEQUENCE_specifics_t asn_SPC_EquipmentInformation_specs_1 = {
	sizeof(struct EquipmentInformation),
	offsetof(struct EquipmentInformation, _asn_ctx),
	asn_MAP_EquipmentInformation_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_EquipmentInformation_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_EquipmentInformation = {
	"EquipmentInformation",
	"EquipmentInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_EquipmentInformation_tags_1,
	sizeof(asn_DEF_EquipmentInformation_tags_1)
		/sizeof(asn_DEF_EquipmentInformation_tags_1[0]) - 1, /* 1 */
	asn_DEF_EquipmentInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_EquipmentInformation_tags_1)
		/sizeof(asn_DEF_EquipmentInformation_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_EquipmentInformation_1,
	2,	/* Elements count */
	&asn_SPC_EquipmentInformation_specs_1	/* Additional specs */
};

