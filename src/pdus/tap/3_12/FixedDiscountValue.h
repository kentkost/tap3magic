/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0312"
 * 	found in "TAP0312.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_12`
 */

#ifndef	_FixedDiscountValue_H_
#define	_FixedDiscountValue_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DiscountValue.h"

#ifdef __cplusplus
extern "C" {
#endif

/* FixedDiscountValue */
typedef DiscountValue_t	 FixedDiscountValue_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FixedDiscountValue;
asn_struct_free_f FixedDiscountValue_free;
asn_struct_print_f FixedDiscountValue_print;
asn_constr_check_f FixedDiscountValue_constraint;
ber_type_decoder_f FixedDiscountValue_decode_ber;
der_type_encoder_f FixedDiscountValue_encode_der;
xer_type_decoder_f FixedDiscountValue_decode_xer;
xer_type_encoder_f FixedDiscountValue_encode_xer;
jer_type_encoder_f FixedDiscountValue_encode_jer;
oer_type_decoder_f FixedDiscountValue_decode_oer;
oer_type_encoder_f FixedDiscountValue_encode_oer;
per_type_decoder_f FixedDiscountValue_decode_uper;
per_type_encoder_f FixedDiscountValue_encode_uper;
per_type_decoder_f FixedDiscountValue_decode_aper;
per_type_encoder_f FixedDiscountValue_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _FixedDiscountValue_H_ */
#include <asn_internal.h>
