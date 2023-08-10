/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "TAP0311.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_11`
 */

#ifndef	_OrderPlacedTimeStamp_H_
#define	_OrderPlacedTimeStamp_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DateTime.h"

#ifdef __cplusplus
extern "C" {
#endif

/* OrderPlacedTimeStamp */
typedef DateTime_t	 OrderPlacedTimeStamp_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OrderPlacedTimeStamp;
asn_struct_free_f OrderPlacedTimeStamp_free;
asn_struct_print_f OrderPlacedTimeStamp_print;
asn_constr_check_f OrderPlacedTimeStamp_constraint;
ber_type_decoder_f OrderPlacedTimeStamp_decode_ber;
der_type_encoder_f OrderPlacedTimeStamp_encode_der;
xer_type_decoder_f OrderPlacedTimeStamp_decode_xer;
xer_type_encoder_f OrderPlacedTimeStamp_encode_xer;
jer_type_encoder_f OrderPlacedTimeStamp_encode_jer;
oer_type_decoder_f OrderPlacedTimeStamp_decode_oer;
oer_type_encoder_f OrderPlacedTimeStamp_encode_oer;
per_type_decoder_f OrderPlacedTimeStamp_decode_uper;
per_type_encoder_f OrderPlacedTimeStamp_encode_uper;
per_type_decoder_f OrderPlacedTimeStamp_decode_aper;
per_type_encoder_f OrderPlacedTimeStamp_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _OrderPlacedTimeStamp_H_ */
#include <asn_internal.h>
