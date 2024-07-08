/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-OriginatingStationContainers"
 * 	found in "/input/CPM-OriginatingStationContainers.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_TrailerDataSet_H_
#define	_cpm_TrailerDataSet_H_


#include <etsi_its_cpm_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cpm_coding/asn_SEQUENCE_OF.h>
#include <etsi_its_cpm_coding/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct cpm_TrailerData;

/* cpm_TrailerDataSet */
typedef struct cpm_TrailerDataSet {
	A_SEQUENCE_OF(struct cpm_TrailerData) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} cpm_TrailerDataSet_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_cpm_TrailerDataSet;
extern asn_SET_OF_specifics_t asn_SPC_cpm_TrailerDataSet_specs_1;
extern asn_TYPE_member_t asn_MBR_cpm_TrailerDataSet_1[1];
extern asn_per_constraints_t asn_PER_type_cpm_TrailerDataSet_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "etsi_its_cpm_coding/cpm_TrailerData.h"

#endif	/* _cpm_TrailerDataSet_H_ */
#include <etsi_its_cpm_coding/asn_internal.h>
