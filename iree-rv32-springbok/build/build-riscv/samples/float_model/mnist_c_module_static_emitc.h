#ifndef MODULE_H_
#define MODULE_H_
#include "iree/vm/api.h"

#ifdef __cplusplus
extern "C" {
#endif  // __cplusplus

iree_status_t module_create(iree_vm_instance_t*, iree_allocator_t, iree_vm_module_t**);

#ifdef __cplusplus
}  // extern "C"
#endif  // __cplusplus

#endif  // MODULE_H_

#if defined(EMITC_IMPLEMENTATION)
#include "iree/vm/ops.h"
#include "iree/vm/ops_emitc.h"
#include "iree/vm/shims_emitc.h"

//=============================================================================
// compiler configuration
//=============================================================================


//=============================================================================
// module "module"
//=============================================================================

iree_alignas(16) static const uint8_t module_mnist_linked_llvm_cpu_static[] = {109, 110, 105, 115, 116, 95, 108, 105, 110, 107, 101, 100, 95, 108, 108, 118, 109, 95, 99, 112, 117};
iree_alignas(1) static const uint8_t module__utf8_hal_executable_format_EAB228F999C2D3A1[] = {104, 97, 108, 46, 101, 120, 101, 99, 117, 116, 97, 98, 108, 101, 46, 102, 111, 114, 109, 97, 116};
iree_alignas(1) static const uint8_t module__utf8_static_96B31E405495E0B6[] = {115, 116, 97, 116, 105, 99};
iree_alignas(1) static const uint8_t module__utf8_tensor_3C6209B4FD120BDC[] = {116, 101, 110, 115, 111, 114};

struct module_t {
iree_allocator_t allocator;
};
struct module_state_t {
iree_allocator_t allocator;
uint8_t rwdata[4];
iree_vm_ref_t refs[5];
iree_vm_buffer_t rodata_buffers[5];
iree_vm_function_t imports[24];
};
typedef struct module_t module_t;
typedef struct module_state_t module_state_t;

// DECLARE FUNCTIONS
static iree_status_t module_call_0v_r_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*);
static iree_status_t module_call_0riiI_r_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, int32_t, int32_t, int64_t, iree_vm_ref_t*);
static iree_status_t module_call_0riirII_r_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, int32_t, int32_t, iree_vm_ref_t*, int64_t, int64_t, iree_vm_ref_t*);
static iree_status_t module_call_0riiirII_r_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, int32_t, int32_t, int32_t, iree_vm_ref_t*, int64_t, int64_t, iree_vm_ref_t*);
static iree_status_t module_call_0rrrIii_v_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, int64_t, int32_t, int32_t);
static iree_status_t module_call_0rIIiiCID_r_2_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, int64_t, int64_t, int32_t, int32_t, int32_t, int64_t, int64_t, iree_vm_ref_t*);
static iree_status_t module_call_0rriiCID_v_4_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, iree_vm_ref_t*, int32_t, int32_t, int32_t, int64_t, int64_t, int64_t, int64_t);
static iree_status_t module_call_0r_r_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, iree_vm_ref_t*);
static iree_status_t module_call_0riii_r_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, int32_t, int32_t, int32_t, iree_vm_ref_t*);
static iree_status_t module_call_0r_v_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*);
static iree_status_t module_call_0riii_v_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, int32_t, int32_t, int32_t);
static iree_status_t module_call_0rrIrII_v_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, iree_vm_ref_t*, int64_t, iree_vm_ref_t*, int64_t, int64_t);
static iree_status_t module_call_0rriCiirIID_v_3_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, iree_vm_ref_t*, int32_t, int32_t, int32_t, int32_t, iree_vm_ref_t*, int64_t, int64_t, int32_t, int32_t, iree_vm_ref_t*, int64_t, int64_t, int32_t, int32_t, iree_vm_ref_t*, int64_t, int64_t);
static iree_status_t module_call_0rriCiirIID_v_2_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, iree_vm_ref_t*, int32_t, int32_t, int32_t, int32_t, iree_vm_ref_t*, int64_t, int64_t, int32_t, int32_t, iree_vm_ref_t*, int64_t, int64_t);
static iree_status_t module_call_0rriiii_v_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, iree_vm_ref_t*, int32_t, int32_t, int32_t, int32_t);
static iree_status_t module_call_0riCiiiD_r_3_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, iree_vm_ref_t*);
static iree_status_t module_call_0riCiiiD_r_2_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, iree_vm_ref_t*);
static iree_status_t module_call_0rrr_iI_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, int32_t*, int64_t*);
static iree_status_t module_call_0rIrriiiI_r_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, int64_t, iree_vm_ref_t*, iree_vm_ref_t*, int32_t, int32_t, int32_t, int64_t, iree_vm_ref_t*);
static iree_status_t module_call_0rIrrr_v_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, int64_t, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*);
static iree_status_t module_call_0rIrrCrD_v_1_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, int64_t, iree_vm_ref_t*, iree_vm_ref_t*, int32_t, iree_vm_ref_t*);
static iree_status_t module_call_0rrrrCrD_r_3_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, int32_t, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*);
static iree_status_t module_call_0ri_r_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, int32_t, iree_vm_ref_t*);
static iree_status_t module_call_0iCrD_i_1_import_shim(iree_vm_stack_t*, iree_vm_function_t*, int32_t, int32_t, iree_vm_ref_t*, int32_t*);
static iree_status_t module_call_0riCrD_r_1_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, int32_t, int32_t, iree_vm_ref_t*, iree_vm_ref_t*);
static iree_status_t module_predict(iree_vm_stack_t*, module_t*, module_state_t*, iree_vm_ref_t*, iree_vm_ref_t*);
static iree_status_t module_predict_export_shim(iree_vm_stack_t*, uint32_t, iree_byte_span_t, iree_byte_span_t, void*, void*);
static iree_status_t module___init_export_shim(iree_vm_stack_t*, uint32_t, iree_byte_span_t, iree_byte_span_t, void*, void*);
static iree_status_t module___init(iree_vm_stack_t*, module_t*, module_state_t*);
static void module_destroy(void*);
static iree_status_t module_alloc_state(void*, iree_allocator_t, iree_vm_module_state_t**);
static void module_free_state(void*, iree_vm_module_state_t*);
static iree_status_t module_resolve_import(void*, iree_vm_module_state_t*, iree_host_size_t, const iree_vm_function_t*, const iree_vm_function_signature_t*);
// DEFINE FUNCTIONS
static iree_status_t module_call_0v_r_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3) {
  iree_vm_function_call_t v4;
  iree_host_size_t v5;
  iree_host_size_t v6;
  iree_host_size_t v7;
  iree_vm_module_t* v8;
  bool v9;
  int32_t v10;
  bool v11;
  iree_vm_function_t v12;
  iree_byte_span_t* v13;
  void* v14;
  uint8_t* v15;
  iree_byte_span_t* v16;
  void* v17;
  uint8_t* v18;
  iree_vm_module_t* v19;
  iree_status_t v20;
  bool v21;
  int32_t v22;
  bool v23;
  iree_byte_span_t v24;
  uint8_t* v25;
  iree_vm_ref_t* v26;
  iree_status_t v27;
  iree_status_t v28;
  ;
  v5 = 0;
  v6 = sizeof(iree_vm_ref_t);
  v7 = EMITC_BINARY(+, v5, v6);
  v8 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v9 = EMITC_UNARY(!, v8);
  v10 = vm_cmp_nz_i32(v9);
  v11 = (bool) v10;
  if (v11) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v12 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v4, function, v12);
  v13 = EMITC_STRUCT_MEMBER_ADDRESS(v4, arguments);
  v14 = iree_alloca(v5);
  v15 = (uint8_t*) v14;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v13, data_length, v5);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v13, data, v15);
  memset(v15, 0, v5);
  v16 = EMITC_STRUCT_MEMBER_ADDRESS(v4, results);
  v17 = iree_alloca(v7);
  v18 = (uint8_t*) v17;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v16, data_length, v7);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v16, data, v18);
  memset(v18, 0, v7);
  v19 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v20 = EMITC_STRUCT_PTR_MEMBER_CALL(v19, begin_call, v19, v1, v4);
  v21 = (bool) v20;
  v22 = vm_cmp_nz_i32(v21);
  v23 = (bool) v22;
  if (v23) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v24 = EMITC_STRUCT_MEMBER(v4, results);
  v25 = EMITC_STRUCT_MEMBER(v24, data);
  v26 = (iree_vm_ref_t*) v25;
  iree_vm_ref_move(v26, v3);
  v27 = iree_ok_status();
  return v27;
  label4:
  v28 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v28;
  label5:
  return v20;
}

static iree_status_t module_call_0riiI_r_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, int32_t v4, int32_t v5, int64_t v6, iree_vm_ref_t* v7) {
  iree_vm_function_call_t v8;
  iree_host_size_t v9;
  iree_host_size_t v10;
  iree_host_size_t v11;
  iree_host_size_t v12;
  iree_host_size_t v13;
  iree_host_size_t v14;
  iree_host_size_t v15;
  iree_host_size_t v16;
  iree_host_size_t v17;
  iree_host_size_t v18;
  iree_host_size_t v19;
  iree_vm_module_t* v20;
  bool v21;
  int32_t v22;
  bool v23;
  iree_vm_function_t v24;
  iree_byte_span_t* v25;
  void* v26;
  uint8_t* v27;
  iree_byte_span_t* v28;
  void* v29;
  uint8_t* v30;
  iree_byte_span_t v31;
  uint8_t* v32;
  iree_vm_ref_t* v33;
  iree_host_size_t v34;
  uint8_t* v35;
  iree_host_size_t v36;
  int32_t* v37;
  iree_host_size_t v38;
  uint8_t* v39;
  iree_host_size_t v40;
  int32_t* v41;
  iree_host_size_t v42;
  uint8_t* v43;
  iree_host_size_t v44;
  int64_t* v45;
  iree_vm_module_t* v46;
  iree_status_t v47;
  bool v48;
  int32_t v49;
  bool v50;
  iree_byte_span_t v51;
  uint8_t* v52;
  iree_vm_ref_t* v53;
  iree_status_t v54;
  iree_status_t v55;
  ;
  v9 = 0;
  v10 = sizeof(iree_vm_ref_t);
  v11 = EMITC_BINARY(+, v9, v10);
  v12 = sizeof(int32_t);
  v13 = EMITC_BINARY(+, v11, v12);
  v14 = sizeof(int32_t);
  v15 = EMITC_BINARY(+, v13, v14);
  v16 = sizeof(int64_t);
  v17 = EMITC_BINARY(+, v15, v16);
  v18 = sizeof(iree_vm_ref_t);
  v19 = EMITC_BINARY(+, v9, v18);
  v20 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v21 = EMITC_UNARY(!, v20);
  v22 = vm_cmp_nz_i32(v21);
  v23 = (bool) v22;
  if (v23) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v24 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v8, function, v24);
  v25 = EMITC_STRUCT_MEMBER_ADDRESS(v8, arguments);
  v26 = iree_alloca(v17);
  v27 = (uint8_t*) v26;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v25, data_length, v17);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v25, data, v27);
  memset(v27, 0, v17);
  v28 = EMITC_STRUCT_MEMBER_ADDRESS(v8, results);
  v29 = iree_alloca(v19);
  v30 = (uint8_t*) v29;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v28, data_length, v19);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v28, data, v30);
  memset(v30, 0, v19);
  v31 = EMITC_STRUCT_MEMBER(v8, arguments);
  v32 = EMITC_STRUCT_MEMBER(v31, data);
  v33 = (iree_vm_ref_t*) v32;
  iree_vm_ref_assign(v3, v33);
  v34 = sizeof(iree_vm_ref_t);
  v35 = EMITC_BINARY(+, v32, v34);
  v36 = sizeof(int32_t);
  v37 = &v4;
  memcpy(v35, v37, v36);
  v38 = sizeof(int32_t);
  v39 = EMITC_BINARY(+, v35, v38);
  v40 = sizeof(int32_t);
  v41 = &v5;
  memcpy(v39, v41, v40);
  v42 = sizeof(int32_t);
  v43 = EMITC_BINARY(+, v39, v42);
  v44 = sizeof(int64_t);
  v45 = &v6;
  memcpy(v43, v45, v44);
  v46 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v47 = EMITC_STRUCT_PTR_MEMBER_CALL(v46, begin_call, v46, v1, v8);
  v48 = (bool) v47;
  v49 = vm_cmp_nz_i32(v48);
  v50 = (bool) v49;
  if (v50) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v51 = EMITC_STRUCT_MEMBER(v8, results);
  v52 = EMITC_STRUCT_MEMBER(v51, data);
  v53 = (iree_vm_ref_t*) v52;
  iree_vm_ref_move(v53, v7);
  v54 = iree_ok_status();
  return v54;
  label4:
  iree_vm_ref_release(v3);
  v55 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v55;
  label5:
  iree_vm_ref_release(v3);
  return v47;
}

static iree_status_t module_call_0riirII_r_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, int32_t v4, int32_t v5, iree_vm_ref_t* v6, int64_t v7, int64_t v8, iree_vm_ref_t* v9) {
  iree_vm_function_call_t v10;
  iree_host_size_t v11;
  iree_host_size_t v12;
  iree_host_size_t v13;
  iree_host_size_t v14;
  iree_host_size_t v15;
  iree_host_size_t v16;
  iree_host_size_t v17;
  iree_host_size_t v18;
  iree_host_size_t v19;
  iree_host_size_t v20;
  iree_host_size_t v21;
  iree_host_size_t v22;
  iree_host_size_t v23;
  iree_host_size_t v24;
  iree_host_size_t v25;
  iree_vm_module_t* v26;
  bool v27;
  int32_t v28;
  bool v29;
  iree_vm_function_t v30;
  iree_byte_span_t* v31;
  void* v32;
  uint8_t* v33;
  iree_byte_span_t* v34;
  void* v35;
  uint8_t* v36;
  iree_byte_span_t v37;
  uint8_t* v38;
  iree_vm_ref_t* v39;
  iree_host_size_t v40;
  uint8_t* v41;
  iree_host_size_t v42;
  int32_t* v43;
  iree_host_size_t v44;
  uint8_t* v45;
  iree_host_size_t v46;
  int32_t* v47;
  iree_host_size_t v48;
  uint8_t* v49;
  iree_vm_ref_t* v50;
  iree_host_size_t v51;
  uint8_t* v52;
  iree_host_size_t v53;
  int64_t* v54;
  iree_host_size_t v55;
  uint8_t* v56;
  iree_host_size_t v57;
  int64_t* v58;
  iree_vm_module_t* v59;
  iree_status_t v60;
  bool v61;
  int32_t v62;
  bool v63;
  iree_byte_span_t v64;
  uint8_t* v65;
  iree_vm_ref_t* v66;
  iree_status_t v67;
  iree_status_t v68;
  ;
  v11 = 0;
  v12 = sizeof(iree_vm_ref_t);
  v13 = EMITC_BINARY(+, v11, v12);
  v14 = sizeof(int32_t);
  v15 = EMITC_BINARY(+, v13, v14);
  v16 = sizeof(int32_t);
  v17 = EMITC_BINARY(+, v15, v16);
  v18 = sizeof(iree_vm_ref_t);
  v19 = EMITC_BINARY(+, v17, v18);
  v20 = sizeof(int64_t);
  v21 = EMITC_BINARY(+, v19, v20);
  v22 = sizeof(int64_t);
  v23 = EMITC_BINARY(+, v21, v22);
  v24 = sizeof(iree_vm_ref_t);
  v25 = EMITC_BINARY(+, v11, v24);
  v26 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v27 = EMITC_UNARY(!, v26);
  v28 = vm_cmp_nz_i32(v27);
  v29 = (bool) v28;
  if (v29) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v30 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v10, function, v30);
  v31 = EMITC_STRUCT_MEMBER_ADDRESS(v10, arguments);
  v32 = iree_alloca(v23);
  v33 = (uint8_t*) v32;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v31, data_length, v23);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v31, data, v33);
  memset(v33, 0, v23);
  v34 = EMITC_STRUCT_MEMBER_ADDRESS(v10, results);
  v35 = iree_alloca(v25);
  v36 = (uint8_t*) v35;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v34, data_length, v25);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v34, data, v36);
  memset(v36, 0, v25);
  v37 = EMITC_STRUCT_MEMBER(v10, arguments);
  v38 = EMITC_STRUCT_MEMBER(v37, data);
  v39 = (iree_vm_ref_t*) v38;
  iree_vm_ref_assign(v3, v39);
  v40 = sizeof(iree_vm_ref_t);
  v41 = EMITC_BINARY(+, v38, v40);
  v42 = sizeof(int32_t);
  v43 = &v4;
  memcpy(v41, v43, v42);
  v44 = sizeof(int32_t);
  v45 = EMITC_BINARY(+, v41, v44);
  v46 = sizeof(int32_t);
  v47 = &v5;
  memcpy(v45, v47, v46);
  v48 = sizeof(int32_t);
  v49 = EMITC_BINARY(+, v45, v48);
  v50 = (iree_vm_ref_t*) v49;
  iree_vm_ref_assign(v6, v50);
  v51 = sizeof(iree_vm_ref_t);
  v52 = EMITC_BINARY(+, v49, v51);
  v53 = sizeof(int64_t);
  v54 = &v7;
  memcpy(v52, v54, v53);
  v55 = sizeof(int64_t);
  v56 = EMITC_BINARY(+, v52, v55);
  v57 = sizeof(int64_t);
  v58 = &v8;
  memcpy(v56, v58, v57);
  v59 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v60 = EMITC_STRUCT_PTR_MEMBER_CALL(v59, begin_call, v59, v1, v10);
  v61 = (bool) v60;
  v62 = vm_cmp_nz_i32(v61);
  v63 = (bool) v62;
  if (v63) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v64 = EMITC_STRUCT_MEMBER(v10, results);
  v65 = EMITC_STRUCT_MEMBER(v64, data);
  v66 = (iree_vm_ref_t*) v65;
  iree_vm_ref_move(v66, v9);
  v67 = iree_ok_status();
  return v67;
  label4:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v6);
  v68 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v68;
  label5:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v6);
  return v60;
}

static iree_status_t module_call_0riiirII_r_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, int32_t v4, int32_t v5, int32_t v6, iree_vm_ref_t* v7, int64_t v8, int64_t v9, iree_vm_ref_t* v10) {
  iree_vm_function_call_t v11;
  iree_host_size_t v12;
  iree_host_size_t v13;
  iree_host_size_t v14;
  iree_host_size_t v15;
  iree_host_size_t v16;
  iree_host_size_t v17;
  iree_host_size_t v18;
  iree_host_size_t v19;
  iree_host_size_t v20;
  iree_host_size_t v21;
  iree_host_size_t v22;
  iree_host_size_t v23;
  iree_host_size_t v24;
  iree_host_size_t v25;
  iree_host_size_t v26;
  iree_host_size_t v27;
  iree_host_size_t v28;
  iree_vm_module_t* v29;
  bool v30;
  int32_t v31;
  bool v32;
  iree_vm_function_t v33;
  iree_byte_span_t* v34;
  void* v35;
  uint8_t* v36;
  iree_byte_span_t* v37;
  void* v38;
  uint8_t* v39;
  iree_byte_span_t v40;
  uint8_t* v41;
  iree_vm_ref_t* v42;
  iree_host_size_t v43;
  uint8_t* v44;
  iree_host_size_t v45;
  int32_t* v46;
  iree_host_size_t v47;
  uint8_t* v48;
  iree_host_size_t v49;
  int32_t* v50;
  iree_host_size_t v51;
  uint8_t* v52;
  iree_host_size_t v53;
  int32_t* v54;
  iree_host_size_t v55;
  uint8_t* v56;
  iree_vm_ref_t* v57;
  iree_host_size_t v58;
  uint8_t* v59;
  iree_host_size_t v60;
  int64_t* v61;
  iree_host_size_t v62;
  uint8_t* v63;
  iree_host_size_t v64;
  int64_t* v65;
  iree_vm_module_t* v66;
  iree_status_t v67;
  bool v68;
  int32_t v69;
  bool v70;
  iree_byte_span_t v71;
  uint8_t* v72;
  iree_vm_ref_t* v73;
  iree_status_t v74;
  iree_status_t v75;
  ;
  v12 = 0;
  v13 = sizeof(iree_vm_ref_t);
  v14 = EMITC_BINARY(+, v12, v13);
  v15 = sizeof(int32_t);
  v16 = EMITC_BINARY(+, v14, v15);
  v17 = sizeof(int32_t);
  v18 = EMITC_BINARY(+, v16, v17);
  v19 = sizeof(int32_t);
  v20 = EMITC_BINARY(+, v18, v19);
  v21 = sizeof(iree_vm_ref_t);
  v22 = EMITC_BINARY(+, v20, v21);
  v23 = sizeof(int64_t);
  v24 = EMITC_BINARY(+, v22, v23);
  v25 = sizeof(int64_t);
  v26 = EMITC_BINARY(+, v24, v25);
  v27 = sizeof(iree_vm_ref_t);
  v28 = EMITC_BINARY(+, v12, v27);
  v29 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v30 = EMITC_UNARY(!, v29);
  v31 = vm_cmp_nz_i32(v30);
  v32 = (bool) v31;
  if (v32) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v33 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v11, function, v33);
  v34 = EMITC_STRUCT_MEMBER_ADDRESS(v11, arguments);
  v35 = iree_alloca(v26);
  v36 = (uint8_t*) v35;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v34, data_length, v26);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v34, data, v36);
  memset(v36, 0, v26);
  v37 = EMITC_STRUCT_MEMBER_ADDRESS(v11, results);
  v38 = iree_alloca(v28);
  v39 = (uint8_t*) v38;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v37, data_length, v28);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v37, data, v39);
  memset(v39, 0, v28);
  v40 = EMITC_STRUCT_MEMBER(v11, arguments);
  v41 = EMITC_STRUCT_MEMBER(v40, data);
  v42 = (iree_vm_ref_t*) v41;
  iree_vm_ref_assign(v3, v42);
  v43 = sizeof(iree_vm_ref_t);
  v44 = EMITC_BINARY(+, v41, v43);
  v45 = sizeof(int32_t);
  v46 = &v4;
  memcpy(v44, v46, v45);
  v47 = sizeof(int32_t);
  v48 = EMITC_BINARY(+, v44, v47);
  v49 = sizeof(int32_t);
  v50 = &v5;
  memcpy(v48, v50, v49);
  v51 = sizeof(int32_t);
  v52 = EMITC_BINARY(+, v48, v51);
  v53 = sizeof(int32_t);
  v54 = &v6;
  memcpy(v52, v54, v53);
  v55 = sizeof(int32_t);
  v56 = EMITC_BINARY(+, v52, v55);
  v57 = (iree_vm_ref_t*) v56;
  iree_vm_ref_assign(v7, v57);
  v58 = sizeof(iree_vm_ref_t);
  v59 = EMITC_BINARY(+, v56, v58);
  v60 = sizeof(int64_t);
  v61 = &v8;
  memcpy(v59, v61, v60);
  v62 = sizeof(int64_t);
  v63 = EMITC_BINARY(+, v59, v62);
  v64 = sizeof(int64_t);
  v65 = &v9;
  memcpy(v63, v65, v64);
  v66 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v67 = EMITC_STRUCT_PTR_MEMBER_CALL(v66, begin_call, v66, v1, v11);
  v68 = (bool) v67;
  v69 = vm_cmp_nz_i32(v68);
  v70 = (bool) v69;
  if (v70) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v71 = EMITC_STRUCT_MEMBER(v11, results);
  v72 = EMITC_STRUCT_MEMBER(v71, data);
  v73 = (iree_vm_ref_t*) v72;
  iree_vm_ref_move(v73, v10);
  v74 = iree_ok_status();
  return v74;
  label4:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v7);
  v75 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v75;
  label5:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v7);
  return v67;
}

static iree_status_t module_call_0rrrIii_v_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, iree_vm_ref_t* v4, iree_vm_ref_t* v5, int64_t v6, int32_t v7, int32_t v8) {
  iree_vm_function_call_t v9;
  iree_host_size_t v10;
  iree_host_size_t v11;
  iree_host_size_t v12;
  iree_host_size_t v13;
  iree_host_size_t v14;
  iree_host_size_t v15;
  iree_host_size_t v16;
  iree_host_size_t v17;
  iree_host_size_t v18;
  iree_host_size_t v19;
  iree_host_size_t v20;
  iree_host_size_t v21;
  iree_host_size_t v22;
  iree_vm_module_t* v23;
  bool v24;
  int32_t v25;
  bool v26;
  iree_vm_function_t v27;
  iree_byte_span_t* v28;
  void* v29;
  uint8_t* v30;
  iree_byte_span_t* v31;
  void* v32;
  uint8_t* v33;
  iree_byte_span_t v34;
  uint8_t* v35;
  iree_vm_ref_t* v36;
  iree_host_size_t v37;
  uint8_t* v38;
  iree_vm_ref_t* v39;
  iree_host_size_t v40;
  uint8_t* v41;
  iree_vm_ref_t* v42;
  iree_host_size_t v43;
  uint8_t* v44;
  iree_host_size_t v45;
  int64_t* v46;
  iree_host_size_t v47;
  uint8_t* v48;
  iree_host_size_t v49;
  int32_t* v50;
  iree_host_size_t v51;
  uint8_t* v52;
  iree_host_size_t v53;
  int32_t* v54;
  iree_vm_module_t* v55;
  iree_status_t v56;
  bool v57;
  int32_t v58;
  bool v59;
  iree_status_t v60;
  iree_status_t v61;
  ;
  v10 = 0;
  v11 = sizeof(iree_vm_ref_t);
  v12 = EMITC_BINARY(+, v10, v11);
  v13 = sizeof(iree_vm_ref_t);
  v14 = EMITC_BINARY(+, v12, v13);
  v15 = sizeof(iree_vm_ref_t);
  v16 = EMITC_BINARY(+, v14, v15);
  v17 = sizeof(int64_t);
  v18 = EMITC_BINARY(+, v16, v17);
  v19 = sizeof(int32_t);
  v20 = EMITC_BINARY(+, v18, v19);
  v21 = sizeof(int32_t);
  v22 = EMITC_BINARY(+, v20, v21);
  v23 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v24 = EMITC_UNARY(!, v23);
  v25 = vm_cmp_nz_i32(v24);
  v26 = (bool) v25;
  if (v26) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v27 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v9, function, v27);
  v28 = EMITC_STRUCT_MEMBER_ADDRESS(v9, arguments);
  v29 = iree_alloca(v22);
  v30 = (uint8_t*) v29;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v28, data_length, v22);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v28, data, v30);
  memset(v30, 0, v22);
  v31 = EMITC_STRUCT_MEMBER_ADDRESS(v9, results);
  v32 = iree_alloca(v10);
  v33 = (uint8_t*) v32;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v31, data_length, v10);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v31, data, v33);
  memset(v33, 0, v10);
  v34 = EMITC_STRUCT_MEMBER(v9, arguments);
  v35 = EMITC_STRUCT_MEMBER(v34, data);
  v36 = (iree_vm_ref_t*) v35;
  iree_vm_ref_assign(v3, v36);
  v37 = sizeof(iree_vm_ref_t);
  v38 = EMITC_BINARY(+, v35, v37);
  v39 = (iree_vm_ref_t*) v38;
  iree_vm_ref_assign(v4, v39);
  v40 = sizeof(iree_vm_ref_t);
  v41 = EMITC_BINARY(+, v38, v40);
  v42 = (iree_vm_ref_t*) v41;
  iree_vm_ref_assign(v5, v42);
  v43 = sizeof(iree_vm_ref_t);
  v44 = EMITC_BINARY(+, v41, v43);
  v45 = sizeof(int64_t);
  v46 = &v6;
  memcpy(v44, v46, v45);
  v47 = sizeof(int64_t);
  v48 = EMITC_BINARY(+, v44, v47);
  v49 = sizeof(int32_t);
  v50 = &v7;
  memcpy(v48, v50, v49);
  v51 = sizeof(int32_t);
  v52 = EMITC_BINARY(+, v48, v51);
  v53 = sizeof(int32_t);
  v54 = &v8;
  memcpy(v52, v54, v53);
  v55 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v56 = EMITC_STRUCT_PTR_MEMBER_CALL(v55, begin_call, v55, v1, v9);
  v57 = (bool) v56;
  v58 = vm_cmp_nz_i32(v57);
  v59 = (bool) v58;
  if (v59) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v60 = iree_ok_status();
  return v60;
  label4:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  iree_vm_ref_release(v5);
  v61 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v61;
  label5:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  iree_vm_ref_release(v5);
  return v56;
}

