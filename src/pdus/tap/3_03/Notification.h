/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0302"
 * 	found in "TAP0303.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_03`
 */

#ifndef	_Notification_H_
#define	_Notification_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Sender.h"
#include "Recipient.h"
#include "FileSequenceNumber.h"
#include "RapFileSequenceNumber.h"
#include "SpecificationVersionNumber.h"
#include "ReleaseVersionNumber.h"
#include "FileTypeIndicator.h"
#include "OperatorSpecInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FileCreationTimeStamp;
struct FileAvailableTimeStamp;
struct TransferCutOffTimeStamp;

/* Notification */
typedef struct Notification {
	Sender_t	*sender;	/* OPTIONAL */
	Recipient_t	*recipient;	/* OPTIONAL */
	FileSequenceNumber_t	*fileSequenceNumber;	/* OPTIONAL */
	RapFileSequenceNumber_t	*rapFileSequenceNumber;	/* OPTIONAL */
	struct FileCreationTimeStamp	*fileCreationTimeStamp;	/* OPTIONAL */
	struct FileAvailableTimeStamp	*fileAvailableTimeStamp;	/* OPTIONAL */
	struct TransferCutOffTimeStamp	*transferCutOffTimeStamp;	/* OPTIONAL */
	SpecificationVersionNumber_t	*specificationVersionNumber;	/* OPTIONAL */
	ReleaseVersionNumber_t	*releaseVersionNumber;	/* OPTIONAL */
	FileTypeIndicator_t	*fileTypeIndicator;	/* OPTIONAL */
	OperatorSpecInformation_t	*operatorSpecInformation;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Notification_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Notification;
extern asn_SEQUENCE_specifics_t asn_SPC_Notification_specs_1;
extern asn_TYPE_member_t asn_MBR_Notification_1[11];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FileCreationTimeStamp.h"
#include "FileAvailableTimeStamp.h"
#include "TransferCutOffTimeStamp.h"

#endif	/* _Notification_H_ */
#include <asn_internal.h>
