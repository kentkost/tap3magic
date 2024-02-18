/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "E:/repos/tap3magic/specifications/tap3/TAP0311.asn1"
 */

#ifndef	_TotalAdvisedChargeValue_H_
#define	_TotalAdvisedChargeValue_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AdvisedChargeCurrency.h"
#include "TotalAdvisedCharge.h"
#include "TotalAdvisedChargeRefund.h"
#include "TotalCommission.h"
#include "TotalCommissionRefund.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TotalAdvisedChargeValue */
typedef struct TotalAdvisedChargeValue {
	AdvisedChargeCurrency_t	*advisedChargeCurrency;	/* OPTIONAL */
	TotalAdvisedCharge_t	*totalAdvisedCharge;	/* OPTIONAL */
	TotalAdvisedChargeRefund_t	*totalAdvisedChargeRefund;	/* OPTIONAL */
	TotalCommission_t	*totalCommission;	/* OPTIONAL */
	TotalCommissionRefund_t	*totalCommissionRefund;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TotalAdvisedChargeValue_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TotalAdvisedChargeValue;
extern asn_SEQUENCE_specifics_t asn_SPC_TotalAdvisedChargeValue_specs_1;
extern asn_TYPE_member_t asn_MBR_TotalAdvisedChargeValue_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _TotalAdvisedChargeValue_H_ */
#include <asn_internal.h>
