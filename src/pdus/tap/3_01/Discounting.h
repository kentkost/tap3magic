/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "TAP0301.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_01`
 */

#ifndef	_Discounting_H_
#define	_Discounting_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DiscountDefinition;

/* Discounting */
typedef struct Discounting {
	A_SEQUENCE_OF(struct DiscountDefinition) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Discounting_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Discounting;
extern asn_SET_OF_specifics_t asn_SPC_Discounting_specs_1;
extern asn_TYPE_member_t asn_MBR_Discounting_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DiscountDefinition.h"

#endif	/* _Discounting_H_ */
#include <asn_internal.h>
