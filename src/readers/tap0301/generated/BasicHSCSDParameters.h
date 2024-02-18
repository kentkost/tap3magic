/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0301"
 * 	found in "e:\repos\tap3magic/specifications/tap3/reading/TAP0301.asn1"
 * 	`asn1c -D e:\repos\tap3magic\src\readers\tap0301\generated`
 */

#ifndef	_BasicHSCSDParameters_H_
#define	_BasicHSCSDParameters_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Fnur.h"
#include "AiurRequested.h"
#include "NumberOfChannels.h"
#include "ChannelCoding.h"
#include "NumberOfChannelsUsed.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ChannelCodingsAcceptable;

/* BasicHSCSDParameters */
typedef struct BasicHSCSDParameters {
	Fnur_t	*fnur;	/* OPTIONAL */
	AiurRequested_t	*aiur;	/* OPTIONAL */
	NumberOfChannels_t	*maxNumberOfChannels;	/* OPTIONAL */
	struct ChannelCodingsAcceptable	*channelCodingsAcceptable;	/* OPTIONAL */
	ChannelCoding_t	*channelCodingUsed;	/* OPTIONAL */
	NumberOfChannelsUsed_t	*numberOfChannelsUsed;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BasicHSCSDParameters_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BasicHSCSDParameters;
extern asn_SEQUENCE_specifics_t asn_SPC_BasicHSCSDParameters_specs_1;
extern asn_TYPE_member_t asn_MBR_BasicHSCSDParameters_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ChannelCodingsAcceptable.h"

#endif	/* _BasicHSCSDParameters_H_ */
#include <asn_internal.h>
