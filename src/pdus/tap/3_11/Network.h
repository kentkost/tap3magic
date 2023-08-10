/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "TAP0311.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_11`
 */

#ifndef	_Network_H_
#define	_Network_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NetworkIdType.h"
#include "NetworkIdentifier.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Network */
typedef struct Network {
	NetworkIdType_t	*networkIdType;	/* OPTIONAL */
	NetworkIdentifier_t	*networkIdentifier;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Network_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Network;
extern asn_SEQUENCE_specifics_t asn_SPC_Network_specs_1;
extern asn_TYPE_member_t asn_MBR_Network_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _Network_H_ */
#include <asn_internal.h>
