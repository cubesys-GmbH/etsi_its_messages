/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_EuVehicleCategoryM_H_
#define	_cpm_EuVehicleCategoryM_H_


#include <etsi_its_cpm_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cpm_coding/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cpm_EuVehicleCategoryM {
	cpm_EuVehicleCategoryM_m1	= 0,
	cpm_EuVehicleCategoryM_m2	= 1,
	cpm_EuVehicleCategoryM_m3	= 2
} e_cpm_EuVehicleCategoryM;

/* cpm_EuVehicleCategoryM */
typedef long	 cpm_EuVehicleCategoryM_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_cpm_EuVehicleCategoryM_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_cpm_EuVehicleCategoryM;
extern const asn_INTEGER_specifics_t asn_SPC_cpm_EuVehicleCategoryM_specs_1;
asn_struct_free_f cpm_EuVehicleCategoryM_free;
asn_struct_print_f cpm_EuVehicleCategoryM_print;
asn_constr_check_f cpm_EuVehicleCategoryM_constraint;
per_type_decoder_f cpm_EuVehicleCategoryM_decode_uper;
per_type_encoder_f cpm_EuVehicleCategoryM_encode_uper;
per_type_decoder_f cpm_EuVehicleCategoryM_decode_aper;
per_type_encoder_f cpm_EuVehicleCategoryM_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_EuVehicleCategoryM_H_ */
#include <etsi_its_cpm_coding/asn_internal.h>
