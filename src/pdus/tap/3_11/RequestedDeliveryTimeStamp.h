/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "TAP0311.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_11`
 */

#ifndef	_RequestedDeliveryTimeStamp_H_
#define	_RequestedDeliveryTimeStamp_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DateTime.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RequestedDeliveryTimeStamp */
typedef DateTime_t	 RequestedDeliveryTimeStamp_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RequestedDeliveryTimeStamp;
asn_struct_free_f RequestedDeliveryTimeStamp_free;
asn_struct_print_f RequestedDeliveryTimeStamp_print;
asn_constr_check_f RequestedDeliveryTimeStamp_constraint;
ber_type_decoder_f RequestedDeliveryTimeStamp_decode_ber;
der_type_encoder_f RequestedDeliveryTimeStamp_encode_der;
xer_type_decoder_f RequestedDeliveryTimeStamp_decode_xer;
xer_type_encoder_f RequestedDeliveryTimeStamp_encode_xer;
jer_type_encoder_f RequestedDeliveryTimeStamp_encode_jer;
oer_type_decoder_f RequestedDeliveryTimeStamp_decode_oer;
oer_type_encoder_f RequestedDeliveryTimeStamp_encode_oer;
per_type_decoder_f RequestedDeliveryTimeStamp_decode_uper;
per_type_encoder_f RequestedDeliveryTimeStamp_encode_uper;
per_type_decoder_f RequestedDeliveryTimeStamp_decode_aper;
per_type_encoder_f RequestedDeliveryTimeStamp_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RequestedDeliveryTimeStamp_H_ */
#include <asn_internal.h>
