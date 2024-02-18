/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "E:/repos/tap3magic/specifications/tap3/TAP0311.asn1"
 */

#include "DataVolumeIncoming.h"

/*
 * This type is implemented using DataVolume,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_DataVolumeIncoming_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (250 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_DataVolumeIncoming = {
	"DataVolumeIncoming",
	"DataVolumeIncoming",
	&asn_OP_NativeInteger,
	asn_DEF_DataVolumeIncoming_tags_1,
	sizeof(asn_DEF_DataVolumeIncoming_tags_1)
		/sizeof(asn_DEF_DataVolumeIncoming_tags_1[0]) - 1, /* 1 */
	asn_DEF_DataVolumeIncoming_tags_1,	/* Same as above */
	sizeof(asn_DEF_DataVolumeIncoming_tags_1)
		/sizeof(asn_DEF_DataVolumeIncoming_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeInteger_constraint
	},
	0, 0,	/* No members */
	0	/* No specifics */
};

