/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cam_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cam_ts_PathId_H_
#define	_cam_ts_PathId_H_


#include <etsi_its_cam_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cam_ts_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cam_ts_PathId {
	cam_ts_PathId_noPath	= 0,
	cam_ts_PathId_path1	= 1,
	cam_ts_PathId_path2	= 2,
	cam_ts_PathId_path3	= 3,
	cam_ts_PathId_path4	= 4,
	cam_ts_PathId_path5	= 5,
	cam_ts_PathId_path6	= 6,
	cam_ts_PathId_path7	= 7,
	cam_ts_PathId_pathExtended1	= 8,
	cam_ts_PathId_pathExtended2	= 9,
	cam_ts_PathId_pathExtended3	= 10,
	cam_ts_PathId_pathExtended4	= 11,
	cam_ts_PathId_pathExtended5	= 12,
	cam_ts_PathId_pathExtended6	= 13,
	cam_ts_PathId_pathExtended7	= 14
} e_cam_ts_PathId;

/* cam_ts_PathId */
typedef long	 cam_ts_PathId_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_cam_ts_PathId_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_cam_ts_PathId;
asn_struct_free_f cam_ts_PathId_free;
asn_struct_print_f cam_ts_PathId_print;
asn_constr_check_f cam_ts_PathId_constraint;
per_type_decoder_f cam_ts_PathId_decode_uper;
per_type_encoder_f cam_ts_PathId_encode_uper;
per_type_decoder_f cam_ts_PathId_decode_aper;
per_type_encoder_f cam_ts_PathId_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _cam_ts_PathId_H_ */
#include <etsi_its_cam_ts_coding/asn_internal.h>