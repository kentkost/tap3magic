/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0312"
 * 	found in "TAP0312.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_12`
 */

#ifndef	_ScuChargeableSubscriber_H_
#define	_ScuChargeableSubscriber_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GsmChargeableSubscriber.h"
#include "MinChargeableSubscriber.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ScuChargeableSubscriber_PR {
	ScuChargeableSubscriber_PR_NOTHING,	/* No components present */
	ScuChargeableSubscriber_PR_gsmChargeableSubscriber,
	ScuChargeableSubscriber_PR_minChargeableSubscriber
} ScuChargeableSubscriber_PR;

/* ScuChargeableSubscriber */
typedef struct ScuChargeableSubscriber {
	ScuChargeableSubscriber_PR present;
	union ScuChargeableSubscriber_u {
		GsmChargeableSubscriber_t	 gsmChargeableSubscriber;
		MinChargeableSubscriber_t	 minChargeableSubscriber;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ScuChargeableSubscriber_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ScuChargeableSubscriber;
extern asn_CHOICE_specifics_t asn_SPC_ScuChargeableSubscriber_specs_1;
extern asn_TYPE_member_t asn_MBR_ScuChargeableSubscriber_1[2];
extern asn_per_constraints_t asn_PER_type_ScuChargeableSubscriber_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ScuChargeableSubscriber_H_ */
#include <asn_internal.h>
