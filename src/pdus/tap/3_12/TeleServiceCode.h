/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0312"
 * 	found in "TAP0312.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_12`
 */

#ifndef	_TeleServiceCode_H_
#define	_TeleServiceCode_H_


#include <asn_application.h>

/* Including external dependencies */
#include "HexString.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TeleServiceCode */
typedef HexString_t	 TeleServiceCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TeleServiceCode;
asn_struct_free_f TeleServiceCode_free;
asn_struct_print_f TeleServiceCode_print;
asn_constr_check_f TeleServiceCode_constraint;
ber_type_decoder_f TeleServiceCode_decode_ber;
der_type_encoder_f TeleServiceCode_encode_der;
xer_type_decoder_f TeleServiceCode_decode_xer;
xer_type_encoder_f TeleServiceCode_encode_xer;
jer_type_encoder_f TeleServiceCode_encode_jer;
oer_type_decoder_f TeleServiceCode_decode_oer;
oer_type_encoder_f TeleServiceCode_encode_oer;
per_type_decoder_f TeleServiceCode_decode_uper;
per_type_encoder_f TeleServiceCode_encode_uper;
per_type_decoder_f TeleServiceCode_decode_aper;
per_type_encoder_f TeleServiceCode_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _TeleServiceCode_H_ */
#include <asn_internal.h>
