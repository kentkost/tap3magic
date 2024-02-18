/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "e:\repos\tap3magic/specifications/tap3/reading/TAP0301.asn1"
 * 	`asn1c -D e:\repos\tap3magic\src\readers\tap0301\generated`
 */

#ifndef	_MscId_H_
#define	_MscId_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AsciiString.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MscId */
typedef AsciiString_t	 MscId_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MscId;
asn_struct_free_f MscId_free;
asn_struct_print_f MscId_print;
asn_constr_check_f MscId_constraint;
ber_type_decoder_f MscId_decode_ber;
der_type_encoder_f MscId_encode_der;
xer_type_decoder_f MscId_decode_xer;
xer_type_encoder_f MscId_encode_xer;
jer_type_encoder_f MscId_encode_jer;
oer_type_decoder_f MscId_decode_oer;
oer_type_encoder_f MscId_encode_oer;
per_type_decoder_f MscId_decode_uper;
per_type_encoder_f MscId_encode_uper;
per_type_decoder_f MscId_decode_aper;
per_type_encoder_f MscId_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _MscId_H_ */
#include <asn_internal.h>
