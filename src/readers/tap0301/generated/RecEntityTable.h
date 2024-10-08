/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "e:\repos\tap3magic/specifications/tap3/reading/TAP0301.asn1"
 * 	`asn1c -D e:\repos\tap3magic\src\readers\tap0301\generated`
 */

#ifndef	_RecEntityTable_H_
#define	_RecEntityTable_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RecEntityDefinition;

/* RecEntityTable */
typedef struct RecEntityTable {
	A_SEQUENCE_OF(struct RecEntityDefinition) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RecEntityTable_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RecEntityTable;
extern asn_SET_OF_specifics_t asn_SPC_RecEntityTable_specs_1;
extern asn_TYPE_member_t asn_MBR_RecEntityTable_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RecEntityDefinition.h"

#endif	/* _RecEntityTable_H_ */
#include <asn_internal.h>
