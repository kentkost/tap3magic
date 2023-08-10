/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0304"
 * 	found in "TAP0304.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_04`
 */

#ifndef	_TotalCommissionRefund_H_
#define	_TotalCommissionRefund_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AbsoluteAmount.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TotalCommissionRefund */
typedef AbsoluteAmount_t	 TotalCommissionRefund_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TotalCommissionRefund;
asn_struct_free_f TotalCommissionRefund_free;
asn_struct_print_f TotalCommissionRefund_print;
asn_constr_check_f TotalCommissionRefund_constraint;
ber_type_decoder_f TotalCommissionRefund_decode_ber;
der_type_encoder_f TotalCommissionRefund_encode_der;
xer_type_decoder_f TotalCommissionRefund_decode_xer;
xer_type_encoder_f TotalCommissionRefund_encode_xer;
jer_type_encoder_f TotalCommissionRefund_encode_jer;
oer_type_decoder_f TotalCommissionRefund_decode_oer;
oer_type_encoder_f TotalCommissionRefund_encode_oer;
per_type_decoder_f TotalCommissionRefund_decode_uper;
per_type_encoder_f TotalCommissionRefund_encode_uper;
per_type_decoder_f TotalCommissionRefund_decode_aper;
per_type_encoder_f TotalCommissionRefund_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _TotalCommissionRefund_H_ */
#include <asn_internal.h>
