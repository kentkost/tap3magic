/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0309"
 * 	found in "TAP0309.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_09`
 */

#ifndef	_ContentTransaction_H_
#define	_ContentTransaction_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ContentTransactionBasicInfo;
struct ChargedPartyInformation;
struct ServingPartiesInformation;
struct ContentServiceUsed;
struct OperatorSpecInfoList;

/* ContentTransaction */
typedef struct ContentTransaction {
	struct ContentTransactionBasicInfo	*contentTransactionBasicInfo;	/* OPTIONAL */
	struct ChargedPartyInformation	*chargedPartyInformation;	/* OPTIONAL */
	struct ServingPartiesInformation	*servingPartiesInformation;	/* OPTIONAL */
	struct ContentServiceUsed	*contentServiceUsed;	/* OPTIONAL */
	struct OperatorSpecInfoList	*operatorSpecInformation;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ContentTransaction_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ContentTransaction;
extern asn_SEQUENCE_specifics_t asn_SPC_ContentTransaction_specs_1;
extern asn_TYPE_member_t asn_MBR_ContentTransaction_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ContentTransactionBasicInfo.h"
#include "ChargedPartyInformation.h"
#include "ServingPartiesInformation.h"
#include "ContentServiceUsed.h"
#include "OperatorSpecInfoList.h"

#endif	/* _ContentTransaction_H_ */
#include <asn_internal.h>
