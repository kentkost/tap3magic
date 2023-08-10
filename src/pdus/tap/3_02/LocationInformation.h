/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0302"
 * 	found in "TAP0302.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_02`
 */

#ifndef	_LocationInformation_H_
#define	_LocationInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NetworkLocation;
struct HomeLocationInformation;
struct GeographicalLocation;

/* LocationInformation */
typedef struct LocationInformation {
	struct NetworkLocation	*networkLocation;	/* OPTIONAL */
	struct HomeLocationInformation	*homeLocationInformation;	/* OPTIONAL */
	struct GeographicalLocation	*geographicalLocation;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LocationInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LocationInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_LocationInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_LocationInformation_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NetworkLocation.h"
#include "HomeLocationInformation.h"
#include "GeographicalLocation.h"

#endif	/* _LocationInformation_H_ */
#include <asn_internal.h>
