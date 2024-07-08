/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "/input/CPM-PDU-Descriptions.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#include "etsi_its_cpm_coding/cpm_WrappedCpmContainer.h"

static const long asn_VAL_1_cpm_originatingVehicleContainer = 1;
static const long asn_VAL_2_cpm_originatingRsuContainer = 2;
static const long asn_VAL_3_cpm_sensorInformationContainer = 3;
static const long asn_VAL_4_cpm_perceptionRegionContainer = 4;
static const long asn_VAL_5_cpm_perceivedObjectContainer = 5;
static const asn_ioc_cell_t asn_IOS_cpm_CpmContainers_1_rows[] = {
	{ "&id", aioc__value, &asn_DEF_cpm_CpmContainerId, &asn_VAL_1_cpm_originatingVehicleContainer },
	{ "&Type", aioc__type, &asn_DEF_cpm_OriginatingVehicleContainer },
	{ "&id", aioc__value, &asn_DEF_cpm_CpmContainerId, &asn_VAL_2_cpm_originatingRsuContainer },
	{ "&Type", aioc__type, &asn_DEF_cpm_OriginatingRsuContainer },
	{ "&id", aioc__value, &asn_DEF_cpm_CpmContainerId, &asn_VAL_3_cpm_sensorInformationContainer },
	{ "&Type", aioc__type, &asn_DEF_cpm_SensorInformationContainer },
	{ "&id", aioc__value, &asn_DEF_cpm_CpmContainerId, &asn_VAL_4_cpm_perceptionRegionContainer },
	{ "&Type", aioc__type, &asn_DEF_cpm_PerceptionRegionContainer },
	{ "&id", aioc__value, &asn_DEF_cpm_CpmContainerId, &asn_VAL_5_cpm_perceivedObjectContainer },
	{ "&Type", aioc__type, &asn_DEF_cpm_PerceivedObjectContainer }
};
static const asn_ioc_set_t asn_IOS_cpm_CpmContainers_1[] = {
	{ 5, 2, asn_IOS_cpm_CpmContainers_1_rows }
};
static int
memb_cpm_containerId_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 16L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_type_selector_result_t
select_WrappedCpmContainer_cpm_containerData_type(const asn_TYPE_descriptor_t *parent_type, const void *parent_sptr) {
	asn_type_selector_result_t result = {0, 0};
	const asn_ioc_set_t *itable = asn_IOS_cpm_CpmContainers_1;
	size_t constraining_column = 0; /* &id */
	size_t for_column = 1; /* &Type */
	size_t row, presence_index = 0;
	const long *constraining_value = (const long *)((const char *)parent_sptr + offsetof(struct cpm_WrappedCpmContainer, containerId));
	
	for(row=0; row < itable->rows_count; row++) {
	    const asn_ioc_cell_t *constraining_cell = &itable->rows[row * itable->columns_count + constraining_column];
	    const asn_ioc_cell_t *type_cell = &itable->rows[row * itable->columns_count + for_column];
	
	    if(type_cell->cell_kind == aioc__undefined)
	        continue;
	
	    presence_index++;
	    if(constraining_cell->type_descriptor->op->compare_struct(constraining_cell->type_descriptor, constraining_value, constraining_cell->value_sptr) == 0) {
	        result.type_descriptor = type_cell->type_descriptor;
	        result.presence_index = presence_index;
	        break;
	    }
	}
	
	return result;
}

static int
memb_cpm_containerData_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_cpm_containerId_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (1..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_cpm_containerData_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_cpm_containerData_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct cpm_WrappedCpmContainer__containerData, choice.OriginatingVehicleContainer),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_cpm_OriginatingVehicleContainer,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"OriginatingVehicleContainer"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct cpm_WrappedCpmContainer__containerData, choice.OriginatingRsuContainer),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_cpm_OriginatingRsuContainer,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"OriginatingRsuContainer"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct cpm_WrappedCpmContainer__containerData, choice.SensorInformationContainer),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_cpm_SensorInformationContainer,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"SensorInformationContainer"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct cpm_WrappedCpmContainer__containerData, choice.PerceptionRegionContainer),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_cpm_PerceptionRegionContainer,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"PerceptionRegionContainer"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct cpm_WrappedCpmContainer__containerData, choice.PerceivedObjectContainer),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_cpm_PerceivedObjectContainer,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"PerceivedObjectContainer"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_cpm_containerData_tag2el_3[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 4 }, /* OriginatingVehicleContainer */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, -1, 3 }, /* OriginatingRsuContainer */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, -2, 2 }, /* SensorInformationContainer */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 3, -3, 1 }, /* PerceptionRegionContainer */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 4, -4, 0 } /* PerceivedObjectContainer */
};
static asn_CHOICE_specifics_t asn_SPC_cpm_containerData_specs_3 = {
	sizeof(struct cpm_WrappedCpmContainer__containerData),
	offsetof(struct cpm_WrappedCpmContainer__containerData, _asn_ctx),
	offsetof(struct cpm_WrappedCpmContainer__containerData, present),
	sizeof(((struct cpm_WrappedCpmContainer__containerData *)0)->present),
	asn_MAP_cpm_containerData_tag2el_3,
	5,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cpm_containerData_3 = {
	"containerData",
	"containerData",
	&asn_OP_OPEN_TYPE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		OPEN_TYPE_constraint
	},
	asn_MBR_cpm_containerData_3,
	5,	/* Elements count */
	&asn_SPC_cpm_containerData_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_cpm_WrappedCpmContainer_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct cpm_WrappedCpmContainer, containerId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cpm_CpmContainerId,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_cpm_containerId_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_cpm_containerId_constraint_1
		},
		0, 0, /* No default value */
		"containerId"
		},
	{ ATF_OPEN_TYPE | ATF_NOFLAGS, 0, offsetof(struct cpm_WrappedCpmContainer, containerData),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_cpm_containerData_3,
		select_WrappedCpmContainer_cpm_containerData_type,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_cpm_containerData_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_cpm_containerData_constraint_1
		},
		0, 0, /* No default value */
		"containerData"
		},
};
static const ber_tlv_tag_t asn_DEF_cpm_WrappedCpmContainer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_cpm_WrappedCpmContainer_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* containerId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* containerData */
};
asn_SEQUENCE_specifics_t asn_SPC_cpm_WrappedCpmContainer_specs_1 = {
	sizeof(struct cpm_WrappedCpmContainer),
	offsetof(struct cpm_WrappedCpmContainer, _asn_ctx),
	asn_MAP_cpm_WrappedCpmContainer_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_cpm_WrappedCpmContainer = {
	"WrappedCpmContainer",
	"WrappedCpmContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_cpm_WrappedCpmContainer_tags_1,
	sizeof(asn_DEF_cpm_WrappedCpmContainer_tags_1)
		/sizeof(asn_DEF_cpm_WrappedCpmContainer_tags_1[0]), /* 1 */
	asn_DEF_cpm_WrappedCpmContainer_tags_1,	/* Same as above */
	sizeof(asn_DEF_cpm_WrappedCpmContainer_tags_1)
		/sizeof(asn_DEF_cpm_WrappedCpmContainer_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_cpm_WrappedCpmContainer_1,
	2,	/* Elements count */
	&asn_SPC_cpm_WrappedCpmContainer_specs_1	/* Additional specs */
};

