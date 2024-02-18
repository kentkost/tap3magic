/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "E:/repos/tap3magic/specifications/tap3/TAP0311.asn1"
 */

#ifndef	_TaxInformationList_H_
#define	_TaxInformationList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TaxInformation;

/* TaxInformationList */
typedef struct TaxInformationList {
	A_SEQUENCE_OF(struct TaxInformation) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TaxInformationList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TaxInformationList;
extern asn_SET_OF_specifics_t asn_SPC_TaxInformationList_specs_1;
extern asn_TYPE_member_t asn_MBR_TaxInformationList_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TaxInformation.h"

#endif	/* _TaxInformationList_H_ */
#include <asn_internal.h>
