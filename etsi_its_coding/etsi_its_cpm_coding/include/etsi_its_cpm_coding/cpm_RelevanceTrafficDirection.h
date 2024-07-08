/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_RelevanceTrafficDirection_H_
#define	_cpm_RelevanceTrafficDirection_H_


#include <etsi_its_cpm_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cpm_coding/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cpm_RelevanceTrafficDirection {
	cpm_RelevanceTrafficDirection_allTrafficDirections	= 0,
	cpm_RelevanceTrafficDirection_upstreamTraffic	= 1,
	cpm_RelevanceTrafficDirection_downstreamTraffic	= 2,
	cpm_RelevanceTrafficDirection_oppositeTraffic	= 3
} e_cpm_RelevanceTrafficDirection;

/* cpm_RelevanceTrafficDirection */
typedef long	 cpm_RelevanceTrafficDirection_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_cpm_RelevanceTrafficDirection;
asn_struct_free_f cpm_RelevanceTrafficDirection_free;
asn_struct_print_f cpm_RelevanceTrafficDirection_print;
asn_constr_check_f cpm_RelevanceTrafficDirection_constraint;
per_type_decoder_f cpm_RelevanceTrafficDirection_decode_uper;
per_type_encoder_f cpm_RelevanceTrafficDirection_encode_uper;
per_type_decoder_f cpm_RelevanceTrafficDirection_decode_aper;
per_type_encoder_f cpm_RelevanceTrafficDirection_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_RelevanceTrafficDirection_H_ */
#include <etsi_its_cpm_coding/asn_internal.h>
