/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "E:/repos/tap3magic/specifications/tap3/TAP0311.asn1"
 */

#include "ChargedPartyIdentification.h"

asn_TYPE_member_t asn_MBR_ChargedPartyIdentification_1[] = {
	{ ATF_POINTER, 2, offsetof(struct ChargedPartyIdentification, chargedPartyIdType),
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
	{ ATF_POINTER, 1, offsetof(struct ChargedPartyIdentification, chargedPartyIdentifier),
		(ASN_TAG_CLASS_APPLICATION | (287 << 2)),
		0,
		&asn_DEF_ChargedPartyIdentifier,
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
		"chargedPartyIdentifier"
		},
};
static const int asn_MAP_ChargedPartyIdentification_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ChargedPartyIdentification_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (309 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ChargedPartyIdentification_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (287 << 2)), 1, 0, 0 }, /* chargedPartyIdentifier */
    { (ASN_TAG_CLASS_APPLICATION | (305 << 2)), 0, 0, 0 } /* chargedPartyIdType */
};
asn_SEQUENCE_specifics_t asn_SPC_ChargedPartyIdentification_specs_1 = {
	sizeof(struct ChargedPartyIdentification),
	offsetof(struct ChargedPartyIdentification, _asn_ctx),
	asn_MAP_ChargedPartyIdentification_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_ChargedPartyIdentification_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ChargedPartyIdentification = {
	"ChargedPartyIdentification",
	"ChargedPartyIdentification",
	&asn_OP_SEQUENCE,
	asn_DEF_ChargedPartyIdentification_tags_1,
	sizeof(asn_DEF_ChargedPartyIdentification_tags_1)
		/sizeof(asn_DEF_ChargedPartyIdentification_tags_1[0]) - 1, /* 1 */
	asn_DEF_ChargedPartyIdentification_tags_1,	/* Same as above */
	sizeof(asn_DEF_ChargedPartyIdentification_tags_1)
		/sizeof(asn_DEF_ChargedPartyIdentification_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ChargedPartyIdentification_1,
	2,	/* Elements count */
	&asn_SPC_ChargedPartyIdentification_specs_1	/* Additional specs */
};