static iree_status_t module_call_0rIIiiCID_r_2_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, int64_t v4, int64_t v5, int32_t v6, int32_t v7, int32_t v8, int64_t v9, int64_t v10, iree_vm_ref_t* v11) {
  iree_vm_function_call_t v12;
  iree_host_size_t v13;
  iree_host_size_t v14;
  iree_host_size_t v15;
  iree_host_size_t v16;
  iree_host_size_t v17;
  iree_host_size_t v18;
  iree_host_size_t v19;
  iree_host_size_t v20;
  iree_host_size_t v21;
  iree_host_size_t v22;
  iree_host_size_t v23;
  iree_host_size_t v24;
  iree_host_size_t v25;
  iree_host_size_t v26;
  iree_host_size_t v27;
  iree_host_size_t v28;
  iree_host_size_t v29;
  iree_host_size_t v30;
  iree_host_size_t v31;
  iree_vm_module_t* v32;
  bool v33;
  int32_t v34;
  bool v35;
  iree_vm_function_t v36;
  iree_byte_span_t* v37;
  void* v38;
  uint8_t* v39;
  iree_byte_span_t* v40;
  void* v41;
  uint8_t* v42;
  iree_byte_span_t v43;
  uint8_t* v44;
  iree_vm_ref_t* v45;
  iree_host_size_t v46;
  uint8_t* v47;
  iree_host_size_t v48;
  int64_t* v49;
  iree_host_size_t v50;
  uint8_t* v51;
  iree_host_size_t v52;
  int64_t* v53;
  iree_host_size_t v54;
  uint8_t* v55;
  iree_host_size_t v56;
  int32_t* v57;
  iree_host_size_t v58;
  uint8_t* v59;
  iree_host_size_t v60;
  int32_t* v61;
  iree_host_size_t v62;
  uint8_t* v63;
  iree_host_size_t v64;
  int32_t* v65;
  iree_host_size_t v66;
  uint8_t* v67;
  iree_host_size_t v68;
  int64_t* v69;
  iree_host_size_t v70;
  uint8_t* v71;
  iree_host_size_t v72;
  int64_t* v73;
  iree_vm_module_t* v74;
  iree_status_t v75;
  bool v76;
  int32_t v77;
  bool v78;
  iree_byte_span_t v79;
  uint8_t* v80;
  iree_vm_ref_t* v81;
  iree_status_t v82;
  iree_status_t v83;
  ;
  v13 = 0;
  v14 = sizeof(iree_vm_ref_t);
  v15 = EMITC_BINARY(+, v13, v14);
  v16 = sizeof(int64_t);
  v17 = EMITC_BINARY(+, v15, v16);
  v18 = sizeof(int64_t);
  v19 = EMITC_BINARY(+, v17, v18);
  v20 = sizeof(int32_t);
  v21 = EMITC_BINARY(+, v19, v20);
  v22 = sizeof(int32_t);
  v23 = EMITC_BINARY(+, v21, v22);
  v24 = sizeof(int32_t);
  v25 = EMITC_BINARY(+, v23, v24);
  v26 = sizeof(int64_t);
  v27 = EMITC_BINARY(+, v25, v26);
  v28 = sizeof(int64_t);
  v29 = EMITC_BINARY(+, v27, v28);
  v30 = sizeof(iree_vm_ref_t);
  v31 = EMITC_BINARY(+, v13, v30);
  v32 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v33 = EMITC_UNARY(!, v32);
  v34 = vm_cmp_nz_i32(v33);
  v35 = (bool) v34;
  if (v35) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v36 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v12, function, v36);
  v37 = EMITC_STRUCT_MEMBER_ADDRESS(v12, arguments);
  v38 = iree_alloca(v29);
  v39 = (uint8_t*) v38;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v37, data_length, v29);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v37, data, v39);
  memset(v39, 0, v29);
  v40 = EMITC_STRUCT_MEMBER_ADDRESS(v12, results);
  v41 = iree_alloca(v31);
  v42 = (uint8_t*) v41;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v40, data_length, v31);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v40, data, v42);
  memset(v42, 0, v31);
  v43 = EMITC_STRUCT_MEMBER(v12, arguments);
  v44 = EMITC_STRUCT_MEMBER(v43, data);
  v45 = (iree_vm_ref_t*) v44;
  iree_vm_ref_assign(v3, v45);
  v46 = sizeof(iree_vm_ref_t);
  v47 = EMITC_BINARY(+, v44, v46);
  v48 = sizeof(int64_t);
  v49 = &v4;
  memcpy(v47, v49, v48);
  v50 = sizeof(int64_t);
  v51 = EMITC_BINARY(+, v47, v50);
  v52 = sizeof(int64_t);
  v53 = &v5;
  memcpy(v51, v53, v52);
  v54 = sizeof(int64_t);
  v55 = EMITC_BINARY(+, v51, v54);
  v56 = sizeof(int32_t);
  v57 = &v6;
  memcpy(v55, v57, v56);
  v58 = sizeof(int32_t);
  v59 = EMITC_BINARY(+, v55, v58);
  v60 = sizeof(int32_t);
  v61 = &v7;
  memcpy(v59, v61, v60);
  v62 = sizeof(int32_t);
  v63 = EMITC_BINARY(+, v59, v62);
  v64 = sizeof(int32_t);
  v65 = &v8;
  memcpy(v63, v65, v64);
  v66 = sizeof(int32_t);
  v67 = EMITC_BINARY(+, v63, v66);
  v68 = sizeof(int64_t);
  v69 = &v9;
  memcpy(v67, v69, v68);
  v70 = sizeof(int64_t);
  v71 = EMITC_BINARY(+, v67, v70);
  v72 = sizeof(int64_t);
  v73 = &v10;
  memcpy(v71, v73, v72);
  v74 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v75 = EMITC_STRUCT_PTR_MEMBER_CALL(v74, begin_call, v74, v1, v12);
  v76 = (bool) v75;
  v77 = vm_cmp_nz_i32(v76);
  v78 = (bool) v77;
  if (v78) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v79 = EMITC_STRUCT_MEMBER(v12, results);
  v80 = EMITC_STRUCT_MEMBER(v79, data);
  v81 = (iree_vm_ref_t*) v80;
  iree_vm_ref_move(v81, v11);
  v82 = iree_ok_status();
  return v82;
  label4:
  iree_vm_ref_release(v3);
  v83 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v83;
  label5:
  iree_vm_ref_release(v3);
  return v75;
}

static iree_status_t module_call_0rriiCID_v_4_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, iree_vm_ref_t* v4, int32_t v5, int32_t v6, int32_t v7, int64_t v8, int64_t v9, int64_t v10, int64_t v11) {
  iree_vm_function_call_t v12;
  iree_host_size_t v13;
  iree_host_size_t v14;
  iree_host_size_t v15;
  iree_host_size_t v16;
  iree_host_size_t v17;
  iree_host_size_t v18;
  iree_host_size_t v19;
  iree_host_size_t v20;
  iree_host_size_t v21;
  iree_host_size_t v22;
  iree_host_size_t v23;
  iree_host_size_t v24;
  iree_host_size_t v25;
  iree_host_size_t v26;
  iree_host_size_t v27;
  iree_host_size_t v28;
  iree_host_size_t v29;
  iree_host_size_t v30;
  iree_host_size_t v31;
  iree_vm_module_t* v32;
  bool v33;
  int32_t v34;
  bool v35;
  iree_vm_function_t v36;
  iree_byte_span_t* v37;
  void* v38;
  uint8_t* v39;
  iree_byte_span_t* v40;
  void* v41;
  uint8_t* v42;
  iree_byte_span_t v43;
  uint8_t* v44;
  iree_vm_ref_t* v45;
  iree_host_size_t v46;
  uint8_t* v47;
  iree_vm_ref_t* v48;
  iree_host_size_t v49;
  uint8_t* v50;
  iree_host_size_t v51;
  int32_t* v52;
  iree_host_size_t v53;
  uint8_t* v54;
  iree_host_size_t v55;
  int32_t* v56;
  iree_host_size_t v57;
  uint8_t* v58;
  iree_host_size_t v59;
  int32_t* v60;
  iree_host_size_t v61;
  uint8_t* v62;
  iree_host_size_t v63;
  int64_t* v64;
  iree_host_size_t v65;
  uint8_t* v66;
  iree_host_size_t v67;
  int64_t* v68;
  iree_host_size_t v69;
  uint8_t* v70;
  iree_host_size_t v71;
  int64_t* v72;
  iree_host_size_t v73;
  uint8_t* v74;
  iree_host_size_t v75;
  int64_t* v76;
  iree_vm_module_t* v77;
  iree_status_t v78;
  bool v79;
  int32_t v80;
  bool v81;
  iree_status_t v82;
  iree_status_t v83;
  ;
  v13 = 0;
  v14 = sizeof(iree_vm_ref_t);
  v15 = EMITC_BINARY(+, v13, v14);
  v16 = sizeof(iree_vm_ref_t);
  v17 = EMITC_BINARY(+, v15, v16);
  v18 = sizeof(int32_t);
  v19 = EMITC_BINARY(+, v17, v18);
  v20 = sizeof(int32_t);
  v21 = EMITC_BINARY(+, v19, v20);
  v22 = sizeof(int32_t);
  v23 = EMITC_BINARY(+, v21, v22);
  v24 = sizeof(int64_t);
  v25 = EMITC_BINARY(+, v23, v24);
  v26 = sizeof(int64_t);
  v27 = EMITC_BINARY(+, v25, v26);
  v28 = sizeof(int64_t);
  v29 = EMITC_BINARY(+, v27, v28);
  v30 = sizeof(int64_t);
  v31 = EMITC_BINARY(+, v29, v30);
  v32 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v33 = EMITC_UNARY(!, v32);
  v34 = vm_cmp_nz_i32(v33);
  v35 = (bool) v34;
  if (v35) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v36 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v12, function, v36);
  v37 = EMITC_STRUCT_MEMBER_ADDRESS(v12, arguments);
  v38 = iree_alloca(v31);
  v39 = (uint8_t*) v38;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v37, data_length, v31);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v37, data, v39);
  memset(v39, 0, v31);
  v40 = EMITC_STRUCT_MEMBER_ADDRESS(v12, results);
  v41 = iree_alloca(v13);
  v42 = (uint8_t*) v41;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v40, data_length, v13);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v40, data, v42);
  memset(v42, 0, v13);
  v43 = EMITC_STRUCT_MEMBER(v12, arguments);
  v44 = EMITC_STRUCT_MEMBER(v43, data);
  v45 = (iree_vm_ref_t*) v44;
  iree_vm_ref_assign(v3, v45);
  v46 = sizeof(iree_vm_ref_t);
  v47 = EMITC_BINARY(+, v44, v46);
  v48 = (iree_vm_ref_t*) v47;
  iree_vm_ref_assign(v4, v48);
  v49 = sizeof(iree_vm_ref_t);
  v50 = EMITC_BINARY(+, v47, v49);
  v51 = sizeof(int32_t);
  v52 = &v5;
  memcpy(v50, v52, v51);
  v53 = sizeof(int32_t);
  v54 = EMITC_BINARY(+, v50, v53);
  v55 = sizeof(int32_t);
  v56 = &v6;
  memcpy(v54, v56, v55);
  v57 = sizeof(int32_t);
  v58 = EMITC_BINARY(+, v54, v57);
  v59 = sizeof(int32_t);
  v60 = &v7;
  memcpy(v58, v60, v59);
  v61 = sizeof(int32_t);
  v62 = EMITC_BINARY(+, v58, v61);
  v63 = sizeof(int64_t);
  v64 = &v8;
  memcpy(v62, v64, v63);
  v65 = sizeof(int64_t);
  v66 = EMITC_BINARY(+, v62, v65);
  v67 = sizeof(int64_t);
  v68 = &v9;
  memcpy(v66, v68, v67);
  v69 = sizeof(int64_t);
  v70 = EMITC_BINARY(+, v66, v69);
  v71 = sizeof(int64_t);
  v72 = &v10;
  memcpy(v70, v72, v71);
  v73 = sizeof(int64_t);
  v74 = EMITC_BINARY(+, v70, v73);
  v75 = sizeof(int64_t);
  v76 = &v11;
  memcpy(v74, v76, v75);
  v77 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v78 = EMITC_STRUCT_PTR_MEMBER_CALL(v77, begin_call, v77, v1, v12);
  v79 = (bool) v78;
  v80 = vm_cmp_nz_i32(v79);
  v81 = (bool) v80;
  if (v81) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v82 = iree_ok_status();
  return v82;
  label4:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  v83 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v83;
  label5:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  return v78;
}

static iree_status_t module_call_0r_r_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, iree_vm_ref_t* v4) {
  iree_vm_function_call_t v5;
  iree_host_size_t v6;
  iree_host_size_t v7;
  iree_host_size_t v8;
  iree_host_size_t v9;
  iree_host_size_t v10;
  iree_vm_module_t* v11;
  bool v12;
  int32_t v13;
  bool v14;
  iree_vm_function_t v15;
  iree_byte_span_t* v16;
  void* v17;
  uint8_t* v18;
  iree_byte_span_t* v19;
  void* v20;
  uint8_t* v21;
  iree_byte_span_t v22;
  uint8_t* v23;
  iree_vm_ref_t* v24;
  iree_vm_module_t* v25;
  iree_status_t v26;
  bool v27;
  int32_t v28;
  bool v29;
  iree_byte_span_t v30;
  uint8_t* v31;
  iree_vm_ref_t* v32;
  iree_status_t v33;
  iree_status_t v34;
  ;
  v6 = 0;
  v7 = sizeof(iree_vm_ref_t);
  v8 = EMITC_BINARY(+, v6, v7);
  v9 = sizeof(iree_vm_ref_t);
  v10 = EMITC_BINARY(+, v6, v9);
  v11 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v12 = EMITC_UNARY(!, v11);
  v13 = vm_cmp_nz_i32(v12);
  v14 = (bool) v13;
  if (v14) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v15 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v5, function, v15);
  v16 = EMITC_STRUCT_MEMBER_ADDRESS(v5, arguments);
  v17 = iree_alloca(v8);
  v18 = (uint8_t*) v17;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v16, data_length, v8);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v16, data, v18);
  memset(v18, 0, v8);
  v19 = EMITC_STRUCT_MEMBER_ADDRESS(v5, results);
  v20 = iree_alloca(v10);
  v21 = (uint8_t*) v20;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v19, data_length, v10);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v19, data, v21);
  memset(v21, 0, v10);
  v22 = EMITC_STRUCT_MEMBER(v5, arguments);
  v23 = EMITC_STRUCT_MEMBER(v22, data);
  v24 = (iree_vm_ref_t*) v23;
  iree_vm_ref_assign(v3, v24);
  v25 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v26 = EMITC_STRUCT_PTR_MEMBER_CALL(v25, begin_call, v25, v1, v5);
  v27 = (bool) v26;
  v28 = vm_cmp_nz_i32(v27);
  v29 = (bool) v28;
  if (v29) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v30 = EMITC_STRUCT_MEMBER(v5, results);
  v31 = EMITC_STRUCT_MEMBER(v30, data);
  v32 = (iree_vm_ref_t*) v31;
  iree_vm_ref_move(v32, v4);
  v33 = iree_ok_status();
  return v33;
  label4:
  iree_vm_ref_release(v3);
  v34 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v34;
  label5:
  iree_vm_ref_release(v3);
  return v26;
}

static iree_status_t module_call_0riii_r_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, int32_t v4, int32_t v5, int32_t v6, iree_vm_ref_t* v7) {
  iree_vm_function_call_t v8;
  iree_host_size_t v9;
  iree_host_size_t v10;
  iree_host_size_t v11;
  iree_host_size_t v12;
  iree_host_size_t v13;
  iree_host_size_t v14;
  iree_host_size_t v15;
  iree_host_size_t v16;
  iree_host_size_t v17;
  iree_host_size_t v18;
  iree_host_size_t v19;
  iree_vm_module_t* v20;
  bool v21;
  int32_t v22;
  bool v23;
  iree_vm_function_t v24;
  iree_byte_span_t* v25;
  void* v26;
  uint8_t* v27;
  iree_byte_span_t* v28;
  void* v29;
  uint8_t* v30;
  iree_byte_span_t v31;
  uint8_t* v32;
  iree_vm_ref_t* v33;
  iree_host_size_t v34;
  uint8_t* v35;
  iree_host_size_t v36;
  int32_t* v37;
  iree_host_size_t v38;
  uint8_t* v39;
  iree_host_size_t v40;
  int32_t* v41;
  iree_host_size_t v42;
  uint8_t* v43;
  iree_host_size_t v44;
  int32_t* v45;
  iree_vm_module_t* v46;
  iree_status_t v47;
  bool v48;
  int32_t v49;
  bool v50;
  iree_byte_span_t v51;
  uint8_t* v52;
  iree_vm_ref_t* v53;
  iree_status_t v54;
  iree_status_t v55;
  ;
  v9 = 0;
  v10 = sizeof(iree_vm_ref_t);
  v11 = EMITC_BINARY(+, v9, v10);
  v12 = sizeof(int32_t);
  v13 = EMITC_BINARY(+, v11, v12);
  v14 = sizeof(int32_t);
  v15 = EMITC_BINARY(+, v13, v14);
  v16 = sizeof(int32_t);
  v17 = EMITC_BINARY(+, v15, v16);
  v18 = sizeof(iree_vm_ref_t);
  v19 = EMITC_BINARY(+, v9, v18);
  v20 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v21 = EMITC_UNARY(!, v20);
  v22 = vm_cmp_nz_i32(v21);
  v23 = (bool) v22;
  if (v23) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v24 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v8, function, v24);
  v25 = EMITC_STRUCT_MEMBER_ADDRESS(v8, arguments);
  v26 = iree_alloca(v17);
  v27 = (uint8_t*) v26;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v25, data_length, v17);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v25, data, v27);
  memset(v27, 0, v17);
  v28 = EMITC_STRUCT_MEMBER_ADDRESS(v8, results);
  v29 = iree_alloca(v19);
  v30 = (uint8_t*) v29;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v28, data_length, v19);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v28, data, v30);
  memset(v30, 0, v19);
  v31 = EMITC_STRUCT_MEMBER(v8, arguments);
  v32 = EMITC_STRUCT_MEMBER(v31, data);
  v33 = (iree_vm_ref_t*) v32;
  iree_vm_ref_assign(v3, v33);
  v34 = sizeof(iree_vm_ref_t);
  v35 = EMITC_BINARY(+, v32, v34);
  v36 = sizeof(int32_t);
  v37 = &v4;
  memcpy(v35, v37, v36);
  v38 = sizeof(int32_t);
  v39 = EMITC_BINARY(+, v35, v38);
  v40 = sizeof(int32_t);
  v41 = &v5;
  memcpy(v39, v41, v40);
  v42 = sizeof(int32_t);
  v43 = EMITC_BINARY(+, v39, v42);
  v44 = sizeof(int32_t);
  v45 = &v6;
  memcpy(v43, v45, v44);
  v46 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v47 = EMITC_STRUCT_PTR_MEMBER_CALL(v46, begin_call, v46, v1, v8);
  v48 = (bool) v47;
  v49 = vm_cmp_nz_i32(v48);
  v50 = (bool) v49;
  if (v50) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v51 = EMITC_STRUCT_MEMBER(v8, results);
  v52 = EMITC_STRUCT_MEMBER(v51, data);
  v53 = (iree_vm_ref_t*) v52;
  iree_vm_ref_move(v53, v7);
  v54 = iree_ok_status();
  return v54;
  label4:
  iree_vm_ref_release(v3);
  v55 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v55;
  label5:
  iree_vm_ref_release(v3);
  return v47;
}

static iree_status_t module_call_0r_v_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3) {
  iree_vm_function_call_t v4;
  iree_host_size_t v5;
  iree_host_size_t v6;
  iree_host_size_t v7;
  iree_vm_module_t* v8;
  bool v9;
  int32_t v10;
  bool v11;
  iree_vm_function_t v12;
  iree_byte_span_t* v13;
  void* v14;
  uint8_t* v15;
  iree_byte_span_t* v16;
  void* v17;
  uint8_t* v18;
  iree_byte_span_t v19;
  uint8_t* v20;
  iree_vm_ref_t* v21;
  iree_vm_module_t* v22;
  iree_status_t v23;
  bool v24;
  int32_t v25;
  bool v26;
  iree_status_t v27;
  iree_status_t v28;
  ;
  v5 = 0;
  v6 = sizeof(iree_vm_ref_t);
  v7 = EMITC_BINARY(+, v5, v6);
  v8 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v9 = EMITC_UNARY(!, v8);
  v10 = vm_cmp_nz_i32(v9);
  v11 = (bool) v10;
  if (v11) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v12 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v4, function, v12);
  v13 = EMITC_STRUCT_MEMBER_ADDRESS(v4, arguments);
  v14 = iree_alloca(v7);
  v15 = (uint8_t*) v14;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v13, data_length, v7);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v13, data, v15);
  memset(v15, 0, v7);
  v16 = EMITC_STRUCT_MEMBER_ADDRESS(v4, results);
  v17 = iree_alloca(v5);
  v18 = (uint8_t*) v17;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v16, data_length, v5);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v16, data, v18);
  memset(v18, 0, v5);
  v19 = EMITC_STRUCT_MEMBER(v4, arguments);
  v20 = EMITC_STRUCT_MEMBER(v19, data);
  v21 = (iree_vm_ref_t*) v20;
  iree_vm_ref_assign(v3, v21);
  v22 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v23 = EMITC_STRUCT_PTR_MEMBER_CALL(v22, begin_call, v22, v1, v4);
  v24 = (bool) v23;
  v25 = vm_cmp_nz_i32(v24);
  v26 = (bool) v25;
  if (v26) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v27 = iree_ok_status();
  return v27;
  label4:
  iree_vm_ref_release(v3);
  v28 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v28;
  label5:
  iree_vm_ref_release(v3);
  return v23;
}

static iree_status_t module_call_0riii_v_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, int32_t v4, int32_t v5, int32_t v6) {
  iree_vm_function_call_t v7;
  iree_host_size_t v8;
  iree_host_size_t v9;
  iree_host_size_t v10;
  iree_host_size_t v11;
  iree_host_size_t v12;
  iree_host_size_t v13;
  iree_host_size_t v14;
  iree_host_size_t v15;
  iree_host_size_t v16;
  iree_vm_module_t* v17;
  bool v18;
  int32_t v19;
  bool v20;
  iree_vm_function_t v21;
  iree_byte_span_t* v22;
  void* v23;
  uint8_t* v24;
  iree_byte_span_t* v25;
  void* v26;
  uint8_t* v27;
  iree_byte_span_t v28;
  uint8_t* v29;
  iree_vm_ref_t* v30;
  iree_host_size_t v31;
  uint8_t* v32;
  iree_host_size_t v33;
  int32_t* v34;
  iree_host_size_t v35;
  uint8_t* v36;
  iree_host_size_t v37;
  int32_t* v38;
  iree_host_size_t v39;
  uint8_t* v40;
  iree_host_size_t v41;
  int32_t* v42;
  iree_vm_module_t* v43;
  iree_status_t v44;
  bool v45;
  int32_t v46;
  bool v47;
  iree_status_t v48;
  iree_status_t v49;
  ;
  v8 = 0;
  v9 = sizeof(iree_vm_ref_t);
  v10 = EMITC_BINARY(+, v8, v9);
  v11 = sizeof(int32_t);
  v12 = EMITC_BINARY(+, v10, v11);
  v13 = sizeof(int32_t);
  v14 = EMITC_BINARY(+, v12, v13);
  v15 = sizeof(int32_t);
  v16 = EMITC_BINARY(+, v14, v15);
  v17 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v18 = EMITC_UNARY(!, v17);
  v19 = vm_cmp_nz_i32(v18);
  v20 = (bool) v19;
  if (v20) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v21 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v7, function, v21);
  v22 = EMITC_STRUCT_MEMBER_ADDRESS(v7, arguments);
  v23 = iree_alloca(v16);
  v24 = (uint8_t*) v23;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v22, data_length, v16);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v22, data, v24);
  memset(v24, 0, v16);
  v25 = EMITC_STRUCT_MEMBER_ADDRESS(v7, results);
  v26 = iree_alloca(v8);
  v27 = (uint8_t*) v26;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v25, data_length, v8);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v25, data, v27);
  memset(v27, 0, v8);
  v28 = EMITC_STRUCT_MEMBER(v7, arguments);
  v29 = EMITC_STRUCT_MEMBER(v28, data);
  v30 = (iree_vm_ref_t*) v29;
  iree_vm_ref_assign(v3, v30);
  v31 = sizeof(iree_vm_ref_t);
  v32 = EMITC_BINARY(+, v29, v31);
  v33 = sizeof(int32_t);
  v34 = &v4;
  memcpy(v32, v34, v33);
  v35 = sizeof(int32_t);
  v36 = EMITC_BINARY(+, v32, v35);
  v37 = sizeof(int32_t);
  v38 = &v5;
  memcpy(v36, v38, v37);
  v39 = sizeof(int32_t);
  v40 = EMITC_BINARY(+, v36, v39);
  v41 = sizeof(int32_t);
  v42 = &v6;
  memcpy(v40, v42, v41);
  v43 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v44 = EMITC_STRUCT_PTR_MEMBER_CALL(v43, begin_call, v43, v1, v7);
  v45 = (bool) v44;
  v46 = vm_cmp_nz_i32(v45);
  v47 = (bool) v46;
  if (v47) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v48 = iree_ok_status();
  return v48;
  label4:
  iree_vm_ref_release(v3);
  v49 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v49;
  label5:
  iree_vm_ref_release(v3);
  return v44;
}

static iree_status_t module_call_0rrIrII_v_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, iree_vm_ref_t* v4, int64_t v5, iree_vm_ref_t* v6, int64_t v7, int64_t v8) {
  iree_vm_function_call_t v9;
  iree_host_size_t v10;
  iree_host_size_t v11;
  iree_host_size_t v12;
  iree_host_size_t v13;
  iree_host_size_t v14;
  iree_host_size_t v15;
  iree_host_size_t v16;
  iree_host_size_t v17;
  iree_host_size_t v18;
  iree_host_size_t v19;
  iree_host_size_t v20;
  iree_host_size_t v21;
  iree_host_size_t v22;
  iree_vm_module_t* v23;
  bool v24;
  int32_t v25;
  bool v26;
  iree_vm_function_t v27;
  iree_byte_span_t* v28;
  void* v29;
  uint8_t* v30;
  iree_byte_span_t* v31;
  void* v32;
  uint8_t* v33;
  iree_byte_span_t v34;
  uint8_t* v35;
  iree_vm_ref_t* v36;
  iree_host_size_t v37;
  uint8_t* v38;
  iree_vm_ref_t* v39;
  iree_host_size_t v40;
  uint8_t* v41;
  iree_host_size_t v42;
  int64_t* v43;
  iree_host_size_t v44;
  uint8_t* v45;
  iree_vm_ref_t* v46;
  iree_host_size_t v47;
  uint8_t* v48;
  iree_host_size_t v49;
  int64_t* v50;
  iree_host_size_t v51;
  uint8_t* v52;
  iree_host_size_t v53;
  int64_t* v54;
  iree_vm_module_t* v55;
  iree_status_t v56;
  bool v57;
  int32_t v58;
  bool v59;
  iree_status_t v60;
  iree_status_t v61;
  ;
  v10 = 0;
  v11 = sizeof(iree_vm_ref_t);
  v12 = EMITC_BINARY(+, v10, v11);
  v13 = sizeof(iree_vm_ref_t);
  v14 = EMITC_BINARY(+, v12, v13);
  v15 = sizeof(int64_t);
  v16 = EMITC_BINARY(+, v14, v15);
  v17 = sizeof(iree_vm_ref_t);
  v18 = EMITC_BINARY(+, v16, v17);
  v19 = sizeof(int64_t);
  v20 = EMITC_BINARY(+, v18, v19);
  v21 = sizeof(int64_t);
  v22 = EMITC_BINARY(+, v20, v21);
  v23 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v24 = EMITC_UNARY(!, v23);
  v25 = vm_cmp_nz_i32(v24);
  v26 = (bool) v25;
  if (v26) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v27 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v9, function, v27);
  v28 = EMITC_STRUCT_MEMBER_ADDRESS(v9, arguments);
  v29 = iree_alloca(v22);
  v30 = (uint8_t*) v29;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v28, data_length, v22);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v28, data, v30);
  memset(v30, 0, v22);
  v31 = EMITC_STRUCT_MEMBER_ADDRESS(v9, results);
  v32 = iree_alloca(v10);
  v33 = (uint8_t*) v32;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v31, data_length, v10);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v31, data, v33);
  memset(v33, 0, v10);
  v34 = EMITC_STRUCT_MEMBER(v9, arguments);
  v35 = EMITC_STRUCT_MEMBER(v34, data);
  v36 = (iree_vm_ref_t*) v35;
  iree_vm_ref_assign(v3, v36);
  v37 = sizeof(iree_vm_ref_t);
  v38 = EMITC_BINARY(+, v35, v37);
  v39 = (iree_vm_ref_t*) v38;
  iree_vm_ref_assign(v4, v39);
  v40 = sizeof(iree_vm_ref_t);
  v41 = EMITC_BINARY(+, v38, v40);
  v42 = sizeof(int64_t);
  v43 = &v5;
  memcpy(v41, v43, v42);
  v44 = sizeof(int64_t);
  v45 = EMITC_BINARY(+, v41, v44);
  v46 = (iree_vm_ref_t*) v45;
  iree_vm_ref_assign(v6, v46);
  v47 = sizeof(iree_vm_ref_t);
  v48 = EMITC_BINARY(+, v45, v47);
  v49 = sizeof(int64_t);
  v50 = &v7;
  memcpy(v48, v50, v49);
  v51 = sizeof(int64_t);
  v52 = EMITC_BINARY(+, v48, v51);
  v53 = sizeof(int64_t);
  v54 = &v8;
  memcpy(v52, v54, v53);
  v55 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v56 = EMITC_STRUCT_PTR_MEMBER_CALL(v55, begin_call, v55, v1, v9);
  v57 = (bool) v56;
  v58 = vm_cmp_nz_i32(v57);
  v59 = (bool) v58;
  if (v59) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v60 = iree_ok_status();
  return v60;
  label4:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  iree_vm_ref_release(v6);
  v61 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v61;
  label5:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  iree_vm_ref_release(v6);
  return v56;
}

