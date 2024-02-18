/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "e:\repos\tap3magic/specifications/tap3/reading/TAP0301.asn1"
 * 	`asn1c -D e:\repos\tap3magic\src\readers\tap0301\generated`
 */

#ifndef	_ValueAddedServiceUsed_H_
#define	_ValueAddedServiceUsed_H_


#include <asn_application.h>

/* Including external dependencies */
#include "VasCode.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ChargingTimeStamp;
struct ChargeInformation;

/* ValueAddedServiceUsed */
typedef struct ValueAddedServiceUsed {
	VasCode_t	*vasCode;	/* OPTIONAL */
	struct ChargingTimeStamp	*chargingTimeStamp;	/* OPTIONAL */
	struct ChargeInformation	*chargeInformation;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ValueAddedServiceUsed_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ValueAddedServiceUsed;
extern asn_SEQUENCE_specifics_t asn_SPC_ValueAddedServiceUsed_specs_1;
extern asn_TYPE_member_t asn_MBR_ValueAddedServiceUsed_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ChargingTimeStamp.h"
#include "ChargeInformation.h"

#endif	/* _ValueAddedServiceUsed_H_ */
#include <asn_internal.h>
