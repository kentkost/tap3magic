/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0312"
 * 	found in "TAP0312.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_12`
 */

#ifndef	_RecEntityInformation_H_
#define	_RecEntityInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RecEntityCode.h"
#include "RecEntityType.h"
#include "RecEntityId.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RecEntityInformation */
typedef struct RecEntityInformation {
	RecEntityCode_t	*recEntityCode;	/* OPTIONAL */
	RecEntityType_t	*recEntityType;	/* OPTIONAL */
	RecEntityId_t	*recEntityId;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RecEntityInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RecEntityInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_RecEntityInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_RecEntityInformation_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _RecEntityInformation_H_ */
#include <asn_internal.h>
