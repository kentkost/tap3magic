/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0309"
 * 	found in "TAP0309.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_09`
 */

#ifndef	_HexString_H_
#define	_HexString_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* HexString */
typedef OCTET_STRING_t	 HexString_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HexString;
asn_struct_free_f HexString_free;
asn_struct_print_f HexString_print;
asn_constr_check_f HexString_constraint;
ber_type_decoder_f HexString_decode_ber;
der_type_encoder_f HexString_encode_der;
xer_type_decoder_f HexString_decode_xer;
xer_type_encoder_f HexString_encode_xer;
jer_type_encoder_f HexString_encode_jer;
oer_type_decoder_f HexString_decode_oer;
oer_type_encoder_f HexString_encode_oer;
per_type_decoder_f HexString_decode_uper;
per_type_encoder_f HexString_encode_uper;
per_type_decoder_f HexString_decode_aper;
per_type_encoder_f HexString_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _HexString_H_ */
#include <asn_internal.h>
