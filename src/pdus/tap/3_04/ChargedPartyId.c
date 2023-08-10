/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0304"
 * 	found in "TAP0304.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_04`
 */

#include "ChargedPartyId.h"

asn_TYPE_member_t asn_MBR_ChargedPartyId_1[] = {
	{ ATF_POINTER, 2, offsetof(struct ChargedPartyId, chargedPartyIdType),
		(ASN_TAG_CLASS_APPLICATION | (305 << 2)),
		0,
		&asn_DEF_ChargedPartyIdType,
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
		"chargedPartyIdType"
		},
	{ ATF_POINTER, 1, offsetof(struct ChargedPartyId, chargedPartyIdentification),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_ChargedPartyIdentification,
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
		"chargedPartyIdentification"
		},
};
static const int asn_MAP_ChargedPartyId_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ChargedPartyId_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (309 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ChargedPartyId_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (129 << 2)), 1, 0, 0 }, /* imsi */
    { (ASN_TAG_CLASS_APPLICATION | (131 << 2)), 1, 0, 0 }, /* iPTextV4Address */
    { (ASN_TAG_CLASS_APPLICATION | (132 << 2)), 1, 0, 0 }, /* iPTextV6Address */
    { (ASN_TAG_CLASS_APPLICATION | (146 << 2)), 1, 0, 0 }, /* min */
    { (ASN_TAG_CLASS_APPLICATION | (152 << 2)), 1, 0, 0 }, /* msisdn */
    { (ASN_TAG_CLASS_APPLICATION | (305 << 2)), 0, 0, 0 }, /* chargedPartyIdType */
    { (ASN_TAG_CLASS_APPLICATION | (306 << 2)), 1, 0, 0 }, /* loginName */
    { (ASN_TAG_CLASS_APPLICATION | (307 << 2)), 1, 0, 0 }, /* accountNumber */
    { (ASN_TAG_CLASS_APPLICATION | (308 << 2)), 1, 0, 0 } /* emailAddress */
};
asn_SEQUENCE_specifics_t asn_SPC_ChargedPartyId_specs_1 = {
	sizeof(struct ChargedPartyId),
	offsetof(struct ChargedPartyId, _asn_ctx),
	asn_MAP_ChargedPartyId_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_ChargedPartyId_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ChargedPartyId = {
	"ChargedPartyId",
	"ChargedPartyId",
	&asn_OP_SEQUENCE,
	asn_DEF_ChargedPartyId_tags_1,
	sizeof(asn_DEF_ChargedPartyId_tags_1)
		/sizeof(asn_DEF_ChargedPartyId_tags_1[0]) - 1, /* 1 */
	asn_DEF_ChargedPartyId_tags_1,	/* Same as above */
	sizeof(asn_DEF_ChargedPartyId_tags_1)
		/sizeof(asn_DEF_ChargedPartyId_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ChargedPartyId_1,
	2,	/* Elements count */
	&asn_SPC_ChargedPartyId_specs_1	/* Additional specs */
};

