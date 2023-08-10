/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0302"
 * 	found in "TAP0303.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_03`
 */

#ifndef	_VasDefinition_H_
#define	_VasDefinition_H_


#include <asn_application.h>

/* Including external dependencies */
#include "VasCode.h"
#include "VasShortDescription.h"
#include "VasDescription.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* VasDefinition */
typedef struct VasDefinition {
	VasCode_t	*vasCode;	/* OPTIONAL */
	VasShortDescription_t	*vasShortDesc;	/* OPTIONAL */
	VasDescription_t	*vasDesc;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VasDefinition_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VasDefinition;
extern asn_SEQUENCE_specifics_t asn_SPC_VasDefinition_specs_1;
extern asn_TYPE_member_t asn_MBR_VasDefinition_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _VasDefinition_H_ */
#include <asn_internal.h>
