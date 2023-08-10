/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "TAP0301.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_01`
 */

#include "ValueAddedServiceUsed.h"

asn_TYPE_member_t asn_MBR_ValueAddedServiceUsed_1[] = {
	{ ATF_POINTER, 3, offsetof(struct ValueAddedServiceUsed, vasCode),
		(ASN_TAG_CLASS_APPLICATION | (237 << 2)),
		0,
		&asn_DEF_VasCode,
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
		"vasCode"
		},
	{ ATF_POINTER, 2, offsetof(struct ValueAddedServiceUsed, chargingTimeStamp),
		(ASN_TAG_CLASS_APPLICATION | (74 << 2)),
		0,
		&asn_DEF_ChargingTimeStamp,
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
		"chargingTimeStamp"
		},
	{ ATF_POINTER, 1, offsetof(struct ValueAddedServiceUsed, chargeInformation),
		(ASN_TAG_CLASS_APPLICATION | (69 << 2)),
		0,
		&asn_DEF_ChargeInformation,
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
		"chargeInformation"
		},
};
static const int asn_MAP_ValueAddedServiceUsed_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_ValueAddedServiceUsed_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (236 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ValueAddedServiceUsed_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (69 << 2)), 2, 0, 0 }, /* chargeInformation */
    { (ASN_TAG_CLASS_APPLICATION | (74 << 2)), 1, 0, 0 }, /* chargingTimeStamp */
    { (ASN_TAG_CLASS_APPLICATION | (237 << 2)), 0, 0, 0 } /* vasCode */
};
asn_SEQUENCE_specifics_t asn_SPC_ValueAddedServiceUsed_specs_1 = {
	sizeof(struct ValueAddedServiceUsed),
	offsetof(struct ValueAddedServiceUsed, _asn_ctx),
	asn_MAP_ValueAddedServiceUsed_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_ValueAddedServiceUsed_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ValueAddedServiceUsed = {
	"ValueAddedServiceUsed",
	"ValueAddedServiceUsed",
	&asn_OP_SEQUENCE,
	asn_DEF_ValueAddedServiceUsed_tags_1,
	sizeof(asn_DEF_ValueAddedServiceUsed_tags_1)
		/sizeof(asn_DEF_ValueAddedServiceUsed_tags_1[0]) - 1, /* 1 */
	asn_DEF_ValueAddedServiceUsed_tags_1,	/* Same as above */
	sizeof(asn_DEF_ValueAddedServiceUsed_tags_1)
		/sizeof(asn_DEF_ValueAddedServiceUsed_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ValueAddedServiceUsed_1,
	3,	/* Elements count */
	&asn_SPC_ValueAddedServiceUsed_specs_1	/* Additional specs */
};

