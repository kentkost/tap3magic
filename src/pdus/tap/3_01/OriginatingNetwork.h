/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "TAP0301.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_01`
 */

#ifndef	_OriginatingNetwork_H_
#define	_OriginatingNetwork_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NetworkId.h"

#ifdef __cplusplus
extern "C" {
#endif

/* OriginatingNetwork */
typedef NetworkId_t	 OriginatingNetwork_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OriginatingNetwork;
asn_struct_free_f OriginatingNetwork_free;
asn_struct_print_f OriginatingNetwork_print;
asn_constr_check_f OriginatingNetwork_constraint;
ber_type_decoder_f OriginatingNetwork_decode_ber;
der_type_encoder_f OriginatingNetwork_encode_der;
xer_type_decoder_f OriginatingNetwork_decode_xer;
xer_type_encoder_f OriginatingNetwork_encode_xer;
jer_type_encoder_f OriginatingNetwork_encode_jer;
oer_type_decoder_f OriginatingNetwork_decode_oer;
oer_type_encoder_f OriginatingNetwork_encode_oer;
per_type_decoder_f OriginatingNetwork_decode_uper;
per_type_encoder_f OriginatingNetwork_encode_uper;
per_type_decoder_f OriginatingNetwork_decode_aper;
per_type_encoder_f OriginatingNetwork_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _OriginatingNetwork_H_ */
#include <asn_internal.h>
