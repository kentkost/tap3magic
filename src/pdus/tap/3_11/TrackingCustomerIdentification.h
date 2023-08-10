/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "TAP0311.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_11`
 */

#ifndef	_TrackingCustomerIdentification_H_
#define	_TrackingCustomerIdentification_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CustomerIdType.h"
#include "CustomerIdentifier.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TrackingCustomerIdentification */
typedef struct TrackingCustomerIdentification {
	CustomerIdType_t	*customerIdType;	/* OPTIONAL */
	CustomerIdentifier_t	*customerIdentifier;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TrackingCustomerIdentification_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TrackingCustomerIdentification;
extern asn_SEQUENCE_specifics_t asn_SPC_TrackingCustomerIdentification_specs_1;
extern asn_TYPE_member_t asn_MBR_TrackingCustomerIdentification_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _TrackingCustomerIdentification_H_ */
#include <asn_internal.h>
