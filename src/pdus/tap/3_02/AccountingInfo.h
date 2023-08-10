/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0302"
 * 	found in "TAP0302.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_02`
 */

#ifndef	_AccountingInfo_H_
#define	_AccountingInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LocalCurrency.h"
#include "TapCurrency.h"
#include "TapDecimalPlaces.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Taxation;
struct Discounting;
struct CurrencyConversion;

/* AccountingInfo */
typedef struct AccountingInfo {
	struct Taxation	*taxation;	/* OPTIONAL */
	struct Discounting	*discounting;	/* OPTIONAL */
	LocalCurrency_t	*localCurrency;	/* OPTIONAL */
	TapCurrency_t	*tapCurrency;	/* OPTIONAL */
	struct CurrencyConversion	*currencyConversion;	/* OPTIONAL */
	TapDecimalPlaces_t	*tapDecimalPlaces;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AccountingInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AccountingInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_AccountingInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_AccountingInfo_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Taxation.h"
#include "Discounting.h"
#include "CurrencyConversion.h"

#endif	/* _AccountingInfo_H_ */
#include <asn_internal.h>
