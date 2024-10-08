/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "e:\repos\tap3magic/specifications/tap3/reading/TAP0301.asn1"
 * 	`asn1c -D e:\repos\tap3magic\src\readers\tap0301\generated`
 */

#ifndef	_GeographicalLocation_H_
#define	_GeographicalLocation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ServingBid.h"
#include "LocationDescription.h"
#include "Longitude.h"
#include "Latitude.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GeographicalLocation */
typedef struct GeographicalLocation {
	ServingBid_t	*servingBid;	/* OPTIONAL */
	LocationDescription_t	*servingLocationDescription;	/* OPTIONAL */
	Longitude_t	*longitude;	/* OPTIONAL */
	Latitude_t	*latitude;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GeographicalLocation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GeographicalLocation;
extern asn_SEQUENCE_specifics_t asn_SPC_GeographicalLocation_specs_1;
extern asn_TYPE_member_t asn_MBR_GeographicalLocation_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _GeographicalLocation_H_ */
#include <asn_internal.h>
