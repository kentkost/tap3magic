/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "E:/repos/tap3magic/specifications/tap3/TAP0311.asn1"
 */

#ifndef	_LCSRequestTimestamp_H_
#define	_LCSRequestTimestamp_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DateTime.h"

#ifdef __cplusplus
extern "C" {
#endif

/* LCSRequestTimestamp */
typedef DateTime_t	 LCSRequestTimestamp_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LCSRequestTimestamp;
asn_struct_free_f LCSRequestTimestamp_free;
asn_struct_print_f LCSRequestTimestamp_print;
asn_constr_check_f LCSRequestTimestamp_constraint;
ber_type_decoder_f LCSRequestTimestamp_decode_ber;
der_type_encoder_f LCSRequestTimestamp_encode_der;
xer_type_decoder_f LCSRequestTimestamp_decode_xer;
xer_type_encoder_f LCSRequestTimestamp_encode_xer;
jer_type_encoder_f LCSRequestTimestamp_encode_jer;
oer_type_decoder_f LCSRequestTimestamp_decode_oer;
oer_type_encoder_f LCSRequestTimestamp_encode_oer;
per_type_decoder_f LCSRequestTimestamp_decode_uper;
per_type_encoder_f LCSRequestTimestamp_encode_uper;
per_type_decoder_f LCSRequestTimestamp_decode_aper;
per_type_encoder_f LCSRequestTimestamp_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LCSRequestTimestamp_H_ */
#include <asn_internal.h>
