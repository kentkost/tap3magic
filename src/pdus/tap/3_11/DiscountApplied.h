/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "TAP0311.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_11`
 */

#ifndef	_DiscountApplied_H_
#define	_DiscountApplied_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FixedDiscountValue.h"
#include "DiscountRate.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DiscountApplied_PR {
	DiscountApplied_PR_NOTHING,	/* No components present */
	DiscountApplied_PR_fixedDiscountValue,
	DiscountApplied_PR_discountRate
} DiscountApplied_PR;

/* DiscountApplied */
typedef struct DiscountApplied {
	DiscountApplied_PR present;
	union DiscountApplied_u {
		FixedDiscountValue_t	 fixedDiscountValue;
		DiscountRate_t	 discountRate;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DiscountApplied_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DiscountApplied;
extern asn_CHOICE_specifics_t asn_SPC_DiscountApplied_specs_1;
extern asn_TYPE_member_t asn_MBR_DiscountApplied_1[2];
extern asn_per_constraints_t asn_PER_type_DiscountApplied_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _DiscountApplied_H_ */
#include <asn_internal.h>
