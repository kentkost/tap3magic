/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0309"
 * 	found in "TAP0309.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_09`
 */

#ifndef	_VasInfo_H_
#define	_VasInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct VasDefinition;

/* VasInfo */
typedef struct VasInfo {
	A_SEQUENCE_OF(struct VasDefinition) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VasInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VasInfo;
extern asn_SET_OF_specifics_t asn_SPC_VasInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_VasInfo_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "VasDefinition.h"

#endif	/* _VasInfo_H_ */
#include <asn_internal.h>
