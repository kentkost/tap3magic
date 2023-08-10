/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "TAP0311.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_11`
 */

#ifndef	_Taxation_H_
#define	_Taxation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TaxCode.h"
#include "TaxType.h"
#include "TaxRate.h"
#include "ChargeType.h"
#include "TaxIndicator.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Taxation */
typedef struct Taxation {
	TaxCode_t	*taxCode;	/* OPTIONAL */
	TaxType_t	*taxType;	/* OPTIONAL */
	TaxRate_t	*taxRate;	/* OPTIONAL */
	ChargeType_t	*chargeType;	/* OPTIONAL */
	TaxIndicator_t	*taxIndicator;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Taxation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Taxation;
extern asn_SEQUENCE_specifics_t asn_SPC_Taxation_specs_1;
extern asn_TYPE_member_t asn_MBR_Taxation_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _Taxation_H_ */
#include <asn_internal.h>
