/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "E:/repos/tap3magic/specifications/tap3/TAP0311.asn1"
 */

#ifndef	_GprsCall_H_
#define	_GprsCall_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GprsBasicCallInformation;
struct GprsLocationInformation;
struct ImeiOrEsn;
struct GprsServiceUsed;
struct CamelServiceUsed;
struct OperatorSpecInfoList;

/* GprsCall */
typedef struct GprsCall {
	struct GprsBasicCallInformation	*gprsBasicCallInformation;	/* OPTIONAL */
	struct GprsLocationInformation	*gprsLocationInformation;	/* OPTIONAL */
	struct ImeiOrEsn	*equipmentIdentifier;	/* OPTIONAL */
	struct GprsServiceUsed	*gprsServiceUsed;	/* OPTIONAL */
	struct CamelServiceUsed	*camelServiceUsed;	/* OPTIONAL */
	struct OperatorSpecInfoList	*operatorSpecInformation;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GprsCall_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GprsCall;
extern asn_SEQUENCE_specifics_t asn_SPC_GprsCall_specs_1;
extern asn_TYPE_member_t asn_MBR_GprsCall_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GprsBasicCallInformation.h"
#include "GprsLocationInformation.h"
#include "ImeiOrEsn.h"
#include "GprsServiceUsed.h"
#include "CamelServiceUsed.h"
#include "OperatorSpecInfoList.h"

#endif	/* _GprsCall_H_ */
#include <asn_internal.h>
