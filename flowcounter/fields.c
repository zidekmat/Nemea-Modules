/************* THIS IS AUTOMATICALLY GENERATED FILE, DO NOT EDIT *************/
// Tables are indexed by field ID
#include "fields.h"

char *ur_field_names_static[] = {
   "BYTES",
   "FLOWS",
   "PACKETS",
};
short ur_field_sizes_static[] = {
   8, /* BYTES */
   8, /* FLOWS */
   4, /* PACKETS */
};
ur_field_type_t ur_field_types_static[] = {
   UR_TYPE_UINT64, /* BYTES */
   UR_TYPE_UINT64, /* FLOWS */
   UR_TYPE_UINT32, /* PACKETS */
};
ur_static_field_specs_t UR_FIELD_SPECS_STATIC = {ur_field_names_static, ur_field_sizes_static, ur_field_types_static, 3};
ur_field_specs_t ur_field_specs = {ur_field_names_static, ur_field_sizes_static, ur_field_types_static, 3, 3, 3, NULL, UR_UNINITIALIZED};
