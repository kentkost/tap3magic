/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "TAP0311.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_11`
 */

#ifndef	_Esn_H_
#define	_Esn_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NumberString.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Esn */
typedef NumberString_t	 Esn_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Esn;
asn_struct_free_f Esn_free;
asn_struct_print_f Esn_print;
asn_constr_check_f Esn_constraint;
ber_type_decoder_f Esn_decode_ber;
der_type_encoder_f Esn_encode_der;
xer_type_decoder_f Esn_decode_xer;
xer_type_encoder_f Esn_encode_xer;
jer_type_encoder_f Esn_encode_jer;
oer_type_decoder_f Esn_decode_oer;
oer_type_encoder_f Esn_encode_oer;
per_type_decoder_f Esn_decode_uper;
per_type_encoder_f Esn_encode_uper;
per_type_decoder_f Esn_decode_aper;
per_type_encoder_f Esn_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Esn_H_ */
#include <asn_internal.h>
