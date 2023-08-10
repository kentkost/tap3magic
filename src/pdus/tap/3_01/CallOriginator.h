/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "TAP0301.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_01`
 */

#ifndef	_CallOriginator_H_
#define	_CallOriginator_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TypeOfNumber.h"
#include "NumberingPlan.h"
#include "AddressStringDigits.h"
#include "ModificationIndicator.h"
#include "ClirIndicator.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CallOriginator */
typedef struct CallOriginator {
	TypeOfNumber_t	*typeOfNumber;	/* OPTIONAL */
	NumberingPlan_t	*numberingPlan;	/* OPTIONAL */
	AddressStringDigits_t	*callingNumber;	/* OPTIONAL */
	ModificationIndicator_t	*modificationIndicator;	/* OPTIONAL */
	ClirIndicator_t	*clirIndicator;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CallOriginator_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CallOriginator;
extern asn_SEQUENCE_specifics_t asn_SPC_CallOriginator_specs_1;
extern asn_TYPE_member_t asn_MBR_CallOriginator_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _CallOriginator_H_ */
#include <asn_internal.h>
