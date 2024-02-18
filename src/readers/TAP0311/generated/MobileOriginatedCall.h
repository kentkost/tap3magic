/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "E:/repos/tap3magic/specifications/tap3/TAP0311.asn1"
 */

#ifndef	_MobileOriginatedCall_H_
#define	_MobileOriginatedCall_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SupplServiceCode.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MoBasicCallInformation;
struct LocationInformation;
struct ImeiOrEsn;
struct BasicServiceUsedList;
struct ThirdPartyInformation;
struct CamelServiceUsed;
struct OperatorSpecInfoList;

/* MobileOriginatedCall */
typedef struct MobileOriginatedCall {
	struct MoBasicCallInformation	*basicCallInformation;	/* OPTIONAL */
	struct LocationInformation	*locationInformation;	/* OPTIONAL */
	struct ImeiOrEsn	*equipmentIdentifier;	/* OPTIONAL */
	struct BasicServiceUsedList	*basicServiceUsedList;	/* OPTIONAL */
	SupplServiceCode_t	*supplServiceCode;	/* OPTIONAL */
	struct ThirdPartyInformation	*thirdPartyInformation;	/* OPTIONAL */
	struct CamelServiceUsed	*camelServiceUsed;	/* OPTIONAL */
	struct OperatorSpecInfoList	*operatorSpecInformation;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MobileOriginatedCall_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MobileOriginatedCall;
extern asn_SEQUENCE_specifics_t asn_SPC_MobileOriginatedCall_specs_1;
extern asn_TYPE_member_t asn_MBR_MobileOriginatedCall_1[8];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MoBasicCallInformation.h"
#include "LocationInformation.h"
#include "ImeiOrEsn.h"
#include "BasicServiceUsedList.h"
#include "ThirdPartyInformation.h"
#include "CamelServiceUsed.h"
#include "OperatorSpecInfoList.h"

#endif	/* _MobileOriginatedCall_H_ */
#include <asn_internal.h>
