/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0302"
 * 	found in "TAP0303.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_03`
 */

#ifndef	_GprsNetworkLocation_H_
#define	_GprsNetworkLocation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LocationArea.h"
#include "CellId.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RecEntityCodeList;

/* GprsNetworkLocation */
typedef struct GprsNetworkLocation {
	struct RecEntityCodeList	*recEntity;	/* OPTIONAL */
	LocationArea_t	*locationArea;	/* OPTIONAL */
	CellId_t	*cellId;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GprsNetworkLocation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GprsNetworkLocation;
extern asn_SEQUENCE_specifics_t asn_SPC_GprsNetworkLocation_specs_1;
extern asn_TYPE_member_t asn_MBR_GprsNetworkLocation_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RecEntityCodeList.h"

#endif	/* _GprsNetworkLocation_H_ */
#include <asn_internal.h>
