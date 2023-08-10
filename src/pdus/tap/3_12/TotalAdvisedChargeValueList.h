/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0312"
 * 	found in "TAP0312.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_12`
 */

#ifndef	_TotalAdvisedChargeValueList_H_
#define	_TotalAdvisedChargeValueList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TotalAdvisedChargeValue;

/* TotalAdvisedChargeValueList */
typedef struct TotalAdvisedChargeValueList {
	A_SEQUENCE_OF(struct TotalAdvisedChargeValue) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TotalAdvisedChargeValueList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TotalAdvisedChargeValueList;
extern asn_SET_OF_specifics_t asn_SPC_TotalAdvisedChargeValueList_specs_1;
extern asn_TYPE_member_t asn_MBR_TotalAdvisedChargeValueList_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TotalAdvisedChargeValue.h"

#endif	/* _TotalAdvisedChargeValueList_H_ */
#include <asn_internal.h>
