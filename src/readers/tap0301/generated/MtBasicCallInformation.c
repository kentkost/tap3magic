/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "e:\repos\tap3magic/specifications/tap3/reading/TAP0301.asn1"
 * 	`asn1c -D e:\repos\tap3magic\src\readers\tap0301\generated`
 */

#include "MtBasicCallInformation.h"

asn_TYPE_member_t asn_MBR_MtBasicCallInformation_1[] = {
	{ ATF_POINTER, 10, offsetof(struct MtBasicCallInformation, fraudMonitorIndicator),
		(ASN_TAG_CLASS_APPLICATION | (112 << 2)),
		0,
		&asn_DEF_FraudMonitorIndicator,
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
		"fraudMonitorIndicator"
		},
	{ ATF_POINTER, 9, offsetof(struct MtBasicCallInformation, chargeableSubscriber),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_ChargeableSubscriber,
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
		"chargeableSubscriber"
		},
	{ ATF_POINTER, 8, offsetof(struct MtBasicCallInformation, rapFileSequenceNumber),
		(ASN_TAG_CLASS_APPLICATION | (181 << 2)),
		0,
		&asn_DEF_RapFileSequenceNumber,
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
		"rapFileSequenceNumber"
		},
	{ ATF_POINTER, 7, offsetof(struct MtBasicCallInformation, networkType),
		(ASN_TAG_CLASS_APPLICATION | (157 << 2)),
		0,
		&asn_DEF_NetworkType,
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
		"networkType"
		},
	{ ATF_POINTER, 6, offsetof(struct MtBasicCallInformation, callOriginator),
		(ASN_TAG_CLASS_APPLICATION | (41 << 2)),
		0,
		&asn_DEF_CallOriginator,
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
		"callOriginator"
		},
	{ ATF_POINTER, 5, offsetof(struct MtBasicCallInformation, originatingNetwork),
		(ASN_TAG_CLASS_APPLICATION | (164 << 2)),
		0,
		&asn_DEF_OriginatingNetwork,
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
		"originatingNetwork"
		},
	{ ATF_POINTER, 4, offsetof(struct MtBasicCallInformation, callEventStartTimeStamp),
		(ASN_TAG_CLASS_APPLICATION | (44 << 2)),
		0,
		&asn_DEF_CallEventStartTimeStamp,
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
		"callEventStartTimeStamp"
		},
	{ ATF_POINTER, 3, offsetof(struct MtBasicCallInformation, totalCallEventDuration),
		(ASN_TAG_CLASS_APPLICATION | (223 << 2)),
		0,
		&asn_DEF_TotalCallEventDuration,
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
		"totalCallEventDuration"
		},
	{ ATF_POINTER, 2, offsetof(struct MtBasicCallInformation, simToolkitIndicator),
		(ASN_TAG_CLASS_APPLICATION | (200 << 2)),
		0,
		&asn_DEF_SimToolkitIndicator,
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
		"simToolkitIndicator"
		},
	{ ATF_POINTER, 1, offsetof(struct MtBasicCallInformation, causeForTerm),
		(ASN_TAG_CLASS_APPLICATION | (58 << 2)),
		0,
		&asn_DEF_CauseForTerm,
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
		"causeForTerm"
		},
};
static const int asn_MAP_MtBasicCallInformation_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
static const ber_tlv_tag_t asn_DEF_MtBasicCallInformation_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (153 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MtBasicCallInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (41 << 2)), 4, 0, 0 }, /* callOriginator */
    { (ASN_TAG_CLASS_APPLICATION | (44 << 2)), 6, 0, 0 }, /* callEventStartTimeStamp */
    { (ASN_TAG_CLASS_APPLICATION | (58 << 2)), 9, 0, 0 }, /* causeForTerm */
    { (ASN_TAG_CLASS_APPLICATION | (112 << 2)), 0, 0, 0 }, /* fraudMonitorIndicator */
    { (ASN_TAG_CLASS_APPLICATION | (146 << 2)), 1, 0, 0 }, /* min */
    { (ASN_TAG_CLASS_APPLICATION | (157 << 2)), 3, 0, 0 }, /* networkType */
    { (ASN_TAG_CLASS_APPLICATION | (164 << 2)), 5, 0, 0 }, /* originatingNetwork */
    { (ASN_TAG_CLASS_APPLICATION | (181 << 2)), 2, 0, 0 }, /* rapFileSequenceNumber */
    { (ASN_TAG_CLASS_APPLICATION | (199 << 2)), 1, 0, 0 }, /* simChargeableSubscriber */
    { (ASN_TAG_CLASS_APPLICATION | (200 << 2)), 8, 0, 0 }, /* simToolkitIndicator */
    { (ASN_TAG_CLASS_APPLICATION | (223 << 2)), 7, 0, 0 } /* totalCallEventDuration */
};
asn_SEQUENCE_specifics_t asn_SPC_MtBasicCallInformation_specs_1 = {
	sizeof(struct MtBasicCallInformation),
	offsetof(struct MtBasicCallInformation, _asn_ctx),
	asn_MAP_MtBasicCallInformation_tag2el_1,
	11,	/* Count of tags in the map */
	asn_MAP_MtBasicCallInformation_oms_1,	/* Optional members */
	10, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MtBasicCallInformation = {
	"MtBasicCallInformation",
	"MtBasicCallInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_MtBasicCallInformation_tags_1,
	sizeof(asn_DEF_MtBasicCallInformation_tags_1)
		/sizeof(asn_DEF_MtBasicCallInformation_tags_1[0]) - 1, /* 1 */
	asn_DEF_MtBasicCallInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_MtBasicCallInformation_tags_1)
		/sizeof(asn_DEF_MtBasicCallInformation_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_MtBasicCallInformation_1,
	10,	/* Elements count */
	&asn_SPC_MtBasicCallInformation_specs_1	/* Additional specs */
};

