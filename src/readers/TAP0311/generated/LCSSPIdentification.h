/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "E:/repos/tap3magic/specifications/tap3/TAP0311.asn1"
 */

#ifndef	_LCSSPIdentification_H_
#define	_LCSSPIdentification_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ContentProviderIdType.h"
#include "ContentProviderIdentifier.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LCSSPIdentification */
typedef struct LCSSPIdentification {
	ContentProviderIdType_t	*contentProviderIdType;	/* OPTIONAL */
	ContentProviderIdentifier_t	*contentProviderIdentifier;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LCSSPIdentification_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LCSSPIdentification;
extern asn_SEQUENCE_specifics_t asn_SPC_LCSSPIdentification_specs_1;
extern asn_TYPE_member_t asn_MBR_LCSSPIdentification_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LCSSPIdentification_H_ */
#include <asn_internal.h>