static iree_status_t module_call_0rriCiirIID_v_3_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, iree_vm_ref_t* v4, int32_t v5, int32_t v6, int32_t v7, int32_t v8, iree_vm_ref_t* v9, int64_t v10, int64_t v11, int32_t v12, int32_t v13, iree_vm_ref_t* v14, int64_t v15, int64_t v16, int32_t v17, int32_t v18, iree_vm_ref_t* v19, int64_t v20, int64_t v21) {
  iree_vm_function_call_t v22;
  iree_host_size_t v23;
  iree_host_size_t v24;
  iree_host_size_t v25;
  iree_host_size_t v26;
  iree_host_size_t v27;
  iree_host_size_t v28;
  iree_host_size_t v29;
  iree_host_size_t v30;
  iree_host_size_t v31;
  iree_host_size_t v32;
  iree_host_size_t v33;
  iree_host_size_t v34;
  iree_host_size_t v35;
  iree_host_size_t v36;
  iree_host_size_t v37;
  iree_host_size_t v38;
  iree_host_size_t v39;
  iree_host_size_t v40;
  iree_host_size_t v41;
  iree_host_size_t v42;
  iree_host_size_t v43;
  iree_host_size_t v44;
  iree_host_size_t v45;
  iree_host_size_t v46;
  iree_host_size_t v47;
  iree_host_size_t v48;
  iree_host_size_t v49;
  iree_host_size_t v50;
  iree_host_size_t v51;
  iree_host_size_t v52;
  iree_host_size_t v53;
  iree_host_size_t v54;
  iree_host_size_t v55;
  iree_host_size_t v56;
  iree_host_size_t v57;
  iree_host_size_t v58;
  iree_host_size_t v59;
  iree_host_size_t v60;
  iree_host_size_t v61;
  iree_vm_module_t* v62;
  bool v63;
  int32_t v64;
  bool v65;
  iree_vm_function_t v66;
  iree_byte_span_t* v67;
  void* v68;
  uint8_t* v69;
  iree_byte_span_t* v70;
  void* v71;
  uint8_t* v72;
  iree_byte_span_t v73;
  uint8_t* v74;
  iree_vm_ref_t* v75;
  iree_host_size_t v76;
  uint8_t* v77;
  iree_vm_ref_t* v78;
  iree_host_size_t v79;
  uint8_t* v80;
  iree_host_size_t v81;
  int32_t* v82;
  iree_host_size_t v83;
  uint8_t* v84;
  iree_host_size_t v85;
  int32_t* v86;
  iree_host_size_t v87;
  uint8_t* v88;
  iree_host_size_t v89;
  int32_t* v90;
  iree_host_size_t v91;
  uint8_t* v92;
  iree_host_size_t v93;
  int32_t* v94;
  iree_host_size_t v95;
  uint8_t* v96;
  iree_vm_ref_t* v97;
  iree_host_size_t v98;
  uint8_t* v99;
  iree_host_size_t v100;
  int64_t* v101;
  iree_host_size_t v102;
  uint8_t* v103;
  iree_host_size_t v104;
  int64_t* v105;
  iree_host_size_t v106;
  uint8_t* v107;
  iree_host_size_t v108;
  int32_t* v109;
  iree_host_size_t v110;
  uint8_t* v111;
  iree_host_size_t v112;
  int32_t* v113;
  iree_host_size_t v114;
  uint8_t* v115;
  iree_vm_ref_t* v116;
  iree_host_size_t v117;
  uint8_t* v118;
  iree_host_size_t v119;
  int64_t* v120;
  iree_host_size_t v121;
  uint8_t* v122;
  iree_host_size_t v123;
  int64_t* v124;
  iree_host_size_t v125;
  uint8_t* v126;
  iree_host_size_t v127;
  int32_t* v128;
  iree_host_size_t v129;
  uint8_t* v130;
  iree_host_size_t v131;
  int32_t* v132;
  iree_host_size_t v133;
  uint8_t* v134;
  iree_vm_ref_t* v135;
  iree_host_size_t v136;
  uint8_t* v137;
  iree_host_size_t v138;
  int64_t* v139;
  iree_host_size_t v140;
  uint8_t* v141;
  iree_host_size_t v142;
  int64_t* v143;
  iree_vm_module_t* v144;
  iree_status_t v145;
  bool v146;
  int32_t v147;
  bool v148;
  iree_status_t v149;
  iree_status_t v150;
  ;
  v23 = 0;
  v24 = sizeof(iree_vm_ref_t);
  v25 = EMITC_BINARY(+, v23, v24);
  v26 = sizeof(iree_vm_ref_t);
  v27 = EMITC_BINARY(+, v25, v26);
  v28 = sizeof(int32_t);
  v29 = EMITC_BINARY(+, v27, v28);
  v30 = sizeof(int32_t);
  v31 = EMITC_BINARY(+, v29, v30);
  v32 = sizeof(int32_t);
  v33 = EMITC_BINARY(+, v31, v32);
  v34 = sizeof(int32_t);
  v35 = EMITC_BINARY(+, v33, v34);
  v36 = sizeof(iree_vm_ref_t);
  v37 = EMITC_BINARY(+, v35, v36);
  v38 = sizeof(int64_t);
  v39 = EMITC_BINARY(+, v37, v38);
  v40 = sizeof(int64_t);
  v41 = EMITC_BINARY(+, v39, v40);
  v42 = sizeof(int32_t);
  v43 = EMITC_BINARY(+, v41, v42);
  v44 = sizeof(int32_t);
  v45 = EMITC_BINARY(+, v43, v44);
  v46 = sizeof(iree_vm_ref_t);
  v47 = EMITC_BINARY(+, v45, v46);
  v48 = sizeof(int64_t);
  v49 = EMITC_BINARY(+, v47, v48);
  v50 = sizeof(int64_t);
  v51 = EMITC_BINARY(+, v49, v50);
  v52 = sizeof(int32_t);
  v53 = EMITC_BINARY(+, v51, v52);
  v54 = sizeof(int32_t);
  v55 = EMITC_BINARY(+, v53, v54);
  v56 = sizeof(iree_vm_ref_t);
  v57 = EMITC_BINARY(+, v55, v56);
  v58 = sizeof(int64_t);
  v59 = EMITC_BINARY(+, v57, v58);
  v60 = sizeof(int64_t);
  v61 = EMITC_BINARY(+, v59, v60);
  v62 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v63 = EMITC_UNARY(!, v62);
  v64 = vm_cmp_nz_i32(v63);
  v65 = (bool) v64;
  if (v65) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v66 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v22, function, v66);
  v67 = EMITC_STRUCT_MEMBER_ADDRESS(v22, arguments);
  v68 = iree_alloca(v61);
  v69 = (uint8_t*) v68;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v67, data_length, v61);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v67, data, v69);
  memset(v69, 0, v61);
  v70 = EMITC_STRUCT_MEMBER_ADDRESS(v22, results);
  v71 = iree_alloca(v23);
  v72 = (uint8_t*) v71;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v70, data_length, v23);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v70, data, v72);
  memset(v72, 0, v23);
  v73 = EMITC_STRUCT_MEMBER(v22, arguments);
  v74 = EMITC_STRUCT_MEMBER(v73, data);
  v75 = (iree_vm_ref_t*) v74;
  iree_vm_ref_assign(v3, v75);
  v76 = sizeof(iree_vm_ref_t);
  v77 = EMITC_BINARY(+, v74, v76);
  v78 = (iree_vm_ref_t*) v77;
  iree_vm_ref_assign(v4, v78);
  v79 = sizeof(iree_vm_ref_t);
  v80 = EMITC_BINARY(+, v77, v79);
  v81 = sizeof(int32_t);
  v82 = &v5;
  memcpy(v80, v82, v81);
  v83 = sizeof(int32_t);
  v84 = EMITC_BINARY(+, v80, v83);
  v85 = sizeof(int32_t);
  v86 = &v6;
  memcpy(v84, v86, v85);
  v87 = sizeof(int32_t);
  v88 = EMITC_BINARY(+, v84, v87);
  v89 = sizeof(int32_t);
  v90 = &v7;
  memcpy(v88, v90, v89);
  v91 = sizeof(int32_t);
  v92 = EMITC_BINARY(+, v88, v91);
  v93 = sizeof(int32_t);
  v94 = &v8;
  memcpy(v92, v94, v93);
  v95 = sizeof(int32_t);
  v96 = EMITC_BINARY(+, v92, v95);
  v97 = (iree_vm_ref_t*) v96;
  iree_vm_ref_assign(v9, v97);
  v98 = sizeof(iree_vm_ref_t);
  v99 = EMITC_BINARY(+, v96, v98);
  v100 = sizeof(int64_t);
  v101 = &v10;
  memcpy(v99, v101, v100);
  v102 = sizeof(int64_t);
  v103 = EMITC_BINARY(+, v99, v102);
  v104 = sizeof(int64_t);
  v105 = &v11;
  memcpy(v103, v105, v104);
  v106 = sizeof(int64_t);
  v107 = EMITC_BINARY(+, v103, v106);
  v108 = sizeof(int32_t);
  v109 = &v12;
  memcpy(v107, v109, v108);
  v110 = sizeof(int32_t);
  v111 = EMITC_BINARY(+, v107, v110);
  v112 = sizeof(int32_t);
  v113 = &v13;
  memcpy(v111, v113, v112);
  v114 = sizeof(int32_t);
  v115 = EMITC_BINARY(+, v111, v114);
  v116 = (iree_vm_ref_t*) v115;
  iree_vm_ref_assign(v14, v116);
  v117 = sizeof(iree_vm_ref_t);
  v118 = EMITC_BINARY(+, v115, v117);
  v119 = sizeof(int64_t);
  v120 = &v15;
  memcpy(v118, v120, v119);
  v121 = sizeof(int64_t);
  v122 = EMITC_BINARY(+, v118, v121);
  v123 = sizeof(int64_t);
  v124 = &v16;
  memcpy(v122, v124, v123);
  v125 = sizeof(int64_t);
  v126 = EMITC_BINARY(+, v122, v125);
  v127 = sizeof(int32_t);
  v128 = &v17;
  memcpy(v126, v128, v127);
  v129 = sizeof(int32_t);
  v130 = EMITC_BINARY(+, v126, v129);
  v131 = sizeof(int32_t);
  v132 = &v18;
  memcpy(v130, v132, v131);
  v133 = sizeof(int32_t);
  v134 = EMITC_BINARY(+, v130, v133);
  v135 = (iree_vm_ref_t*) v134;
  iree_vm_ref_assign(v19, v135);
  v136 = sizeof(iree_vm_ref_t);
  v137 = EMITC_BINARY(+, v134, v136);
  v138 = sizeof(int64_t);
  v139 = &v20;
  memcpy(v137, v139, v138);
  v140 = sizeof(int64_t);
  v141 = EMITC_BINARY(+, v137, v140);
  v142 = sizeof(int64_t);
  v143 = &v21;
  memcpy(v141, v143, v142);
  v144 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v145 = EMITC_STRUCT_PTR_MEMBER_CALL(v144, begin_call, v144, v1, v22);
  v146 = (bool) v145;
  v147 = vm_cmp_nz_i32(v146);
  v148 = (bool) v147;
  if (v148) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v149 = iree_ok_status();
  return v149;
  label4:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  v150 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v150;
  label5:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  return v145;
}

static iree_status_t module_call_0rriCiirIID_v_2_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, iree_vm_ref_t* v4, int32_t v5, int32_t v6, int32_t v7, int32_t v8, iree_vm_ref_t* v9, int64_t v10, int64_t v11, int32_t v12, int32_t v13, iree_vm_ref_t* v14, int64_t v15, int64_t v16) {
  iree_vm_function_call_t v17;
  iree_host_size_t v18;
  iree_host_size_t v19;
  iree_host_size_t v20;
  iree_host_size_t v21;
  iree_host_size_t v22;
  iree_host_size_t v23;
  iree_host_size_t v24;
  iree_host_size_t v25;
  iree_host_size_t v26;
  iree_host_size_t v27;
  iree_host_size_t v28;
  iree_host_size_t v29;
  iree_host_size_t v30;
  iree_host_size_t v31;
  iree_host_size_t v32;
  iree_host_size_t v33;
  iree_host_size_t v34;
  iree_host_size_t v35;
  iree_host_size_t v36;
  iree_host_size_t v37;
  iree_host_size_t v38;
  iree_host_size_t v39;
  iree_host_size_t v40;
  iree_host_size_t v41;
  iree_host_size_t v42;
  iree_host_size_t v43;
  iree_host_size_t v44;
  iree_host_size_t v45;
  iree_host_size_t v46;
  iree_vm_module_t* v47;
  bool v48;
  int32_t v49;
  bool v50;
  iree_vm_function_t v51;
  iree_byte_span_t* v52;
  void* v53;
  uint8_t* v54;
  iree_byte_span_t* v55;
  void* v56;
  uint8_t* v57;
  iree_byte_span_t v58;
  uint8_t* v59;
  iree_vm_ref_t* v60;
  iree_host_size_t v61;
  uint8_t* v62;
  iree_vm_ref_t* v63;
  iree_host_size_t v64;
  uint8_t* v65;
  iree_host_size_t v66;
  int32_t* v67;
  iree_host_size_t v68;
  uint8_t* v69;
  iree_host_size_t v70;
  int32_t* v71;
  iree_host_size_t v72;
  uint8_t* v73;
  iree_host_size_t v74;
  int32_t* v75;
  iree_host_size_t v76;
  uint8_t* v77;
  iree_host_size_t v78;
  int32_t* v79;
  iree_host_size_t v80;
  uint8_t* v81;
  iree_vm_ref_t* v82;
  iree_host_size_t v83;
  uint8_t* v84;
  iree_host_size_t v85;
  int64_t* v86;
  iree_host_size_t v87;
  uint8_t* v88;
  iree_host_size_t v89;
  int64_t* v90;
  iree_host_size_t v91;
  uint8_t* v92;
  iree_host_size_t v93;
  int32_t* v94;
  iree_host_size_t v95;
  uint8_t* v96;
  iree_host_size_t v97;
  int32_t* v98;
  iree_host_size_t v99;
  uint8_t* v100;
  iree_vm_ref_t* v101;
  iree_host_size_t v102;
  uint8_t* v103;
  iree_host_size_t v104;
  int64_t* v105;
  iree_host_size_t v106;
  uint8_t* v107;
  iree_host_size_t v108;
  int64_t* v109;
  iree_vm_module_t* v110;
  iree_status_t v111;
  bool v112;
  int32_t v113;
  bool v114;
  iree_status_t v115;
  iree_status_t v116;
  ;
  v18 = 0;
  v19 = sizeof(iree_vm_ref_t);
  v20 = EMITC_BINARY(+, v18, v19);
  v21 = sizeof(iree_vm_ref_t);
  v22 = EMITC_BINARY(+, v20, v21);
  v23 = sizeof(int32_t);
  v24 = EMITC_BINARY(+, v22, v23);
  v25 = sizeof(int32_t);
  v26 = EMITC_BINARY(+, v24, v25);
  v27 = sizeof(int32_t);
  v28 = EMITC_BINARY(+, v26, v27);
  v29 = sizeof(int32_t);
  v30 = EMITC_BINARY(+, v28, v29);
  v31 = sizeof(iree_vm_ref_t);
  v32 = EMITC_BINARY(+, v30, v31);
  v33 = sizeof(int64_t);
  v34 = EMITC_BINARY(+, v32, v33);
  v35 = sizeof(int64_t);
  v36 = EMITC_BINARY(+, v34, v35);
  v37 = sizeof(int32_t);
  v38 = EMITC_BINARY(+, v36, v37);
  v39 = sizeof(int32_t);
  v40 = EMITC_BINARY(+, v38, v39);
  v41 = sizeof(iree_vm_ref_t);
  v42 = EMITC_BINARY(+, v40, v41);
  v43 = sizeof(int64_t);
  v44 = EMITC_BINARY(+, v42, v43);
  v45 = sizeof(int64_t);
  v46 = EMITC_BINARY(+, v44, v45);
  v47 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v48 = EMITC_UNARY(!, v47);
  v49 = vm_cmp_nz_i32(v48);
  v50 = (bool) v49;
  if (v50) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v51 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v17, function, v51);
  v52 = EMITC_STRUCT_MEMBER_ADDRESS(v17, arguments);
  v53 = iree_alloca(v46);
  v54 = (uint8_t*) v53;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v52, data_length, v46);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v52, data, v54);
  memset(v54, 0, v46);
  v55 = EMITC_STRUCT_MEMBER_ADDRESS(v17, results);
  v56 = iree_alloca(v18);
  v57 = (uint8_t*) v56;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v55, data_length, v18);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v55, data, v57);
  memset(v57, 0, v18);
  v58 = EMITC_STRUCT_MEMBER(v17, arguments);
  v59 = EMITC_STRUCT_MEMBER(v58, data);
  v60 = (iree_vm_ref_t*) v59;
  iree_vm_ref_assign(v3, v60);
  v61 = sizeof(iree_vm_ref_t);
  v62 = EMITC_BINARY(+, v59, v61);
  v63 = (iree_vm_ref_t*) v62;
  iree_vm_ref_assign(v4, v63);
  v64 = sizeof(iree_vm_ref_t);
  v65 = EMITC_BINARY(+, v62, v64);
  v66 = sizeof(int32_t);
  v67 = &v5;
  memcpy(v65, v67, v66);
  v68 = sizeof(int32_t);
  v69 = EMITC_BINARY(+, v65, v68);
  v70 = sizeof(int32_t);
  v71 = &v6;
  memcpy(v69, v71, v70);
  v72 = sizeof(int32_t);
  v73 = EMITC_BINARY(+, v69, v72);
  v74 = sizeof(int32_t);
  v75 = &v7;
  memcpy(v73, v75, v74);
  v76 = sizeof(int32_t);
  v77 = EMITC_BINARY(+, v73, v76);
  v78 = sizeof(int32_t);
  v79 = &v8;
  memcpy(v77, v79, v78);
  v80 = sizeof(int32_t);
  v81 = EMITC_BINARY(+, v77, v80);
  v82 = (iree_vm_ref_t*) v81;
  iree_vm_ref_assign(v9, v82);
  v83 = sizeof(iree_vm_ref_t);
  v84 = EMITC_BINARY(+, v81, v83);
  v85 = sizeof(int64_t);
  v86 = &v10;
  memcpy(v84, v86, v85);
  v87 = sizeof(int64_t);
  v88 = EMITC_BINARY(+, v84, v87);
  v89 = sizeof(int64_t);
  v90 = &v11;
  memcpy(v88, v90, v89);
  v91 = sizeof(int64_t);
  v92 = EMITC_BINARY(+, v88, v91);
  v93 = sizeof(int32_t);
  v94 = &v12;
  memcpy(v92, v94, v93);
  v95 = sizeof(int32_t);
  v96 = EMITC_BINARY(+, v92, v95);
  v97 = sizeof(int32_t);
  v98 = &v13;
  memcpy(v96, v98, v97);
  v99 = sizeof(int32_t);
  v100 = EMITC_BINARY(+, v96, v99);
  v101 = (iree_vm_ref_t*) v100;
  iree_vm_ref_assign(v14, v101);
  v102 = sizeof(iree_vm_ref_t);
  v103 = EMITC_BINARY(+, v100, v102);
  v104 = sizeof(int64_t);
  v105 = &v15;
  memcpy(v103, v105, v104);
  v106 = sizeof(int64_t);
  v107 = EMITC_BINARY(+, v103, v106);
  v108 = sizeof(int64_t);
  v109 = &v16;
  memcpy(v107, v109, v108);
  v110 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v111 = EMITC_STRUCT_PTR_MEMBER_CALL(v110, begin_call, v110, v1, v17);
  v112 = (bool) v111;
  v113 = vm_cmp_nz_i32(v112);
  v114 = (bool) v113;
  if (v114) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v115 = iree_ok_status();
  return v115;
  label4:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  v116 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v116;
  label5:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  return v111;
}

static iree_status_t module_call_0rriiii_v_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, iree_vm_ref_t* v4, int32_t v5, int32_t v6, int32_t v7, int32_t v8) {
  iree_vm_function_call_t v9;
  iree_host_size_t v10;
  iree_host_size_t v11;
  iree_host_size_t v12;
  iree_host_size_t v13;
  iree_host_size_t v14;
  iree_host_size_t v15;
  iree_host_size_t v16;
  iree_host_size_t v17;
  iree_host_size_t v18;
  iree_host_size_t v19;
  iree_host_size_t v20;
  iree_host_size_t v21;
  iree_host_size_t v22;
  iree_vm_module_t* v23;
  bool v24;
  int32_t v25;
  bool v26;
  iree_vm_function_t v27;
  iree_byte_span_t* v28;
  void* v29;
  uint8_t* v30;
  iree_byte_span_t* v31;
  void* v32;
  uint8_t* v33;
  iree_byte_span_t v34;
  uint8_t* v35;
  iree_vm_ref_t* v36;
  iree_host_size_t v37;
  uint8_t* v38;
  iree_vm_ref_t* v39;
  iree_host_size_t v40;
  uint8_t* v41;
  iree_host_size_t v42;
  int32_t* v43;
  iree_host_size_t v44;
  uint8_t* v45;
  iree_host_size_t v46;
  int32_t* v47;
  iree_host_size_t v48;
  uint8_t* v49;
  iree_host_size_t v50;
  int32_t* v51;
  iree_host_size_t v52;
  uint8_t* v53;
  iree_host_size_t v54;
  int32_t* v55;
  iree_vm_module_t* v56;
  iree_status_t v57;
  bool v58;
  int32_t v59;
  bool v60;
  iree_status_t v61;
  iree_status_t v62;
  ;
  v10 = 0;
  v11 = sizeof(iree_vm_ref_t);
  v12 = EMITC_BINARY(+, v10, v11);
  v13 = sizeof(iree_vm_ref_t);
  v14 = EMITC_BINARY(+, v12, v13);
  v15 = sizeof(int32_t);
  v16 = EMITC_BINARY(+, v14, v15);
  v17 = sizeof(int32_t);
  v18 = EMITC_BINARY(+, v16, v17);
  v19 = sizeof(int32_t);
  v20 = EMITC_BINARY(+, v18, v19);
  v21 = sizeof(int32_t);
  v22 = EMITC_BINARY(+, v20, v21);
  v23 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v24 = EMITC_UNARY(!, v23);
  v25 = vm_cmp_nz_i32(v24);
  v26 = (bool) v25;
  if (v26) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v27 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v9, function, v27);
  v28 = EMITC_STRUCT_MEMBER_ADDRESS(v9, arguments);
  v29 = iree_alloca(v22);
  v30 = (uint8_t*) v29;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v28, data_length, v22);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v28, data, v30);
  memset(v30, 0, v22);
  v31 = EMITC_STRUCT_MEMBER_ADDRESS(v9, results);
  v32 = iree_alloca(v10);
  v33 = (uint8_t*) v32;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v31, data_length, v10);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v31, data, v33);
  memset(v33, 0, v10);
  v34 = EMITC_STRUCT_MEMBER(v9, arguments);
  v35 = EMITC_STRUCT_MEMBER(v34, data);
  v36 = (iree_vm_ref_t*) v35;
  iree_vm_ref_assign(v3, v36);
  v37 = sizeof(iree_vm_ref_t);
  v38 = EMITC_BINARY(+, v35, v37);
  v39 = (iree_vm_ref_t*) v38;
  iree_vm_ref_assign(v4, v39);
  v40 = sizeof(iree_vm_ref_t);
  v41 = EMITC_BINARY(+, v38, v40);
  v42 = sizeof(int32_t);
  v43 = &v5;
  memcpy(v41, v43, v42);
  v44 = sizeof(int32_t);
  v45 = EMITC_BINARY(+, v41, v44);
  v46 = sizeof(int32_t);
  v47 = &v6;
  memcpy(v45, v47, v46);
  v48 = sizeof(int32_t);
  v49 = EMITC_BINARY(+, v45, v48);
  v50 = sizeof(int32_t);
  v51 = &v7;
  memcpy(v49, v51, v50);
  v52 = sizeof(int32_t);
  v53 = EMITC_BINARY(+, v49, v52);
  v54 = sizeof(int32_t);
  v55 = &v8;
  memcpy(v53, v55, v54);
  v56 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v57 = EMITC_STRUCT_PTR_MEMBER_CALL(v56, begin_call, v56, v1, v9);
  v58 = (bool) v57;
  v59 = vm_cmp_nz_i32(v58);
  v60 = (bool) v59;
  if (v60) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v61 = iree_ok_status();
  return v61;
  label4:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  v62 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v62;
  label5:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  return v57;
}

