/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "TAP0311.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_11`
 */

#ifndef	_TaxValue_H_
#define	_TaxValue_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AbsoluteAmount.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TaxValue */
typedef AbsoluteAmount_t	 TaxValue_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TaxValue;
asn_struct_free_f TaxValue_free;
asn_struct_print_f TaxValue_print;
asn_constr_check_f TaxValue_constraint;
ber_type_decoder_f TaxValue_decode_ber;
der_type_encoder_f TaxValue_encode_der;
xer_type_decoder_f TaxValue_decode_xer;
xer_type_encoder_f TaxValue_encode_xer;
jer_type_encoder_f TaxValue_encode_jer;
oer_type_decoder_f TaxValue_decode_oer;
oer_type_encoder_f TaxValue_encode_oer;
per_type_decoder_f TaxValue_decode_uper;
per_type_encoder_f TaxValue_encode_uper;
per_type_decoder_f TaxValue_decode_aper;
per_type_encoder_f TaxValue_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _TaxValue_H_ */
#include <asn_internal.h>
