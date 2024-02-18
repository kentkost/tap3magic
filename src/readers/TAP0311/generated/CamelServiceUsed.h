/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "E:/repos/tap3magic/specifications/tap3/TAP0311.asn1"
 */

#ifndef	_CamelServiceUsed_H_
#define	_CamelServiceUsed_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CamelServiceLevel.h"
#include "CamelServiceKey.h"
#include "DefaultCallHandlingIndicator.h"
#include "ExchangeRateCode.h"
#include "CamelInvocationFee.h"
#include "CseInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TaxInformationList;
struct DiscountInformation;
struct ThreeGcamelDestination;

/* CamelServiceUsed */
typedef struct CamelServiceUsed {
	CamelServiceLevel_t	*camelServiceLevel;	/* OPTIONAL */
	CamelServiceKey_t	*camelServiceKey;	/* OPTIONAL */
	DefaultCallHandlingIndicator_t	*defaultCallHandling;	/* OPTIONAL */
	ExchangeRateCode_t	*exchangeRateCode;	/* OPTIONAL */
	struct TaxInformationList	*taxInformation;	/* OPTIONAL */
	struct DiscountInformation	*discountInformation;	/* OPTIONAL */
	CamelInvocationFee_t	*camelInvocationFee;	/* OPTIONAL */
	struct ThreeGcamelDestination	*threeGcamelDestination;	/* OPTIONAL */
	CseInformation_t	*cseInformation;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CamelServiceUsed_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CamelServiceUsed;
extern asn_SEQUENCE_specifics_t asn_SPC_CamelServiceUsed_specs_1;
extern asn_TYPE_member_t asn_MBR_CamelServiceUsed_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TaxInformationList.h"
#include "DiscountInformation.h"
#include "ThreeGcamelDestination.h"

#endif	/* _CamelServiceUsed_H_ */
#include <asn_internal.h>
