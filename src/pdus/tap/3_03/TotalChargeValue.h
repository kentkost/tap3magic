/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0302"
 * 	found in "TAP0303.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_03`
 */

#ifndef	_TotalChargeValue_H_
#define	_TotalChargeValue_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ChargeType.h"
#include "AbsoluteAmount.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TotalChargeValue */
typedef struct TotalChargeValue {
	ChargeType_t	*chargeType;	/* OPTIONAL */
	AbsoluteAmount_t	*totalCharge;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TotalChargeValue_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TotalChargeValue;
extern asn_SEQUENCE_specifics_t asn_SPC_TotalChargeValue_specs_1;
extern asn_TYPE_member_t asn_MBR_TotalChargeValue_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _TotalChargeValue_H_ */
#include <asn_internal.h>
