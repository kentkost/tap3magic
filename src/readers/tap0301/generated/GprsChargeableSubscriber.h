/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "e:\repos\tap3magic/specifications/tap3/reading/TAP0301.asn1"
 * 	`asn1c -D e:\repos\tap3magic\src\readers\tap0301\generated`
 */

#ifndef	_GprsChargeableSubscriber_H_
#define	_GprsChargeableSubscriber_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Imsi.h"
#include "Msisdn.h"
#include "PdpType.h"
#include "PdpAddress.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GprsChargeableSubscriber */
typedef struct GprsChargeableSubscriber {
	Imsi_t	*imsi;	/* OPTIONAL */
	Msisdn_t	*msisdn;	/* OPTIONAL */
	PdpType_t	*pdpType;	/* OPTIONAL */
	PdpAddress_t	*pdpAddress;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GprsChargeableSubscriber_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GprsChargeableSubscriber;
extern asn_SEQUENCE_specifics_t asn_SPC_GprsChargeableSubscriber_specs_1;
extern asn_TYPE_member_t asn_MBR_GprsChargeableSubscriber_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _GprsChargeableSubscriber_H_ */
#include <asn_internal.h>
