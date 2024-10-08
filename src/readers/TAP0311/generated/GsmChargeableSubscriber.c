/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "E:/repos/tap3magic/specifications/tap3/TAP0311.asn1"
 */

#include "GsmChargeableSubscriber.h"

asn_TYPE_member_t asn_MBR_GsmChargeableSubscriber_1[] = {
	{ ATF_POINTER, 2, offsetof(struct GsmChargeableSubscriber, imsi),
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
	{ ATF_POINTER, 1, offsetof(struct GsmChargeableSubscriber, msisdn),
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
static const int asn_MAP_GsmChargeableSubscriber_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_GsmChargeableSubscriber_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (286 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GsmChargeableSubscriber_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (129 << 2)), 0, 0, 0 }, /* imsi */
    { (ASN_TAG_CLASS_APPLICATION | (152 << 2)), 1, 0, 0 } /* msisdn */
};
asn_SEQUENCE_specifics_t asn_SPC_GsmChargeableSubscriber_specs_1 = {
	sizeof(struct GsmChargeableSubscriber),
	offsetof(struct GsmChargeableSubscriber, _asn_ctx),
	asn_MAP_GsmChargeableSubscriber_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_GsmChargeableSubscriber_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GsmChargeableSubscriber = {
	"GsmChargeableSubscriber",
	"GsmChargeableSubscriber",
	&asn_OP_SEQUENCE,
	asn_DEF_GsmChargeableSubscriber_tags_1,
	sizeof(asn_DEF_GsmChargeableSubscriber_tags_1)
		/sizeof(asn_DEF_GsmChargeableSubscriber_tags_1[0]) - 1, /* 1 */
	asn_DEF_GsmChargeableSubscriber_tags_1,	/* Same as above */
	sizeof(asn_DEF_GsmChargeableSubscriber_tags_1)
		/sizeof(asn_DEF_GsmChargeableSubscriber_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_GsmChargeableSubscriber_1,
	2,	/* Elements count */
	&asn_SPC_GsmChargeableSubscriber_specs_1	/* Additional specs */
};

