/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0302"
 * 	found in "TAP0303.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_03`
 */

#ifndef	_SsParameters_H_
#define	_SsParameters_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AsciiString.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SsParameters */
typedef AsciiString_t	 SsParameters_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SsParameters;
asn_struct_free_f SsParameters_free;
asn_struct_print_f SsParameters_print;
asn_constr_check_f SsParameters_constraint;
ber_type_decoder_f SsParameters_decode_ber;
der_type_encoder_f SsParameters_encode_der;
xer_type_decoder_f SsParameters_decode_xer;
xer_type_encoder_f SsParameters_encode_xer;
jer_type_encoder_f SsParameters_encode_jer;
oer_type_decoder_f SsParameters_decode_oer;
oer_type_encoder_f SsParameters_encode_oer;
per_type_decoder_f SsParameters_decode_uper;
per_type_encoder_f SsParameters_encode_uper;
per_type_decoder_f SsParameters_decode_aper;
per_type_encoder_f SsParameters_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SsParameters_H_ */
#include <asn_internal.h>
