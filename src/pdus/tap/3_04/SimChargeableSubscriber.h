/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0304"
 * 	found in "TAP0304.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_04`
 */

#ifndef	_SimChargeableSubscriber_H_
#define	_SimChargeableSubscriber_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Imsi.h"
#include "Msisdn.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SimChargeableSubscriber */
typedef struct SimChargeableSubscriber {
	Imsi_t	*imsi;	/* OPTIONAL */
	Msisdn_t	*msisdn;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SimChargeableSubscriber_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SimChargeableSubscriber;
extern asn_SEQUENCE_specifics_t asn_SPC_SimChargeableSubscriber_specs_1;
extern asn_TYPE_member_t asn_MBR_SimChargeableSubscriber_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SimChargeableSubscriber_H_ */
#include <asn_internal.h>
