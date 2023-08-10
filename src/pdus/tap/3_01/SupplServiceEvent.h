/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "TAP0301.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_01`
 */

#ifndef	_SupplServiceEvent_H_
#define	_SupplServiceEvent_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FraudMonitorIndicator.h"
#include "RapFileSequenceNumber.h"
#include "NetworkType.h"
#include "SimToolkitIndicator.h"
#include "OperatorSpecInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ChargeableSubscriber;
struct LocationInformation;
struct EquipmentInformation;
struct SupplServiceUsed;

/* SupplServiceEvent */
typedef struct SupplServiceEvent {
	FraudMonitorIndicator_t	*fraudMonitorIndicator;	/* OPTIONAL */
	struct ChargeableSubscriber	*chargeableSubscriber;	/* OPTIONAL */
	RapFileSequenceNumber_t	*rapFileSequenceNumber;	/* OPTIONAL */
	NetworkType_t	*networkType;	/* OPTIONAL */
	struct LocationInformation	*locationInformation;	/* OPTIONAL */
	struct EquipmentInformation	*equipmentInformation;	/* OPTIONAL */
	struct SupplServiceUsed	*supplServiceUsed;	/* OPTIONAL */
	SimToolkitIndicator_t	*simToolkitIndicator;	/* OPTIONAL */
	OperatorSpecInformation_t	*operatorSpecInformation;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SupplServiceEvent_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SupplServiceEvent;
extern asn_SEQUENCE_specifics_t asn_SPC_SupplServiceEvent_specs_1;
extern asn_TYPE_member_t asn_MBR_SupplServiceEvent_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ChargeableSubscriber.h"
#include "LocationInformation.h"
#include "EquipmentInformation.h"
#include "SupplServiceUsed.h"

#endif	/* _SupplServiceEvent_H_ */
#include <asn_internal.h>
