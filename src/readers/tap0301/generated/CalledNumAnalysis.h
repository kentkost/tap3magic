/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "e:\repos\tap3magic/specifications/tap3/reading/TAP0301.asn1"
 * 	`asn1c -D e:\repos\tap3magic\src\readers\tap0301\generated`
 */

#ifndef	_CalledNumAnalysis_H_
#define	_CalledNumAnalysis_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CalledNumAnalysisCode.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CountryCodeTable;
struct IacTable;

/* CalledNumAnalysis */
typedef struct CalledNumAnalysis {
	CalledNumAnalysisCode_t	*calledNumAnalysisCode;	/* OPTIONAL */
	struct CountryCodeTable	*countryCodeTable;	/* OPTIONAL */
	struct IacTable	*iacTable;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CalledNumAnalysis_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CalledNumAnalysis;
extern asn_SEQUENCE_specifics_t asn_SPC_CalledNumAnalysis_specs_1;
extern asn_TYPE_member_t asn_MBR_CalledNumAnalysis_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CountryCodeTable.h"
#include "IacTable.h"

#endif	/* _CalledNumAnalysis_H_ */
#include <asn_internal.h>
