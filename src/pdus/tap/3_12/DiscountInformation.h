/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0312"
 * 	found in "TAP0312.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_12`
 */

#ifndef	_DiscountInformation_H_
#define	_DiscountInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DiscountCode.h"
#include "Discount.h"
#include "DiscountableAmount.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DiscountInformation */
typedef struct DiscountInformation {
	DiscountCode_t	*discountCode;	/* OPTIONAL */
	Discount_t	*discount;	/* OPTIONAL */
	DiscountableAmount_t	*discountableAmount;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DiscountInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DiscountInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_DiscountInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_DiscountInformation_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _DiscountInformation_H_ */
#include <asn_internal.h>
