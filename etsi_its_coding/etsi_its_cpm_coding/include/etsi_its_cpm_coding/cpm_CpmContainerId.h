/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "/input/CPM-PDU-Descriptions.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_CpmContainerId_H_
#define	_cpm_CpmContainerId_H_


#include <etsi_its_cpm_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cpm_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* cpm_CpmContainerId */
typedef long	 cpm_CpmContainerId_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_cpm_CpmContainerId_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_cpm_CpmContainerId;
asn_struct_free_f cpm_CpmContainerId_free;
asn_struct_print_f cpm_CpmContainerId_print;
asn_constr_check_f cpm_CpmContainerId_constraint;
per_type_decoder_f cpm_CpmContainerId_decode_uper;
per_type_encoder_f cpm_CpmContainerId_encode_uper;
per_type_decoder_f cpm_CpmContainerId_decode_aper;
per_type_encoder_f cpm_CpmContainerId_encode_aper;
#define cpm_CpmContainerId_originatingVehicleContainer	((cpm_CpmContainerId_t)1)
#define cpm_CpmContainerId_originatingRsuContainer	((cpm_CpmContainerId_t)2)
#define cpm_CpmContainerId_sensorInformationContainer	((cpm_CpmContainerId_t)3)
#define cpm_CpmContainerId_perceptionRegionContainer	((cpm_CpmContainerId_t)4)
#define cpm_CpmContainerId_perceivedObjectContainer	((cpm_CpmContainerId_t)5)

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_CpmContainerId_H_ */
#include <etsi_its_cpm_coding/asn_internal.h>
