/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0304"
 * 	found in "TAP0304.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_04`
 */

#ifndef	_Mdn_H_
#define	_Mdn_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NumberString.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Mdn */
typedef NumberString_t	 Mdn_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Mdn;
asn_struct_free_f Mdn_free;
asn_struct_print_f Mdn_print;
asn_constr_check_f Mdn_constraint;
ber_type_decoder_f Mdn_decode_ber;
der_type_encoder_f Mdn_encode_der;
xer_type_decoder_f Mdn_decode_xer;
xer_type_encoder_f Mdn_encode_xer;
jer_type_encoder_f Mdn_encode_jer;
oer_type_decoder_f Mdn_decode_oer;
oer_type_encoder_f Mdn_encode_oer;
per_type_decoder_f Mdn_decode_uper;
per_type_encoder_f Mdn_encode_uper;
per_type_decoder_f Mdn_decode_aper;
per_type_encoder_f Mdn_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Mdn_H_ */
#include <asn_internal.h>
