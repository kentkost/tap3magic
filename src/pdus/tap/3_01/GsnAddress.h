/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "TAP0301.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_01`
 */

#ifndef	_GsnAddress_H_
#define	_GsnAddress_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IpAddress.h"

#ifdef __cplusplus
extern "C" {
#endif

/* GsnAddress */
typedef IpAddress_t	 GsnAddress_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_GsnAddress_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_GsnAddress;
asn_struct_free_f GsnAddress_free;
asn_struct_print_f GsnAddress_print;
asn_constr_check_f GsnAddress_constraint;
ber_type_decoder_f GsnAddress_decode_ber;
der_type_encoder_f GsnAddress_encode_der;
xer_type_decoder_f GsnAddress_decode_xer;
xer_type_encoder_f GsnAddress_encode_xer;
jer_type_encoder_f GsnAddress_encode_jer;
oer_type_decoder_f GsnAddress_decode_oer;
oer_type_encoder_f GsnAddress_encode_oer;
per_type_decoder_f GsnAddress_decode_uper;
per_type_encoder_f GsnAddress_encode_uper;
per_type_decoder_f GsnAddress_decode_aper;
per_type_encoder_f GsnAddress_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _GsnAddress_H_ */
#include <asn_internal.h>
