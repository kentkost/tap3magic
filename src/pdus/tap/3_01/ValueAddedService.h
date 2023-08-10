/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "TAP0301.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_01`
 */

#ifndef	_ValueAddedService_H_
#define	_ValueAddedService_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FraudMonitorIndicator.h"
#include "RapFileSequenceNumber.h"
#include "NetworkType.h"
#include "OperatorSpecInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ScuVasChargeableSubscriber;
struct ValueAddedServiceUsed;

/* ValueAddedService */
typedef struct ValueAddedService {
	FraudMonitorIndicator_t	*fraudMonitorIndicator;	/* OPTIONAL */
	struct ScuVasChargeableSubscriber	*chargeableSubscriber;	/* OPTIONAL */
	RapFileSequenceNumber_t	*rapFileSequenceNumber;	/* OPTIONAL */
	NetworkType_t	*networkType;	/* OPTIONAL */
	struct ValueAddedServiceUsed	*valueAddedServiceUsed;	/* OPTIONAL */
	OperatorSpecInformation_t	*operatorSpecInformation;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ValueAddedService_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ValueAddedService;
extern asn_SEQUENCE_specifics_t asn_SPC_ValueAddedService_specs_1;
extern asn_TYPE_member_t asn_MBR_ValueAddedService_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ScuVasChargeableSubscriber.h"
#include "ValueAddedServiceUsed.h"

#endif	/* _ValueAddedService_H_ */
#include <asn_internal.h>
