/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ASN1C-UsefulInformationObjectClasses"
 * 	found in "C:/msys64/mingw64/share/asn1c/standard-modules/ASN1C-UsefulInformationObjectClasses.asn1"
 * 	`asn1c -D E:/repos/tap3reader/src/pdus/tap/3_03`
 */

#ifndef	_EXTERNAL_H_
#define	_EXTERNAL_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OBJECT_IDENTIFIER.h>
#include <NativeInteger.h>
#include <ObjectDescriptor.h>
#include <ANY.h>
#include <OCTET_STRING.h>
#include <BIT_STRING.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum encoding_PR {
	encoding_PR_NOTHING,	/* No components present */
	encoding_PR_single_ASN1_type,
	encoding_PR_octet_aligned,
	encoding_PR_arbitrary
} encoding_PR;

/* EXTERNAL */
typedef struct EXTERNAL {
	OBJECT_IDENTIFIER_t	*direct_reference;	/* OPTIONAL */
	long	*indirect_reference;	/* OPTIONAL */
	ObjectDescriptor_t	*data_value_descriptor;	/* OPTIONAL */
	struct encoding {
		encoding_PR present;
		union EXTERNAL__encoding_u {
			ANY_t	 single_ASN1_type;
			OCTET_STRING_t	 octet_aligned;
			BIT_STRING_t	 arbitrary;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} encoding;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EXTERNAL_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EXTERNAL;

#ifdef __cplusplus
}
#endif

#endif	/* _EXTERNAL_H_ */
#include <asn_internal.h>
