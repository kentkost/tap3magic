/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "e:\repos\tap3magic/specifications/tap3/reading/TAP0301.asn1"
 * 	`asn1c -D e:\repos\tap3magic\src\readers\tap0301\generated`
 */

#include "SupplServiceEvent.h"

asn_TYPE_member_t asn_MBR_SupplServiceEvent_1[] = {
	{ ATF_POINTER, 9, offsetof(struct SupplServiceEvent, fraudMonitorIndicator),
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
	{ ATF_POINTER, 8, offsetof(struct SupplServiceEvent, chargeableSubscriber),
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
	{ ATF_POINTER, 7, offsetof(struct SupplServiceEvent, rapFileSequenceNumber),
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
	{ ATF_POINTER, 6, offsetof(struct SupplServiceEvent, networkType),
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
	{ ATF_POINTER, 5, offsetof(struct SupplServiceEvent, locationInformation),
		(ASN_TAG_CLASS_APPLICATION | (138 << 2)),
		0,
		&asn_DEF_LocationInformation,
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
		"locationInformation"
		},
	{ ATF_POINTER, 4, offsetof(struct SupplServiceEvent, equipmentInformation),
		(ASN_TAG_CLASS_APPLICATION | (102 << 2)),
		0,
		&asn_DEF_EquipmentInformation,
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
		"equipmentInformation"
		},
	{ ATF_POINTER, 3, offsetof(struct SupplServiceEvent, supplServiceUsed),
		(ASN_TAG_CLASS_APPLICATION | (206 << 2)),
		0,
		&asn_DEF_SupplServiceUsed,
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
		"supplServiceUsed"
		},
	{ ATF_POINTER, 2, offsetof(struct SupplServiceEvent, simToolkitIndicator),
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
	{ ATF_POINTER, 1, offsetof(struct SupplServiceEvent, operatorSpecInformation),
		(ASN_TAG_CLASS_APPLICATION | (163 << 2)),
		0,
		&asn_DEF_OperatorSpecInformation,
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
static const int asn_MAP_SupplServiceEvent_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
static const ber_tlv_tag_t asn_DEF_SupplServiceEvent_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SupplServiceEvent_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (102 << 2)), 5, 0, 0 }, /* equipmentInformation */
    { (ASN_TAG_CLASS_APPLICATION | (112 << 2)), 0, 0, 0 }, /* fraudMonitorIndicator */
    { (ASN_TAG_CLASS_APPLICATION | (138 << 2)), 4, 0, 0 }, /* locationInformation */
    { (ASN_TAG_CLASS_APPLICATION | (146 << 2)), 1, 0, 0 }, /* min */
    { (ASN_TAG_CLASS_APPLICATION | (157 << 2)), 3, 0, 0 }, /* networkType */
    { (ASN_TAG_CLASS_APPLICATION | (163 << 2)), 8, 0, 0 }, /* operatorSpecInformation */
    { (ASN_TAG_CLASS_APPLICATION | (181 << 2)), 2, 0, 0 }, /* rapFileSequenceNumber */
    { (ASN_TAG_CLASS_APPLICATION | (199 << 2)), 1, 0, 0 }, /* simChargeableSubscriber */
    { (ASN_TAG_CLASS_APPLICATION | (200 << 2)), 7, 0, 0 }, /* simToolkitIndicator */
    { (ASN_TAG_CLASS_APPLICATION | (206 << 2)), 6, 0, 0 } /* supplServiceUsed */
};
asn_SEQUENCE_specifics_t asn_SPC_SupplServiceEvent_specs_1 = {
	sizeof(struct SupplServiceEvent),
	offsetof(struct SupplServiceEvent, _asn_ctx),
	asn_MAP_SupplServiceEvent_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_SupplServiceEvent_oms_1,	/* Optional members */
	9, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SupplServiceEvent = {
	"SupplServiceEvent",
	"SupplServiceEvent",
	&asn_OP_SEQUENCE,
	asn_DEF_SupplServiceEvent_tags_1,
	sizeof(asn_DEF_SupplServiceEvent_tags_1)
		/sizeof(asn_DEF_SupplServiceEvent_tags_1[0]) - 1, /* 1 */
	asn_DEF_SupplServiceEvent_tags_1,	/* Same as above */
	sizeof(asn_DEF_SupplServiceEvent_tags_1)
		/sizeof(asn_DEF_SupplServiceEvent_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_SupplServiceEvent_1,
	9,	/* Elements count */
	&asn_SPC_SupplServiceEvent_specs_1	/* Additional specs */
};

