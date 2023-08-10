/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "TAP0301.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_01`
 */

#ifndef	_ServingBid_H_
#define	_ServingBid_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Bid.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ServingBid */
typedef Bid_t	 ServingBid_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ServingBid;
asn_struct_free_f ServingBid_free;
asn_struct_print_f ServingBid_print;
asn_constr_check_f ServingBid_constraint;
ber_type_decoder_f ServingBid_decode_ber;
der_type_encoder_f ServingBid_encode_der;
xer_type_decoder_f ServingBid_decode_xer;
xer_type_encoder_f ServingBid_encode_xer;
jer_type_encoder_f ServingBid_encode_jer;
oer_type_decoder_f ServingBid_decode_oer;
oer_type_encoder_f ServingBid_encode_oer;
per_type_decoder_f ServingBid_decode_uper;
per_type_encoder_f ServingBid_encode_uper;
per_type_decoder_f ServingBid_decode_aper;
per_type_encoder_f ServingBid_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ServingBid_H_ */
#include <asn_internal.h>
