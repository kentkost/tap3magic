/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "TAP0311.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_11`
 */

#ifndef	_TapCurrency_H_
#define	_TapCurrency_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Currency.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TapCurrency */
typedef Currency_t	 TapCurrency_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TapCurrency;
asn_struct_free_f TapCurrency_free;
asn_struct_print_f TapCurrency_print;
asn_constr_check_f TapCurrency_constraint;
ber_type_decoder_f TapCurrency_decode_ber;
der_type_encoder_f TapCurrency_encode_der;
xer_type_decoder_f TapCurrency_decode_xer;
xer_type_encoder_f TapCurrency_encode_xer;
jer_type_encoder_f TapCurrency_encode_jer;
oer_type_decoder_f TapCurrency_decode_oer;
oer_type_encoder_f TapCurrency_encode_oer;
per_type_decoder_f TapCurrency_decode_uper;
per_type_encoder_f TapCurrency_encode_uper;
per_type_decoder_f TapCurrency_decode_aper;
per_type_encoder_f TapCurrency_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _TapCurrency_H_ */
#include <asn_internal.h>
