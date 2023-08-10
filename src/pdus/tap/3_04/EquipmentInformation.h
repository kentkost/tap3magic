/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0304"
 * 	found in "TAP0304.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_04`
 */

#ifndef	_EquipmentInformation_H_
#define	_EquipmentInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MobileStationClassMark.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ImeiOrEsn;

/* EquipmentInformation */
typedef struct EquipmentInformation {
	MobileStationClassMark_t	*mobileStationClassMark;	/* OPTIONAL */
	struct ImeiOrEsn	*imeiOrEsn;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EquipmentInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EquipmentInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_EquipmentInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_EquipmentInformation_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ImeiOrEsn.h"

#endif	/* _EquipmentInformation_H_ */
#include <asn_internal.h>
