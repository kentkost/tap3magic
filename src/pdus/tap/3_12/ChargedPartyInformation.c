/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0312"
 * 	found in "TAP0312.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_12`
 */

#include "ChargedPartyInformation.h"

asn_TYPE_member_t asn_MBR_ChargedPartyInformation_1[] = {
	{ ATF_POINTER, 4, offsetof(struct ChargedPartyInformation, chargedPartyIdList),
		(ASN_TAG_CLASS_APPLICATION | (310 << 2)),
		0,
		&asn_DEF_ChargedPartyIdList,
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
		"chargedPartyIdList"
		},
	{ ATF_POINTER, 3, offsetof(struct ChargedPartyInformation, chargedPartyHomeIdList),
		(ASN_TAG_CLASS_APPLICATION | (314 << 2)),
		0,
		&asn_DEF_ChargedPartyHomeIdList,
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
		"chargedPartyHomeIdList"
		},
	{ ATF_POINTER, 2, offsetof(struct ChargedPartyInformation, chargedPartyLocationList),
		(ASN_TAG_CLASS_APPLICATION | (321 << 2)),
		0,
		&asn_DEF_ChargedPartyLocationList,
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
		"chargedPartyLocationList"
		},
	{ ATF_POINTER, 1, offsetof(struct ChargedPartyInformation, chargedPartyEquipment),
		(ASN_TAG_CLASS_APPLICATION | (323 << 2)),
		0,
		&asn_DEF_ChargedPartyEquipment,
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
		"chargedPartyEquipment"
		},
};
static const int asn_MAP_ChargedPartyInformation_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_ChargedPartyInformation_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (324 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ChargedPartyInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (310 << 2)), 0, 0, 0 }, /* chargedPartyIdList */
    { (ASN_TAG_CLASS_APPLICATION | (314 << 2)), 1, 0, 0 }, /* chargedPartyHomeIdList */
    { (ASN_TAG_CLASS_APPLICATION | (321 << 2)), 2, 0, 0 }, /* chargedPartyLocationList */
    { (ASN_TAG_CLASS_APPLICATION | (323 << 2)), 3, 0, 0 } /* chargedPartyEquipment */
};
asn_SEQUENCE_specifics_t asn_SPC_ChargedPartyInformation_specs_1 = {
	sizeof(struct ChargedPartyInformation),
	offsetof(struct ChargedPartyInformation, _asn_ctx),
	asn_MAP_ChargedPartyInformation_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_ChargedPartyInformation_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ChargedPartyInformation = {
	"ChargedPartyInformation",
	"ChargedPartyInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_ChargedPartyInformation_tags_1,
	sizeof(asn_DEF_ChargedPartyInformation_tags_1)
		/sizeof(asn_DEF_ChargedPartyInformation_tags_1[0]) - 1, /* 1 */
	asn_DEF_ChargedPartyInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_ChargedPartyInformation_tags_1)
		/sizeof(asn_DEF_ChargedPartyInformation_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ChargedPartyInformation_1,
	4,	/* Elements count */
	&asn_SPC_ChargedPartyInformation_specs_1	/* Additional specs */
};

