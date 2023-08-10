/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0312"
 * 	found in "TAP0312.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_12`
 */

#include "Notification.h"

asn_TYPE_member_t asn_MBR_Notification_1[] = {
	{ ATF_POINTER, 11, offsetof(struct Notification, sender),
		(ASN_TAG_CLASS_APPLICATION | (196 << 2)),
		0,
		&asn_DEF_Sender,
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
		"sender"
		},
	{ ATF_POINTER, 10, offsetof(struct Notification, recipient),
		(ASN_TAG_CLASS_APPLICATION | (182 << 2)),
		0,
		&asn_DEF_Recipient,
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
		"recipient"
		},
	{ ATF_POINTER, 9, offsetof(struct Notification, fileSequenceNumber),
		(ASN_TAG_CLASS_APPLICATION | (109 << 2)),
		0,
		&asn_DEF_FileSequenceNumber,
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
		"fileSequenceNumber"
		},
	{ ATF_POINTER, 8, offsetof(struct Notification, rapFileSequenceNumber),
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
	{ ATF_POINTER, 7, offsetof(struct Notification, fileCreationTimeStamp),
		(ASN_TAG_CLASS_APPLICATION | (108 << 2)),
		0,
		&asn_DEF_FileCreationTimeStamp,
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
		"fileCreationTimeStamp"
		},
	{ ATF_POINTER, 6, offsetof(struct Notification, fileAvailableTimeStamp),
		(ASN_TAG_CLASS_APPLICATION | (107 << 2)),
		0,
		&asn_DEF_FileAvailableTimeStamp,
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
		"fileAvailableTimeStamp"
		},
	{ ATF_POINTER, 5, offsetof(struct Notification, transferCutOffTimeStamp),
		(ASN_TAG_CLASS_APPLICATION | (227 << 2)),
		0,
		&asn_DEF_TransferCutOffTimeStamp,
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
		"transferCutOffTimeStamp"
		},
	{ ATF_POINTER, 4, offsetof(struct Notification, specificationVersionNumber),
		(ASN_TAG_CLASS_APPLICATION | (201 << 2)),
		0,
		&asn_DEF_SpecificationVersionNumber,
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
		"specificationVersionNumber"
		},
	{ ATF_POINTER, 3, offsetof(struct Notification, releaseVersionNumber),
		(ASN_TAG_CLASS_APPLICATION | (189 << 2)),
		0,
		&asn_DEF_ReleaseVersionNumber,
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
		"releaseVersionNumber"
		},
	{ ATF_POINTER, 2, offsetof(struct Notification, fileTypeIndicator),
		(ASN_TAG_CLASS_APPLICATION | (110 << 2)),
		0,
		&asn_DEF_FileTypeIndicator,
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
		"fileTypeIndicator"
		},
	{ ATF_POINTER, 1, offsetof(struct Notification, operatorSpecInformation),
		(ASN_TAG_CLASS_APPLICATION | (162 << 2)),
		0,
		&asn_DEF_OperatorSpecInfoList,
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
static const int asn_MAP_Notification_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
static const ber_tlv_tag_t asn_DEF_Notification_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Notification_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (107 << 2)), 5, 0, 0 }, /* fileAvailableTimeStamp */
    { (ASN_TAG_CLASS_APPLICATION | (108 << 2)), 4, 0, 0 }, /* fileCreationTimeStamp */
    { (ASN_TAG_CLASS_APPLICATION | (109 << 2)), 2, 0, 0 }, /* fileSequenceNumber */
    { (ASN_TAG_CLASS_APPLICATION | (110 << 2)), 9, 0, 0 }, /* fileTypeIndicator */
    { (ASN_TAG_CLASS_APPLICATION | (162 << 2)), 10, 0, 0 }, /* operatorSpecInformation */
    { (ASN_TAG_CLASS_APPLICATION | (181 << 2)), 3, 0, 0 }, /* rapFileSequenceNumber */
    { (ASN_TAG_CLASS_APPLICATION | (182 << 2)), 1, 0, 0 }, /* recipient */
    { (ASN_TAG_CLASS_APPLICATION | (189 << 2)), 8, 0, 0 }, /* releaseVersionNumber */
    { (ASN_TAG_CLASS_APPLICATION | (196 << 2)), 0, 0, 0 }, /* sender */
    { (ASN_TAG_CLASS_APPLICATION | (201 << 2)), 7, 0, 0 }, /* specificationVersionNumber */
    { (ASN_TAG_CLASS_APPLICATION | (227 << 2)), 6, 0, 0 } /* transferCutOffTimeStamp */
};
asn_SEQUENCE_specifics_t asn_SPC_Notification_specs_1 = {
	sizeof(struct Notification),
	offsetof(struct Notification, _asn_ctx),
	asn_MAP_Notification_tag2el_1,
	11,	/* Count of tags in the map */
	asn_MAP_Notification_oms_1,	/* Optional members */
	11, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Notification = {
	"Notification",
	"Notification",
	&asn_OP_SEQUENCE,
	asn_DEF_Notification_tags_1,
	sizeof(asn_DEF_Notification_tags_1)
		/sizeof(asn_DEF_Notification_tags_1[0]) - 1, /* 1 */
	asn_DEF_Notification_tags_1,	/* Same as above */
	sizeof(asn_DEF_Notification_tags_1)
		/sizeof(asn_DEF_Notification_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_Notification_1,
	11,	/* Elements count */
	&asn_SPC_Notification_specs_1	/* Additional specs */
};

