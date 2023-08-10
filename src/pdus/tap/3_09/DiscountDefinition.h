/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0309"
 * 	found in "TAP0309.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_09`
 */

#ifndef	_DiscountDefinition_H_
#define	_DiscountDefinition_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DiscountCode.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DiscountApplied;

/* DiscountDefinition */
typedef struct DiscountDefinition {
	DiscountCode_t	*discountCode;	/* OPTIONAL */
	struct DiscountApplied	*discountApplied;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DiscountDefinition_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DiscountDefinition;
extern asn_SEQUENCE_specifics_t asn_SPC_DiscountDefinition_specs_1;
extern asn_TYPE_member_t asn_MBR_DiscountDefinition_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DiscountApplied.h"

#endif	/* _DiscountDefinition_H_ */
#include <asn_internal.h>
