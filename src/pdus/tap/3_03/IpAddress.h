/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0302"
 * 	found in "TAP0303.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_03`
 */

#ifndef	_IpAddress_H_
#define	_IpAddress_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IPTextV4Address.h"
#include "IPTextV6Address.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IpAddress_PR {
	IpAddress_PR_NOTHING,	/* No components present */
	IpAddress_PR_iPTextV4Address,
	IpAddress_PR_iPTextV6Address
} IpAddress_PR;

/* IpAddress */
typedef struct IpAddress {
	IpAddress_PR present;
	union IpAddress_u {
		IPTextV4Address_t	 iPTextV4Address;
		IPTextV6Address_t	 iPTextV6Address;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IpAddress_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IpAddress;
extern asn_CHOICE_specifics_t asn_SPC_IpAddress_specs_1;
extern asn_TYPE_member_t asn_MBR_IpAddress_1[2];
extern asn_per_constraints_t asn_PER_type_IpAddress_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _IpAddress_H_ */
#include <asn_internal.h>
