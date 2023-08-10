/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0302"
 * 	found in "TAP0303.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_03`
 */

#ifndef	_MoBasicCallInformation_H_
#define	_MoBasicCallInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FraudMonitorIndicator.h"
#include "RapFileSequenceNumber.h"
#include "NetworkType.h"
#include "DestinationNetwork.h"
#include "TotalCallEventDuration.h"
#include "SimToolkitIndicator.h"
#include "CauseForTerm.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ChargeableSubscriber;
struct Destination;
struct CallEventStartTimeStamp;

/* MoBasicCallInformation */
typedef struct MoBasicCallInformation {
	FraudMonitorIndicator_t	*fraudMonitorIndicator;	/* OPTIONAL */
	struct ChargeableSubscriber	*chargeableSubscriber;	/* OPTIONAL */
	RapFileSequenceNumber_t	*rapFileSequenceNumber;	/* OPTIONAL */
	NetworkType_t	*networkType;	/* OPTIONAL */
	struct Destination	*destination;	/* OPTIONAL */
	DestinationNetwork_t	*destinationNetwork;	/* OPTIONAL */
	struct CallEventStartTimeStamp	*callEventStartTimeStamp;	/* OPTIONAL */
	TotalCallEventDuration_t	*totalCallEventDuration;	/* OPTIONAL */
	SimToolkitIndicator_t	*simToolkitIndicator;	/* OPTIONAL */
	CauseForTerm_t	*causeForTerm;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MoBasicCallInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MoBasicCallInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_MoBasicCallInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_MoBasicCallInformation_1[10];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ChargeableSubscriber.h"
#include "Destination.h"
#include "CallEventStartTimeStamp.h"

#endif	/* _MoBasicCallInformation_H_ */
#include <asn_internal.h>
