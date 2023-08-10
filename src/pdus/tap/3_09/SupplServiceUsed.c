/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0309"
 * 	found in "TAP0309.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_09`
 */

#include "SupplServiceUsed.h"

asn_TYPE_member_t asn_MBR_SupplServiceUsed_1[] = {
	{ ATF_POINTER, 7, offsetof(struct SupplServiceUsed, supplServiceCode),
		(ASN_TAG_CLASS_APPLICATION | (209 << 2)),
		0,
		&asn_DEF_SupplServiceCode,
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
		"supplServiceCode"
		},
	{ ATF_POINTER, 6, offsetof(struct SupplServiceUsed, supplServiceActionCode),
		(ASN_TAG_CLASS_APPLICATION | (208 << 2)),
		0,
		&asn_DEF_SupplServiceActionCode,
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
		"supplServiceActionCode"
		},
	{ ATF_POINTER, 5, offsetof(struct SupplServiceUsed, ssParameters),
		(ASN_TAG_CLASS_APPLICATION | (204 << 2)),
		0,
		&asn_DEF_SsParameters,
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
		"ssParameters"
		},
	{ ATF_POINTER, 4, offsetof(struct SupplServiceUsed, thirdPartyInformation),
		(ASN_TAG_CLASS_APPLICATION | (219 << 2)),
		0,
		&asn_DEF_ThirdPartyInformation,
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
		"thirdPartyInformation"
		},
	{ ATF_POINTER, 3, offsetof(struct SupplServiceUsed, chargingTimeStamp),
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
	{ ATF_POINTER, 2, offsetof(struct SupplServiceUsed, chargeInformation),
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
	{ ATF_POINTER, 1, offsetof(struct SupplServiceUsed, basicServiceCodeList),
		(ASN_TAG_CLASS_APPLICATION | (37 << 2)),
		0,
		&asn_DEF_BasicServiceCodeList,
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
		"basicServiceCodeList"
		},
};
static const int asn_MAP_SupplServiceUsed_oms_1[] = { 0, 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_SupplServiceUsed_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (206 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SupplServiceUsed_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (37 << 2)), 6, 0, 0 }, /* basicServiceCodeList */
    { (ASN_TAG_CLASS_APPLICATION | (69 << 2)), 5, 0, 0 }, /* chargeInformation */
    { (ASN_TAG_CLASS_APPLICATION | (74 << 2)), 4, 0, 0 }, /* chargingTimeStamp */
    { (ASN_TAG_CLASS_APPLICATION | (204 << 2)), 2, 0, 0 }, /* ssParameters */
    { (ASN_TAG_CLASS_APPLICATION | (208 << 2)), 1, 0, 0 }, /* supplServiceActionCode */
    { (ASN_TAG_CLASS_APPLICATION | (209 << 2)), 0, 0, 0 }, /* supplServiceCode */
    { (ASN_TAG_CLASS_APPLICATION | (219 << 2)), 3, 0, 0 } /* thirdPartyInformation */
};
asn_SEQUENCE_specifics_t asn_SPC_SupplServiceUsed_specs_1 = {
	sizeof(struct SupplServiceUsed),
	offsetof(struct SupplServiceUsed, _asn_ctx),
	asn_MAP_SupplServiceUsed_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_SupplServiceUsed_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SupplServiceUsed = {
	"SupplServiceUsed",
	"SupplServiceUsed",
	&asn_OP_SEQUENCE,
	asn_DEF_SupplServiceUsed_tags_1,
	sizeof(asn_DEF_SupplServiceUsed_tags_1)
		/sizeof(asn_DEF_SupplServiceUsed_tags_1[0]) - 1, /* 1 */
	asn_DEF_SupplServiceUsed_tags_1,	/* Same as above */
	sizeof(asn_DEF_SupplServiceUsed_tags_1)
		/sizeof(asn_DEF_SupplServiceUsed_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_SupplServiceUsed_1,
	7,	/* Elements count */
	&asn_SPC_SupplServiceUsed_specs_1	/* Additional specs */
};