static iree_status_t module_call_0riCiiiD_r_3_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, int32_t v4, int32_t v5, int32_t v6, int32_t v7, int32_t v8, int32_t v9, int32_t v10, int32_t v11, int32_t v12, int32_t v13, int32_t v14, iree_vm_ref_t* v15) {
  iree_vm_function_call_t v16;
  iree_host_size_t v17;
  iree_host_size_t v18;
  iree_host_size_t v19;
  iree_host_size_t v20;
  iree_host_size_t v21;
  iree_host_size_t v22;
  iree_host_size_t v23;
  iree_host_size_t v24;
  iree_host_size_t v25;
  iree_host_size_t v26;
  iree_host_size_t v27;
  iree_host_size_t v28;
  iree_host_size_t v29;
  iree_host_size_t v30;
  iree_host_size_t v31;
  iree_host_size_t v32;
  iree_host_size_t v33;
  iree_host_size_t v34;
  iree_host_size_t v35;
  iree_host_size_t v36;
  iree_host_size_t v37;
  iree_host_size_t v38;
  iree_host_size_t v39;
  iree_host_size_t v40;
  iree_host_size_t v41;
  iree_host_size_t v42;
  iree_host_size_t v43;
  iree_vm_module_t* v44;
  bool v45;
  int32_t v46;
  bool v47;
  iree_vm_function_t v48;
  iree_byte_span_t* v49;
  void* v50;
  uint8_t* v51;
  iree_byte_span_t* v52;
  void* v53;
  uint8_t* v54;
  iree_byte_span_t v55;
  uint8_t* v56;
  iree_vm_ref_t* v57;
  iree_host_size_t v58;
  uint8_t* v59;
  iree_host_size_t v60;
  int32_t* v61;
  iree_host_size_t v62;
  uint8_t* v63;
  iree_host_size_t v64;
  int32_t* v65;
  iree_host_size_t v66;
  uint8_t* v67;
  iree_host_size_t v68;
  int32_t* v69;
  iree_host_size_t v70;
  uint8_t* v71;
  iree_host_size_t v72;
  int32_t* v73;
  iree_host_size_t v74;
  uint8_t* v75;
  iree_host_size_t v76;
  int32_t* v77;
  iree_host_size_t v78;
  uint8_t* v79;
  iree_host_size_t v80;
  int32_t* v81;
  iree_host_size_t v82;
  uint8_t* v83;
  iree_host_size_t v84;
  int32_t* v85;
  iree_host_size_t v86;
  uint8_t* v87;
  iree_host_size_t v88;
  int32_t* v89;
  iree_host_size_t v90;
  uint8_t* v91;
  iree_host_size_t v92;
  int32_t* v93;
  iree_host_size_t v94;
  uint8_t* v95;
  iree_host_size_t v96;
  int32_t* v97;
  iree_host_size_t v98;
  uint8_t* v99;
  iree_host_size_t v100;
  int32_t* v101;
  iree_vm_module_t* v102;
  iree_status_t v103;
  bool v104;
  int32_t v105;
  bool v106;
  iree_byte_span_t v107;
  uint8_t* v108;
  iree_vm_ref_t* v109;
  iree_status_t v110;
  iree_status_t v111;
  ;
  v17 = 0;
  v18 = sizeof(iree_vm_ref_t);
  v19 = EMITC_BINARY(+, v17, v18);
  v20 = sizeof(int32_t);
  v21 = EMITC_BINARY(+, v19, v20);
  v22 = sizeof(int32_t);
  v23 = EMITC_BINARY(+, v21, v22);
  v24 = sizeof(int32_t);
  v25 = EMITC_BINARY(+, v23, v24);
  v26 = sizeof(int32_t);
  v27 = EMITC_BINARY(+, v25, v26);
  v28 = sizeof(int32_t);
  v29 = EMITC_BINARY(+, v27, v28);
  v30 = sizeof(int32_t);
  v31 = EMITC_BINARY(+, v29, v30);
  v32 = sizeof(int32_t);
  v33 = EMITC_BINARY(+, v31, v32);
  v34 = sizeof(int32_t);
  v35 = EMITC_BINARY(+, v33, v34);
  v36 = sizeof(int32_t);
  v37 = EMITC_BINARY(+, v35, v36);
  v38 = sizeof(int32_t);
  v39 = EMITC_BINARY(+, v37, v38);
  v40 = sizeof(int32_t);
  v41 = EMITC_BINARY(+, v39, v40);
  v42 = sizeof(iree_vm_ref_t);
  v43 = EMITC_BINARY(+, v17, v42);
  v44 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v45 = EMITC_UNARY(!, v44);
  v46 = vm_cmp_nz_i32(v45);
  v47 = (bool) v46;
  if (v47) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v48 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v16, function, v48);
  v49 = EMITC_STRUCT_MEMBER_ADDRESS(v16, arguments);
  v50 = iree_alloca(v41);
  v51 = (uint8_t*) v50;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v49, data_length, v41);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v49, data, v51);
  memset(v51, 0, v41);
  v52 = EMITC_STRUCT_MEMBER_ADDRESS(v16, results);
  v53 = iree_alloca(v43);
  v54 = (uint8_t*) v53;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v52, data_length, v43);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v52, data, v54);
  memset(v54, 0, v43);
  v55 = EMITC_STRUCT_MEMBER(v16, arguments);
  v56 = EMITC_STRUCT_MEMBER(v55, data);
  v57 = (iree_vm_ref_t*) v56;
  iree_vm_ref_assign(v3, v57);
  v58 = sizeof(iree_vm_ref_t);
  v59 = EMITC_BINARY(+, v56, v58);
  v60 = sizeof(int32_t);
  v61 = &v4;
  memcpy(v59, v61, v60);
  v62 = sizeof(int32_t);
  v63 = EMITC_BINARY(+, v59, v62);
  v64 = sizeof(int32_t);
  v65 = &v5;
  memcpy(v63, v65, v64);
  v66 = sizeof(int32_t);
  v67 = EMITC_BINARY(+, v63, v66);
  v68 = sizeof(int32_t);
  v69 = &v6;
  memcpy(v67, v69, v68);
  v70 = sizeof(int32_t);
  v71 = EMITC_BINARY(+, v67, v70);
  v72 = sizeof(int32_t);
  v73 = &v7;
  memcpy(v71, v73, v72);
  v74 = sizeof(int32_t);
  v75 = EMITC_BINARY(+, v71, v74);
  v76 = sizeof(int32_t);
  v77 = &v8;
  memcpy(v75, v77, v76);
  v78 = sizeof(int32_t);
  v79 = EMITC_BINARY(+, v75, v78);
  v80 = sizeof(int32_t);
  v81 = &v9;
  memcpy(v79, v81, v80);
  v82 = sizeof(int32_t);
  v83 = EMITC_BINARY(+, v79, v82);
  v84 = sizeof(int32_t);
  v85 = &v10;
  memcpy(v83, v85, v84);
  v86 = sizeof(int32_t);
  v87 = EMITC_BINARY(+, v83, v86);
  v88 = sizeof(int32_t);
  v89 = &v11;
  memcpy(v87, v89, v88);
  v90 = sizeof(int32_t);
  v91 = EMITC_BINARY(+, v87, v90);
  v92 = sizeof(int32_t);
  v93 = &v12;
  memcpy(v91, v93, v92);
  v94 = sizeof(int32_t);
  v95 = EMITC_BINARY(+, v91, v94);
  v96 = sizeof(int32_t);
  v97 = &v13;
  memcpy(v95, v97, v96);
  v98 = sizeof(int32_t);
  v99 = EMITC_BINARY(+, v95, v98);
  v100 = sizeof(int32_t);
  v101 = &v14;
  memcpy(v99, v101, v100);
  v102 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v103 = EMITC_STRUCT_PTR_MEMBER_CALL(v102, begin_call, v102, v1, v16);
  v104 = (bool) v103;
  v105 = vm_cmp_nz_i32(v104);
  v106 = (bool) v105;
  if (v106) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v107 = EMITC_STRUCT_MEMBER(v16, results);
  v108 = EMITC_STRUCT_MEMBER(v107, data);
  v109 = (iree_vm_ref_t*) v108;
  iree_vm_ref_move(v109, v15);
  v110 = iree_ok_status();
  return v110;
  label4:
  iree_vm_ref_release(v3);
  v111 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v111;
  label5:
  iree_vm_ref_release(v3);
  return v103;
}

static iree_status_t module_call_0riCiiiD_r_2_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, int32_t v4, int32_t v5, int32_t v6, int32_t v7, int32_t v8, int32_t v9, int32_t v10, int32_t v11, iree_vm_ref_t* v12) {
  iree_vm_function_call_t v13;
  iree_host_size_t v14;
  iree_host_size_t v15;
  iree_host_size_t v16;
  iree_host_size_t v17;
  iree_host_size_t v18;
  iree_host_size_t v19;
  iree_host_size_t v20;
  iree_host_size_t v21;
  iree_host_size_t v22;
  iree_host_size_t v23;
  iree_host_size_t v24;
  iree_host_size_t v25;
  iree_host_size_t v26;
  iree_host_size_t v27;
  iree_host_size_t v28;
  iree_host_size_t v29;
  iree_host_size_t v30;
  iree_host_size_t v31;
  iree_host_size_t v32;
  iree_host_size_t v33;
  iree_host_size_t v34;
  iree_vm_module_t* v35;
  bool v36;
  int32_t v37;
  bool v38;
  iree_vm_function_t v39;
  iree_byte_span_t* v40;
  void* v41;
  uint8_t* v42;
  iree_byte_span_t* v43;
  void* v44;
  uint8_t* v45;
  iree_byte_span_t v46;
  uint8_t* v47;
  iree_vm_ref_t* v48;
  iree_host_size_t v49;
  uint8_t* v50;
  iree_host_size_t v51;
  int32_t* v52;
  iree_host_size_t v53;
  uint8_t* v54;
  iree_host_size_t v55;
  int32_t* v56;
  iree_host_size_t v57;
  uint8_t* v58;
  iree_host_size_t v59;
  int32_t* v60;
  iree_host_size_t v61;
  uint8_t* v62;
  iree_host_size_t v63;
  int32_t* v64;
  iree_host_size_t v65;
  uint8_t* v66;
  iree_host_size_t v67;
  int32_t* v68;
  iree_host_size_t v69;
  uint8_t* v70;
  iree_host_size_t v71;
  int32_t* v72;
  iree_host_size_t v73;
  uint8_t* v74;
  iree_host_size_t v75;
  int32_t* v76;
  iree_host_size_t v77;
  uint8_t* v78;
  iree_host_size_t v79;
  int32_t* v80;
  iree_vm_module_t* v81;
  iree_status_t v82;
  bool v83;
  int32_t v84;
  bool v85;
  iree_byte_span_t v86;
  uint8_t* v87;
  iree_vm_ref_t* v88;
  iree_status_t v89;
  iree_status_t v90;
  ;
  v14 = 0;
  v15 = sizeof(iree_vm_ref_t);
  v16 = EMITC_BINARY(+, v14, v15);
  v17 = sizeof(int32_t);
  v18 = EMITC_BINARY(+, v16, v17);
  v19 = sizeof(int32_t);
  v20 = EMITC_BINARY(+, v18, v19);
  v21 = sizeof(int32_t);
  v22 = EMITC_BINARY(+, v20, v21);
  v23 = sizeof(int32_t);
  v24 = EMITC_BINARY(+, v22, v23);
  v25 = sizeof(int32_t);
  v26 = EMITC_BINARY(+, v24, v25);
  v27 = sizeof(int32_t);
  v28 = EMITC_BINARY(+, v26, v27);
  v29 = sizeof(int32_t);
  v30 = EMITC_BINARY(+, v28, v29);
  v31 = sizeof(int32_t);
  v32 = EMITC_BINARY(+, v30, v31);
  v33 = sizeof(iree_vm_ref_t);
  v34 = EMITC_BINARY(+, v14, v33);
  v35 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v36 = EMITC_UNARY(!, v35);
  v37 = vm_cmp_nz_i32(v36);
  v38 = (bool) v37;
  if (v38) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v39 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v13, function, v39);
  v40 = EMITC_STRUCT_MEMBER_ADDRESS(v13, arguments);
  v41 = iree_alloca(v32);
  v42 = (uint8_t*) v41;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v40, data_length, v32);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v40, data, v42);
  memset(v42, 0, v32);
  v43 = EMITC_STRUCT_MEMBER_ADDRESS(v13, results);
  v44 = iree_alloca(v34);
  v45 = (uint8_t*) v44;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v43, data_length, v34);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v43, data, v45);
  memset(v45, 0, v34);
  v46 = EMITC_STRUCT_MEMBER(v13, arguments);
  v47 = EMITC_STRUCT_MEMBER(v46, data);
  v48 = (iree_vm_ref_t*) v47;
  iree_vm_ref_assign(v3, v48);
  v49 = sizeof(iree_vm_ref_t);
  v50 = EMITC_BINARY(+, v47, v49);
  v51 = sizeof(int32_t);
  v52 = &v4;
  memcpy(v50, v52, v51);
  v53 = sizeof(int32_t);
  v54 = EMITC_BINARY(+, v50, v53);
  v55 = sizeof(int32_t);
  v56 = &v5;
  memcpy(v54, v56, v55);
  v57 = sizeof(int32_t);
  v58 = EMITC_BINARY(+, v54, v57);
  v59 = sizeof(int32_t);
  v60 = &v6;
  memcpy(v58, v60, v59);
  v61 = sizeof(int32_t);
  v62 = EMITC_BINARY(+, v58, v61);
  v63 = sizeof(int32_t);
  v64 = &v7;
  memcpy(v62, v64, v63);
  v65 = sizeof(int32_t);
  v66 = EMITC_BINARY(+, v62, v65);
  v67 = sizeof(int32_t);
  v68 = &v8;
  memcpy(v66, v68, v67);
  v69 = sizeof(int32_t);
  v70 = EMITC_BINARY(+, v66, v69);
  v71 = sizeof(int32_t);
  v72 = &v9;
  memcpy(v70, v72, v71);
  v73 = sizeof(int32_t);
  v74 = EMITC_BINARY(+, v70, v73);
  v75 = sizeof(int32_t);
  v76 = &v10;
  memcpy(v74, v76, v75);
  v77 = sizeof(int32_t);
  v78 = EMITC_BINARY(+, v74, v77);
  v79 = sizeof(int32_t);
  v80 = &v11;
  memcpy(v78, v80, v79);
  v81 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v82 = EMITC_STRUCT_PTR_MEMBER_CALL(v81, begin_call, v81, v1, v13);
  v83 = (bool) v82;
  v84 = vm_cmp_nz_i32(v83);
  v85 = (bool) v84;
  if (v85) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v86 = EMITC_STRUCT_MEMBER(v13, results);
  v87 = EMITC_STRUCT_MEMBER(v86, data);
  v88 = (iree_vm_ref_t*) v87;
  iree_vm_ref_move(v88, v12);
  v89 = iree_ok_status();
  return v89;
  label4:
  iree_vm_ref_release(v3);
  v90 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v90;
  label5:
  iree_vm_ref_release(v3);
  return v82;
}

static iree_status_t module_call_0rrr_iI_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, iree_vm_ref_t* v4, iree_vm_ref_t* v5, int32_t* v6, int64_t* v7) {
  iree_vm_function_call_t v8;
  iree_host_size_t v9;
  iree_host_size_t v10;
  iree_host_size_t v11;
  iree_host_size_t v12;
  iree_host_size_t v13;
  iree_host_size_t v14;
  iree_host_size_t v15;
  iree_host_size_t v16;
  iree_host_size_t v17;
  iree_host_size_t v18;
  iree_host_size_t v19;
  iree_vm_module_t* v20;
  bool v21;
  int32_t v22;
  bool v23;
  iree_vm_function_t v24;
  iree_byte_span_t* v25;
  void* v26;
  uint8_t* v27;
  iree_byte_span_t* v28;
  void* v29;
  uint8_t* v30;
  iree_byte_span_t v31;
  uint8_t* v32;
  iree_vm_ref_t* v33;
  iree_host_size_t v34;
  uint8_t* v35;
  iree_vm_ref_t* v36;
  iree_host_size_t v37;
  uint8_t* v38;
  iree_vm_ref_t* v39;
  iree_vm_module_t* v40;
  iree_status_t v41;
  bool v42;
  int32_t v43;
  bool v44;
  iree_byte_span_t v45;
  uint8_t* v46;
  iree_host_size_t v47;
  iree_host_size_t v48;
  uint8_t* v49;
  iree_host_size_t v50;
  iree_status_t v51;
  iree_status_t v52;
  ;
  v9 = 0;
  v10 = sizeof(iree_vm_ref_t);
  v11 = EMITC_BINARY(+, v9, v10);
  v12 = sizeof(iree_vm_ref_t);
  v13 = EMITC_BINARY(+, v11, v12);
  v14 = sizeof(iree_vm_ref_t);
  v15 = EMITC_BINARY(+, v13, v14);
  v16 = sizeof(int32_t);
  v17 = EMITC_BINARY(+, v9, v16);
  v18 = sizeof(int64_t);
  v19 = EMITC_BINARY(+, v17, v18);
  v20 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v21 = EMITC_UNARY(!, v20);
  v22 = vm_cmp_nz_i32(v21);
  v23 = (bool) v22;
  if (v23) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v24 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v8, function, v24);
  v25 = EMITC_STRUCT_MEMBER_ADDRESS(v8, arguments);
  v26 = iree_alloca(v15);
  v27 = (uint8_t*) v26;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v25, data_length, v15);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v25, data, v27);
  memset(v27, 0, v15);
  v28 = EMITC_STRUCT_MEMBER_ADDRESS(v8, results);
  v29 = iree_alloca(v19);
  v30 = (uint8_t*) v29;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v28, data_length, v19);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v28, data, v30);
  memset(v30, 0, v19);
  v31 = EMITC_STRUCT_MEMBER(v8, arguments);
  v32 = EMITC_STRUCT_MEMBER(v31, data);
  v33 = (iree_vm_ref_t*) v32;
  iree_vm_ref_assign(v3, v33);
  v34 = sizeof(iree_vm_ref_t);
  v35 = EMITC_BINARY(+, v32, v34);
  v36 = (iree_vm_ref_t*) v35;
  iree_vm_ref_assign(v4, v36);
  v37 = sizeof(iree_vm_ref_t);
  v38 = EMITC_BINARY(+, v35, v37);
  v39 = (iree_vm_ref_t*) v38;
  iree_vm_ref_assign(v5, v39);
  v40 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v41 = EMITC_STRUCT_PTR_MEMBER_CALL(v40, begin_call, v40, v1, v8);
  v42 = (bool) v41;
  v43 = vm_cmp_nz_i32(v42);
  v44 = (bool) v43;
  if (v44) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v45 = EMITC_STRUCT_MEMBER(v8, results);
  v46 = EMITC_STRUCT_MEMBER(v45, data);
  v47 = sizeof(int32_t);
  memcpy(v6, v46, v47);
  v48 = sizeof(int32_t);
  v49 = EMITC_BINARY(+, v46, v48);
  v50 = sizeof(int64_t);
  memcpy(v7, v49, v50);
  v51 = iree_ok_status();
  return v51;
  label4:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  iree_vm_ref_release(v5);
  v52 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v52;
  label5:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  iree_vm_ref_release(v5);
  return v41;
}

static iree_status_t module_call_0rIrriiiI_r_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, int64_t v4, iree_vm_ref_t* v5, iree_vm_ref_t* v6, int32_t v7, int32_t v8, int32_t v9, int64_t v10, iree_vm_ref_t* v11) {
  iree_vm_function_call_t v12;
  iree_host_size_t v13;
  iree_host_size_t v14;
  iree_host_size_t v15;
  iree_host_size_t v16;
  iree_host_size_t v17;
  iree_host_size_t v18;
  iree_host_size_t v19;
  iree_host_size_t v20;
  iree_host_size_t v21;
  iree_host_size_t v22;
  iree_host_size_t v23;
  iree_host_size_t v24;
  iree_host_size_t v25;
  iree_host_size_t v26;
  iree_host_size_t v27;
  iree_host_size_t v28;
  iree_host_size_t v29;
  iree_host_size_t v30;
  iree_host_size_t v31;
  iree_vm_module_t* v32;
  bool v33;
  int32_t v34;
  bool v35;
  iree_vm_function_t v36;
  iree_byte_span_t* v37;
  void* v38;
  uint8_t* v39;
  iree_byte_span_t* v40;
  void* v41;
  uint8_t* v42;
  iree_byte_span_t v43;
  uint8_t* v44;
  iree_vm_ref_t* v45;
  iree_host_size_t v46;
  uint8_t* v47;
  iree_host_size_t v48;
  int64_t* v49;
  iree_host_size_t v50;
  uint8_t* v51;
  iree_vm_ref_t* v52;
  iree_host_size_t v53;
  uint8_t* v54;
  iree_vm_ref_t* v55;
  iree_host_size_t v56;
  uint8_t* v57;
  iree_host_size_t v58;
  int32_t* v59;
  iree_host_size_t v60;
  uint8_t* v61;
  iree_host_size_t v62;
  int32_t* v63;
  iree_host_size_t v64;
  uint8_t* v65;
  iree_host_size_t v66;
  int32_t* v67;
  iree_host_size_t v68;
  uint8_t* v69;
  iree_host_size_t v70;
  int64_t* v71;
  iree_vm_module_t* v72;
  iree_status_t v73;
  bool v74;
  int32_t v75;
  bool v76;
  iree_byte_span_t v77;
  uint8_t* v78;
  iree_vm_ref_t* v79;
  iree_status_t v80;
  iree_status_t v81;
  ;
  v13 = 0;
  v14 = sizeof(iree_vm_ref_t);
  v15 = EMITC_BINARY(+, v13, v14);
  v16 = sizeof(int64_t);
  v17 = EMITC_BINARY(+, v15, v16);
  v18 = sizeof(iree_vm_ref_t);
  v19 = EMITC_BINARY(+, v17, v18);
  v20 = sizeof(iree_vm_ref_t);
  v21 = EMITC_BINARY(+, v19, v20);
  v22 = sizeof(int32_t);
  v23 = EMITC_BINARY(+, v21, v22);
  v24 = sizeof(int32_t);
  v25 = EMITC_BINARY(+, v23, v24);
  v26 = sizeof(int32_t);
  v27 = EMITC_BINARY(+, v25, v26);
  v28 = sizeof(int64_t);
  v29 = EMITC_BINARY(+, v27, v28);
  v30 = sizeof(iree_vm_ref_t);
  v31 = EMITC_BINARY(+, v13, v30);
  v32 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v33 = EMITC_UNARY(!, v32);
  v34 = vm_cmp_nz_i32(v33);
  v35 = (bool) v34;
  if (v35) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v36 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v12, function, v36);
  v37 = EMITC_STRUCT_MEMBER_ADDRESS(v12, arguments);
  v38 = iree_alloca(v29);
  v39 = (uint8_t*) v38;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v37, data_length, v29);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v37, data, v39);
  memset(v39, 0, v29);
  v40 = EMITC_STRUCT_MEMBER_ADDRESS(v12, results);
  v41 = iree_alloca(v31);
  v42 = (uint8_t*) v41;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v40, data_length, v31);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v40, data, v42);
  memset(v42, 0, v31);
  v43 = EMITC_STRUCT_MEMBER(v12, arguments);
  v44 = EMITC_STRUCT_MEMBER(v43, data);
  v45 = (iree_vm_ref_t*) v44;
  iree_vm_ref_assign(v3, v45);
  v46 = sizeof(iree_vm_ref_t);
  v47 = EMITC_BINARY(+, v44, v46);
  v48 = sizeof(int64_t);
  v49 = &v4;
  memcpy(v47, v49, v48);
  v50 = sizeof(int64_t);
  v51 = EMITC_BINARY(+, v47, v50);
  v52 = (iree_vm_ref_t*) v51;
  iree_vm_ref_assign(v5, v52);
  v53 = sizeof(iree_vm_ref_t);
  v54 = EMITC_BINARY(+, v51, v53);
  v55 = (iree_vm_ref_t*) v54;
  iree_vm_ref_assign(v6, v55);
  v56 = sizeof(iree_vm_ref_t);
  v57 = EMITC_BINARY(+, v54, v56);
  v58 = sizeof(int32_t);
  v59 = &v7;
  memcpy(v57, v59, v58);
  v60 = sizeof(int32_t);
  v61 = EMITC_BINARY(+, v57, v60);
  v62 = sizeof(int32_t);
  v63 = &v8;
  memcpy(v61, v63, v62);
  v64 = sizeof(int32_t);
  v65 = EMITC_BINARY(+, v61, v64);
  v66 = sizeof(int32_t);
  v67 = &v9;
  memcpy(v65, v67, v66);
  v68 = sizeof(int32_t);
  v69 = EMITC_BINARY(+, v65, v68);
  v70 = sizeof(int64_t);
  v71 = &v10;
  memcpy(v69, v71, v70);
  v72 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v73 = EMITC_STRUCT_PTR_MEMBER_CALL(v72, begin_call, v72, v1, v12);
  v74 = (bool) v73;
  v75 = vm_cmp_nz_i32(v74);
  v76 = (bool) v75;
  if (v76) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v77 = EMITC_STRUCT_MEMBER(v12, results);
  v78 = EMITC_STRUCT_MEMBER(v77, data);
  v79 = (iree_vm_ref_t*) v78;
  iree_vm_ref_move(v79, v11);
  v80 = iree_ok_status();
  return v80;
  label4:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v5);
  iree_vm_ref_release(v6);
  v81 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v81;
  label5:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v5);
  iree_vm_ref_release(v6);
  return v73;
}

static iree_status_t module_call_0rIrrr_v_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, int64_t v4, iree_vm_ref_t* v5, iree_vm_ref_t* v6, iree_vm_ref_t* v7) {
  iree_vm_function_call_t v8;
  iree_host_size_t v9;
  iree_host_size_t v10;
  iree_host_size_t v11;
  iree_host_size_t v12;
  iree_host_size_t v13;
  iree_host_size_t v14;
  iree_host_size_t v15;
  iree_host_size_t v16;
  iree_host_size_t v17;
  iree_host_size_t v18;
  iree_host_size_t v19;
  iree_vm_module_t* v20;
  bool v21;
  int32_t v22;
  bool v23;
  iree_vm_function_t v24;
  iree_byte_span_t* v25;
  void* v26;
  uint8_t* v27;
  iree_byte_span_t* v28;
  void* v29;
  uint8_t* v30;
  iree_byte_span_t v31;
  uint8_t* v32;
  iree_vm_ref_t* v33;
  iree_host_size_t v34;
  uint8_t* v35;
  iree_host_size_t v36;
  int64_t* v37;
  iree_host_size_t v38;
  uint8_t* v39;
  iree_vm_ref_t* v40;
  iree_host_size_t v41;
  uint8_t* v42;
  iree_vm_ref_t* v43;
  iree_host_size_t v44;
  uint8_t* v45;
  iree_vm_ref_t* v46;
  iree_vm_module_t* v47;
  iree_status_t v48;
  bool v49;
  int32_t v50;
  bool v51;
  iree_status_t v52;
  iree_status_t v53;
  ;
  v9 = 0;
  v10 = sizeof(iree_vm_ref_t);
  v11 = EMITC_BINARY(+, v9, v10);
  v12 = sizeof(int64_t);
  v13 = EMITC_BINARY(+, v11, v12);
  v14 = sizeof(iree_vm_ref_t);
  v15 = EMITC_BINARY(+, v13, v14);
  v16 = sizeof(iree_vm_ref_t);
  v17 = EMITC_BINARY(+, v15, v16);
  v18 = sizeof(iree_vm_ref_t);
  v19 = EMITC_BINARY(+, v17, v18);
  v20 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v21 = EMITC_UNARY(!, v20);
  v22 = vm_cmp_nz_i32(v21);
  v23 = (bool) v22;
  if (v23) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v24 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v8, function, v24);
  v25 = EMITC_STRUCT_MEMBER_ADDRESS(v8, arguments);
  v26 = iree_alloca(v19);
  v27 = (uint8_t*) v26;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v25, data_length, v19);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v25, data, v27);
  memset(v27, 0, v19);
  v28 = EMITC_STRUCT_MEMBER_ADDRESS(v8, results);
  v29 = iree_alloca(v9);
  v30 = (uint8_t*) v29;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v28, data_length, v9);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v28, data, v30);
  memset(v30, 0, v9);
  v31 = EMITC_STRUCT_MEMBER(v8, arguments);
  v32 = EMITC_STRUCT_MEMBER(v31, data);
  v33 = (iree_vm_ref_t*) v32;
  iree_vm_ref_assign(v3, v33);
  v34 = sizeof(iree_vm_ref_t);
  v35 = EMITC_BINARY(+, v32, v34);
  v36 = sizeof(int64_t);
  v37 = &v4;
  memcpy(v35, v37, v36);
  v38 = sizeof(int64_t);
  v39 = EMITC_BINARY(+, v35, v38);
  v40 = (iree_vm_ref_t*) v39;
  iree_vm_ref_assign(v5, v40);
  v41 = sizeof(iree_vm_ref_t);
  v42 = EMITC_BINARY(+, v39, v41);
  v43 = (iree_vm_ref_t*) v42;
  iree_vm_ref_assign(v6, v43);
  v44 = sizeof(iree_vm_ref_t);
  v45 = EMITC_BINARY(+, v42, v44);
  v46 = (iree_vm_ref_t*) v45;
  iree_vm_ref_assign(v7, v46);
  v47 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v48 = EMITC_STRUCT_PTR_MEMBER_CALL(v47, begin_call, v47, v1, v8);
  v49 = (bool) v48;
  v50 = vm_cmp_nz_i32(v49);
  v51 = (bool) v50;
  if (v51) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v52 = iree_ok_status();
  return v52;
  label4:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v5);
  iree_vm_ref_release(v6);
  iree_vm_ref_release(v7);
  v53 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v53;
  label5:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v5);
  iree_vm_ref_release(v6);
  iree_vm_ref_release(v7);
  return v48;
}

