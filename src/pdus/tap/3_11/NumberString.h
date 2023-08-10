/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "TAP0311.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_11`
 */

#ifndef	_NumberString_H_
#define	_NumberString_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NumberString */
typedef OCTET_STRING_t	 NumberString_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NumberString;
asn_struct_free_f NumberString_free;
asn_struct_print_f NumberString_print;
asn_constr_check_f NumberString_constraint;
ber_type_decoder_f NumberString_decode_ber;
der_type_encoder_f NumberString_encode_der;
xer_type_decoder_f NumberString_decode_xer;
xer_type_encoder_f NumberString_encode_xer;
jer_type_encoder_f NumberString_encode_jer;
oer_type_decoder_f NumberString_decode_oer;
oer_type_encoder_f NumberString_encode_oer;
per_type_decoder_f NumberString_decode_uper;
per_type_encoder_f NumberString_encode_uper;
per_type_decoder_f NumberString_decode_aper;
per_type_encoder_f NumberString_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NumberString_H_ */
#include <asn_internal.h>
