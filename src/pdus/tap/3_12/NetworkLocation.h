/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0312"
 * 	found in "TAP0312.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_12`
 */

#ifndef	_NetworkLocation_H_
#define	_NetworkLocation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RecEntityCode.h"
#include "CallReference.h"
#include "LocationArea.h"
#include "CellId.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NetworkLocation */
typedef struct NetworkLocation {
	RecEntityCode_t	*recEntityCode;	/* OPTIONAL */
	CallReference_t	*callReference;	/* OPTIONAL */
	LocationArea_t	*locationArea;	/* OPTIONAL */
	CellId_t	*cellId;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NetworkLocation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NetworkLocation;
extern asn_SEQUENCE_specifics_t asn_SPC_NetworkLocation_specs_1;
extern asn_TYPE_member_t asn_MBR_NetworkLocation_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _NetworkLocation_H_ */
#include <asn_internal.h>
