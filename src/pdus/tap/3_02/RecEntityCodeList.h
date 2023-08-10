/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0302"
 * 	found in "TAP0302.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_02`
 */

#ifndef	_RecEntityCodeList_H_
#define	_RecEntityCodeList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RecEntityCode.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RecEntityCodeList */
typedef struct RecEntityCodeList {
	A_SEQUENCE_OF(RecEntityCode_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RecEntityCodeList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RecEntityCodeList;
extern asn_SET_OF_specifics_t asn_SPC_RecEntityCodeList_specs_1;
extern asn_TYPE_member_t asn_MBR_RecEntityCodeList_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RecEntityCodeList_H_ */
#include <asn_internal.h>
