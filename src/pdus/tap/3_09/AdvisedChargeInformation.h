/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0309"
 * 	found in "TAP0309.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_09`
 */

#ifndef	_AdvisedChargeInformation_H_
#define	_AdvisedChargeInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PaidIndicator.h"
#include "PaymentMethod.h"
#include "AdvisedChargeCurrency.h"
#include "AdvisedCharge.h"
#include "Commission.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AdvisedChargeInformation */
typedef struct AdvisedChargeInformation {
	PaidIndicator_t	*paidIndicator;	/* OPTIONAL */
	PaymentMethod_t	*paymentMethod;	/* OPTIONAL */
	AdvisedChargeCurrency_t	*advisedChargeCurrency;	/* OPTIONAL */
	AdvisedCharge_t	*advisedCharge;	/* OPTIONAL */
	Commission_t	*commission;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AdvisedChargeInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AdvisedChargeInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_AdvisedChargeInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_AdvisedChargeInformation_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _AdvisedChargeInformation_H_ */
#include <asn_internal.h>
