/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0309"
 * 	found in "TAP0309.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_09`
 */

#ifndef	_GprsBasicCallInformation_H_
#define	_GprsBasicCallInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FraudMonitorIndicator.h"
#include "RapFileSequenceNumber.h"
#include "NetworkType.h"
#include "TotalCallEventDuration.h"
#include "CauseForTerm.h"
#include "PartialTypeIndicator.h"
#include "NetworkInitPDPContext.h"
#include "ChargingId.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GprsChargeableSubscriber;
struct GprsDestination;
struct CallEventStartTimeStamp;
struct PDPContextStartTimestamp;

/* GprsBasicCallInformation */
typedef struct GprsBasicCallInformation {
	FraudMonitorIndicator_t	*fraudMonitorIndicator;	/* OPTIONAL */
	struct GprsChargeableSubscriber	*chargeableSubscriber;	/* OPTIONAL */
	RapFileSequenceNumber_t	*rapFileSequenceNumber;	/* OPTIONAL */
	NetworkType_t	*networkType;	/* OPTIONAL */
	struct GprsDestination	*gprsDestination;	/* OPTIONAL */
	struct CallEventStartTimeStamp	*callEventStartTimeStamp;	/* OPTIONAL */
	TotalCallEventDuration_t	*totalCallEventDuration;	/* OPTIONAL */
	CauseForTerm_t	*causeForTerm;	/* OPTIONAL */
	PartialTypeIndicator_t	*partialTypeIndicator;	/* OPTIONAL */
	struct PDPContextStartTimestamp	*pDPContextStartTimestamp;	/* OPTIONAL */
	NetworkInitPDPContext_t	*networkInitPDPContext;	/* OPTIONAL */
	ChargingId_t	*chargingId;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GprsBasicCallInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GprsBasicCallInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_GprsBasicCallInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_GprsBasicCallInformation_1[12];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GprsChargeableSubscriber.h"
#include "GprsDestination.h"
#include "CallEventStartTimeStamp.h"
#include "PDPContextStartTimestamp.h"

#endif	/* _GprsBasicCallInformation_H_ */
#include <asn_internal.h>
