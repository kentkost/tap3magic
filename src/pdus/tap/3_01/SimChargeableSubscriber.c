/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "TAP0301.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_01`
 */

#include "SimChargeableSubscriber.h"

asn_TYPE_member_t asn_MBR_SimChargeableSubscriber_1[] = {
	{ ATF_POINTER, 2, offsetof(struct SimChargeableSubscriber, imsi),
		(ASN_TAG_CLASS_APPLICATION | (129 << 2)),
		0,
		&asn_DEF_Imsi,
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
		"imsi"
		},
	{ ATF_POINTER, 1, offsetof(struct SimChargeableSubscriber, msisdn),
		(ASN_TAG_CLASS_APPLICATION | (152 << 2)),
		0,
		&asn_DEF_Msisdn,
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
		"msisdn"
		},
};
static const int asn_MAP_SimChargeableSubscriber_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_SimChargeableSubscriber_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (199 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SimChargeableSubscriber_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (129 << 2)), 0, 0, 0 }, /* imsi */
    { (ASN_TAG_CLASS_APPLICATION | (152 << 2)), 1, 0, 0 } /* msisdn */
};
asn_SEQUENCE_specifics_t asn_SPC_SimChargeableSubscriber_specs_1 = {
	sizeof(struct SimChargeableSubscriber),
	offsetof(struct SimChargeableSubscriber, _asn_ctx),
	asn_MAP_SimChargeableSubscriber_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SimChargeableSubscriber_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SimChargeableSubscriber = {
	"SimChargeableSubscriber",
	"SimChargeableSubscriber",
	&asn_OP_SEQUENCE,
	asn_DEF_SimChargeableSubscriber_tags_1,
	sizeof(asn_DEF_SimChargeableSubscriber_tags_1)
		/sizeof(asn_DEF_SimChargeableSubscriber_tags_1[0]) - 1, /* 1 */
	asn_DEF_SimChargeableSubscriber_tags_1,	/* Same as above */
	sizeof(asn_DEF_SimChargeableSubscriber_tags_1)
		/sizeof(asn_DEF_SimChargeableSubscriber_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_SimChargeableSubscriber_1,
	2,	/* Elements count */
	&asn_SPC_SimChargeableSubscriber_specs_1	/* Additional specs */
};

