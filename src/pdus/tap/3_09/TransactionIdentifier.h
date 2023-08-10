/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0309"
 * 	found in "TAP0309.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_09`
 */

#ifndef	_TransactionIdentifier_H_
#define	_TransactionIdentifier_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AsciiString.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TransactionIdentifier */
typedef AsciiString_t	 TransactionIdentifier_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TransactionIdentifier;
asn_struct_free_f TransactionIdentifier_free;
asn_struct_print_f TransactionIdentifier_print;
asn_constr_check_f TransactionIdentifier_constraint;
ber_type_decoder_f TransactionIdentifier_decode_ber;
der_type_encoder_f TransactionIdentifier_encode_der;
xer_type_decoder_f TransactionIdentifier_decode_xer;
xer_type_encoder_f TransactionIdentifier_encode_xer;
jer_type_encoder_f TransactionIdentifier_encode_jer;
oer_type_decoder_f TransactionIdentifier_decode_oer;
oer_type_encoder_f TransactionIdentifier_encode_oer;
per_type_decoder_f TransactionIdentifier_decode_uper;
per_type_encoder_f TransactionIdentifier_encode_uper;
per_type_decoder_f TransactionIdentifier_decode_aper;
per_type_encoder_f TransactionIdentifier_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _TransactionIdentifier_H_ */
#include <asn_internal.h>