static iree_status_t module_call_0rIrrCrD_v_1_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, int64_t v4, iree_vm_ref_t* v5, iree_vm_ref_t* v6, int32_t v7, iree_vm_ref_t* v8) {
  iree_vm_function_call_t v9;
  iree_host_size_t v10;
  iree_host_size_t v11;
  iree_host_size_t v12;
  iree_host_size_t v13;
  iree_host_size_t v14;
  iree_host_size_t v15;
  iree_host_size_t v16;
  iree_host_size_t v17;
  iree_host_size_t v18;
  iree_host_size_t v19;
  iree_host_size_t v20;
  iree_host_size_t v21;
  iree_host_size_t v22;
  iree_vm_module_t* v23;
  bool v24;
  int32_t v25;
  bool v26;
  iree_vm_function_t v27;
  iree_byte_span_t* v28;
  void* v29;
  uint8_t* v30;
  iree_byte_span_t* v31;
  void* v32;
  uint8_t* v33;
  iree_byte_span_t v34;
  uint8_t* v35;
  iree_vm_ref_t* v36;
  iree_host_size_t v37;
  uint8_t* v38;
  iree_host_size_t v39;
  int64_t* v40;
  iree_host_size_t v41;
  uint8_t* v42;
  iree_vm_ref_t* v43;
  iree_host_size_t v44;
  uint8_t* v45;
  iree_vm_ref_t* v46;
  iree_host_size_t v47;
  uint8_t* v48;
  iree_host_size_t v49;
  int32_t* v50;
  iree_host_size_t v51;
  uint8_t* v52;
  iree_vm_ref_t* v53;
  iree_vm_module_t* v54;
  iree_status_t v55;
  bool v56;
  int32_t v57;
  bool v58;
  iree_status_t v59;
  iree_status_t v60;
  ;
  v10 = 0;
  v11 = sizeof(iree_vm_ref_t);
  v12 = EMITC_BINARY(+, v10, v11);
  v13 = sizeof(int64_t);
  v14 = EMITC_BINARY(+, v12, v13);
  v15 = sizeof(iree_vm_ref_t);
  v16 = EMITC_BINARY(+, v14, v15);
  v17 = sizeof(iree_vm_ref_t);
  v18 = EMITC_BINARY(+, v16, v17);
  v19 = sizeof(int32_t);
  v20 = EMITC_BINARY(+, v18, v19);
  v21 = sizeof(iree_vm_ref_t);
  v22 = EMITC_BINARY(+, v20, v21);
  v23 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v24 = EMITC_UNARY(!, v23);
  v25 = vm_cmp_nz_i32(v24);
  v26 = (bool) v25;
  if (v26) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v27 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v9, function, v27);
  v28 = EMITC_STRUCT_MEMBER_ADDRESS(v9, arguments);
  v29 = iree_alloca(v22);
  v30 = (uint8_t*) v29;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v28, data_length, v22);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v28, data, v30);
  memset(v30, 0, v22);
  v31 = EMITC_STRUCT_MEMBER_ADDRESS(v9, results);
  v32 = iree_alloca(v10);
  v33 = (uint8_t*) v32;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v31, data_length, v10);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v31, data, v33);
  memset(v33, 0, v10);
  v34 = EMITC_STRUCT_MEMBER(v9, arguments);
  v35 = EMITC_STRUCT_MEMBER(v34, data);
  v36 = (iree_vm_ref_t*) v35;
  iree_vm_ref_assign(v3, v36);
  v37 = sizeof(iree_vm_ref_t);
  v38 = EMITC_BINARY(+, v35, v37);
  v39 = sizeof(int64_t);
  v40 = &v4;
  memcpy(v38, v40, v39);
  v41 = sizeof(int64_t);
  v42 = EMITC_BINARY(+, v38, v41);
  v43 = (iree_vm_ref_t*) v42;
  iree_vm_ref_assign(v5, v43);
  v44 = sizeof(iree_vm_ref_t);
  v45 = EMITC_BINARY(+, v42, v44);
  v46 = (iree_vm_ref_t*) v45;
  iree_vm_ref_assign(v6, v46);
  v47 = sizeof(iree_vm_ref_t);
  v48 = EMITC_BINARY(+, v45, v47);
  v49 = sizeof(int32_t);
  v50 = &v7;
  memcpy(v48, v50, v49);
  v51 = sizeof(int32_t);
  v52 = EMITC_BINARY(+, v48, v51);
  v53 = (iree_vm_ref_t*) v52;
  iree_vm_ref_assign(v8, v53);
  v54 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v55 = EMITC_STRUCT_PTR_MEMBER_CALL(v54, begin_call, v54, v1, v9);
  v56 = (bool) v55;
  v57 = vm_cmp_nz_i32(v56);
  v58 = (bool) v57;
  if (v58) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v59 = iree_ok_status();
  return v59;
  label4:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v5);
  iree_vm_ref_release(v6);
  iree_vm_ref_release(v8);
  v60 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v60;
  label5:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v5);
  iree_vm_ref_release(v6);
  iree_vm_ref_release(v8);
  return v55;
}

static iree_status_t module_call_0rrrrCrD_r_3_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, iree_vm_ref_t* v4, iree_vm_ref_t* v5, iree_vm_ref_t* v6, int32_t v7, iree_vm_ref_t* v8, iree_vm_ref_t* v9, iree_vm_ref_t* v10, iree_vm_ref_t* v11) {
  iree_vm_function_call_t v12;
  iree_host_size_t v13;
  iree_host_size_t v14;
  iree_host_size_t v15;
  iree_host_size_t v16;
  iree_host_size_t v17;
  iree_host_size_t v18;
  iree_host_size_t v19;
  iree_host_size_t v20;
  iree_host_size_t v21;
  iree_host_size_t v22;
  iree_host_size_t v23;
  iree_host_size_t v24;
  iree_host_size_t v25;
  iree_host_size_t v26;
  iree_host_size_t v27;
  iree_host_size_t v28;
  iree_host_size_t v29;
  iree_host_size_t v30;
  iree_host_size_t v31;
  iree_vm_module_t* v32;
  bool v33;
  int32_t v34;
  bool v35;
  iree_vm_function_t v36;
  iree_byte_span_t* v37;
  void* v38;
  uint8_t* v39;
  iree_byte_span_t* v40;
  void* v41;
  uint8_t* v42;
  iree_byte_span_t v43;
  uint8_t* v44;
  iree_vm_ref_t* v45;
  iree_host_size_t v46;
  uint8_t* v47;
  iree_vm_ref_t* v48;
  iree_host_size_t v49;
  uint8_t* v50;
  iree_vm_ref_t* v51;
  iree_host_size_t v52;
  uint8_t* v53;
  iree_vm_ref_t* v54;
  iree_host_size_t v55;
  uint8_t* v56;
  iree_host_size_t v57;
  int32_t* v58;
  iree_host_size_t v59;
  uint8_t* v60;
  iree_vm_ref_t* v61;
  iree_host_size_t v62;
  uint8_t* v63;
  iree_vm_ref_t* v64;
  iree_host_size_t v65;
  uint8_t* v66;
  iree_vm_ref_t* v67;
  iree_vm_module_t* v68;
  iree_status_t v69;
  bool v70;
  int32_t v71;
  bool v72;
  iree_byte_span_t v73;
  uint8_t* v74;
  iree_vm_ref_t* v75;
  iree_status_t v76;
  iree_status_t v77;
  ;
  v13 = 0;
  v14 = sizeof(iree_vm_ref_t);
  v15 = EMITC_BINARY(+, v13, v14);
  v16 = sizeof(iree_vm_ref_t);
  v17 = EMITC_BINARY(+, v15, v16);
  v18 = sizeof(iree_vm_ref_t);
  v19 = EMITC_BINARY(+, v17, v18);
  v20 = sizeof(iree_vm_ref_t);
  v21 = EMITC_BINARY(+, v19, v20);
  v22 = sizeof(int32_t);
  v23 = EMITC_BINARY(+, v21, v22);
  v24 = sizeof(iree_vm_ref_t);
  v25 = EMITC_BINARY(+, v23, v24);
  v26 = sizeof(iree_vm_ref_t);
  v27 = EMITC_BINARY(+, v25, v26);
  v28 = sizeof(iree_vm_ref_t);
  v29 = EMITC_BINARY(+, v27, v28);
  v30 = sizeof(iree_vm_ref_t);
  v31 = EMITC_BINARY(+, v13, v30);
  v32 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v33 = EMITC_UNARY(!, v32);
  v34 = vm_cmp_nz_i32(v33);
  v35 = (bool) v34;
  if (v35) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v36 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v12, function, v36);
  v37 = EMITC_STRUCT_MEMBER_ADDRESS(v12, arguments);
  v38 = iree_alloca(v29);
  v39 = (uint8_t*) v38;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v37, data_length, v29);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v37, data, v39);
  memset(v39, 0, v29);
  v40 = EMITC_STRUCT_MEMBER_ADDRESS(v12, results);
  v41 = iree_alloca(v31);
  v42 = (uint8_t*) v41;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v40, data_length, v31);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v40, data, v42);
  memset(v42, 0, v31);
  v43 = EMITC_STRUCT_MEMBER(v12, arguments);
  v44 = EMITC_STRUCT_MEMBER(v43, data);
  v45 = (iree_vm_ref_t*) v44;
  iree_vm_ref_assign(v3, v45);
  v46 = sizeof(iree_vm_ref_t);
  v47 = EMITC_BINARY(+, v44, v46);
  v48 = (iree_vm_ref_t*) v47;
  iree_vm_ref_assign(v4, v48);
  v49 = sizeof(iree_vm_ref_t);
  v50 = EMITC_BINARY(+, v47, v49);
  v51 = (iree_vm_ref_t*) v50;
  iree_vm_ref_assign(v5, v51);
  v52 = sizeof(iree_vm_ref_t);
  v53 = EMITC_BINARY(+, v50, v52);
  v54 = (iree_vm_ref_t*) v53;
  iree_vm_ref_assign(v6, v54);
  v55 = sizeof(iree_vm_ref_t);
  v56 = EMITC_BINARY(+, v53, v55);
  v57 = sizeof(int32_t);
  v58 = &v7;
  memcpy(v56, v58, v57);
  v59 = sizeof(int32_t);
  v60 = EMITC_BINARY(+, v56, v59);
  v61 = (iree_vm_ref_t*) v60;
  iree_vm_ref_assign(v8, v61);
  v62 = sizeof(iree_vm_ref_t);
  v63 = EMITC_BINARY(+, v60, v62);
  v64 = (iree_vm_ref_t*) v63;
  iree_vm_ref_assign(v9, v64);
  v65 = sizeof(iree_vm_ref_t);
  v66 = EMITC_BINARY(+, v63, v65);
  v67 = (iree_vm_ref_t*) v66;
  iree_vm_ref_assign(v10, v67);
  v68 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v69 = EMITC_STRUCT_PTR_MEMBER_CALL(v68, begin_call, v68, v1, v12);
  v70 = (bool) v69;
  v71 = vm_cmp_nz_i32(v70);
  v72 = (bool) v71;
  if (v72) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v73 = EMITC_STRUCT_MEMBER(v12, results);
  v74 = EMITC_STRUCT_MEMBER(v73, data);
  v75 = (iree_vm_ref_t*) v74;
  iree_vm_ref_move(v75, v11);
  v76 = iree_ok_status();
  return v76;
  label4:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  iree_vm_ref_release(v5);
  iree_vm_ref_release(v6);
  iree_vm_ref_release(v8);
  v77 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v77;
  label5:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  iree_vm_ref_release(v5);
  iree_vm_ref_release(v6);
  iree_vm_ref_release(v8);
  return v69;
}

static iree_status_t module_call_0ri_r_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, int32_t v4, iree_vm_ref_t* v5) {
  iree_vm_function_call_t v6;
  iree_host_size_t v7;
  iree_host_size_t v8;
  iree_host_size_t v9;
  iree_host_size_t v10;
  iree_host_size_t v11;
  iree_host_size_t v12;
  iree_host_size_t v13;
  iree_vm_module_t* v14;
  bool v15;
  int32_t v16;
  bool v17;
  iree_vm_function_t v18;
  iree_byte_span_t* v19;
  void* v20;
  uint8_t* v21;
  iree_byte_span_t* v22;
  void* v23;
  uint8_t* v24;
  iree_byte_span_t v25;
  uint8_t* v26;
  iree_vm_ref_t* v27;
  iree_host_size_t v28;
  uint8_t* v29;
  iree_host_size_t v30;
  int32_t* v31;
  iree_vm_module_t* v32;
  iree_status_t v33;
  bool v34;
  int32_t v35;
  bool v36;
  iree_byte_span_t v37;
  uint8_t* v38;
  iree_vm_ref_t* v39;
  iree_status_t v40;
  iree_status_t v41;
  ;
  v7 = 0;
  v8 = sizeof(iree_vm_ref_t);
  v9 = EMITC_BINARY(+, v7, v8);
  v10 = sizeof(int32_t);
  v11 = EMITC_BINARY(+, v9, v10);
  v12 = sizeof(iree_vm_ref_t);
  v13 = EMITC_BINARY(+, v7, v12);
  v14 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v15 = EMITC_UNARY(!, v14);
  v16 = vm_cmp_nz_i32(v15);
  v17 = (bool) v16;
  if (v17) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v18 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v6, function, v18);
  v19 = EMITC_STRUCT_MEMBER_ADDRESS(v6, arguments);
  v20 = iree_alloca(v11);
  v21 = (uint8_t*) v20;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v19, data_length, v11);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v19, data, v21);
  memset(v21, 0, v11);
  v22 = EMITC_STRUCT_MEMBER_ADDRESS(v6, results);
  v23 = iree_alloca(v13);
  v24 = (uint8_t*) v23;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v22, data_length, v13);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v22, data, v24);
  memset(v24, 0, v13);
  v25 = EMITC_STRUCT_MEMBER(v6, arguments);
  v26 = EMITC_STRUCT_MEMBER(v25, data);
  v27 = (iree_vm_ref_t*) v26;
  iree_vm_ref_assign(v3, v27);
  v28 = sizeof(iree_vm_ref_t);
  v29 = EMITC_BINARY(+, v26, v28);
  v30 = sizeof(int32_t);
  v31 = &v4;
  memcpy(v29, v31, v30);
  v32 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v33 = EMITC_STRUCT_PTR_MEMBER_CALL(v32, begin_call, v32, v1, v6);
  v34 = (bool) v33;
  v35 = vm_cmp_nz_i32(v34);
  v36 = (bool) v35;
  if (v36) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v37 = EMITC_STRUCT_MEMBER(v6, results);
  v38 = EMITC_STRUCT_MEMBER(v37, data);
  v39 = (iree_vm_ref_t*) v38;
  iree_vm_ref_move(v39, v5);
  v40 = iree_ok_status();
  return v40;
  label4:
  iree_vm_ref_release(v3);
  v41 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v41;
  label5:
  iree_vm_ref_release(v3);
  return v33;
}

static iree_status_t module_call_0iCrD_i_1_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, int32_t v3, int32_t v4, iree_vm_ref_t* v5, int32_t* v6) {
  iree_vm_function_call_t v7;
  iree_host_size_t v8;
  iree_host_size_t v9;
  iree_host_size_t v10;
  iree_host_size_t v11;
  iree_host_size_t v12;
  iree_host_size_t v13;
  iree_host_size_t v14;
  iree_host_size_t v15;
  iree_host_size_t v16;
  iree_vm_module_t* v17;
  bool v18;
  int32_t v19;
  bool v20;
  iree_vm_function_t v21;
  iree_byte_span_t* v22;
  void* v23;
  uint8_t* v24;
  iree_byte_span_t* v25;
  void* v26;
  uint8_t* v27;
  iree_byte_span_t v28;
  uint8_t* v29;
  iree_host_size_t v30;
  int32_t* v31;
  iree_host_size_t v32;
  uint8_t* v33;
  iree_host_size_t v34;
  int32_t* v35;
  iree_host_size_t v36;
  uint8_t* v37;
  iree_vm_ref_t* v38;
  iree_vm_module_t* v39;
  iree_status_t v40;
  bool v41;
  int32_t v42;
  bool v43;
  iree_byte_span_t v44;
  uint8_t* v45;
  iree_host_size_t v46;
  iree_status_t v47;
  iree_status_t v48;
  ;
  v8 = 0;
  v9 = sizeof(int32_t);
  v10 = EMITC_BINARY(+, v8, v9);
  v11 = sizeof(int32_t);
  v12 = EMITC_BINARY(+, v10, v11);
  v13 = sizeof(iree_vm_ref_t);
  v14 = EMITC_BINARY(+, v12, v13);
  v15 = sizeof(int32_t);
  v16 = EMITC_BINARY(+, v8, v15);
  v17 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v18 = EMITC_UNARY(!, v17);
  v19 = vm_cmp_nz_i32(v18);
  v20 = (bool) v19;
  if (v20) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v21 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v7, function, v21);
  v22 = EMITC_STRUCT_MEMBER_ADDRESS(v7, arguments);
  v23 = iree_alloca(v14);
  v24 = (uint8_t*) v23;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v22, data_length, v14);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v22, data, v24);
  memset(v24, 0, v14);
  v25 = EMITC_STRUCT_MEMBER_ADDRESS(v7, results);
  v26 = iree_alloca(v16);
  v27 = (uint8_t*) v26;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v25, data_length, v16);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v25, data, v27);
  memset(v27, 0, v16);
  v28 = EMITC_STRUCT_MEMBER(v7, arguments);
  v29 = EMITC_STRUCT_MEMBER(v28, data);
  v30 = sizeof(int32_t);
  v31 = &v3;
  memcpy(v29, v31, v30);
  v32 = sizeof(int32_t);
  v33 = EMITC_BINARY(+, v29, v32);
  v34 = sizeof(int32_t);
  v35 = &v4;
  memcpy(v33, v35, v34);
  v36 = sizeof(int32_t);
  v37 = EMITC_BINARY(+, v33, v36);
  v38 = (iree_vm_ref_t*) v37;
  iree_vm_ref_assign(v5, v38);
  v39 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v40 = EMITC_STRUCT_PTR_MEMBER_CALL(v39, begin_call, v39, v1, v7);
  v41 = (bool) v40;
  v42 = vm_cmp_nz_i32(v41);
  v43 = (bool) v42;
  if (v43) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v44 = EMITC_STRUCT_MEMBER(v7, results);
  v45 = EMITC_STRUCT_MEMBER(v44, data);
  v46 = sizeof(int32_t);
  memcpy(v6, v45, v46);
  v47 = iree_ok_status();
  return v47;
  label4:
  iree_vm_ref_release(v5);
  v48 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v48;
  label5:
  iree_vm_ref_release(v5);
  return v40;
}

static iree_status_t module_call_0riCrD_r_1_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, int32_t v4, int32_t v5, iree_vm_ref_t* v6, iree_vm_ref_t* v7) {
  iree_vm_function_call_t v8;
  iree_host_size_t v9;
  iree_host_size_t v10;
  iree_host_size_t v11;
  iree_host_size_t v12;
  iree_host_size_t v13;
  iree_host_size_t v14;
  iree_host_size_t v15;
  iree_host_size_t v16;
  iree_host_size_t v17;
  iree_host_size_t v18;
  iree_host_size_t v19;
  iree_vm_module_t* v20;
  bool v21;
  int32_t v22;
  bool v23;
  iree_vm_function_t v24;
  iree_byte_span_t* v25;
  void* v26;
  uint8_t* v27;
  iree_byte_span_t* v28;
  void* v29;
  uint8_t* v30;
  iree_byte_span_t v31;
  uint8_t* v32;
  iree_vm_ref_t* v33;
  iree_host_size_t v34;
  uint8_t* v35;
  iree_host_size_t v36;
  int32_t* v37;
  iree_host_size_t v38;
  uint8_t* v39;
  iree_host_size_t v40;
  int32_t* v41;
  iree_host_size_t v42;
  uint8_t* v43;
  iree_vm_ref_t* v44;
  iree_vm_module_t* v45;
  iree_status_t v46;
  bool v47;
  int32_t v48;
  bool v49;
  iree_byte_span_t v50;
  uint8_t* v51;
  iree_vm_ref_t* v52;
  iree_status_t v53;
  iree_status_t v54;
  ;
  v9 = 0;
  v10 = sizeof(iree_vm_ref_t);
  v11 = EMITC_BINARY(+, v9, v10);
  v12 = sizeof(int32_t);
  v13 = EMITC_BINARY(+, v11, v12);
  v14 = sizeof(int32_t);
  v15 = EMITC_BINARY(+, v13, v14);
  v16 = sizeof(iree_vm_ref_t);
  v17 = EMITC_BINARY(+, v15, v16);
  v18 = sizeof(iree_vm_ref_t);
  v19 = EMITC_BINARY(+, v9, v18);
  v20 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v21 = EMITC_UNARY(!, v20);
  v22 = vm_cmp_nz_i32(v21);
  v23 = (bool) v22;
  if (v23) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v24 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v8, function, v24);
  v25 = EMITC_STRUCT_MEMBER_ADDRESS(v8, arguments);
  v26 = iree_alloca(v17);
  v27 = (uint8_t*) v26;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v25, data_length, v17);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v25, data, v27);
  memset(v27, 0, v17);
  v28 = EMITC_STRUCT_MEMBER_ADDRESS(v8, results);
  v29 = iree_alloca(v19);
  v30 = (uint8_t*) v29;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v28, data_length, v19);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v28, data, v30);
  memset(v30, 0, v19);
  v31 = EMITC_STRUCT_MEMBER(v8, arguments);
  v32 = EMITC_STRUCT_MEMBER(v31, data);
  v33 = (iree_vm_ref_t*) v32;
  iree_vm_ref_assign(v3, v33);
  v34 = sizeof(iree_vm_ref_t);
  v35 = EMITC_BINARY(+, v32, v34);
  v36 = sizeof(int32_t);
  v37 = &v4;
  memcpy(v35, v37, v36);
  v38 = sizeof(int32_t);
  v39 = EMITC_BINARY(+, v35, v38);
  v40 = sizeof(int32_t);
  v41 = &v5;
  memcpy(v39, v41, v40);
  v42 = sizeof(int32_t);
  v43 = EMITC_BINARY(+, v39, v42);
  v44 = (iree_vm_ref_t*) v43;
  iree_vm_ref_assign(v6, v44);
  v45 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v46 = EMITC_STRUCT_PTR_MEMBER_CALL(v45, begin_call, v45, v1, v8);
  v47 = (bool) v46;
  v48 = vm_cmp_nz_i32(v47);
  v49 = (bool) v48;
  if (v49) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v50 = EMITC_STRUCT_MEMBER(v8, results);
  v51 = EMITC_STRUCT_MEMBER(v50, data);
  v52 = (iree_vm_ref_t*) v51;
  iree_vm_ref_move(v52, v7);
  v53 = iree_ok_status();
  return v53;
  label4:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v6);
  v54 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v54;
  label5:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v6);
  return v46;
}

