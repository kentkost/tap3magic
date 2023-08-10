/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0312"
 * 	found in "TAP0312.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_12`
 */

#include "LCSQosRequested.h"

asn_TYPE_member_t asn_MBR_LCSQosRequested_1[] = {
	{ ATF_POINTER, 6, offsetof(struct LCSQosRequested, lCSRequestTimestamp),
		(ASN_TAG_CLASS_APPLICATION | (384 << 2)),
		0,
		&asn_DEF_LCSRequestTimestamp,
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
		"lCSRequestTimestamp"
		},
	{ ATF_POINTER, 5, offsetof(struct LCSQosRequested, horizontalAccuracyRequested),
		(ASN_TAG_CLASS_APPLICATION | (385 << 2)),
		0,
		&asn_DEF_HorizontalAccuracyRequested,
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
		"horizontalAccuracyRequested"
		},
	{ ATF_POINTER, 4, offsetof(struct LCSQosRequested, verticalAccuracyRequested),
		(ASN_TAG_CLASS_APPLICATION | (386 << 2)),
		0,
		&asn_DEF_VerticalAccuracyRequested,
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
		"verticalAccuracyRequested"
		},
	{ ATF_POINTER, 3, offsetof(struct LCSQosRequested, responseTimeCategory),
		(ASN_TAG_CLASS_APPLICATION | (387 << 2)),
		0,
		&asn_DEF_ResponseTimeCategory,
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
		"responseTimeCategory"
		},
	{ ATF_POINTER, 2, offsetof(struct LCSQosRequested, trackingPeriod),
		(ASN_TAG_CLASS_APPLICATION | (388 << 2)),
		0,
		&asn_DEF_TrackingPeriod,
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
		"trackingPeriod"
		},
	{ ATF_POINTER, 1, offsetof(struct LCSQosRequested, trackingFrequency),
		(ASN_TAG_CLASS_APPLICATION | (389 << 2)),
		0,
		&asn_DEF_TrackingFrequency,
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
		"trackingFrequency"
		},
};
static const int asn_MAP_LCSQosRequested_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_LCSQosRequested_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (383 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LCSQosRequested_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (384 << 2)), 0, 0, 0 }, /* lCSRequestTimestamp */
    { (ASN_TAG_CLASS_APPLICATION | (385 << 2)), 1, 0, 0 }, /* horizontalAccuracyRequested */
    { (ASN_TAG_CLASS_APPLICATION | (386 << 2)), 2, 0, 0 }, /* verticalAccuracyRequested */
    { (ASN_TAG_CLASS_APPLICATION | (387 << 2)), 3, 0, 0 }, /* responseTimeCategory */
    { (ASN_TAG_CLASS_APPLICATION | (388 << 2)), 4, 0, 0 }, /* trackingPeriod */
    { (ASN_TAG_CLASS_APPLICATION | (389 << 2)), 5, 0, 0 } /* trackingFrequency */
};
asn_SEQUENCE_specifics_t asn_SPC_LCSQosRequested_specs_1 = {
	sizeof(struct LCSQosRequested),
	offsetof(struct LCSQosRequested, _asn_ctx),
	asn_MAP_LCSQosRequested_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_LCSQosRequested_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LCSQosRequested = {
	"LCSQosRequested",
	"LCSQosRequested",
	&asn_OP_SEQUENCE,
	asn_DEF_LCSQosRequested_tags_1,
	sizeof(asn_DEF_LCSQosRequested_tags_1)
		/sizeof(asn_DEF_LCSQosRequested_tags_1[0]) - 1, /* 1 */
	asn_DEF_LCSQosRequested_tags_1,	/* Same as above */
	sizeof(asn_DEF_LCSQosRequested_tags_1)
		/sizeof(asn_DEF_LCSQosRequested_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LCSQosRequested_1,
	6,	/* Elements count */
	&asn_SPC_LCSQosRequested_specs_1	/* Additional specs */
};

