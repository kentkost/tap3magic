/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0309"
 * 	found in "TAP0309.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_09`
 */

#ifndef	_RecEntityId_H_
#define	_RecEntityId_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MscId.h"
#include "Msisdn.h"
#include "GsnAddress.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RecEntityId_PR {
	RecEntityId_PR_NOTHING,	/* No components present */
	RecEntityId_PR_mscId,
	RecEntityId_PR_msisdn,
	RecEntityId_PR_gsnaddress
} RecEntityId_PR;

/* RecEntityId */
typedef struct RecEntityId {
	RecEntityId_PR present;
	union RecEntityId_u {
		MscId_t	 mscId;
		Msisdn_t	 msisdn;
		GsnAddress_t	 gsnaddress;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RecEntityId_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RecEntityId;
extern asn_CHOICE_specifics_t asn_SPC_RecEntityId_specs_1;
extern asn_TYPE_member_t asn_MBR_RecEntityId_1[3];
extern asn_per_constraints_t asn_PER_type_RecEntityId_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RecEntityId_H_ */
#include <asn_internal.h>
