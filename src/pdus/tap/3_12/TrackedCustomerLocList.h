/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0312"
 * 	found in "TAP0312.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_12`
 */

#ifndef	_TrackedCustomerLocList_H_
#define	_TrackedCustomerLocList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TrackedCustomerLocation;

/* TrackedCustomerLocList */
typedef struct TrackedCustomerLocList {
	A_SEQUENCE_OF(struct TrackedCustomerLocation) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TrackedCustomerLocList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TrackedCustomerLocList;
extern asn_SET_OF_specifics_t asn_SPC_TrackedCustomerLocList_specs_1;
extern asn_TYPE_member_t asn_MBR_TrackedCustomerLocList_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TrackedCustomerLocation.h"

#endif	/* _TrackedCustomerLocList_H_ */
#include <asn_internal.h>
