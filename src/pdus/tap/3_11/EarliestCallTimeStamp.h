/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "TAP0311.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_11`
 */

#ifndef	_EarliestCallTimeStamp_H_
#define	_EarliestCallTimeStamp_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DateTimeLong.h"

#ifdef __cplusplus
extern "C" {
#endif

/* EarliestCallTimeStamp */
typedef DateTimeLong_t	 EarliestCallTimeStamp_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EarliestCallTimeStamp;
asn_struct_free_f EarliestCallTimeStamp_free;
asn_struct_print_f EarliestCallTimeStamp_print;
asn_constr_check_f EarliestCallTimeStamp_constraint;
ber_type_decoder_f EarliestCallTimeStamp_decode_ber;
der_type_encoder_f EarliestCallTimeStamp_encode_der;
xer_type_decoder_f EarliestCallTimeStamp_decode_xer;
xer_type_encoder_f EarliestCallTimeStamp_encode_xer;
jer_type_encoder_f EarliestCallTimeStamp_encode_jer;
oer_type_decoder_f EarliestCallTimeStamp_decode_oer;
oer_type_encoder_f EarliestCallTimeStamp_encode_oer;
per_type_decoder_f EarliestCallTimeStamp_decode_uper;
per_type_encoder_f EarliestCallTimeStamp_encode_uper;
per_type_decoder_f EarliestCallTimeStamp_decode_aper;
per_type_encoder_f EarliestCallTimeStamp_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _EarliestCallTimeStamp_H_ */
#include <asn_internal.h>
