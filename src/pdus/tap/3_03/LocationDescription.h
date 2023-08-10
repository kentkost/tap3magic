/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0302"
 * 	found in "TAP0303.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_03`
 */

#ifndef	_LocationDescription_H_
#define	_LocationDescription_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AsciiString.h"

#ifdef __cplusplus
extern "C" {
#endif

/* LocationDescription */
typedef AsciiString_t	 LocationDescription_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LocationDescription;
asn_struct_free_f LocationDescription_free;
asn_struct_print_f LocationDescription_print;
asn_constr_check_f LocationDescription_constraint;
ber_type_decoder_f LocationDescription_decode_ber;
der_type_encoder_f LocationDescription_encode_der;
xer_type_decoder_f LocationDescription_decode_xer;
xer_type_encoder_f LocationDescription_encode_xer;
jer_type_encoder_f LocationDescription_encode_jer;
oer_type_decoder_f LocationDescription_decode_oer;
oer_type_encoder_f LocationDescription_encode_oer;
per_type_decoder_f LocationDescription_decode_uper;
per_type_encoder_f LocationDescription_encode_uper;
per_type_decoder_f LocationDescription_decode_aper;
per_type_encoder_f LocationDescription_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LocationDescription_H_ */
#include <asn_internal.h>
