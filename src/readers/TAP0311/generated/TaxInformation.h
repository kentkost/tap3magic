/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "E:/repos/tap3magic/specifications/tap3/TAP0311.asn1"
 */

#ifndef	_TaxInformation_H_
#define	_TaxInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TaxCode.h"
#include "TaxValue.h"
#include "TaxableAmount.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TaxInformation */
typedef struct TaxInformation {
	TaxCode_t	*taxCode;	/* OPTIONAL */
	TaxValue_t	*taxValue;	/* OPTIONAL */
	TaxableAmount_t	*taxableAmount;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TaxInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TaxInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_TaxInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_TaxInformation_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _TaxInformation_H_ */
#include <asn_internal.h>
