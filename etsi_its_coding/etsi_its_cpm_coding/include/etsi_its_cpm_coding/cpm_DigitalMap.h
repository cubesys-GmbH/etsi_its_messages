/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_DigitalMap_H_
#define	_cpm_DigitalMap_H_


#include <etsi_its_cpm_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cpm_coding/asn_SEQUENCE_OF.h>
#include <etsi_its_cpm_coding/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct cpm_ReferencePosition;

/* cpm_DigitalMap */
typedef struct cpm_DigitalMap {
	A_SEQUENCE_OF(struct cpm_ReferencePosition) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} cpm_DigitalMap_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_cpm_DigitalMap;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "etsi_its_cpm_coding/cpm_ReferencePosition.h"

#endif	/* _cpm_DigitalMap_H_ */
#include <etsi_its_cpm_coding/asn_internal.h>