static iree_status_t module_predict(iree_vm_stack_t* v1, module_t* v2, module_state_t* v3, iree_vm_ref_t* v4, iree_vm_ref_t* v5) {
  int32_t v6;
  int32_t v7;
  int32_t v8;
  int32_t v9;
  int32_t v10;
  int64_t v11;
  int64_t v12;
  int32_t v13;
  int32_t v14;
  int64_t v15;
  int64_t v16;
  int64_t v17;
  int32_t v18;
  int32_t v19;
  int32_t v20;
  int32_t v21;
  int64_t v22;
  int32_t v23;
  int64_t v24;
  int32_t v25;
  int64_t v26;
  int32_t v27;
  int64_t v28;
  iree_vm_ref_t v29;
  iree_vm_ref_t* v30;
  iree_host_size_t v31;
  iree_vm_ref_t v32;
  iree_vm_ref_t* v33;
  iree_host_size_t v34;
  iree_vm_ref_t v35;
  iree_vm_ref_t* v36;
  iree_host_size_t v37;
  iree_vm_ref_t v38;
  iree_vm_ref_t* v39;
  iree_host_size_t v40;
  iree_vm_ref_t v41;
  iree_vm_ref_t* v42;
  iree_host_size_t v43;
  iree_vm_ref_t v44;
  iree_vm_ref_t* v45;
  iree_host_size_t v46;
  iree_vm_ref_t v47;
  iree_vm_ref_t* v48;
  iree_host_size_t v49;
  iree_vm_ref_t v50;
  iree_vm_ref_t* v51;
  iree_host_size_t v52;
  iree_vm_ref_t v53;
  iree_vm_ref_t* v54;
  iree_host_size_t v55;
  iree_vm_ref_t* v56;
  iree_vm_ref_t* v57;
  iree_vm_type_def_t v58;
  iree_vm_type_def_t* v59;
  iree_host_size_t v60;
  iree_string_view_t v61;
  const iree_vm_ref_type_descriptor_t* v62;
  iree_vm_ref_type_t v63;
  iree_vm_ref_type_t v64;
  iree_status_t v65;
  bool v66;
  int32_t v67;
  bool v68;
  iree_vm_ref_t* v69;
  iree_vm_ref_t* v70;
  iree_vm_type_def_t v71;
  iree_vm_type_def_t* v72;
  iree_host_size_t v73;
  iree_string_view_t v74;
  const iree_vm_ref_type_descriptor_t* v75;
  iree_vm_ref_type_t v76;
  iree_vm_ref_type_t v77;
  iree_status_t v78;
  bool v79;
  int32_t v80;
  bool v81;
  uint8_t* v82;
  int32_t v83;
  iree_vm_ref_t* v84;
  iree_vm_ref_t* v85;
  iree_vm_type_def_t v86;
  iree_vm_type_def_t* v87;
  iree_host_size_t v88;
  iree_string_view_t v89;
  const iree_vm_ref_type_descriptor_t* v90;
  iree_vm_ref_type_t v91;
  iree_vm_ref_type_t v92;
  iree_status_t v93;
  bool v94;
  int32_t v95;
  bool v96;
  iree_vm_ref_t* v97;
  iree_vm_ref_t* v98;
  iree_vm_type_def_t v99;
  iree_vm_type_def_t* v100;
  iree_host_size_t v101;
  iree_string_view_t v102;
  const iree_vm_ref_type_descriptor_t* v103;
  iree_vm_ref_type_t v104;
  iree_vm_ref_type_t v105;
  iree_status_t v106;
  bool v107;
  int32_t v108;
  bool v109;
  iree_vm_ref_t* v110;
  iree_vm_ref_t* v111;
  iree_vm_type_def_t v112;
  iree_vm_type_def_t* v113;
  iree_host_size_t v114;
  iree_string_view_t v115;
  const iree_vm_ref_type_descriptor_t* v116;
  iree_vm_ref_type_t v117;
  iree_vm_ref_type_t v118;
  iree_status_t v119;
  bool v120;
  int32_t v121;
  bool v122;
  iree_vm_buffer_t* v123;
  iree_vm_buffer_t* v124;
  iree_vm_ref_type_t v125;
  iree_status_t v126;
  bool v127;
  int32_t v128;
  bool v129;
  iree_vm_function_t* v130;
  iree_vm_function_t* v131;
  iree_vm_ref_t v132;
  iree_vm_ref_t* v133;
  iree_host_size_t v134;
  iree_vm_ref_t v135;
  iree_vm_ref_t* v136;
  iree_host_size_t v137;
  iree_status_t v138;
  bool v139;
  int32_t v140;
  bool v141;
  iree_vm_function_t* v142;
  iree_vm_function_t* v143;
  iree_vm_ref_t v144;
  iree_vm_ref_t* v145;
  iree_host_size_t v146;
  iree_status_t v147;
  bool v148;
  int32_t v149;
  bool v150;
  iree_vm_function_t* v151;
  iree_vm_function_t* v152;
  iree_status_t v153;
  bool v154;
  int32_t v155;
  bool v156;
  iree_vm_function_t* v157;
  iree_vm_function_t* v158;
  iree_vm_ref_t v159;
  iree_vm_ref_t* v160;
  iree_host_size_t v161;
  iree_status_t v162;
  bool v163;
  int32_t v164;
  bool v165;
  iree_vm_function_t* v166;
  iree_vm_function_t* v167;
  iree_vm_ref_t v168;
  iree_vm_ref_t* v169;
  iree_host_size_t v170;
  iree_vm_ref_t v171;
  iree_vm_ref_t* v172;
  iree_host_size_t v173;
  iree_vm_ref_t v174;
  iree_vm_ref_t* v175;
  iree_host_size_t v176;
  iree_status_t v177;
  bool v178;
  int32_t v179;
  bool v180;
  iree_vm_function_t* v181;
  iree_vm_function_t* v182;
  iree_vm_ref_t v183;
  iree_vm_ref_t* v184;
  iree_host_size_t v185;
  iree_status_t v186;
  bool v187;
  int32_t v188;
  bool v189;
  iree_vm_function_t* v190;
  iree_vm_function_t* v191;
  iree_vm_ref_t v192;
  iree_vm_ref_t* v193;
  iree_host_size_t v194;
  iree_status_t v195;
  bool v196;
  int32_t v197;
  bool v198;
  iree_vm_function_t* v199;
  iree_vm_function_t* v200;
  iree_vm_ref_t v201;
  iree_vm_ref_t* v202;
  iree_host_size_t v203;
  iree_vm_ref_t v204;
  iree_vm_ref_t* v205;
  iree_host_size_t v206;
  iree_vm_ref_t v207;
  iree_vm_ref_t* v208;
  iree_host_size_t v209;
  iree_status_t v210;
  bool v211;
  int32_t v212;
  bool v213;
  iree_vm_function_t* v214;
  iree_vm_function_t* v215;
  iree_vm_ref_t v216;
  iree_vm_ref_t* v217;
  iree_host_size_t v218;
  iree_status_t v219;
  bool v220;
  int32_t v221;
  bool v222;
  int32_t v223;
  bool v224;
  iree_vm_function_t* v225;
  iree_vm_function_t* v226;
  iree_vm_ref_t v227;
  iree_vm_ref_t* v228;
  iree_host_size_t v229;
  iree_vm_ref_t v230;
  iree_vm_ref_t* v231;
  iree_host_size_t v232;
  iree_vm_ref_t v233;
  iree_vm_ref_t* v234;
  iree_host_size_t v235;
  iree_vm_ref_t v236;
  iree_vm_ref_t* v237;
  iree_host_size_t v238;
  iree_vm_ref_t v239;
  iree_vm_ref_t* v240;
  iree_host_size_t v241;
  iree_status_t v242;
  bool v243;
  int32_t v244;
  bool v245;
  iree_vm_function_t* v246;
  iree_vm_function_t* v247;
  iree_vm_ref_t v248;
  iree_vm_ref_t* v249;
  iree_host_size_t v250;
  iree_vm_ref_t v251;
  iree_vm_ref_t* v252;
  iree_host_size_t v253;
  iree_status_t v254;
  bool v255;
  int32_t v256;
  bool v257;
  iree_vm_function_t* v258;
  iree_vm_function_t* v259;
  iree_vm_ref_t v260;
  iree_vm_ref_t* v261;
  iree_host_size_t v262;
  iree_status_t v263;
  bool v264;
  int32_t v265;
  bool v266;
  iree_vm_function_t* v267;
  iree_vm_function_t* v268;
  iree_vm_ref_t v269;
  iree_vm_ref_t* v270;
  iree_host_size_t v271;
  iree_vm_ref_t v272;
  iree_vm_ref_t* v273;
  iree_host_size_t v274;
  iree_vm_ref_t v275;
  iree_vm_ref_t* v276;
  iree_host_size_t v277;
  iree_vm_ref_t v278;
  iree_vm_ref_t* v279;
  iree_host_size_t v280;
  iree_vm_ref_t v281;
  iree_vm_ref_t* v282;
  iree_host_size_t v283;
  iree_status_t v284;
  bool v285;
  int32_t v286;
  bool v287;
  iree_vm_function_t* v288;
  iree_vm_function_t* v289;
  iree_vm_ref_t v290;
  iree_vm_ref_t* v291;
  iree_host_size_t v292;
  iree_vm_ref_t v293;
  iree_vm_ref_t* v294;
  iree_host_size_t v295;
  iree_status_t v296;
  bool v297;
  int32_t v298;
  bool v299;
  iree_vm_function_t* v300;
  iree_vm_function_t* v301;
  iree_vm_ref_t v302;
  iree_vm_ref_t* v303;
  iree_host_size_t v304;
  iree_status_t v305;
  bool v306;
  int32_t v307;
  bool v308;
  iree_vm_function_t* v309;
  iree_vm_function_t* v310;
  iree_vm_ref_t v311;
  iree_vm_ref_t* v312;
  iree_host_size_t v313;
  iree_vm_ref_t v314;
  iree_vm_ref_t* v315;
  iree_host_size_t v316;
  iree_vm_ref_t v317;
  iree_vm_ref_t* v318;
  iree_host_size_t v319;
  iree_vm_ref_t v320;
  iree_vm_ref_t* v321;
  iree_host_size_t v322;
  iree_status_t v323;
  bool v324;
  int32_t v325;
  bool v326;
  iree_vm_function_t* v327;
  iree_vm_function_t* v328;
  iree_vm_ref_t v329;
  iree_vm_ref_t* v330;
  iree_host_size_t v331;
  iree_vm_ref_t v332;
  iree_vm_ref_t* v333;
  iree_host_size_t v334;
  iree_status_t v335;
  bool v336;
  int32_t v337;
  bool v338;
  iree_vm_function_t* v339;
  iree_vm_function_t* v340;
  iree_vm_ref_t v341;
  iree_vm_ref_t* v342;
  iree_host_size_t v343;
  iree_status_t v344;
  bool v345;
  int32_t v346;
  bool v347;
  iree_vm_function_t* v348;
  iree_vm_function_t* v349;
  iree_vm_ref_t v350;
  iree_vm_ref_t* v351;
  iree_host_size_t v352;
  iree_status_t v353;
  bool v354;
  int32_t v355;
  bool v356;
  iree_vm_function_t* v357;
  iree_vm_function_t* v358;
  iree_vm_ref_t v359;
  iree_vm_ref_t* v360;
  iree_host_size_t v361;
  iree_status_t v362;
  bool v363;
  int32_t v364;
  bool v365;
  iree_vm_function_t* v366;
  iree_vm_function_t* v367;
  iree_vm_ref_t v368;
  iree_vm_ref_t* v369;
  iree_host_size_t v370;
  iree_vm_ref_t v371;
  iree_vm_ref_t* v372;
  iree_host_size_t v373;
  iree_vm_ref_t v374;
  iree_vm_ref_t* v375;
  iree_host_size_t v376;
  iree_vm_ref_t v377;
  iree_vm_ref_t* v378;
  iree_host_size_t v379;
  iree_status_t v380;
  bool v381;
  int32_t v382;
  bool v383;
  iree_vm_function_t* v384;
  iree_vm_function_t* v385;
  iree_vm_ref_t v386;
  iree_vm_ref_t* v387;
  iree_host_size_t v388;
  iree_status_t v389;
  bool v390;
  int32_t v391;
  bool v392;
  iree_vm_function_t* v393;
  iree_vm_function_t* v394;
  iree_vm_ref_t v395;
  iree_vm_ref_t* v396;
  iree_host_size_t v397;
  iree_vm_ref_t v398;
  iree_vm_ref_t* v399;
  iree_host_size_t v400;
  iree_vm_ref_t v401;
  iree_vm_ref_t* v402;
  iree_host_size_t v403;
  iree_vm_ref_t v404;
  iree_vm_ref_t* v405;
  iree_host_size_t v406;
  iree_status_t v407;
  bool v408;
  int32_t v409;
  bool v410;
  iree_vm_function_t* v411;
  iree_vm_function_t* v412;
  iree_vm_ref_t v413;
  iree_vm_ref_t* v414;
  iree_host_size_t v415;
  int32_t v416;
  int32_t* v417;
  iree_status_t v418;
  bool v419;
  int32_t v420;
  bool v421;
  int32_t v422;
  bool v423;
  iree_vm_function_t* v424;
  iree_vm_function_t* v425;
  iree_vm_ref_t v426;
  iree_vm_ref_t* v427;
  iree_host_size_t v428;
  iree_status_t v429;
  bool v430;
  int32_t v431;
  bool v432;
  iree_vm_ref_t v433;
  iree_vm_ref_t* v434;
  iree_host_size_t v435;
  iree_status_t v436;
  bool v437;
  bool v438;
  iree_status_t v439;
  iree_string_view_t v440;
  iree_host_size_t v441;
  int32_t v442;
  const char* v443;
  iree_status_t v444;
  iree_string_view_t v445;
  iree_host_size_t v446;
  int32_t v447;
  const char* v448;
  iree_status_t v449;
  iree_status_t v450;
  v6 = 4;
  v7 = 553648160;
  v8 = 1;
  v9 = 28;
  v10 = 0;
  v11 = -1;
  v12 = 0;
  v13 = 2;
  v14 = -1;
  v15 = 1;
  v16 = 28;
  v17 = 3136;
  v18 = 16;
  v19 = 3075;
  v20 = 50;
  v21 = 150998019;
  v22 = 40;
  v23 = 48;
  v24 = 576;
  v25 = 3;
  v26 = 407040;
  v27 = 13;
  v28 = 10;
  ;
  v30 = &v29;
  v31 = sizeof(iree_vm_ref_t);
  memset(v30, 0, v31);
  ;
  v33 = &v32;
  v34 = sizeof(iree_vm_ref_t);
  memset(v33, 0, v34);
  ;
  v36 = &v35;
  v37 = sizeof(iree_vm_ref_t);
  memset(v36, 0, v37);
  ;
  v39 = &v38;
  v40 = sizeof(iree_vm_ref_t);
  memset(v39, 0, v40);
  ;
  v42 = &v41;
  v43 = sizeof(iree_vm_ref_t);
  memset(v42, 0, v43);
  ;
  v45 = &v44;
  v46 = sizeof(iree_vm_ref_t);
  memset(v45, 0, v46);
  ;
  v48 = &v47;
  v49 = sizeof(iree_vm_ref_t);
  memset(v48, 0, v49);
  ;
  v51 = &v50;
  v52 = sizeof(iree_vm_ref_t);
  memset(v51, 0, v52);
  ;
  v54 = &v53;
  v55 = sizeof(iree_vm_ref_t);
  memset(v54, 0, v55);
  v56 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v57 = EMITC_ARRAY_ELEMENT_ADDRESS(v56, 3);
  ;
  v59 = &v58;
  v60 = sizeof(iree_vm_type_def_t);
  memset(v59, 0, v60);
  v61 = iree_make_cstring_view("hal.fence");
  v62 = iree_vm_ref_lookup_registered_type(v61);
  v63 = EMITC_STRUCT_PTR_MEMBER(v62, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v58, ref_type, v63);
  v64 = EMITC_STRUCT_PTR_MEMBER(v59, ref_type);
  v65 = iree_vm_ref_retain_or_move_checked(false, v57, v64, v5);
  v66 = (bool) v65;
  v67 = vm_cmp_nz_i32(v66);
  v68 = (bool) v67;
  if (v68) {
  v450 = v65;
  goto label37;
  } else {
  goto label2;
  }
  label2:
  v69 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v70 = EMITC_ARRAY_ELEMENT_ADDRESS(v69, 4);
  ;
  v72 = &v71;
  v73 = sizeof(iree_vm_type_def_t);
  memset(v72, 0, v73);
  v74 = iree_make_cstring_view("hal.buffer");
  v75 = iree_vm_ref_lookup_registered_type(v74);
  v76 = EMITC_STRUCT_PTR_MEMBER(v75, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v71, ref_type, v76);
  v77 = EMITC_STRUCT_PTR_MEMBER(v72, ref_type);
  v78 = iree_vm_ref_retain_or_move_checked(false, v70, v77, v33);
  v79 = (bool) v78;
  v80 = vm_cmp_nz_i32(v79);
  v81 = (bool) v80;
  if (v81) {
  v450 = v78;
  goto label37;
  } else {
  goto label3;
  }
  label3:
  v82 = EMITC_STRUCT_PTR_MEMBER(v3, rwdata);
  v83 = vm_global_load_i32(v82, 0);
  v84 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v85 = EMITC_ARRAY_ELEMENT_ADDRESS(v84, 0);
  ;
  v87 = &v86;
  v88 = sizeof(iree_vm_type_def_t);
  memset(v87, 0, v88);
  v89 = iree_make_cstring_view("hal.pipeline_layout");
  v90 = iree_vm_ref_lookup_registered_type(v89);
  v91 = EMITC_STRUCT_PTR_MEMBER(v90, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v86, ref_type, v91);
  v92 = EMITC_STRUCT_PTR_MEMBER(v87, ref_type);
  v93 = iree_vm_ref_retain_or_move_checked(false, v85, v92, v36);
  v94 = (bool) v93;
  v95 = vm_cmp_nz_i32(v94);
  v96 = (bool) v95;
  if (v96) {
  v450 = v93;
  goto label37;
  } else {
  goto label4;
  }
  label4:
  v97 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v98 = EMITC_ARRAY_ELEMENT_ADDRESS(v97, 2);
  ;
  v100 = &v99;
  v101 = sizeof(iree_vm_type_def_t);
  memset(v100, 0, v101);
  v102 = iree_make_cstring_view("hal.executable");
  v103 = iree_vm_ref_lookup_registered_type(v102);
  v104 = EMITC_STRUCT_PTR_MEMBER(v103, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v99, ref_type, v104);
  v105 = EMITC_STRUCT_PTR_MEMBER(v100, ref_type);
  v106 = iree_vm_ref_retain_or_move_checked(false, v98, v105, v39);
  v107 = (bool) v106;
  v108 = vm_cmp_nz_i32(v107);
  v109 = (bool) v108;
  if (v109) {
  v450 = v106;
  goto label37;
  } else {
  goto label5;
  }
  label5:
  v110 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v111 = EMITC_ARRAY_ELEMENT_ADDRESS(v110, 1);
  ;
  v113 = &v112;
  v114 = sizeof(iree_vm_type_def_t);
  memset(v113, 0, v114);
  v115 = iree_make_cstring_view("hal.pipeline_layout");
  v116 = iree_vm_ref_lookup_registered_type(v115);
  v117 = EMITC_STRUCT_PTR_MEMBER(v116, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v112, ref_type, v117);
  v118 = EMITC_STRUCT_PTR_MEMBER(v113, ref_type);
  v119 = iree_vm_ref_retain_or_move_checked(false, v111, v118, v42);
  v120 = (bool) v119;
  v121 = vm_cmp_nz_i32(v120);
  v122 = (bool) v121;
  if (v122) {
  v450 = v119;
  goto label37;
  } else {
  goto label6;
  }
  label6:
  v123 = EMITC_STRUCT_PTR_MEMBER(v3, rodata_buffers);
  v124 = EMITC_ARRAY_ELEMENT_ADDRESS(v123, 4);
  v125 = iree_vm_buffer_type_id();
  v126 = iree_vm_ref_wrap_retain(v124, v125, v45);
  v127 = (bool) v126;
  v128 = vm_cmp_nz_i32(v127);
  v129 = (bool) v128;
  if (v129) {
  v450 = v126;
  goto label37;
  } else {
  goto label7;
  }
  label7:
  v130 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v131 = EMITC_ARRAY_ELEMENT_ADDRESS(v130, 6);
  ;
  v133 = &v132;
  v134 = sizeof(iree_vm_ref_t);
  memset(v133, 0, v134);
  iree_vm_ref_assign(v4, v133);
  ;
  v136 = &v135;
  v137 = sizeof(iree_vm_ref_t);
  memset(v136, 0, v137);
  iree_vm_ref_assign(v45, v136);
  v138 = module_call_0rriiCID_v_4_import_shim(v1, v131, v133, v136, v7, v8, v6, v15, v16, v16, v15);
  v139 = (bool) v138;
  v140 = vm_cmp_nz_i32(v139);
  v141 = (bool) v140;
  if (v141) {
  v450 = v138;
  goto label37;
  } else {
  goto label8;
  }
  label8:
  v142 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v143 = EMITC_ARRAY_ELEMENT_ADDRESS(v142, 7);
  ;
  v145 = &v144;
  v146 = sizeof(iree_vm_ref_t);
  memset(v145, 0, v146);
  iree_vm_ref_assign(v4, v145);
  v147 = module_call_0r_r_import_shim(v1, v143, v145, v4);
  v148 = (bool) v147;
  v149 = vm_cmp_nz_i32(v148);
  v150 = (bool) v149;
  if (v150) {
  v450 = v147;
  goto label37;
  } else {
  goto label9;
  }
  label9:
  v151 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v152 = EMITC_ARRAY_ELEMENT_ADDRESS(v151, 0);
  v153 = module_call_0v_r_import_shim(v1, v152, v48);
  v154 = (bool) v153;
  v155 = vm_cmp_nz_i32(v154);
  v156 = (bool) v155;
  if (v156) {
  v450 = v153;
  goto label37;
  } else {
  goto label10;
  }
  label10:
  v157 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v158 = EMITC_ARRAY_ELEMENT_ADDRESS(v157, 15);
  ;
  v160 = &v159;
  v161 = sizeof(iree_vm_ref_t);
  memset(v160, 0, v161);
  iree_vm_ref_assign(v48, v160);
  v162 = module_call_0r_r_import_shim(v1, v158, v160, v51);
  v163 = (bool) v162;
  v164 = vm_cmp_nz_i32(v163);
  v165 = (bool) v164;
  if (v165) {
  v450 = v162;
  goto label37;
  } else {
  goto label11;
  }
  label11:
  v166 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v167 = EMITC_ARRAY_ELEMENT_ADDRESS(v166, 4);
  ;
  v169 = &v168;
  v170 = sizeof(iree_vm_ref_t);
  memset(v169, 0, v170);
  iree_vm_ref_assign(v4, v169);
  ;
  v172 = &v171;
  v173 = sizeof(iree_vm_ref_t);
  memset(v172, 0, v173);
  iree_vm_ref_assign(v45, v172);
  ;
  v175 = &v174;
  v176 = sizeof(iree_vm_ref_t);
  memset(v175, 0, v176);
  iree_vm_ref_assign(v51, v175);
  v177 = module_call_0rrrIii_v_import_shim(v1, v167, v169, v172, v175, v17, v18, v19);
  v178 = (bool) v177;
  v179 = vm_cmp_nz_i32(v178);
  v180 = (bool) v179;
  if (v180) {
  v450 = v177;
  goto label37;
  } else {
  goto label12;
  }
  label12:
  v181 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v182 = EMITC_ARRAY_ELEMENT_ADDRESS(v181, 1);
  ;
  v184 = &v183;
  v185 = sizeof(iree_vm_ref_t);
  memset(v184, 0, v185);
  iree_vm_ref_assign(v51, v184);
  v186 = module_call_0riiI_r_import_shim(v1, v182, v184, v20, v21, v22, v45);
  v187 = (bool) v186;
  v188 = vm_cmp_nz_i32(v187);
  v189 = (bool) v188;
  if (v189) {
  v450 = v186;
  goto label37;
  } else {
  goto label13;
  }
  label13:
  v190 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v191 = EMITC_ARRAY_ELEMENT_ADDRESS(v190, 21);
  ;
  v193 = &v192;
  v194 = sizeof(iree_vm_ref_t);
  memset(v193, 0, v194);
  iree_vm_ref_assign(v48, v193);
  v195 = module_call_0ri_r_import_shim(v1, v191, v193, v10, v51);
  v196 = (bool) v195;
  v197 = vm_cmp_nz_i32(v196);
  v198 = (bool) v197;
  if (v198) {
  v450 = v195;
  goto label37;
  } else {
  goto label14;
  }
  label14:
  v199 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v200 = EMITC_ARRAY_ELEMENT_ADDRESS(v199, 17);
  ;
  v202 = &v201;
  v203 = sizeof(iree_vm_ref_t);
  memset(v202, 0, v203);
  iree_vm_ref_assign(v48, v202);
  ;
  v205 = &v204;
  v206 = sizeof(iree_vm_ref_t);
  memset(v205, 0, v206);
  iree_vm_ref_assign(v5, v205);
  ;
  v208 = &v207;
  v209 = sizeof(iree_vm_ref_t);
  memset(v208, 0, v209);
  iree_vm_ref_assign(v51, v208);
  v210 = module_call_0rIrriiiI_r_import_shim(v1, v200, v202, v11, v205, v208, v10, v23, v19, v24, v5);
  v211 = (bool) v210;
  v212 = vm_cmp_nz_i32(v211);
  v213 = (bool) v212;
  if (v213) {
  v450 = v210;
  goto label37;
  } else {
  goto label15;
  }
  label15:
  v214 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v215 = EMITC_ARRAY_ELEMENT_ADDRESS(v214, 8);
  ;
  v217 = &v216;
  v218 = sizeof(iree_vm_ref_t);
  memset(v217, 0, v218);
  iree_vm_ref_assign(v48, v217);
  v219 = module_call_0riii_r_import_shim(v1, v215, v217, v8, v25, v10, v54);
  v220 = (bool) v219;
  v221 = vm_cmp_nz_i32(v220);
  v222 = (bool) v221;
  if (v222) {
  v450 = v219;
  goto label37;
  } else {
  goto label16;
  }
  label16:
  v223 = vm_cmp_nz_i32(v83);
  v224 = (bool) v223;
  if (v224) {
  goto label17;
  } else {
  goto label36;
  }
  label17:
  v225 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v226 = EMITC_ARRAY_ELEMENT_ADDRESS(v225, 12);
  ;
  v228 = &v227;
  v229 = sizeof(iree_vm_ref_t);
  memset(v228, 0, v229);
  iree_vm_ref_assign(v54, v228);
  ;
  v231 = &v230;
  v232 = sizeof(iree_vm_ref_t);
  memset(v231, 0, v232);
  iree_vm_ref_assign(v36, v231);
  ;
  v234 = &v233;
  v235 = sizeof(iree_vm_ref_t);
  memset(v234, 0, v235);
  iree_vm_ref_assign(v4, v234);
  ;
  v237 = &v236;
  v238 = sizeof(iree_vm_ref_t);
  memset(v237, 0, v238);
  iree_vm_ref_assign(v33, v237);
  ;
  v240 = &v239;
  v241 = sizeof(iree_vm_ref_t);
  memset(v240, 0, v241);
  iree_vm_ref_assign(v5, v240);
  v242 = module_call_0rriCiirIID_v_3_import_shim(v1, v226, v228, v231, v10, v25, v10, v10, v234, v12, v17, v8, v10, v237, v12, v26, v13, v10, v240, v12, v24);
  v243 = (bool) v242;
  v244 = vm_cmp_nz_i32(v243);
  v245 = (bool) v244;
  if (v245) {
  v450 = v242;
  goto label37;
  } else {
  goto label18;
  }
  label18:
  v246 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v247 = EMITC_ARRAY_ELEMENT_ADDRESS(v246, 13);
  ;
  v249 = &v248;
  v250 = sizeof(iree_vm_ref_t);
  memset(v249, 0, v250);
  iree_vm_ref_assign(v54, v249);
  ;
  v252 = &v251;
  v253 = sizeof(iree_vm_ref_t);
  memset(v252, 0, v253);
  iree_vm_ref_assign(v39, v252);
  v254 = module_call_0rriiii_v_import_shim(v1, v247, v249, v252, v10, v13, v8, v8);
  v255 = (bool) v254;
  v256 = vm_cmp_nz_i32(v255);
  v257 = (bool) v256;
  if (v257) {
  v450 = v254;
  goto label37;
  } else {
  goto label19;
  }
  label19:
  v258 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v259 = EMITC_ARRAY_ELEMENT_ADDRESS(v258, 10);
  ;
  v261 = &v260;
  v262 = sizeof(iree_vm_ref_t);
  memset(v261, 0, v262);
  iree_vm_ref_assign(v54, v261);
  v263 = module_call_0riii_v_import_shim(v1, v259, v261, v9, v27, v10);
  v264 = (bool) v263;
  v265 = vm_cmp_nz_i32(v264);
  v266 = (bool) v265;
  if (v266) {
  v450 = v263;
  goto label37;
  } else {
  goto label20;
  }
  label20:
  v267 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v268 = EMITC_ARRAY_ELEMENT_ADDRESS(v267, 12);
  ;
  v270 = &v269;
  v271 = sizeof(iree_vm_ref_t);
  memset(v270, 0, v271);
  iree_vm_ref_assign(v54, v270);
  ;
  v273 = &v272;
  v274 = sizeof(iree_vm_ref_t);
  memset(v273, 0, v274);
  iree_vm_ref_assign(v36, v273);
  ;
  v276 = &v275;
  v277 = sizeof(iree_vm_ref_t);
  memset(v276, 0, v277);
  iree_vm_ref_assign(v5, v276);
  ;
  v279 = &v278;
  v280 = sizeof(iree_vm_ref_t);
  memset(v279, 0, v280);
  iree_vm_ref_assign(v33, v279);
  ;
  v282 = &v281;
  v283 = sizeof(iree_vm_ref_t);
  memset(v282, 0, v283);
  iree_vm_ref_assign(v5, v282);
  v284 = module_call_0rriCiirIID_v_3_import_shim(v1, v268, v270, v273, v10, v25, v10, v10, v276, v12, v24, v8, v10, v279, v12, v26, v13, v10, v282, v12, v24);
  v285 = (bool) v284;
  v286 = vm_cmp_nz_i32(v285);
  v287 = (bool) v286;
  if (v287) {
  v450 = v284;
  goto label37;
  } else {
  goto label21;
  }
  label21:
  v288 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v289 = EMITC_ARRAY_ELEMENT_ADDRESS(v288, 13);
  ;
  v291 = &v290;
  v292 = sizeof(iree_vm_ref_t);
  memset(v291, 0, v292);
  iree_vm_ref_assign(v54, v291);
  ;
  v294 = &v293;
  v295 = sizeof(iree_vm_ref_t);
  memset(v294, 0, v295);
  iree_vm_ref_assign(v39, v294);
  v296 = module_call_0rriiii_v_import_shim(v1, v289, v291, v294, v8, v8, v8, v8);
  v297 = (bool) v296;
  v298 = vm_cmp_nz_i32(v297);
  v299 = (bool) v298;
  if (v299) {
  v450 = v296;
  goto label37;
  } else {
  goto label22;
  }
  label22:
  v300 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v301 = EMITC_ARRAY_ELEMENT_ADDRESS(v300, 10);
  ;
  v303 = &v302;
  v304 = sizeof(iree_vm_ref_t);
  memset(v303, 0, v304);
  iree_vm_ref_assign(v54, v303);
  v305 = module_call_0riii_v_import_shim(v1, v301, v303, v9, v27, v10);
  v306 = (bool) v305;
  v307 = vm_cmp_nz_i32(v306);
  v308 = (bool) v307;
  if (v308) {
  v450 = v305;
  goto label37;
  } else {
  goto label23;
  }
  label23:
  v309 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v310 = EMITC_ARRAY_ELEMENT_ADDRESS(v309, 12);
  ;
  v312 = &v311;
  v313 = sizeof(iree_vm_ref_t);
  memset(v312, 0, v313);
  iree_vm_ref_assign(v54, v312);
  ;
  v315 = &v314;
  v316 = sizeof(iree_vm_ref_t);
  memset(v315, 0, v316);
  iree_vm_ref_assign(v42, v315);
  ;
  v318 = &v317;
  v319 = sizeof(iree_vm_ref_t);
  memset(v318, 0, v319);
  iree_vm_ref_assign(v5, v318);
  ;
  v321 = &v320;
  v322 = sizeof(iree_vm_ref_t);
  memset(v321, 0, v322);
  iree_vm_ref_assign(v45, v321);
  v323 = module_call_0rriCiirIID_v_2_import_shim(v1, v310, v312, v315, v10, v13, v10, v10, v318, v12, v24, v8, v10, v321, v12, v22);
  v324 = (bool) v323;
  v325 = vm_cmp_nz_i32(v324);
  v326 = (bool) v325;
  if (v326) {
  v450 = v323;
  goto label37;
  } else {
  goto label24;
  }
  label24:
  v327 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v328 = EMITC_ARRAY_ELEMENT_ADDRESS(v327, 13);
  ;
  v330 = &v329;
  v331 = sizeof(iree_vm_ref_t);
  memset(v330, 0, v331);
  iree_vm_ref_assign(v54, v330);
  ;
  v333 = &v332;
  v334 = sizeof(iree_vm_ref_t);
  memset(v333, 0, v334);
  iree_vm_ref_assign(v39, v333);
  v335 = module_call_0rriiii_v_import_shim(v1, v328, v330, v333, v13, v8, v8, v8);
  v336 = (bool) v335;
  v337 = vm_cmp_nz_i32(v336);
  v338 = (bool) v337;
  if (v338) {
  v450 = v335;
  goto label37;
  } else {
  goto label25;
  }
  label25:
  v339 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v340 = EMITC_ARRAY_ELEMENT_ADDRESS(v339, 10);
  ;
  v342 = &v341;
  v343 = sizeof(iree_vm_ref_t);
  memset(v342, 0, v343);
  iree_vm_ref_assign(v54, v342);
  v344 = module_call_0riii_v_import_shim(v1, v340, v342, v9, v27, v10);
  v345 = (bool) v344;
  v346 = vm_cmp_nz_i32(v345);
  v347 = (bool) v346;
  if (v347) {
  v450 = v344;
  goto label37;
  } else {
  goto label26;
  }
  label26:
  v348 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v349 = EMITC_ARRAY_ELEMENT_ADDRESS(v348, 9);
  ;
  v351 = &v350;
  v352 = sizeof(iree_vm_ref_t);
  memset(v351, 0, v352);
  iree_vm_ref_assign(v54, v351);
  v353 = module_call_0r_v_import_shim(v1, v349, v351);
  v354 = (bool) v353;
  v355 = vm_cmp_nz_i32(v354);
  v356 = (bool) v355;
  if (v356) {
  v450 = v353;
  goto label37;
  } else {
  goto label27;
  }
  label27:
  v357 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v358 = EMITC_ARRAY_ELEMENT_ADDRESS(v357, 21);
  ;
  v360 = &v359;
  v361 = sizeof(iree_vm_ref_t);
  memset(v360, 0, v361);
  iree_vm_ref_assign(v48, v360);
  v362 = module_call_0ri_r_import_shim(v1, v358, v360, v10, v4);
  v363 = (bool) v362;
  v364 = vm_cmp_nz_i32(v363);
  v365 = (bool) v364;
  if (v365) {
  v450 = v362;
  goto label37;
  } else {
  goto label28;
  }
  label28:
  v366 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v367 = EMITC_ARRAY_ELEMENT_ADDRESS(v366, 19);
  ;
  v369 = &v368;
  v370 = sizeof(iree_vm_ref_t);
  memset(v369, 0, v370);
  iree_vm_ref_assign(v48, v369);
  ;
  v372 = &v371;
  v373 = sizeof(iree_vm_ref_t);
  memset(v372, 0, v373);
  iree_vm_ref_assign(v51, v372);
  ;
  v375 = &v374;
  v376 = sizeof(iree_vm_ref_t);
  memset(v375, 0, v376);
  iree_vm_ref_assign(v4, v375);
  ;
  v378 = &v377;
  v379 = sizeof(iree_vm_ref_t);
  memset(v378, 0, v379);
  iree_vm_ref_assign(v54, v378);
  v380 = module_call_0rIrrCrD_v_1_import_shim(v1, v367, v369, v11, v372, v375, v8, v378);
  v381 = (bool) v380;
  v382 = vm_cmp_nz_i32(v381);
  v383 = (bool) v382;
  if (v383) {
  v450 = v380;
  goto label37;
  } else {
  goto label29;
  }
  label29:
  v384 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v385 = EMITC_ARRAY_ELEMENT_ADDRESS(v384, 21);
  ;
  v387 = &v386;
  v388 = sizeof(iree_vm_ref_t);
  memset(v387, 0, v388);
  iree_vm_ref_assign(v48, v387);
  v389 = module_call_0ri_r_import_shim(v1, v385, v387, v10, v33);
  v390 = (bool) v389;
  v391 = vm_cmp_nz_i32(v390);
  v392 = (bool) v391;
  if (v392) {
  v450 = v389;
  goto label37;
  } else {
  goto label30;
  }
  label30:
  v393 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v394 = EMITC_ARRAY_ELEMENT_ADDRESS(v393, 18);
  ;
  v396 = &v395;
  v397 = sizeof(iree_vm_ref_t);
  memset(v396, 0, v397);
  iree_vm_ref_assign(v48, v396);
  ;
  v399 = &v398;
  v400 = sizeof(iree_vm_ref_t);
  memset(v399, 0, v400);
  iree_vm_ref_assign(v4, v399);
  ;
  v402 = &v401;
  v403 = sizeof(iree_vm_ref_t);
  memset(v402, 0, v403);
  iree_vm_ref_assign(v33, v402);
  ;
  v405 = &v404;
  v406 = sizeof(iree_vm_ref_t);
  memset(v405, 0, v406);
  iree_vm_ref_assign(v5, v405);
  v407 = module_call_0rIrrr_v_import_shim(v1, v394, v396, v11, v399, v402, v405);
  v408 = (bool) v407;
  v409 = vm_cmp_nz_i32(v408);
  v410 = (bool) v409;
  if (v410) {
  v450 = v407;
  goto label37;
  } else {
  goto label31;
  }
  label31:
  v411 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v412 = EMITC_ARRAY_ELEMENT_ADDRESS(v411, 22);
  ;
  v414 = &v413;
  v415 = sizeof(iree_vm_ref_t);
  memset(v414, 0, v415);
  iree_vm_ref_assign(v33, v414);
  ;
  v417 = &v416;
  v418 = module_call_0iCrD_i_1_import_shim(v1, v412, v14, v8, v414, v417);
  v419 = (bool) v418;
  v420 = vm_cmp_nz_i32(v419);
  v421 = (bool) v420;
  if (v421) {
  v450 = v418;
  goto label37;
  } else {
  goto label32;
  }
  label32:
  v422 = vm_cmp_nz_i32(v416);
  v423 = (bool) v422;
  if (v423) {
  goto label35;
  } else {
  goto label33;
  }
  label33:
  v424 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v425 = EMITC_ARRAY_ELEMENT_ADDRESS(v424, 5);
  ;
  v427 = &v426;
  v428 = sizeof(iree_vm_ref_t);
  memset(v427, 0, v428);
  iree_vm_ref_assign(v45, v427);
  v429 = module_call_0rIIiiCID_r_2_import_shim(v1, v425, v427, v12, v22, v7, v8, v13, v15, v28, v4);
  v430 = (bool) v429;
  v431 = vm_cmp_nz_i32(v430);
  v432 = (bool) v431;
  if (v432) {
  v450 = v429;
  goto label37;
  } else {
  goto label34;
  }
  label34:
  ;
  v434 = &v433;
  v435 = sizeof(iree_vm_ref_t);
  memset(v434, 0, v435);
  iree_vm_ref_move(v4, v434);
  iree_vm_ref_move(v434, v5);
  iree_vm_ref_release(v48);
  iree_vm_ref_release(v33);
  iree_vm_ref_release(v54);
  iree_vm_ref_release(v39);
  iree_vm_ref_release(v45);
  iree_vm_ref_release(v30);
  iree_vm_ref_release(v51);
  iree_vm_ref_release(v36);
  iree_vm_ref_release(v42);
  iree_vm_ref_release(v4);
  v436 = iree_ok_status();
  return v436;
  label35:
  v437 = (bool) v416;
  if (v437) {
  goto label40;
  } else {
  goto label38;
  }
  label36:
  v438 = (bool) v13;
  if (v438) {
  goto label39;
  } else {
  goto label38;
  }
  label37:
  iree_vm_ref_release(v48);
  iree_vm_ref_release(v33);
  iree_vm_ref_release(v54);
  iree_vm_ref_release(v39);
  iree_vm_ref_release(v45);
  iree_vm_ref_release(v30);
  iree_vm_ref_release(v51);
  iree_vm_ref_release(v36);
  iree_vm_ref_release(v42);
  iree_vm_ref_release(v4);
  return v450;
  label38:
  iree_vm_ref_release(v48);
  iree_vm_ref_release(v33);
  iree_vm_ref_release(v54);
  iree_vm_ref_release(v39);
  iree_vm_ref_release(v45);
  iree_vm_ref_release(v30);
  iree_vm_ref_release(v51);
  iree_vm_ref_release(v36);
  iree_vm_ref_release(v42);
  iree_vm_ref_release(v4);
  v439 = iree_ok_status();
  return v439;
  label39:
  iree_vm_ref_release(v48);
  iree_vm_ref_release(v33);
  iree_vm_ref_release(v54);
  iree_vm_ref_release(v39);
  iree_vm_ref_release(v45);
  iree_vm_ref_release(v30);
  iree_vm_ref_release(v51);
  iree_vm_ref_release(v36);
  iree_vm_ref_release(v42);
  iree_vm_ref_release(v4);
  v440 = iree_make_cstring_view("device not supported in the compiled configuration");
  v441 = EMITC_STRUCT_MEMBER(v440, size);
  v442 = (int32_t) v441;
  v443 = EMITC_STRUCT_MEMBER(v440, data);
  v444 = iree_status_allocate_f(IREE_STATUS_FAILED_PRECONDITION, "<vm>", 0, "%.*s", v442, v443);
  return v444;
  label40:
  iree_vm_ref_release(v48);
  iree_vm_ref_release(v33);
  iree_vm_ref_release(v54);
  iree_vm_ref_release(v39);
  iree_vm_ref_release(v45);
  iree_vm_ref_release(v30);
  iree_vm_ref_release(v51);
  iree_vm_ref_release(v36);
  iree_vm_ref_release(v42);
  iree_vm_ref_release(v4);
  v445 = iree_make_cstring_view("failed to wait on timepoint");
  v446 = EMITC_STRUCT_MEMBER(v445, size);
  v447 = (int32_t) v446;
  v448 = EMITC_STRUCT_MEMBER(v445, data);
  v449 = iree_status_allocate_f(IREE_STATUS_FAILED_PRECONDITION, "<vm>", 0, "%.*s", v447, v448);
  return v449;
}

