/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0312"
 * 	found in "TAP0312.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_12`
 */

#include "TransferBatch.h"

asn_TYPE_member_t asn_MBR_TransferBatch_1[] = {
	{ ATF_POINTER, 6, offsetof(struct TransferBatch, batchControlInfo),
		(ASN_TAG_CLASS_APPLICATION | (4 << 2)),
		0,
		&asn_DEF_BatchControlInfo,
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
		"batchControlInfo"
		},
	{ ATF_POINTER, 5, offsetof(struct TransferBatch, accountingInfo),
		(ASN_TAG_CLASS_APPLICATION | (5 << 2)),
		0,
		&asn_DEF_AccountingInfo,
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
		"accountingInfo"
		},
	{ ATF_POINTER, 4, offsetof(struct TransferBatch, networkInfo),
		(ASN_TAG_CLASS_APPLICATION | (6 << 2)),
		0,
		&asn_DEF_NetworkInfo,
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
		"networkInfo"
		},
	{ ATF_POINTER, 3, offsetof(struct TransferBatch, messageDescriptionInfo),
		(ASN_TAG_CLASS_APPLICATION | (8 << 2)),
		0,
		&asn_DEF_MessageDescriptionInfoList,
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
		"messageDescriptionInfo"
		},
	{ ATF_POINTER, 2, offsetof(struct TransferBatch, callEventDetails),
		(ASN_TAG_CLASS_APPLICATION | (3 << 2)),
		0,
		&asn_DEF_CallEventDetailList,
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
		"callEventDetails"
		},
	{ ATF_POINTER, 1, offsetof(struct TransferBatch, auditControlInfo),
		(ASN_TAG_CLASS_APPLICATION | (15 << 2)),
		0,
		&asn_DEF_AuditControlInfo,
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
		"auditControlInfo"
		},
};
static const int asn_MAP_TransferBatch_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_TransferBatch_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TransferBatch_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (3 << 2)), 4, 0, 0 }, /* callEventDetails */
    { (ASN_TAG_CLASS_APPLICATION | (4 << 2)), 0, 0, 0 }, /* batchControlInfo */
    { (ASN_TAG_CLASS_APPLICATION | (5 << 2)), 1, 0, 0 }, /* accountingInfo */
    { (ASN_TAG_CLASS_APPLICATION | (6 << 2)), 2, 0, 0 }, /* networkInfo */
    { (ASN_TAG_CLASS_APPLICATION | (8 << 2)), 3, 0, 0 }, /* messageDescriptionInfo */
    { (ASN_TAG_CLASS_APPLICATION | (15 << 2)), 5, 0, 0 } /* auditControlInfo */
};
asn_SEQUENCE_specifics_t asn_SPC_TransferBatch_specs_1 = {
	sizeof(struct TransferBatch),
	offsetof(struct TransferBatch, _asn_ctx),
	asn_MAP_TransferBatch_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_TransferBatch_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TransferBatch = {
	"TransferBatch",
	"TransferBatch",
	&asn_OP_SEQUENCE,
	asn_DEF_TransferBatch_tags_1,
	sizeof(asn_DEF_TransferBatch_tags_1)
		/sizeof(asn_DEF_TransferBatch_tags_1[0]) - 1, /* 1 */
	asn_DEF_TransferBatch_tags_1,	/* Same as above */
	sizeof(asn_DEF_TransferBatch_tags_1)
		/sizeof(asn_DEF_TransferBatch_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_TransferBatch_1,
	6,	/* Elements count */
	&asn_SPC_TransferBatch_specs_1	/* Additional specs */
};

