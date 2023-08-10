/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0309"
 * 	found in "TAP0309.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_09`
 */

#ifndef	_ChargedPartyIdentification_H_
#define	_ChargedPartyIdentification_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Msisdn.h"
#include "Imsi.h"
#include "Min.h"
#include "IpAddress.h"
#include "LoginName.h"
#include "AccountNumber.h"
#include "EmailAddress.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ChargedPartyIdentification_PR {
	ChargedPartyIdentification_PR_NOTHING,	/* No components present */
	ChargedPartyIdentification_PR_msisdn,
	ChargedPartyIdentification_PR_imsi,
	ChargedPartyIdentification_PR_min,
	ChargedPartyIdentification_PR_ipAddress,
	ChargedPartyIdentification_PR_loginName,
	ChargedPartyIdentification_PR_accountNumber,
	ChargedPartyIdentification_PR_emailAddress
} ChargedPartyIdentification_PR;

/* ChargedPartyIdentification */
typedef struct ChargedPartyIdentification {
	ChargedPartyIdentification_PR present;
	union ChargedPartyIdentification_u {
		Msisdn_t	 msisdn;
		Imsi_t	 imsi;
		Min_t	 min;
		IpAddress_t	 ipAddress;
		LoginName_t	 loginName;
		AccountNumber_t	 accountNumber;
		EmailAddress_t	 emailAddress;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ChargedPartyIdentification_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ChargedPartyIdentification;
extern asn_CHOICE_specifics_t asn_SPC_ChargedPartyIdentification_specs_1;
extern asn_TYPE_member_t asn_MBR_ChargedPartyIdentification_1[7];
extern asn_per_constraints_t asn_PER_type_ChargedPartyIdentification_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ChargedPartyIdentification_H_ */
#include <asn_internal.h>
