/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0312"
 * 	found in "TAP0312.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_12`
 */

#ifndef	_SessionChargeInformation_H_
#define	_SessionChargeInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ChargedItem.h"
#include "ExchangeRateCode.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CallTypeGroup;
struct ChargeDetail;
struct ChargeDetailList;
struct TaxInformationList;

/* SessionChargeInformation */
typedef struct SessionChargeInformation {
	ChargedItem_t	*chargedItem;	/* OPTIONAL */
	ExchangeRateCode_t	*exchangeRateCode;	/* OPTIONAL */
	struct CallTypeGroup	*callTypeGroup;	/* OPTIONAL */
	struct ChargeDetail	*chargeDetail;	/* OPTIONAL */
	struct ChargeDetailList	*chargeDetailList;	/* OPTIONAL */
	struct TaxInformationList	*taxInformationList;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SessionChargeInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SessionChargeInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_SessionChargeInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_SessionChargeInformation_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CallTypeGroup.h"
#include "ChargeDetail.h"
#include "ChargeDetailList.h"
#include "TaxInformationList.h"

#endif	/* _SessionChargeInformation_H_ */
#include <asn_internal.h>
