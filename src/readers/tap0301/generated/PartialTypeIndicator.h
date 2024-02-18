/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "e:\repos\tap3magic/specifications/tap3/reading/TAP0301.asn1"
 * 	`asn1c -D e:\repos\tap3magic\src\readers\tap0301\generated`
 */

#ifndef	_PartialTypeIndicator_H_
#define	_PartialTypeIndicator_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AsciiString.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PartialTypeIndicator */
typedef AsciiString_t	 PartialTypeIndicator_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PartialTypeIndicator;
asn_struct_free_f PartialTypeIndicator_free;
asn_struct_print_f PartialTypeIndicator_print;
asn_constr_check_f PartialTypeIndicator_constraint;
ber_type_decoder_f PartialTypeIndicator_decode_ber;
der_type_encoder_f PartialTypeIndicator_encode_der;
xer_type_decoder_f PartialTypeIndicator_decode_xer;
xer_type_encoder_f PartialTypeIndicator_encode_xer;
jer_type_encoder_f PartialTypeIndicator_encode_jer;
oer_type_decoder_f PartialTypeIndicator_decode_oer;
oer_type_encoder_f PartialTypeIndicator_encode_oer;
per_type_decoder_f PartialTypeIndicator_decode_uper;
per_type_encoder_f PartialTypeIndicator_encode_uper;
per_type_decoder_f PartialTypeIndicator_decode_aper;
per_type_encoder_f PartialTypeIndicator_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _PartialTypeIndicator_H_ */
#include <asn_internal.h>
