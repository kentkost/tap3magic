/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0302"
 * 	found in "TAP0303.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_03`
 */

#ifndef	_ChargeDetail_H_
#define	_ChargeDetail_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ChargeType.h"
#include "Charge.h"
#include "ChargeableUnits.h"
#include "ChargedUnits.h"
#include "DayCategory.h"
#include "DayCategorySubtype.h"
#include "TimeBand.h"
#include "TimeBandSubtype.h"
#include "MultiRateIndicator.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ChargingTimeStamp;

/* ChargeDetail */
typedef struct ChargeDetail {
	ChargeType_t	*chargeType;	/* OPTIONAL */
	Charge_t	*charge;	/* OPTIONAL */
	ChargeableUnits_t	*chargeableUnits;	/* OPTIONAL */
	ChargedUnits_t	*chargedUnits;	/* OPTIONAL */
	struct ChargingTimeStamp	*chargeDetailTimeStamp;	/* OPTIONAL */
	DayCategory_t	*dayCategory;	/* OPTIONAL */
	DayCategorySubtype_t	*dayCategorySubtype;	/* OPTIONAL */
	TimeBand_t	*timeBand;	/* OPTIONAL */
	TimeBandSubtype_t	*timeBandSubtype;	/* OPTIONAL */
	MultiRateIndicator_t	*multiRateIndicator;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ChargeDetail_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ChargeDetail;
extern asn_SEQUENCE_specifics_t asn_SPC_ChargeDetail_specs_1;
extern asn_TYPE_member_t asn_MBR_ChargeDetail_1[10];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ChargingTimeStamp.h"

#endif	/* _ChargeDetail_H_ */
#include <asn_internal.h>
