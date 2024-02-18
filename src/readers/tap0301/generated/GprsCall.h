/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "e:\repos\tap3magic/specifications/tap3/reading/TAP0301.asn1"
 * 	`asn1c -D e:\repos\tap3magic\src\readers\tap0301\generated`
 */

#ifndef	_GprsCall_H_
#define	_GprsCall_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TypeOfControllingNode.h"
#include "OperatorSpecInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GprsBasicCallInformation;
struct GprsLocationInformation;
struct EquipmentInformation;
struct GprsServiceUsed;
struct ValueAddedServiceUsedList;

/* GprsCall */
typedef struct GprsCall {
	TypeOfControllingNode_t	*typeOfControllingNode;	/* OPTIONAL */
	struct GprsBasicCallInformation	*gprsBasicCallInformation;	/* OPTIONAL */
	struct GprsLocationInformation	*gprsLocationInformation;	/* OPTIONAL */
	struct EquipmentInformation	*equipmentInformation;	/* OPTIONAL */
	struct GprsServiceUsed	*gprsServiceUsed;	/* OPTIONAL */
	struct ValueAddedServiceUsedList	*valueAddedServiceUsedList;	/* OPTIONAL */
	OperatorSpecInformation_t	*operatorSpecInformation;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GprsCall_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GprsCall;
extern asn_SEQUENCE_specifics_t asn_SPC_GprsCall_specs_1;
extern asn_TYPE_member_t asn_MBR_GprsCall_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GprsBasicCallInformation.h"
#include "GprsLocationInformation.h"
#include "EquipmentInformation.h"
#include "GprsServiceUsed.h"
#include "ValueAddedServiceUsedList.h"

#endif	/* _GprsCall_H_ */
#include <asn_internal.h>
