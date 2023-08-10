/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0304"
 * 	found in "TAP0304.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_04`
 */

#ifndef	_MtBasicCallInformation_H_
#define	_MtBasicCallInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FraudMonitorIndicator.h"
#include "RapFileSequenceNumber.h"
#include "NetworkType.h"
#include "OriginatingNetwork.h"
#include "TotalCallEventDuration.h"
#include "SimToolkitIndicator.h"
#include "CauseForTerm.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ChargeableSubscriber;
struct CallOriginator;
struct CallEventStartTimeStamp;

/* MtBasicCallInformation */
typedef struct MtBasicCallInformation {
	FraudMonitorIndicator_t	*fraudMonitorIndicator;	/* OPTIONAL */
	struct ChargeableSubscriber	*chargeableSubscriber;	/* OPTIONAL */
	RapFileSequenceNumber_t	*rapFileSequenceNumber;	/* OPTIONAL */
	NetworkType_t	*networkType;	/* OPTIONAL */
	struct CallOriginator	*callOriginator;	/* OPTIONAL */
	OriginatingNetwork_t	*originatingNetwork;	/* OPTIONAL */
	struct CallEventStartTimeStamp	*callEventStartTimeStamp;	/* OPTIONAL */
	TotalCallEventDuration_t	*totalCallEventDuration;	/* OPTIONAL */
	SimToolkitIndicator_t	*simToolkitIndicator;	/* OPTIONAL */
	CauseForTerm_t	*causeForTerm;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MtBasicCallInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MtBasicCallInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_MtBasicCallInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_MtBasicCallInformation_1[10];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ChargeableSubscriber.h"
#include "CallOriginator.h"
#include "CallEventStartTimeStamp.h"

#endif	/* _MtBasicCallInformation_H_ */
#include <asn_internal.h>
