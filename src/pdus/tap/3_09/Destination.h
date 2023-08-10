/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0309"
 * 	found in "TAP0309.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_09`
 */

#ifndef	_Destination_H_
#define	_Destination_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TypeOfNumber.h"
#include "NumberingPlan.h"
#include "AddressStringDigits.h"
#include "ModificationIndicator.h"
#include "CalledPlace.h"
#include "CalledRegion.h"
#include "CalledNumAnalysisCode.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Destination */
typedef struct Destination {
	TypeOfNumber_t	*typeOfNumber;	/* OPTIONAL */
	NumberingPlan_t	*numberingPlan;	/* OPTIONAL */
	AddressStringDigits_t	*calledNumber;	/* OPTIONAL */
	ModificationIndicator_t	*modificationIndicator;	/* OPTIONAL */
	CalledPlace_t	*calledPlace;	/* OPTIONAL */
	CalledRegion_t	*calledRegion;	/* OPTIONAL */
	CalledNumAnalysisCode_t	*calledNumAnalysisCode;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Destination_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Destination;
extern asn_SEQUENCE_specifics_t asn_SPC_Destination_specs_1;
extern asn_TYPE_member_t asn_MBR_Destination_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _Destination_H_ */
#include <asn_internal.h>
