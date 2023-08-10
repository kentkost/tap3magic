/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0304"
 * 	found in "TAP0304.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_04`
 */

#ifndef	_CamelCallReference_H_
#define	_CamelCallReference_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TypeOfNumber.h"
#include "NumberingPlan.h"
#include "AddressStringDigits.h"
#include "CamelCallReferenceNumber.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CamelCallReference */
typedef struct CamelCallReference {
	TypeOfNumber_t	*typeOfNumber;	/* OPTIONAL */
	NumberingPlan_t	*numberingPlan;	/* OPTIONAL */
	AddressStringDigits_t	*mscAddress;	/* OPTIONAL */
	CamelCallReferenceNumber_t	*callReferenceNumber;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CamelCallReference_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CamelCallReference;
extern asn_SEQUENCE_specifics_t asn_SPC_CamelCallReference_specs_1;
extern asn_TYPE_member_t asn_MBR_CamelCallReference_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _CamelCallReference_H_ */
#include <asn_internal.h>
