/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "e:\repos\tap3magic/specifications/tap3/reading/TAP0301.asn1"
 * 	`asn1c -D e:\repos\tap3magic\src\readers\tap0301\generated`
 */

#ifndef	_LatestCallTimeStamp_H_
#define	_LatestCallTimeStamp_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DateTimeLong.h"

#ifdef __cplusplus
extern "C" {
#endif

/* LatestCallTimeStamp */
typedef DateTimeLong_t	 LatestCallTimeStamp_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LatestCallTimeStamp;
asn_struct_free_f LatestCallTimeStamp_free;
asn_struct_print_f LatestCallTimeStamp_print;
asn_constr_check_f LatestCallTimeStamp_constraint;
ber_type_decoder_f LatestCallTimeStamp_decode_ber;
der_type_encoder_f LatestCallTimeStamp_encode_der;
xer_type_decoder_f LatestCallTimeStamp_decode_xer;
xer_type_encoder_f LatestCallTimeStamp_encode_xer;
jer_type_encoder_f LatestCallTimeStamp_encode_jer;
oer_type_decoder_f LatestCallTimeStamp_decode_oer;
oer_type_encoder_f LatestCallTimeStamp_encode_oer;
per_type_decoder_f LatestCallTimeStamp_decode_uper;
per_type_encoder_f LatestCallTimeStamp_encode_uper;
per_type_decoder_f LatestCallTimeStamp_decode_aper;
per_type_encoder_f LatestCallTimeStamp_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LatestCallTimeStamp_H_ */
#include <asn_internal.h>
