/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "E:/repos/tap3magic/specifications/tap3/TAP0311.asn1"
 */

#ifndef	_NetworkId_H_
#define	_NetworkId_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AsciiString.h"

#ifdef __cplusplus
extern "C" {
#endif

/* NetworkId */
typedef AsciiString_t	 NetworkId_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NetworkId;
asn_struct_free_f NetworkId_free;
asn_struct_print_f NetworkId_print;
asn_constr_check_f NetworkId_constraint;
ber_type_decoder_f NetworkId_decode_ber;
der_type_encoder_f NetworkId_encode_der;
xer_type_decoder_f NetworkId_decode_xer;
xer_type_encoder_f NetworkId_encode_xer;
jer_type_encoder_f NetworkId_encode_jer;
oer_type_decoder_f NetworkId_decode_oer;
oer_type_encoder_f NetworkId_encode_oer;
per_type_decoder_f NetworkId_decode_uper;
per_type_encoder_f NetworkId_encode_uper;
per_type_decoder_f NetworkId_decode_aper;
per_type_encoder_f NetworkId_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NetworkId_H_ */
#include <asn_internal.h>