EMITC_TYPEDEF_STRUCT(module_predict_args_t, iree_vm_ref_t arg0;)
EMITC_TYPEDEF_STRUCT(module_predict_result_t, iree_vm_ref_t res0;)
static iree_status_t module_predict_export_shim(iree_vm_stack_t* v1, uint32_t v2, iree_byte_span_t v3, iree_byte_span_t v4, void* v5, void* v6) {
  module_t* v7;
  module_state_t* v8;
  uint8_t* v9;
  module_predict_args_t* v10;
  uint8_t* v11;
  module_predict_result_t* v12;
  iree_vm_ref_t* v13;
  iree_vm_ref_t* v14;
  iree_status_t v15;
  bool v16;
  int32_t v17;
  bool v18;
  iree_status_t v19;
  v7 = (module_t*) v5;
  v8 = (module_state_t*) v6;
  v9 = EMITC_STRUCT_MEMBER(v3, data);
  v10 = (module_predict_args_t*) v9;
  v11 = EMITC_STRUCT_MEMBER(v4, data);
  v12 = (module_predict_result_t*) v11;
  v13 = EMITC_STRUCT_PTR_MEMBER_ADDRESS(v10, arg0);
  v14 = EMITC_STRUCT_PTR_MEMBER_ADDRESS(v12, res0);
  v15 = module_predict(v1, v7, v8, v13, v14);
  v16 = (bool) v15;
  v17 = vm_cmp_nz_i32(v16);
  v18 = (bool) v17;
  if (v18) {
  goto label3;
  } else {
  goto label2;
  }
  label2:
  v19 = iree_ok_status();
  return v19;
  label3:
  return v15;
}

static iree_status_t module___init_export_shim(iree_vm_stack_t* v1, uint32_t v2, iree_byte_span_t v3, iree_byte_span_t v4, void* v5, void* v6) {
  module_t* v7;
  module_state_t* v8;
  iree_status_t v9;
  bool v10;
  int32_t v11;
  bool v12;
  iree_status_t v13;
  v7 = (module_t*) v5;
  v8 = (module_state_t*) v6;
  v9 = module___init(v1, v7, v8);
  v10 = (bool) v9;
  v11 = vm_cmp_nz_i32(v10);
  v12 = (bool) v11;
  if (v12) {
  goto label3;
  } else {
  goto label2;
  }
  label2:
  v13 = iree_ok_status();
  return v13;
  label3:
  return v9;
}

static iree_status_t module___init(iree_vm_stack_t* v1, module_t* v2, module_state_t* v3) {
  int32_t v4;
  int64_t v5;
  int32_t v6;
  int32_t v7;
  int32_t v8;
  int32_t v9;
  int32_t v10;
  int32_t v11;
  int64_t v12;
  int64_t v13;
  int32_t v14;
  int32_t v15;
  int32_t v16;
  int32_t v17;
  int32_t v18;
  iree_vm_ref_t v19;
  iree_vm_ref_t* v20;
  iree_host_size_t v21;
  iree_vm_ref_t v22;
  iree_vm_ref_t* v23;
  iree_host_size_t v24;
  iree_vm_ref_t v25;
  iree_vm_ref_t* v26;
  iree_host_size_t v27;
  iree_vm_ref_t v28;
  iree_vm_ref_t* v29;
  iree_host_size_t v30;
  iree_vm_ref_t v31;
  iree_vm_ref_t* v32;
  iree_host_size_t v33;
  iree_vm_ref_t v34;
  iree_vm_ref_t* v35;
  iree_host_size_t v36;
  iree_vm_ref_t v37;
  iree_vm_ref_t* v38;
  iree_host_size_t v39;
  iree_vm_function_t* v40;
  iree_vm_function_t* v41;
  iree_status_t v42;
  bool v43;
  int32_t v44;
  bool v45;
  iree_vm_buffer_t* v46;
  iree_vm_buffer_t* v47;
  iree_vm_ref_type_t v48;
  iree_status_t v49;
  bool v50;
  int32_t v51;
  bool v52;
  iree_vm_buffer_t* v53;
  iree_vm_buffer_t* v54;
  iree_vm_ref_type_t v55;
  iree_status_t v56;
  bool v57;
  int32_t v58;
  bool v59;
  iree_vm_function_t* v60;
  iree_vm_function_t* v61;
  iree_vm_ref_t v62;
  iree_vm_ref_t* v63;
  iree_host_size_t v64;
  iree_vm_ref_t v65;
  iree_vm_ref_t* v66;
  iree_host_size_t v67;
  iree_vm_ref_t v68;
  iree_vm_ref_t* v69;
  iree_host_size_t v70;
  int32_t v71;
  int32_t* v72;
  int64_t v73;
  int64_t* v74;
  iree_status_t v75;
  bool v76;
  int32_t v77;
  bool v78;
  int32_t v79;
  int32_t v80;
  int32_t v81;
  iree_vm_function_t* v82;
  iree_vm_function_t* v83;
  iree_vm_ref_t v84;
  iree_vm_ref_t* v85;
  iree_host_size_t v86;
  iree_status_t v87;
  bool v88;
  int32_t v89;
  bool v90;
  iree_vm_function_t* v91;
  iree_vm_function_t* v92;
  iree_vm_ref_t v93;
  iree_vm_ref_t* v94;
  iree_host_size_t v95;
  iree_vm_ref_t v96;
  iree_vm_ref_t* v97;
  iree_host_size_t v98;
  iree_status_t v99;
  bool v100;
  int32_t v101;
  bool v102;
  iree_vm_function_t* v103;
  iree_vm_function_t* v104;
  iree_vm_ref_t v105;
  iree_vm_ref_t* v106;
  iree_host_size_t v107;
  iree_status_t v108;
  bool v109;
  int32_t v110;
  bool v111;
  iree_vm_function_t* v112;
  iree_vm_function_t* v113;
  iree_vm_ref_t v114;
  iree_vm_ref_t* v115;
  iree_host_size_t v116;
  iree_vm_ref_t v117;
  iree_vm_ref_t* v118;
  iree_host_size_t v119;
  iree_status_t v120;
  bool v121;
  int32_t v122;
  bool v123;
  uint8_t* v124;
  iree_vm_ref_t* v125;
  iree_vm_ref_t* v126;
  iree_vm_type_def_t v127;
  iree_vm_type_def_t* v128;
  iree_host_size_t v129;
  iree_string_view_t v130;
  const iree_vm_ref_type_descriptor_t* v131;
  iree_vm_ref_type_t v132;
  iree_vm_ref_type_t v133;
  iree_status_t v134;
  bool v135;
  int32_t v136;
  bool v137;
  iree_vm_ref_t* v138;
  iree_vm_ref_t* v139;
  iree_vm_type_def_t v140;
  iree_vm_type_def_t* v141;
  iree_host_size_t v142;
  iree_string_view_t v143;
  const iree_vm_ref_type_descriptor_t* v144;
  iree_vm_ref_type_t v145;
  iree_vm_ref_type_t v146;
  iree_status_t v147;
  bool v148;
  int32_t v149;
  bool v150;
  int32_t v151;
  bool v152;
  iree_vm_ref_t* v153;
  iree_vm_ref_t* v154;
  iree_vm_type_def_t v155;
  iree_vm_type_def_t* v156;
  iree_host_size_t v157;
  iree_string_view_t v158;
  const iree_vm_ref_type_descriptor_t* v159;
  iree_vm_ref_type_t v160;
  iree_vm_ref_type_t v161;
  iree_status_t v162;
  bool v163;
  int32_t v164;
  bool v165;
  iree_vm_ref_t* v166;
  iree_vm_ref_t* v167;
  iree_vm_type_def_t v168;
  iree_vm_type_def_t* v169;
  iree_host_size_t v170;
  iree_string_view_t v171;
  const iree_vm_ref_type_descriptor_t* v172;
  iree_vm_ref_type_t v173;
  iree_vm_ref_type_t v174;
  iree_status_t v175;
  bool v176;
  int32_t v177;
  bool v178;
  iree_vm_buffer_t* v179;
  iree_vm_buffer_t* v180;
  iree_vm_ref_type_t v181;
  iree_status_t v182;
  bool v183;
  int32_t v184;
  bool v185;
  iree_vm_function_t* v186;
  iree_vm_function_t* v187;
  iree_vm_ref_t v188;
  iree_vm_ref_t* v189;
  iree_host_size_t v190;
  iree_vm_ref_t v191;
  iree_vm_ref_t* v192;
  iree_host_size_t v193;
  iree_vm_ref_t v194;
  iree_vm_ref_t* v195;
  iree_host_size_t v196;
  iree_vm_ref_t v197;
  iree_vm_ref_t* v198;
  iree_host_size_t v199;
  iree_vm_ref_t v200;
  iree_vm_ref_t* v201;
  iree_host_size_t v202;
  iree_vm_ref_t v203;
  iree_vm_ref_t* v204;
  iree_host_size_t v205;
  iree_vm_ref_t v206;
  iree_vm_ref_t* v207;
  iree_host_size_t v208;
  iree_status_t v209;
  bool v210;
  int32_t v211;
  bool v212;
  iree_vm_ref_t v213;
  iree_vm_ref_t* v214;
  iree_host_size_t v215;
  iree_vm_buffer_t* v216;
  iree_vm_buffer_t* v217;
  iree_vm_ref_type_t v218;
  iree_status_t v219;
  bool v220;
  int32_t v221;
  bool v222;
  iree_vm_function_t* v223;
  iree_vm_function_t* v224;
  iree_vm_ref_t v225;
  iree_vm_ref_t* v226;
  iree_host_size_t v227;
  iree_status_t v228;
  bool v229;
  int32_t v230;
  bool v231;
  iree_vm_function_t* v232;
  iree_vm_function_t* v233;
  iree_vm_ref_t v234;
  iree_vm_ref_t* v235;
  iree_host_size_t v236;
  iree_vm_ref_t v237;
  iree_vm_ref_t* v238;
  iree_host_size_t v239;
  iree_status_t v240;
  bool v241;
  int32_t v242;
  bool v243;
  int32_t v244;
  iree_vm_ref_t* v245;
  iree_vm_ref_t* v246;
  iree_vm_type_def_t v247;
  iree_vm_type_def_t* v248;
  iree_host_size_t v249;
  iree_string_view_t v250;
  const iree_vm_ref_type_descriptor_t* v251;
  iree_vm_ref_type_t v252;
  iree_vm_ref_type_t v253;
  iree_status_t v254;
  bool v255;
  int32_t v256;
  bool v257;
  int32_t v258;
  bool v259;
  iree_vm_function_t* v260;
  iree_vm_function_t* v261;
  iree_vm_ref_t v262;
  iree_vm_ref_t* v263;
  iree_host_size_t v264;
  iree_vm_ref_t v265;
  iree_vm_ref_t* v266;
  iree_host_size_t v267;
  iree_status_t v268;
  bool v269;
  int32_t v270;
  bool v271;
  iree_vm_function_t* v272;
  iree_vm_function_t* v273;
  iree_vm_ref_t v274;
  iree_vm_ref_t* v275;
  iree_host_size_t v276;
  iree_status_t v277;
  bool v278;
  int32_t v279;
  bool v280;
  iree_vm_function_t* v281;
  iree_vm_function_t* v282;
  iree_vm_ref_t v283;
  iree_vm_ref_t* v284;
  iree_host_size_t v285;
  iree_status_t v286;
  bool v287;
  int32_t v288;
  bool v289;
  iree_vm_function_t* v290;
  iree_vm_function_t* v291;
  iree_vm_ref_t v292;
  iree_vm_ref_t* v293;
  iree_host_size_t v294;
  iree_vm_ref_t v295;
  iree_vm_ref_t* v296;
  iree_host_size_t v297;
  iree_vm_ref_t v298;
  iree_vm_ref_t* v299;
  iree_host_size_t v300;
  iree_status_t v301;
  bool v302;
  int32_t v303;
  bool v304;
  iree_vm_function_t* v305;
  iree_vm_function_t* v306;
  iree_vm_ref_t v307;
  iree_vm_ref_t* v308;
  iree_host_size_t v309;
  iree_status_t v310;
  bool v311;
  int32_t v312;
  bool v313;
  iree_vm_function_t* v314;
  iree_vm_function_t* v315;
  iree_vm_ref_t v316;
  iree_vm_ref_t* v317;
  iree_host_size_t v318;
  iree_status_t v319;
  bool v320;
  int32_t v321;
  bool v322;
  iree_vm_function_t* v323;
  iree_vm_function_t* v324;
  iree_vm_ref_t v325;
  iree_vm_ref_t* v326;
  iree_host_size_t v327;
  iree_status_t v328;
  bool v329;
  int32_t v330;
  bool v331;
  iree_vm_function_t* v332;
  iree_vm_function_t* v333;
  iree_vm_ref_t v334;
  iree_vm_ref_t* v335;
  iree_host_size_t v336;
  iree_vm_ref_t v337;
  iree_vm_ref_t* v338;
  iree_host_size_t v339;
  iree_vm_ref_t v340;
  iree_vm_ref_t* v341;
  iree_host_size_t v342;
  iree_vm_ref_t v343;
  iree_vm_ref_t* v344;
  iree_host_size_t v345;
  iree_status_t v346;
  bool v347;
  int32_t v348;
  bool v349;
  iree_vm_ref_t v350;
  iree_vm_ref_t* v351;
  iree_host_size_t v352;
  iree_vm_ref_t v353;
  iree_vm_ref_t* v354;
  iree_host_size_t v355;
  iree_vm_ref_t* v356;
  iree_vm_ref_t* v357;
  iree_vm_type_def_t v358;
  iree_vm_type_def_t* v359;
  iree_host_size_t v360;
  iree_string_view_t v361;
  const iree_vm_ref_type_descriptor_t* v362;
  iree_vm_ref_type_t v363;
  iree_vm_ref_type_t v364;
  iree_status_t v365;
  bool v366;
  int32_t v367;
  bool v368;
  iree_vm_ref_t* v369;
  iree_vm_ref_t* v370;
  iree_vm_type_def_t v371;
  iree_vm_type_def_t* v372;
  iree_host_size_t v373;
  iree_string_view_t v374;
  const iree_vm_ref_type_descriptor_t* v375;
  iree_vm_ref_type_t v376;
  iree_vm_ref_type_t v377;
  iree_status_t v378;
  bool v379;
  int32_t v380;
  bool v381;
  iree_status_t v382;
  iree_vm_ref_t* v383;
  iree_vm_ref_t* v384;
  iree_status_t v385;
  v4 = 3;
  v5 = -1;
  v6 = 0;
  v7 = 1;
  v8 = 7;
  v9 = 2;
  v10 = 48;
  v11 = 527363;
  v12 = 0;
  v13 = 407040;
  v14 = 86;
  v15 = 150994947;
  v16 = 17;
  v17 = 28;
  v18 = 13;
  ;
  v20 = &v19;
  v21 = sizeof(iree_vm_ref_t);
  memset(v20, 0, v21);
  ;
  v23 = &v22;
  v24 = sizeof(iree_vm_ref_t);
  memset(v23, 0, v24);
  ;
  v26 = &v25;
  v27 = sizeof(iree_vm_ref_t);
  memset(v26, 0, v27);
  ;
  v29 = &v28;
  v30 = sizeof(iree_vm_ref_t);
  memset(v29, 0, v30);
  ;
  v32 = &v31;
  v33 = sizeof(iree_vm_ref_t);
  memset(v32, 0, v33);
  ;
  v35 = &v34;
  v36 = sizeof(iree_vm_ref_t);
  memset(v35, 0, v36);
  ;
  v38 = &v37;
  v39 = sizeof(iree_vm_ref_t);
  memset(v38, 0, v39);
  iree_vm_ref_release(v20);
  iree_vm_ref_release(v23);
  iree_vm_ref_release(v26);
  v40 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v41 = EMITC_ARRAY_ELEMENT_ADDRESS(v40, 0);
  v42 = module_call_0v_r_import_shim(v1, v41, v29);
  v43 = (bool) v42;
  v44 = vm_cmp_nz_i32(v43);
  v45 = (bool) v44;
  if (v45) {
  v385 = v42;
  goto label32;
  } else {
  goto label2;
  }
  label2:
  v46 = EMITC_STRUCT_PTR_MEMBER(v3, rodata_buffers);
  v47 = EMITC_ARRAY_ELEMENT_ADDRESS(v46, 1);
  v48 = iree_vm_buffer_type_id();
  v49 = iree_vm_ref_wrap_retain(v47, v48, v32);
  v50 = (bool) v49;
  v51 = vm_cmp_nz_i32(v50);
  v52 = (bool) v51;
  if (v52) {
  v385 = v49;
  goto label32;
  } else {
  goto label3;
  }
  label3:
  v53 = EMITC_STRUCT_PTR_MEMBER(v3, rodata_buffers);
  v54 = EMITC_ARRAY_ELEMENT_ADDRESS(v53, 2);
  v55 = iree_vm_buffer_type_id();
  v56 = iree_vm_ref_wrap_retain(v54, v55, v35);
  v57 = (bool) v56;
  v58 = vm_cmp_nz_i32(v57);
  v59 = (bool) v58;
  if (v59) {
  v385 = v56;
  goto label32;
  } else {
  goto label4;
  }
  label4:
  v60 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v61 = EMITC_ARRAY_ELEMENT_ADDRESS(v60, 16);
  ;
  v63 = &v62;
  v64 = sizeof(iree_vm_ref_t);
  memset(v63, 0, v64);
  iree_vm_ref_assign(v29, v63);
  ;
  v66 = &v65;
  v67 = sizeof(iree_vm_ref_t);
  memset(v66, 0, v67);
  iree_vm_ref_assign(v32, v66);
  ;
  v69 = &v68;
  v70 = sizeof(iree_vm_ref_t);
  memset(v69, 0, v70);
  iree_vm_ref_assign(v35, v69);
  ;
  v72 = &v71;
  ;
  v74 = &v73;
  v75 = module_call_0rrr_iI_import_shim(v1, v61, v63, v66, v69, v72, v74);
  v76 = (bool) v75;
  v77 = vm_cmp_nz_i32(v76);
  v78 = (bool) v77;
  if (v78) {
  v385 = v75;
  goto label32;
  } else {
  goto label5;
  }
  label5:
  v79 = vm_trunc_i64i32(v73);
  v80 = vm_and_i32(v79, v7);
  v81 = vm_select_i32(v71, v80, v6);
  v82 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v83 = EMITC_ARRAY_ELEMENT_ADDRESS(v82, 14);
  ;
  v85 = &v84;
  v86 = sizeof(iree_vm_ref_t);
  memset(v85, 0, v86);
  iree_vm_ref_assign(v29, v85);
  v87 = module_call_0riCiiiD_r_3_import_shim(v1, v83, v85, v6, v4, v6, v8, v7, v7, v8, v7, v9, v8, v6, v32);
  v88 = (bool) v87;
  v89 = vm_cmp_nz_i32(v88);
  v90 = (bool) v89;
  if (v90) {
  v385 = v87;
  goto label32;
  } else {
  goto label6;
  }
  label6:
  v91 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v92 = EMITC_ARRAY_ELEMENT_ADDRESS(v91, 23);
  ;
  v94 = &v93;
  v95 = sizeof(iree_vm_ref_t);
  memset(v94, 0, v95);
  iree_vm_ref_assign(v29, v94);
  ;
  v97 = &v96;
  v98 = sizeof(iree_vm_ref_t);
  memset(v97, 0, v98);
  iree_vm_ref_assign(v32, v97);
  v99 = module_call_0riCrD_r_1_import_shim(v1, v92, v94, v6, v7, v97, v32);
  v100 = (bool) v99;
  v101 = vm_cmp_nz_i32(v100);
  v102 = (bool) v101;
  if (v102) {
  v385 = v99;
  goto label32;
  } else {
  goto label7;
  }
  label7:
  v103 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v104 = EMITC_ARRAY_ELEMENT_ADDRESS(v103, 14);
  ;
  v106 = &v105;
  v107 = sizeof(iree_vm_ref_t);
  memset(v106, 0, v107);
  iree_vm_ref_assign(v29, v106);
  v108 = module_call_0riCiiiD_r_2_import_shim(v1, v104, v106, v6, v9, v6, v8, v7, v7, v8, v6, v38);
  v109 = (bool) v108;
  v110 = vm_cmp_nz_i32(v109);
  v111 = (bool) v110;
  if (v111) {
  v385 = v108;
  goto label32;
  } else {
  goto label8;
  }
  label8:
  v112 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v113 = EMITC_ARRAY_ELEMENT_ADDRESS(v112, 23);
  ;
  v115 = &v114;
  v116 = sizeof(iree_vm_ref_t);
  memset(v115, 0, v116);
  iree_vm_ref_assign(v29, v115);
  ;
  v118 = &v117;
  v119 = sizeof(iree_vm_ref_t);
  memset(v118, 0, v119);
  iree_vm_ref_assign(v38, v118);
  v120 = module_call_0riCrD_r_1_import_shim(v1, v113, v115, v6, v7, v118, v38);
  v121 = (bool) v120;
  v122 = vm_cmp_nz_i32(v121);
  v123 = (bool) v122;
  if (v123) {
  v385 = v120;
  goto label32;
  } else {
  goto label9;
  }
  label9:
  v124 = EMITC_STRUCT_PTR_MEMBER(v3, rwdata);
  vm_global_store_i32(v124, 0, v81);
  v125 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v126 = EMITC_ARRAY_ELEMENT_ADDRESS(v125, 0);
  ;
  v128 = &v127;
  v129 = sizeof(iree_vm_type_def_t);
  memset(v128, 0, v129);
  v130 = iree_make_cstring_view("hal.pipeline_layout");
  v131 = iree_vm_ref_lookup_registered_type(v130);
  v132 = EMITC_STRUCT_PTR_MEMBER(v131, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v127, ref_type, v132);
  v133 = EMITC_STRUCT_PTR_MEMBER(v128, ref_type);
  v134 = iree_vm_ref_retain_or_move_checked(false, v32, v133, v126);
  v135 = (bool) v134;
  v136 = vm_cmp_nz_i32(v135);
  v137 = (bool) v136;
  if (v137) {
  v385 = v134;
  goto label32;
  } else {
  goto label10;
  }
  label10:
  v138 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v139 = EMITC_ARRAY_ELEMENT_ADDRESS(v138, 1);
  ;
  v141 = &v140;
  v142 = sizeof(iree_vm_type_def_t);
  memset(v141, 0, v142);
  v143 = iree_make_cstring_view("hal.pipeline_layout");
  v144 = iree_vm_ref_lookup_registered_type(v143);
  v145 = EMITC_STRUCT_PTR_MEMBER(v144, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v140, ref_type, v145);
  v146 = EMITC_STRUCT_PTR_MEMBER(v141, ref_type);
  v147 = iree_vm_ref_retain_or_move_checked(false, v38, v146, v139);
  v148 = (bool) v147;
  v149 = vm_cmp_nz_i32(v148);
  v150 = (bool) v149;
  if (v150) {
  v385 = v147;
  goto label32;
  } else {
  goto label11;
  }
  label11:
  v151 = vm_cmp_nz_i32(v81);
  v152 = (bool) v151;
  if (v152) {
  goto label12;
  } else {
  goto label16;
  }
  label12:
  v153 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v154 = EMITC_ARRAY_ELEMENT_ADDRESS(v153, 1);
  ;
  v156 = &v155;
  v157 = sizeof(iree_vm_type_def_t);
  memset(v156, 0, v157);
  v158 = iree_make_cstring_view("hal.pipeline_layout");
  v159 = iree_vm_ref_lookup_registered_type(v158);
  v160 = EMITC_STRUCT_PTR_MEMBER(v159, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v155, ref_type, v160);
  v161 = EMITC_STRUCT_PTR_MEMBER(v156, ref_type);
  v162 = iree_vm_ref_retain_or_move_checked(false, v154, v161, v23);
  v163 = (bool) v162;
  v164 = vm_cmp_nz_i32(v163);
  v165 = (bool) v164;
  if (v165) {
  v385 = v162;
  goto label32;
  } else {
  goto label13;
  }
  label13:
  v166 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v167 = EMITC_ARRAY_ELEMENT_ADDRESS(v166, 0);
  ;
  v169 = &v168;
  v170 = sizeof(iree_vm_type_def_t);
  memset(v169, 0, v170);
  v171 = iree_make_cstring_view("hal.pipeline_layout");
  v172 = iree_vm_ref_lookup_registered_type(v171);
  v173 = EMITC_STRUCT_PTR_MEMBER(v172, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v168, ref_type, v173);
  v174 = EMITC_STRUCT_PTR_MEMBER(v169, ref_type);
  v175 = iree_vm_ref_retain_or_move_checked(false, v167, v174, v32);
  v176 = (bool) v175;
  v177 = vm_cmp_nz_i32(v176);
  v178 = (bool) v177;
  if (v178) {
  v385 = v175;
  goto label32;
  } else {
  goto label14;
  }
  label14:
  v179 = EMITC_STRUCT_PTR_MEMBER(v3, rodata_buffers);
  v180 = EMITC_ARRAY_ELEMENT_ADDRESS(v179, 0);
  v181 = iree_vm_buffer_type_id();
  v182 = iree_vm_ref_wrap_retain(v180, v181, v38);
  v183 = (bool) v182;
  v184 = vm_cmp_nz_i32(v183);
  v185 = (bool) v184;
  if (v185) {
  v385 = v182;
  goto label32;
  } else {
  goto label15;
  }
  label15:
  v186 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v187 = EMITC_ARRAY_ELEMENT_ADDRESS(v186, 20);
  ;
  v189 = &v188;
  v190 = sizeof(iree_vm_ref_t);
  memset(v189, 0, v190);
  iree_vm_ref_assign(v29, v189);
  ;
  v192 = &v191;
  v193 = sizeof(iree_vm_ref_t);
  memset(v192, 0, v193);
  iree_vm_ref_assign(v35, v192);
  ;
  v195 = &v194;
  v196 = sizeof(iree_vm_ref_t);
  memset(v195, 0, v196);
  iree_vm_ref_assign(v38, v195);
  ;
  v198 = &v197;
  v199 = sizeof(iree_vm_ref_t);
  memset(v198, 0, v199);
  iree_vm_ref_assign(v26, v198);
  ;
  v201 = &v200;
  v202 = sizeof(iree_vm_ref_t);
  memset(v201, 0, v202);
  iree_vm_ref_assign(v32, v201);
  ;
  v204 = &v203;
  v205 = sizeof(iree_vm_ref_t);
  memset(v204, 0, v205);
  iree_vm_ref_assign(v32, v204);
  ;
  v207 = &v206;
  v208 = sizeof(iree_vm_ref_t);
  memset(v207, 0, v208);
  iree_vm_ref_assign(v23, v207);
  v209 = module_call_0rrrrCrD_r_3_import_shim(v1, v187, v189, v192, v195, v198, v4, v201, v204, v207, v23);
  v210 = (bool) v209;
  v211 = vm_cmp_nz_i32(v210);
  v212 = (bool) v211;
  if (v212) {
  v385 = v209;
  goto label32;
  } else {
  goto label16;
  }
  label16:
  ;
  v214 = &v213;
  v215 = sizeof(iree_vm_ref_t);
  memset(v214, 0, v215);
  iree_vm_ref_retain(v23, v214);
  iree_vm_ref_assign(v214, v23);
  v216 = EMITC_STRUCT_PTR_MEMBER(v3, rodata_buffers);
  v217 = EMITC_ARRAY_ELEMENT_ADDRESS(v216, 3);
  v218 = iree_vm_buffer_type_id();
  v219 = iree_vm_ref_wrap_retain(v217, v218, v26);
  v220 = (bool) v219;
  v221 = vm_cmp_nz_i32(v220);
  v222 = (bool) v221;
  if (v222) {
  v385 = v219;
  goto label32;
  } else {
  goto label17;
  }
  label17:
  v223 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v224 = EMITC_ARRAY_ELEMENT_ADDRESS(v223, 15);
  ;
  v226 = &v225;
  v227 = sizeof(iree_vm_ref_t);
  memset(v226, 0, v227);
  iree_vm_ref_assign(v29, v226);
  v228 = module_call_0r_r_import_shim(v1, v224, v226, v32);
  v229 = (bool) v228;
  v230 = vm_cmp_nz_i32(v229);
  v231 = (bool) v230;
  if (v231) {
  v385 = v228;
  goto label32;
  } else {
  goto label18;
  }
  label18:
  v232 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v233 = EMITC_ARRAY_ELEMENT_ADDRESS(v232, 3);
  ;
  v235 = &v234;
  v236 = sizeof(iree_vm_ref_t);
  memset(v235, 0, v236);
  iree_vm_ref_assign(v32, v235);
  ;
  v238 = &v237;
  v239 = sizeof(iree_vm_ref_t);
  memset(v238, 0, v239);
  iree_vm_ref_assign(v26, v238);
  v240 = module_call_0riiirII_r_import_shim(v1, v233, v235, v7, v10, v11, v238, v12, v13, v35);
  v241 = (bool) v240;
  v242 = vm_cmp_nz_i32(v241);
  v243 = (bool) v242;
  if (v243) {
  v385 = v240;
  goto label32;
  } else {
  goto label19;
  }
  label19:
  v244 = vm_cmp_nz_ref(v35);
  v245 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v246 = EMITC_ARRAY_ELEMENT_ADDRESS(v245, 2);
  ;
  v248 = &v247;
  v249 = sizeof(iree_vm_type_def_t);
  memset(v248, 0, v249);
  v250 = iree_make_cstring_view("hal.executable");
  v251 = iree_vm_ref_lookup_registered_type(v250);
  v252 = EMITC_STRUCT_PTR_MEMBER(v251, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v247, ref_type, v252);
  v253 = EMITC_STRUCT_PTR_MEMBER(v248, ref_type);
  v254 = iree_vm_ref_retain_or_move_checked(false, v23, v253, v246);
  v255 = (bool) v254;
  v256 = vm_cmp_nz_i32(v255);
  v257 = (bool) v256;
  if (v257) {
  v385 = v254;
  goto label32;
  } else {
  goto label20;
  }
  label20:
  v258 = vm_cmp_nz_i32(v244);
  v259 = (bool) v258;
  if (v259) {
  v383 = v35;
  v384 = v20;
  goto label29;
  } else {
  goto label21;
  }
  label21:
  v260 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v261 = EMITC_ARRAY_ELEMENT_ADDRESS(v260, 2);
  ;
  v263 = &v262;
  v264 = sizeof(iree_vm_ref_t);
  memset(v263, 0, v264);
  iree_vm_ref_assign(v32, v263);
  ;
  v266 = &v265;
  v267 = sizeof(iree_vm_ref_t);
  memset(v266, 0, v267);
  iree_vm_ref_assign(v26, v266);
  v268 = module_call_0riirII_r_import_shim(v1, v261, v263, v14, v15, v266, v12, v13, v23);
  v269 = (bool) v268;
  v270 = vm_cmp_nz_i32(v269);
  v271 = (bool) v270;
  if (v271) {
  v385 = v268;
  goto label32;
  } else {
  goto label22;
  }
  label22:
  v272 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v273 = EMITC_ARRAY_ELEMENT_ADDRESS(v272, 1);
  ;
  v275 = &v274;
  v276 = sizeof(iree_vm_ref_t);
  memset(v275, 0, v276);
  iree_vm_ref_assign(v32, v275);
  v277 = module_call_0riiI_r_import_shim(v1, v273, v275, v10, v11, v13, v26);
  v278 = (bool) v277;
  v279 = vm_cmp_nz_i32(v278);
  v280 = (bool) v279;
  if (v280) {
  v385 = v277;
  goto label32;
  } else {
  goto label23;
  }
  label23:
  v281 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v282 = EMITC_ARRAY_ELEMENT_ADDRESS(v281, 8);
  ;
  v284 = &v283;
  v285 = sizeof(iree_vm_ref_t);
  memset(v284, 0, v285);
  iree_vm_ref_assign(v29, v284);
  v286 = module_call_0riii_r_import_shim(v1, v282, v284, v16, v7, v6, v32);
  v287 = (bool) v286;
  v288 = vm_cmp_nz_i32(v287);
  v289 = (bool) v288;
  if (v289) {
  v385 = v286;
  goto label32;
  } else {
  goto label24;
  }
  label24:
  v290 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v291 = EMITC_ARRAY_ELEMENT_ADDRESS(v290, 11);
  ;
  v293 = &v292;
  v294 = sizeof(iree_vm_ref_t);
  memset(v293, 0, v294);
  iree_vm_ref_assign(v32, v293);
  ;
  v296 = &v295;
  v297 = sizeof(iree_vm_ref_t);
  memset(v296, 0, v297);
  iree_vm_ref_assign(v23, v296);
  ;
  v299 = &v298;
  v300 = sizeof(iree_vm_ref_t);
  memset(v299, 0, v300);
  iree_vm_ref_assign(v26, v299);
  v301 = module_call_0rrIrII_v_import_shim(v1, v291, v293, v296, v12, v299, v12, v13);
  v302 = (bool) v301;
  v303 = vm_cmp_nz_i32(v302);
  v304 = (bool) v303;
  if (v304) {
  v385 = v301;
  goto label32;
  } else {
  goto label25;
  }
  label25:
  v305 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v306 = EMITC_ARRAY_ELEMENT_ADDRESS(v305, 10);
  ;
  v308 = &v307;
  v309 = sizeof(iree_vm_ref_t);
  memset(v308, 0, v309);
  iree_vm_ref_assign(v32, v308);
  v310 = module_call_0riii_v_import_shim(v1, v306, v308, v17, v18, v6);
  v311 = (bool) v310;
  v312 = vm_cmp_nz_i32(v311);
  v313 = (bool) v312;
  if (v313) {
  v385 = v310;
  goto label32;
  } else {
  goto label26;
  }
  label26:
  v314 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v315 = EMITC_ARRAY_ELEMENT_ADDRESS(v314, 9);
  ;
  v317 = &v316;
  v318 = sizeof(iree_vm_ref_t);
  memset(v317, 0, v318);
  iree_vm_ref_assign(v32, v317);
  v319 = module_call_0r_v_import_shim(v1, v315, v317);
  v320 = (bool) v319;
  v321 = vm_cmp_nz_i32(v320);
  v322 = (bool) v321;
  if (v322) {
  v385 = v319;
  goto label32;
  } else {
  goto label27;
  }
  label27:
  v323 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v324 = EMITC_ARRAY_ELEMENT_ADDRESS(v323, 21);
  ;
  v326 = &v325;
  v327 = sizeof(iree_vm_ref_t);
  memset(v326, 0, v327);
  iree_vm_ref_assign(v29, v326);
  v328 = module_call_0ri_r_import_shim(v1, v324, v326, v6, v23);
  v329 = (bool) v328;
  v330 = vm_cmp_nz_i32(v329);
  v331 = (bool) v330;
  if (v331) {
  v385 = v328;
  goto label32;
  } else {
  goto label28;
  }
  label28:
  v332 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v333 = EMITC_ARRAY_ELEMENT_ADDRESS(v332, 19);
  ;
  v335 = &v334;
  v336 = sizeof(iree_vm_ref_t);
  memset(v335, 0, v336);
  iree_vm_ref_assign(v29, v335);
  ;
  v338 = &v337;
  v339 = sizeof(iree_vm_ref_t);
  memset(v338, 0, v339);
  iree_vm_ref_assign(v20, v338);
  ;
  v341 = &v340;
  v342 = sizeof(iree_vm_ref_t);
  memset(v341, 0, v342);
  iree_vm_ref_assign(v23, v341);
  ;
  v344 = &v343;
  v345 = sizeof(iree_vm_ref_t);
  memset(v344, 0, v345);
  iree_vm_ref_assign(v32, v344);
  v346 = module_call_0rIrrCrD_v_1_import_shim(v1, v333, v335, v5, v338, v341, v7, v344);
  v347 = (bool) v346;
  v348 = vm_cmp_nz_i32(v347);
  v349 = (bool) v348;
  if (v349) {
  v385 = v346;
  goto label32;
  } else {
  v383 = v26;
  v384 = v23;
  goto label29;
  }
  label29:
  ;
  v351 = &v350;
  v352 = sizeof(iree_vm_ref_t);
  memset(v351, 0, v352);
  iree_vm_ref_retain(v383, v351);
  ;
  v354 = &v353;
  v355 = sizeof(iree_vm_ref_t);
  memset(v354, 0, v355);
  iree_vm_ref_retain(v384, v354);
  iree_vm_ref_assign(v351, v20);
  iree_vm_ref_assign(v354, v23);
  v356 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v357 = EMITC_ARRAY_ELEMENT_ADDRESS(v356, 4);
  ;
  v359 = &v358;
  v360 = sizeof(iree_vm_type_def_t);
  memset(v359, 0, v360);
  v361 = iree_make_cstring_view("hal.buffer");
  v362 = iree_vm_ref_lookup_registered_type(v361);
  v363 = EMITC_STRUCT_PTR_MEMBER(v362, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v358, ref_type, v363);
  v364 = EMITC_STRUCT_PTR_MEMBER(v359, ref_type);
  v365 = iree_vm_ref_retain_or_move_checked(false, v20, v364, v357);
  v366 = (bool) v365;
  v367 = vm_cmp_nz_i32(v366);
  v368 = (bool) v367;
  if (v368) {
  v385 = v365;
  goto label32;
  } else {
  goto label30;
  }
  label30:
  v369 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v370 = EMITC_ARRAY_ELEMENT_ADDRESS(v369, 3);
  ;
  v372 = &v371;
  v373 = sizeof(iree_vm_type_def_t);
  memset(v372, 0, v373);
  v374 = iree_make_cstring_view("hal.fence");
  v375 = iree_vm_ref_lookup_registered_type(v374);
  v376 = EMITC_STRUCT_PTR_MEMBER(v375, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v371, ref_type, v376);
  v377 = EMITC_STRUCT_PTR_MEMBER(v372, ref_type);
  v378 = iree_vm_ref_retain_or_move_checked(false, v23, v377, v370);
  v379 = (bool) v378;
  v380 = vm_cmp_nz_i32(v379);
  v381 = (bool) v380;
  if (v381) {
  v385 = v378;
  goto label32;
  } else {
  goto label31;
  }
  label31:
  iree_vm_ref_release(v20);
  iree_vm_ref_release(v26);
  iree_vm_ref_release(v32);
  iree_vm_ref_release(v38);
  iree_vm_ref_release(v23);
  iree_vm_ref_release(v29);
  iree_vm_ref_release(v35);
  v382 = iree_ok_status();
  return v382;
  label32:
  iree_vm_ref_release(v20);
  iree_vm_ref_release(v26);
  iree_vm_ref_release(v32);
  iree_vm_ref_release(v38);
  iree_vm_ref_release(v23);
  iree_vm_ref_release(v29);
  iree_vm_ref_release(v35);
  return v385;
}

