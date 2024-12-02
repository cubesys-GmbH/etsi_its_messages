/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AVIAEINumberingAndDataStructures"
 * 	found in "/input/ISO14816_AVIAEINumberingAndDataStructures.asn"
 * 	`asn1c -fcompound-names -fprefix=mapem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_mapem_ts_AlphabetIndicator_H_
#define	_mapem_ts_AlphabetIndicator_H_


#include <etsi_its_mapem_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_mapem_ts_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum mapem_ts_AlphabetIndicator {
	mapem_ts_AlphabetIndicator_latinAlphabetNo1	= 0,
	mapem_ts_AlphabetIndicator_latinAlphabetNo2	= 1,
	mapem_ts_AlphabetIndicator_latinAlphabetNo3	= 2,
	mapem_ts_AlphabetIndicator_latinAlphabetNo4	= 3,
	mapem_ts_AlphabetIndicator_latinCyrillicAlphabet	= 4,
	mapem_ts_AlphabetIndicator_latinArabicAlphabet	= 5,
	mapem_ts_AlphabetIndicator_latinGreekAlphabet	= 6,
	mapem_ts_AlphabetIndicator_latinHebrewAlphabet	= 7,
	mapem_ts_AlphabetIndicator_latinAlphabetNo5	= 8,
	mapem_ts_AlphabetIndicator_latinAlphabetNo6	= 9,
	mapem_ts_AlphabetIndicator_twoOctetBMP	= 10,
	mapem_ts_AlphabetIndicator_fourOctetCanonical	= 11
} e_mapem_ts_AlphabetIndicator;

/* mapem_ts_AlphabetIndicator */
typedef long	 mapem_ts_AlphabetIndicator_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_mapem_ts_AlphabetIndicator_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_mapem_ts_AlphabetIndicator;
asn_struct_free_f mapem_ts_AlphabetIndicator_free;
asn_struct_print_f mapem_ts_AlphabetIndicator_print;
asn_constr_check_f mapem_ts_AlphabetIndicator_constraint;
per_type_decoder_f mapem_ts_AlphabetIndicator_decode_uper;
per_type_encoder_f mapem_ts_AlphabetIndicator_encode_uper;
per_type_decoder_f mapem_ts_AlphabetIndicator_decode_aper;
per_type_encoder_f mapem_ts_AlphabetIndicator_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _mapem_ts_AlphabetIndicator_H_ */
#include <etsi_its_mapem_ts_coding/asn_internal.h>