/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0302"
 * 	found in "TAP0303.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_03`
 */

#ifndef	_QoSInformation_H_
#define	_QoSInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "QoSDelay.h"
#include "QoSMeanThroughput.h"
#include "QoSPeakThroughput.h"
#include "QoSPrecedence.h"
#include "QoSReliability.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* QoSInformation */
typedef struct QoSInformation {
	QoSDelay_t	*delay;	/* OPTIONAL */
	QoSMeanThroughput_t	*meanThroughput;	/* OPTIONAL */
	QoSPeakThroughput_t	*peakThroughput;	/* OPTIONAL */
	QoSPrecedence_t	*precedence;	/* OPTIONAL */
	QoSReliability_t	*reliability;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} QoSInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_QoSInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_QoSInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_QoSInformation_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _QoSInformation_H_ */
#include <asn_internal.h>