static void module_destroy(void* v1) {
  module_t* v2;
  iree_allocator_t v3;
  v2 = (module_t*) v1;
  v3 = EMITC_STRUCT_PTR_MEMBER(v2, allocator);
  iree_allocator_free(v3, v2);
  return;
}

static iree_status_t module_alloc_state(void* v1, iree_allocator_t v2, iree_vm_module_state_t** v3) {
  module_state_t* v4;
  iree_host_size_t v5;
  module_state_t** v6;
  void** v7;
  iree_status_t v8;
  bool v9;
  int32_t v10;
  bool v11;
  const uint8_t* v12;
  void* v13;
  iree_host_size_t v14;
  iree_byte_span_t v15;
  iree_allocator_t v16;
  iree_vm_buffer_t* v17;
  iree_vm_buffer_t* v18;
  const uint8_t* v19;
  void* v20;
  iree_host_size_t v21;
  iree_byte_span_t v22;
  iree_allocator_t v23;
  iree_vm_buffer_t* v24;
  iree_vm_buffer_t* v25;
  const uint8_t* v26;
  void* v27;
  iree_host_size_t v28;
  iree_byte_span_t v29;
  iree_allocator_t v30;
  iree_vm_buffer_t* v31;
  iree_vm_buffer_t* v32;
  const uint8_t* v33;
  void* v34;
  iree_host_size_t v35;
  iree_byte_span_t v36;
  iree_allocator_t v37;
  iree_vm_buffer_t* v38;
  iree_vm_buffer_t* v39;
  const uint8_t* v40;
  void* v41;
  iree_host_size_t v42;
  iree_byte_span_t v43;
  iree_allocator_t v44;
  iree_vm_buffer_t* v45;
  iree_vm_buffer_t* v46;
  iree_vm_ref_t* v47;
  iree_vm_ref_t* v48;
  iree_host_size_t v49;
  iree_vm_ref_t* v50;
  iree_host_size_t v51;
  iree_vm_ref_t* v52;
  iree_host_size_t v53;
  iree_vm_ref_t* v54;
  iree_host_size_t v55;
  iree_vm_ref_t* v56;
  iree_host_size_t v57;
  iree_vm_module_state_t* v58;
  iree_status_t v59;
  v4 = NULL;
  v5 = sizeof(module_state_t);
  v6 = &v4;
  v7 = (void**) v6;
  v8 = iree_allocator_malloc(v2, v5, v7);
  v9 = (bool) v8;
  v10 = vm_cmp_nz_i32(v9);
  v11 = (bool) v10;
  if (v11) {
  goto label3;
  } else {
  goto label2;
  }
  label2:
  memset(v4, 0, v5);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v4, allocator, v2);
  v12 = module_mnist_linked_llvm_cpu_static;
  v13 = (void*) v12;
  v14 = sizeof(module_mnist_linked_llvm_cpu_static);
  v15 = iree_make_byte_span(v13, v14);
  v16 = iree_allocator_null();
  v17 = EMITC_STRUCT_PTR_MEMBER(v4, rodata_buffers);
  v18 = EMITC_ARRAY_ELEMENT_ADDRESS(v17, 0);
  iree_vm_buffer_initialize(IREE_VM_BUFFER_ACCESS_ORIGIN_MODULE, v15, v16, v18);
  v19 = module__utf8_hal_executable_format_EAB228F999C2D3A1;
  v20 = (void*) v19;
  v21 = sizeof(module__utf8_hal_executable_format_EAB228F999C2D3A1);
  v22 = iree_make_byte_span(v20, v21);
  v23 = iree_allocator_null();
  v24 = EMITC_STRUCT_PTR_MEMBER(v4, rodata_buffers);
  v25 = EMITC_ARRAY_ELEMENT_ADDRESS(v24, 1);
  iree_vm_buffer_initialize(IREE_VM_BUFFER_ACCESS_ORIGIN_MODULE, v22, v23, v25);
  v26 = module__utf8_static_96B31E405495E0B6;
  v27 = (void*) v26;
  v28 = sizeof(module__utf8_static_96B31E405495E0B6);
  v29 = iree_make_byte_span(v27, v28);
  v30 = iree_allocator_null();
  v31 = EMITC_STRUCT_PTR_MEMBER(v4, rodata_buffers);
  v32 = EMITC_ARRAY_ELEMENT_ADDRESS(v31, 2);
  iree_vm_buffer_initialize(IREE_VM_BUFFER_ACCESS_ORIGIN_MODULE, v29, v30, v32);
  v33 = module__const;
  v34 = (void*) v33;
  v35 = sizeof(module__const);
  v36 = iree_make_byte_span(v34, v35);
  v37 = iree_allocator_null();
  v38 = EMITC_STRUCT_PTR_MEMBER(v4, rodata_buffers);
  v39 = EMITC_ARRAY_ELEMENT_ADDRESS(v38, 3);
  iree_vm_buffer_initialize(IREE_VM_BUFFER_ACCESS_ORIGIN_MODULE, v36, v37, v39);
  v40 = module__utf8_tensor_3C6209B4FD120BDC;
  v41 = (void*) v40;
  v42 = sizeof(module__utf8_tensor_3C6209B4FD120BDC);
  v43 = iree_make_byte_span(v41, v42);
  v44 = iree_allocator_null();
  v45 = EMITC_STRUCT_PTR_MEMBER(v4, rodata_buffers);
  v46 = EMITC_ARRAY_ELEMENT_ADDRESS(v45, 4);
  iree_vm_buffer_initialize(IREE_VM_BUFFER_ACCESS_ORIGIN_MODULE, v43, v44, v46);
  v47 = EMITC_STRUCT_PTR_MEMBER(v4, refs);
  v48 = EMITC_ARRAY_ELEMENT_ADDRESS(v47, 0);
  v49 = sizeof(iree_vm_ref_t);
  memset(v48, 0, v49);
  v50 = EMITC_ARRAY_ELEMENT_ADDRESS(v47, 1);
  v51 = sizeof(iree_vm_ref_t);
  memset(v50, 0, v51);
  v52 = EMITC_ARRAY_ELEMENT_ADDRESS(v47, 2);
  v53 = sizeof(iree_vm_ref_t);
  memset(v52, 0, v53);
  v54 = EMITC_ARRAY_ELEMENT_ADDRESS(v47, 3);
  v55 = sizeof(iree_vm_ref_t);
  memset(v54, 0, v55);
  v56 = EMITC_ARRAY_ELEMENT_ADDRESS(v47, 4);
  v57 = sizeof(iree_vm_ref_t);
  memset(v56, 0, v57);
  v58 = (iree_vm_module_state_t*) v4;
  EMITC_DEREF_ASSIGN_VALUE(v3, v58);
  v59 = iree_ok_status();
  return v59;
  label3:
  return v8;
}

static void module_free_state(void* v1, iree_vm_module_state_t* v2) {
  module_state_t* v3;
  iree_vm_ref_t* v4;
  iree_vm_ref_t* v5;
  iree_vm_ref_t* v6;
  iree_vm_ref_t* v7;
  iree_vm_ref_t* v8;
  iree_vm_ref_t* v9;
  iree_allocator_t v10;
  v3 = (module_state_t*) v2;
  v4 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v5 = EMITC_ARRAY_ELEMENT_ADDRESS(v4, 0);
  iree_vm_ref_release(v5);
  v6 = EMITC_ARRAY_ELEMENT_ADDRESS(v4, 1);
  iree_vm_ref_release(v6);
  v7 = EMITC_ARRAY_ELEMENT_ADDRESS(v4, 2);
  iree_vm_ref_release(v7);
  v8 = EMITC_ARRAY_ELEMENT_ADDRESS(v4, 3);
  iree_vm_ref_release(v8);
  v9 = EMITC_ARRAY_ELEMENT_ADDRESS(v4, 4);
  iree_vm_ref_release(v9);
  v10 = EMITC_STRUCT_PTR_MEMBER(v3, allocator);
  iree_allocator_free(v10, v3);
  return;
}

static iree_status_t module_resolve_import(void* v1, iree_vm_module_state_t* v2, iree_host_size_t v3, const iree_vm_function_t* v4, const iree_vm_function_signature_t* v5) {
  module_state_t* v6;
  iree_vm_function_t* v7;
  iree_vm_function_t* v8;
  iree_status_t v9;
  v6 = (module_state_t*) v2;
  v7 = EMITC_STRUCT_PTR_MEMBER(v6, imports);
  v8 = EMITC_ARRAY_ELEMENT_ADDRESS(v7, v3);
  EMITC_DEREF_ASSIGN_PTR(v8, v4);
  v9 = iree_ok_status();
  return v9;
}


static const iree_vm_module_dependency_t module_dependencies_[] = {
{{"hal", 3}, 0, IREE_VM_MODULE_DEPENDENCY_FLAG_REQUIRED},
};

static const iree_vm_native_import_descriptor_t module_imports_[] = {
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.ex.shared_device", 20}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.allocator.allocate", 22}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.allocator.allocate.initialized", 34}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.allocator.map.byte_buffer", 29}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.buffer.assert", 17}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.buffer_view.create", 22}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.buffer_view.assert", 22}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.buffer_view.buffer", 22}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.command_buffer.create", 25}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.command_buffer.finalize", 27}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.command_buffer.execution_barrier", 36}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.command_buffer.copy_buffer", 30}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.command_buffer.push_descriptor_set", 38}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.command_buffer.dispatch", 27}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.descriptor_set_layout.create", 32}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.device.allocator", 20}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.device.query.i64", 20}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.device.queue.alloca", 23}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.device.queue.dealloca", 25}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.device.queue.execute", 24}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.executable.create", 21}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.fence.create", 16}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.fence.await", 15}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.pipeline_layout.create", 26}},
};

static const iree_vm_native_export_descriptor_t module_exports_[] = {
{{"__init", 6}, {"0v_v", 4}, 0, NULL},
{{"predict", 7}, {"0r_r", 4}, 0, NULL},
};

static const iree_vm_native_function_ptr_t module_funcs_[] = {
{(iree_vm_native_function_shim_t)iree_emitc_shim, (iree_vm_native_function_target_t)module___init_export_shim},
{(iree_vm_native_function_shim_t)iree_emitc_shim, (iree_vm_native_function_target_t)module_predict_export_shim},
};

static const iree_vm_native_module_descriptor_t module_descriptor_ = {
{"module", 6},
0,
0,
NULL,
1,
module_dependencies_,
24,
module_imports_,
2,
module_exports_,
2,
module_funcs_,
};

iree_status_t module_create(iree_vm_instance_t* v1, iree_allocator_t v2, iree_vm_module_t** v3) {
  module_t* v4;
  iree_host_size_t v5;
  module_t** v6;
  void** v7;
  iree_status_t v8;
  bool v9;
  int32_t v10;
  bool v11;
  iree_vm_module_t v12;
  iree_vm_module_t* v13;
  iree_status_t v14;
  bool v15;
  int32_t v16;
  bool v17;
  iree_status_t v18;
  v4 = NULL;
  v5 = sizeof(module_t);
  v6 = &v4;
  v7 = (void**) v6;
  v8 = iree_allocator_malloc(v2, v5, v7);
  v9 = (bool) v8;
  v10 = vm_cmp_nz_i32(v9);
  v11 = (bool) v10;
  if (v11) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  memset(v4, 0, v5);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v4, allocator, v2);
  ;
  v13 = &v12;
  v14 = iree_vm_module_initialize(v13, v4);
  v15 = iree_status_is_ok(v14);
  v16 = vm_cmp_nz_i32(v15);
  v17 = (bool) v16;
  if (v17) {
  goto label3;
  } else {
  goto label5;
  }
  label3:
  EMITC_STRUCT_MEMBER_ASSIGN(v12, destroy, module_destroy);
  EMITC_STRUCT_MEMBER_ASSIGN(v12, alloc_state, module_alloc_state);
  EMITC_STRUCT_MEMBER_ASSIGN(v12, free_state, module_free_state);
  EMITC_STRUCT_MEMBER_ASSIGN(v12, resolve_import, module_resolve_import);
  v18 = iree_vm_native_module_create(v13, &module_descriptor_, v1, v2, v3);
  return v18;
  label4:
  return v8;
  label5:
  iree_allocator_free(v2, v4);
  return v14;
}

#endif  // EMITC_IMPLEMENTATION