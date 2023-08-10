/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0309"
 * 	found in "TAP0309.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_09`
 */

#ifndef	_ContentTransactionBasicInfo_H_
#define	_ContentTransactionBasicInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FraudMonitorIndicator.h"
#include "RapFileSequenceNumber.h"
#include "TotalCallEventDuration.h"
#include "TransactionStatus.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct OrderPlacementTimeStamp;
struct RequestedDeliveryTimeStamp;
struct ActualDeliveryTimeStamp;

/* ContentTransactionBasicInfo */
typedef struct ContentTransactionBasicInfo {
	FraudMonitorIndicator_t	*fraudMonitorIndicator;	/* OPTIONAL */
	RapFileSequenceNumber_t	*rapFileSequenceNumber;	/* OPTIONAL */
	struct OrderPlacementTimeStamp	*orderPlacementTimeStamp;	/* OPTIONAL */
	struct RequestedDeliveryTimeStamp	*requestedDeliveryTimeStamp;	/* OPTIONAL */
	struct ActualDeliveryTimeStamp	*actualDeliveryTimeStamp;	/* OPTIONAL */
	TotalCallEventDuration_t	*totalTransactionDuration;	/* OPTIONAL */
	TransactionStatus_t	*transactionStatus;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ContentTransactionBasicInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ContentTransactionBasicInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_ContentTransactionBasicInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_ContentTransactionBasicInfo_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "OrderPlacementTimeStamp.h"
#include "RequestedDeliveryTimeStamp.h"
#include "ActualDeliveryTimeStamp.h"

#endif	/* _ContentTransactionBasicInfo_H_ */
#include <asn_internal.h>
