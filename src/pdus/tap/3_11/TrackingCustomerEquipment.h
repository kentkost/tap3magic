/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "TAP0311.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_11`
 */

#ifndef	_TrackingCustomerEquipment_H_
#define	_TrackingCustomerEquipment_H_


#include <asn_application.h>

/* Including external dependencies */
#include "EquipmentIdType.h"
#include "EquipmentId.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TrackingCustomerEquipment */
typedef struct TrackingCustomerEquipment {
	EquipmentIdType_t	*equipmentIdType;	/* OPTIONAL */
	EquipmentId_t	*equipmentId;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TrackingCustomerEquipment_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TrackingCustomerEquipment;
extern asn_SEQUENCE_specifics_t asn_SPC_TrackingCustomerEquipment_specs_1;
extern asn_TYPE_member_t asn_MBR_TrackingCustomerEquipment_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _TrackingCustomerEquipment_H_ */
#include <asn_internal.h>
