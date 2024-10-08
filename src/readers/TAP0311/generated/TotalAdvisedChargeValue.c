/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "E:/repos/tap3magic/specifications/tap3/TAP0311.asn1"
 */

#include "TotalAdvisedChargeValue.h"

asn_TYPE_member_t asn_MBR_TotalAdvisedChargeValue_1[] = {
	{ ATF_POINTER, 5, offsetof(struct TotalAdvisedChargeValue, advisedChargeCurrency),
		(ASN_TAG_CLASS_APPLICATION | (348 << 2)),
		0,
		&asn_DEF_AdvisedChargeCurrency,
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
		"advisedChargeCurrency"
		},
	{ ATF_POINTER, 4, offsetof(struct TotalAdvisedChargeValue, totalAdvisedCharge),
		(ASN_TAG_CLASS_APPLICATION | (356 << 2)),
		0,
		&asn_DEF_TotalAdvisedCharge,
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
		"totalAdvisedCharge"
		},
	{ ATF_POINTER, 3, offsetof(struct TotalAdvisedChargeValue, totalAdvisedChargeRefund),
		(ASN_TAG_CLASS_APPLICATION | (357 << 2)),
		0,
		&asn_DEF_TotalAdvisedChargeRefund,
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
		"totalAdvisedChargeRefund"
		},
	{ ATF_POINTER, 2, offsetof(struct TotalAdvisedChargeValue, totalCommission),
		(ASN_TAG_CLASS_APPLICATION | (358 << 2)),
		0,
		&asn_DEF_TotalCommission,
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
		"totalCommission"
		},
	{ ATF_POINTER, 1, offsetof(struct TotalAdvisedChargeValue, totalCommissionRefund),
		(ASN_TAG_CLASS_APPLICATION | (359 << 2)),
		0,
		&asn_DEF_TotalCommissionRefund,
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
		"totalCommissionRefund"
		},
};
static const int asn_MAP_TotalAdvisedChargeValue_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_TotalAdvisedChargeValue_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (360 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TotalAdvisedChargeValue_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (348 << 2)), 0, 0, 0 }, /* advisedChargeCurrency */
    { (ASN_TAG_CLASS_APPLICATION | (356 << 2)), 1, 0, 0 }, /* totalAdvisedCharge */
    { (ASN_TAG_CLASS_APPLICATION | (357 << 2)), 2, 0, 0 }, /* totalAdvisedChargeRefund */
    { (ASN_TAG_CLASS_APPLICATION | (358 << 2)), 3, 0, 0 }, /* totalCommission */
    { (ASN_TAG_CLASS_APPLICATION | (359 << 2)), 4, 0, 0 } /* totalCommissionRefund */
};
asn_SEQUENCE_specifics_t asn_SPC_TotalAdvisedChargeValue_specs_1 = {
	sizeof(struct TotalAdvisedChargeValue),
	offsetof(struct TotalAdvisedChargeValue, _asn_ctx),
	asn_MAP_TotalAdvisedChargeValue_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_TotalAdvisedChargeValue_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TotalAdvisedChargeValue = {
	"TotalAdvisedChargeValue",
	"TotalAdvisedChargeValue",
	&asn_OP_SEQUENCE,
	asn_DEF_TotalAdvisedChargeValue_tags_1,
	sizeof(asn_DEF_TotalAdvisedChargeValue_tags_1)
		/sizeof(asn_DEF_TotalAdvisedChargeValue_tags_1[0]) - 1, /* 1 */
	asn_DEF_TotalAdvisedChargeValue_tags_1,	/* Same as above */
	sizeof(asn_DEF_TotalAdvisedChargeValue_tags_1)
		/sizeof(asn_DEF_TotalAdvisedChargeValue_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_TotalAdvisedChargeValue_1,
	5,	/* Elements count */
	&asn_SPC_TotalAdvisedChargeValue_specs_1	/* Additional specs */
};

