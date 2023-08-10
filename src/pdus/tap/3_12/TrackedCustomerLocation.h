/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0312"
 * 	found in "TAP0312.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_12`
 */

#ifndef	_TrackedCustomerLocation_H_
#define	_TrackedCustomerLocation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LocationIdType.h"
#include "LocationIdentifier.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TrackedCustomerLocation */
typedef struct TrackedCustomerLocation {
	LocationIdType_t	*locationIdType;	/* OPTIONAL */
	LocationIdentifier_t	*locationIdentifier;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TrackedCustomerLocation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TrackedCustomerLocation;
extern asn_SEQUENCE_specifics_t asn_SPC_TrackedCustomerLocation_specs_1;
extern asn_TYPE_member_t asn_MBR_TrackedCustomerLocation_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _TrackedCustomerLocation_H_ */
#include <asn_internal.h>
