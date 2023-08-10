/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "TAP0301.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_01`
 */

#ifndef	_ScuBasicInformation_H_
#define	_ScuBasicInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ChargedPartyStatus.h"
#include "ClirIndicator.h"
#include "OriginatingNetwork.h"
#include "DestinationNetwork.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ScuVasChargeableSubscriber;
struct NonChargedParty;

/* ScuBasicInformation */
typedef struct ScuBasicInformation {
	struct ScuVasChargeableSubscriber	*chargeableSubscriber;	/* OPTIONAL */
	ChargedPartyStatus_t	*chargedPartyStatus;	/* OPTIONAL */
	struct NonChargedParty	*nonChargedParty;	/* OPTIONAL */
	ClirIndicator_t	*clirIndicator;	/* OPTIONAL */
	OriginatingNetwork_t	*originatingNetwork;	/* OPTIONAL */
	DestinationNetwork_t	*destinationNetwork;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ScuBasicInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ScuBasicInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_ScuBasicInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_ScuBasicInformation_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ScuVasChargeableSubscriber.h"
#include "NonChargedParty.h"

#endif	/* _ScuBasicInformation_H_ */
#include <asn_internal.h>
