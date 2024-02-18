/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "e:\repos\tap3magic/specifications/tap3/reading/TAP0301.asn1"
 * 	`asn1c -D e:\repos\tap3magic\src\readers\tap0301\generated`
 */

#ifndef	_HomeLocationInformation_H_
#define	_HomeLocationInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "HomeBid.h"
#include "LocationDescription.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* HomeLocationInformation */
typedef struct HomeLocationInformation {
	HomeBid_t	*homeBid;	/* OPTIONAL */
	LocationDescription_t	*homeLocationDescription;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HomeLocationInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HomeLocationInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_HomeLocationInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_HomeLocationInformation_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _HomeLocationInformation_H_ */
#include <asn_internal.h>
