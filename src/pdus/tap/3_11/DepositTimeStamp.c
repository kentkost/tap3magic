/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "TAP0311.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_11`
 */

#include "DepositTimeStamp.h"

/*
 * This type is implemented using DateTime,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_DepositTimeStamp_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (88 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_DepositTimeStamp = {
	"DepositTimeStamp",
	"DepositTimeStamp",
	&asn_OP_SEQUENCE,
	asn_DEF_DepositTimeStamp_tags_1,
	sizeof(asn_DEF_DepositTimeStamp_tags_1)
		/sizeof(asn_DEF_DepositTimeStamp_tags_1[0]) - 1, /* 1 */
	asn_DEF_DepositTimeStamp_tags_1,	/* Same as above */
	sizeof(asn_DEF_DepositTimeStamp_tags_1)
		/sizeof(asn_DEF_DepositTimeStamp_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_DateTime_1,
	2,	/* Elements count */
	&asn_SPC_DateTime_specs_1	/* Additional specs */
};

