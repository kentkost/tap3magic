/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0302"
 * 	found in "TAP0303.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_03`
 */

#ifndef	_HSCSDParameterModification_H_
#define	_HSCSDParameterModification_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AiurRequested.h"
#include "NumberOfChannels.h"
#include "ChannelCoding.h"
#include "NumberOfChannelsUsed.h"
#include "InitiatingParty.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ModificationTimestamp;

/* HSCSDParameterModification */
typedef struct HSCSDParameterModification {
	AiurRequested_t	*aiur;	/* OPTIONAL */
	NumberOfChannels_t	*maxNumberOfChannels;	/* OPTIONAL */
	ChannelCoding_t	*channelCodingUsed;	/* OPTIONAL */
	NumberOfChannelsUsed_t	*numberOfChannelsUsed;	/* OPTIONAL */
	InitiatingParty_t	*initiatingParty;	/* OPTIONAL */
	struct ModificationTimestamp	*modificationTimestamp;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HSCSDParameterModification_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HSCSDParameterModification;
extern asn_SEQUENCE_specifics_t asn_SPC_HSCSDParameterModification_specs_1;
extern asn_TYPE_member_t asn_MBR_HSCSDParameterModification_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ModificationTimestamp.h"

#endif	/* _HSCSDParameterModification_H_ */
#include <asn_internal.h>
