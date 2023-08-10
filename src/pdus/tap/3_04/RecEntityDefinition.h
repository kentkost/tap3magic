/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0304"
 * 	found in "TAP0304.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_04`
 */

#ifndef	_RecEntityDefinition_H_
#define	_RecEntityDefinition_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RecEntityCode.h"
#include "RecEntityType.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RecEntityId;

/* RecEntityDefinition */
typedef struct RecEntityDefinition {
	RecEntityCode_t	*recEntityCode;	/* OPTIONAL */
	RecEntityType_t	*recEntityType;	/* OPTIONAL */
	struct RecEntityId	*recEntityId;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RecEntityDefinition_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RecEntityDefinition;
extern asn_SEQUENCE_specifics_t asn_SPC_RecEntityDefinition_specs_1;
extern asn_TYPE_member_t asn_MBR_RecEntityDefinition_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RecEntityId.h"

#endif	/* _RecEntityDefinition_H_ */
#include <asn_internal.h>
