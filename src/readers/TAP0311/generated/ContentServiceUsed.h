/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "E:/repos/tap3magic/specifications/tap3/TAP0311.asn1"
 */

#ifndef	_ContentServiceUsed_H_
#define	_ContentServiceUsed_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ContentTransactionCode.h"
#include "ContentTransactionType.h"
#include "ObjectType.h"
#include "TransactionDescriptionSupp.h"
#include "TransactionShortDescription.h"
#include "TransactionDetailDescription.h"
#include "TransactionIdentifier.h"
#include "TransactionAuthCode.h"
#include "DataVolumeIncoming.h"
#include "DataVolumeOutgoing.h"
#include "TotalDataVolume.h"
#include "ChargeRefundIndicator.h"
#include "ContentChargingPoint.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ChargeInformationList;
struct AdvisedChargeInformation;

/* ContentServiceUsed */
typedef struct ContentServiceUsed {
	ContentTransactionCode_t	*contentTransactionCode;	/* OPTIONAL */
	ContentTransactionType_t	*contentTransactionType;	/* OPTIONAL */
	ObjectType_t	*objectType;	/* OPTIONAL */
	TransactionDescriptionSupp_t	*transactionDescriptionSupp;	/* OPTIONAL */
	TransactionShortDescription_t	*transactionShortDescription;	/* OPTIONAL */
	TransactionDetailDescription_t	*transactionDetailDescription;	/* OPTIONAL */
	TransactionIdentifier_t	*transactionIdentifier;	/* OPTIONAL */
	TransactionAuthCode_t	*transactionAuthCode;	/* OPTIONAL */
	DataVolumeIncoming_t	*dataVolumeIncoming;	/* OPTIONAL */
	DataVolumeOutgoing_t	*dataVolumeOutgoing;	/* OPTIONAL */
	TotalDataVolume_t	*totalDataVolume;	/* OPTIONAL */
	ChargeRefundIndicator_t	*chargeRefundIndicator;	/* OPTIONAL */
	ContentChargingPoint_t	*contentChargingPoint;	/* OPTIONAL */
	struct ChargeInformationList	*chargeInformationList;	/* OPTIONAL */
	struct AdvisedChargeInformation	*advisedChargeInformation;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ContentServiceUsed_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ContentServiceUsed;
extern asn_SEQUENCE_specifics_t asn_SPC_ContentServiceUsed_specs_1;
extern asn_TYPE_member_t asn_MBR_ContentServiceUsed_1[15];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ChargeInformationList.h"
#include "AdvisedChargeInformation.h"

#endif	/* _ContentServiceUsed_H_ */
#include <asn_internal.h>
