/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0312"
 * 	found in "TAP0312.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_12`
 */

#ifndef	_SMSOriginator_H_
#define	_SMSOriginator_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AsciiString.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SMSOriginator */
typedef AsciiString_t	 SMSOriginator_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SMSOriginator;
asn_struct_free_f SMSOriginator_free;
asn_struct_print_f SMSOriginator_print;
asn_constr_check_f SMSOriginator_constraint;
ber_type_decoder_f SMSOriginator_decode_ber;
der_type_encoder_f SMSOriginator_encode_der;
xer_type_decoder_f SMSOriginator_decode_xer;
xer_type_encoder_f SMSOriginator_encode_xer;
jer_type_encoder_f SMSOriginator_encode_jer;
oer_type_decoder_f SMSOriginator_decode_oer;
oer_type_encoder_f SMSOriginator_encode_oer;
per_type_decoder_f SMSOriginator_decode_uper;
per_type_encoder_f SMSOriginator_encode_uper;
per_type_decoder_f SMSOriginator_decode_aper;
per_type_encoder_f SMSOriginator_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SMSOriginator_H_ */
#include <asn_internal.h>
