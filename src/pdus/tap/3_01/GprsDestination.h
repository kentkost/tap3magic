/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "TAP0301.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_01`
 */

#ifndef	_GprsDestination_H_
#define	_GprsDestination_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AccessPointName.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RemotePdpAddressList;

/* GprsDestination */
typedef struct GprsDestination {
	AccessPointName_t	*accessPointName;	/* OPTIONAL */
	struct RemotePdpAddressList	*remotePdpAddressList;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GprsDestination_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GprsDestination;
extern asn_SEQUENCE_specifics_t asn_SPC_GprsDestination_specs_1;
extern asn_TYPE_member_t asn_MBR_GprsDestination_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RemotePdpAddressList.h"

#endif	/* _GprsDestination_H_ */
#include <asn_internal.h>
