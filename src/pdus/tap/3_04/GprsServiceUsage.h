/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0304"
 * 	found in "TAP0304.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_04`
 */

#ifndef	_GprsServiceUsage_H_
#define	_GprsServiceUsage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DataVolumeIncoming.h"
#include "DataVolumeOutgoing.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ChargingTimeStamp;
struct QoSRequested;
struct QoSUsed;

/* GprsServiceUsage */
typedef struct GprsServiceUsage {
	struct ChargingTimeStamp	*gprsUsageTimeStamp;	/* OPTIONAL */
	struct QoSRequested	*qosRequested;	/* OPTIONAL */
	struct QoSUsed	*qosUsed;	/* OPTIONAL */
	DataVolumeIncoming_t	*dataVolumeIncoming;	/* OPTIONAL */
	DataVolumeOutgoing_t	*dataVolumeOutgoing;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GprsServiceUsage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GprsServiceUsage;
extern asn_SEQUENCE_specifics_t asn_SPC_GprsServiceUsage_specs_1;
extern asn_TYPE_member_t asn_MBR_GprsServiceUsage_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ChargingTimeStamp.h"
#include "QoSRequested.h"
#include "QoSUsed.h"

#endif	/* _GprsServiceUsage_H_ */
#include <asn_internal.h>
