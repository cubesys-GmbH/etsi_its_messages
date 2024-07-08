/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_GenerationDeltaTime_H_
#define	_cpm_GenerationDeltaTime_H_


#include <etsi_its_cpm_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cpm_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cpm_GenerationDeltaTime {
	cpm_GenerationDeltaTime_oneMilliSec	= 1
} e_cpm_GenerationDeltaTime;

/* cpm_GenerationDeltaTime */
typedef long	 cpm_GenerationDeltaTime_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_cpm_GenerationDeltaTime;
asn_struct_free_f cpm_GenerationDeltaTime_free;
asn_struct_print_f cpm_GenerationDeltaTime_print;
asn_constr_check_f cpm_GenerationDeltaTime_constraint;
per_type_decoder_f cpm_GenerationDeltaTime_decode_uper;
per_type_encoder_f cpm_GenerationDeltaTime_encode_uper;
per_type_decoder_f cpm_GenerationDeltaTime_decode_aper;
per_type_encoder_f cpm_GenerationDeltaTime_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_GenerationDeltaTime_H_ */
#include <etsi_its_cpm_coding/asn_internal.h>
