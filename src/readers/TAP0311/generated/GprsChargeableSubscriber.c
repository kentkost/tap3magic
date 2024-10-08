/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "E:/repos/tap3magic/specifications/tap3/TAP0311.asn1"
 */

#include "GprsChargeableSubscriber.h"

asn_TYPE_member_t asn_MBR_GprsChargeableSubscriber_1[] = {
	{ ATF_POINTER, 3, offsetof(struct GprsChargeableSubscriber, chargeableSubscriber),
		(ASN_TAG_CLASS_APPLICATION | (427 << 2)),
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
	{ ATF_POINTER, 2, offsetof(struct GprsChargeableSubscriber, pdpAddress),
		(ASN_TAG_CLASS_APPLICATION | (167 << 2)),
		0,
		&asn_DEF_PdpAddress,
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
		"pdpAddress"
		},
	{ ATF_POINTER, 1, offsetof(struct GprsChargeableSubscriber, networkAccessIdentifier),
		(ASN_TAG_CLASS_APPLICATION | (417 << 2)),
		0,
		&asn_DEF_NetworkAccessIdentifier,
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
		"networkAccessIdentifier"
		},
};
static const int asn_MAP_GprsChargeableSubscriber_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_GprsChargeableSubscriber_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (115 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GprsChargeableSubscriber_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (167 << 2)), 1, 0, 0 }, /* pdpAddress */
    { (ASN_TAG_CLASS_APPLICATION | (417 << 2)), 2, 0, 0 }, /* networkAccessIdentifier */
    { (ASN_TAG_CLASS_APPLICATION | (427 << 2)), 0, 0, 0 } /* chargeableSubscriber */
};
asn_SEQUENCE_specifics_t asn_SPC_GprsChargeableSubscriber_specs_1 = {
	sizeof(struct GprsChargeableSubscriber),
	offsetof(struct GprsChargeableSubscriber, _asn_ctx),
	asn_MAP_GprsChargeableSubscriber_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_GprsChargeableSubscriber_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GprsChargeableSubscriber = {
	"GprsChargeableSubscriber",
	"GprsChargeableSubscriber",
	&asn_OP_SEQUENCE,
	asn_DEF_GprsChargeableSubscriber_tags_1,
	sizeof(asn_DEF_GprsChargeableSubscriber_tags_1)
		/sizeof(asn_DEF_GprsChargeableSubscriber_tags_1[0]) - 1, /* 1 */
	asn_DEF_GprsChargeableSubscriber_tags_1,	/* Same as above */
	sizeof(asn_DEF_GprsChargeableSubscriber_tags_1)
		/sizeof(asn_DEF_GprsChargeableSubscriber_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_GprsChargeableSubscriber_1,
	3,	/* Elements count */
	&asn_SPC_GprsChargeableSubscriber_specs_1	/* Additional specs */
};

