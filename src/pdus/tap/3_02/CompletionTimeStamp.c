/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0302"
 * 	found in "TAP0302.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_02`
 */

#include "CompletionTimeStamp.h"

/*
 * This type is implemented using DateTime,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_CompletionTimeStamp_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (76 << 2)),
	(ASN_TAG_CLASS_APPLICATION | (83 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_CompletionTimeStamp = {
	"CompletionTimeStamp",
	"CompletionTimeStamp",
	&asn_OP_SEQUENCE,
	asn_DEF_CompletionTimeStamp_tags_1,
	sizeof(asn_DEF_CompletionTimeStamp_tags_1)
		/sizeof(asn_DEF_CompletionTimeStamp_tags_1[0]) - 2, /* 1 */
	asn_DEF_CompletionTimeStamp_tags_1,	/* Same as above */
	sizeof(asn_DEF_CompletionTimeStamp_tags_1)
		/sizeof(asn_DEF_CompletionTimeStamp_tags_1[0]), /* 3 */
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

