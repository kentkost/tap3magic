/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "E:/repos/tap3magic/specifications/tap3/TAP0311.asn1"
 */

#ifndef	_LCSQosDelivered_H_
#define	_LCSQosDelivered_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LCSTransactionStatus.h"
#include "HorizontalAccuracyDelivered.h"
#include "VerticalAccuracyDelivered.h"
#include "ResponseTime.h"
#include "PositioningMethod.h"
#include "TrackingPeriod.h"
#include "TrackingFrequency.h"
#include "AgeOfLocation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LCSQosDelivered */
typedef struct LCSQosDelivered {
	LCSTransactionStatus_t	*lCSTransactionStatus;	/* OPTIONAL */
	HorizontalAccuracyDelivered_t	*horizontalAccuracyDelivered;	/* OPTIONAL */
	VerticalAccuracyDelivered_t	*verticalAccuracyDelivered;	/* OPTIONAL */
	ResponseTime_t	*responseTime;	/* OPTIONAL */
	PositioningMethod_t	*positioningMethod;	/* OPTIONAL */
	TrackingPeriod_t	*trackingPeriod;	/* OPTIONAL */
	TrackingFrequency_t	*trackingFrequency;	/* OPTIONAL */
	AgeOfLocation_t	*ageOfLocation;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LCSQosDelivered_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LCSQosDelivered;
extern asn_SEQUENCE_specifics_t asn_SPC_LCSQosDelivered_specs_1;
extern asn_TYPE_member_t asn_MBR_LCSQosDelivered_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _LCSQosDelivered_H_ */
#include <asn_internal.h>
