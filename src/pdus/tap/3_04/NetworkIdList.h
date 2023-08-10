/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0304"
 * 	found in "TAP0304.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_04`
 */

#ifndef	_NetworkIdList_H_
#define	_NetworkIdList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NetworkIdGroup;

/* NetworkIdList */
typedef struct NetworkIdList {
	A_SEQUENCE_OF(struct NetworkIdGroup) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NetworkIdList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NetworkIdList;
extern asn_SET_OF_specifics_t asn_SPC_NetworkIdList_specs_1;
extern asn_TYPE_member_t asn_MBR_NetworkIdList_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NetworkIdGroup.h"

#endif	/* _NetworkIdList_H_ */
#include <asn_internal.h>
