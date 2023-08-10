/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0302"
 * 	found in "TAP0303.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_03`
 */

#ifndef	_AuditControlInfo_H_
#define	_AuditControlInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TotalTaxValue.h"
#include "TotalDiscountValue.h"
#include "CallEventDetailsCount.h"
#include "OperatorSpecInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct EarliestCallTimeStamp;
struct LatestCallTimeStamp;
struct TotalChargeValueList;

/* AuditControlInfo */
typedef struct AuditControlInfo {
	struct EarliestCallTimeStamp	*earliestCallTimeStamp;	/* OPTIONAL */
	struct LatestCallTimeStamp	*latestCallTimeStamp;	/* OPTIONAL */
	struct TotalChargeValueList	*totalChargeValueList;	/* OPTIONAL */
	TotalTaxValue_t	*totalTaxValue;	/* OPTIONAL */
	TotalDiscountValue_t	*totalDiscountValue;	/* OPTIONAL */
	CallEventDetailsCount_t	*callEventDetailsCount;	/* OPTIONAL */
	OperatorSpecInformation_t	*operatorSpecInformation;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AuditControlInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AuditControlInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_AuditControlInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_AuditControlInfo_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "EarliestCallTimeStamp.h"
#include "LatestCallTimeStamp.h"
#include "TotalChargeValueList.h"

#endif	/* _AuditControlInfo_H_ */
#include <asn_internal.h>
