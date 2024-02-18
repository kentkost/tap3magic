/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0311"
 * 	found in "E:/repos/tap3magic/specifications/tap3/TAP0311.asn1"
 */

#ifndef	_DataInterChange_H_
#define	_DataInterChange_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TransferBatch.h"
#include "Notification.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DataInterChange_PR {
	DataInterChange_PR_NOTHING,	/* No components present */
	DataInterChange_PR_transferBatch,
	DataInterChange_PR_notification
} DataInterChange_PR;

/* DataInterChange */
typedef struct DataInterChange {
	DataInterChange_PR present;
	union DataInterChange_u {
		TransferBatch_t	 transferBatch;
		Notification_t	 notification;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DataInterChange_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DataInterChange;

#ifdef __cplusplus
}
#endif

#endif	/* _DataInterChange_H_ */
#include <asn_internal.h>
