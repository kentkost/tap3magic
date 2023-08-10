/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0302"
 * 	found in "TAP0302.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_02`
 */

#ifndef	_CompletionTimeStamp_H_
#define	_CompletionTimeStamp_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DateTime.h"

#ifdef __cplusplus
extern "C" {
#endif

/* CompletionTimeStamp */
typedef DateTime_t	 CompletionTimeStamp_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CompletionTimeStamp;
asn_struct_free_f CompletionTimeStamp_free;
asn_struct_print_f CompletionTimeStamp_print;
asn_constr_check_f CompletionTimeStamp_constraint;
ber_type_decoder_f CompletionTimeStamp_decode_ber;
der_type_encoder_f CompletionTimeStamp_encode_der;
xer_type_decoder_f CompletionTimeStamp_decode_xer;
xer_type_encoder_f CompletionTimeStamp_encode_xer;
jer_type_encoder_f CompletionTimeStamp_encode_jer;
oer_type_decoder_f CompletionTimeStamp_decode_oer;
oer_type_encoder_f CompletionTimeStamp_encode_oer;
per_type_decoder_f CompletionTimeStamp_decode_uper;
per_type_encoder_f CompletionTimeStamp_encode_uper;
per_type_decoder_f CompletionTimeStamp_decode_aper;
per_type_encoder_f CompletionTimeStamp_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _CompletionTimeStamp_H_ */
#include <asn_internal.h>
