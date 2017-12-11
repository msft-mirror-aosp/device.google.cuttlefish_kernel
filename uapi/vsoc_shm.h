/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _UAPI_LINUX_VSOC_SHM_H
#define _UAPI_LINUX_VSOC_SHM_H
typedef uint32_t vsoc_shm_off_t;
typedef uint32_t vsoc_reg_off_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct fd_scoped_permission {
  vsoc_reg_off_t begin_offset;
  vsoc_reg_off_t end_offset;
  vsoc_reg_off_t owner_offset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t owned_value;
};
#define VSOC_REGION_FREE ((uint32_t) 0)
struct fd_scoped_permission_arg {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct fd_scoped_permission perm;
  int32_t managed_region_fd;
};
#define VSOC_NODE_FREE ((uint32_t) 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct vsoc_signal_table_layout {
  uint32_t num_nodes_lg2;
  vsoc_reg_off_t futex_uaddr_table_offset;
  vsoc_reg_off_t interrupt_signalled_offset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
typedef char vsoc_device_name[16];
#define VSOC_REGION_WHOLE ((int32_t) 0)
struct vsoc_device_region {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint16_t current_version;
  uint16_t min_compatible_version;
  vsoc_reg_off_t region_begin_offset;
  vsoc_reg_off_t region_end_offset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  vsoc_reg_off_t offset_of_region_data;
  struct vsoc_signal_table_layout guest_to_host_signal_table;
  struct vsoc_signal_table_layout host_to_guest_signal_table;
  vsoc_device_name device_name;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t managed_by;
};
struct vsoc_shm_layout_descriptor {
  uint16_t major_version;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint16_t minor_version;
  uint32_t size;
  uint32_t region_count;
  uint32_t vsoc_region_desc_offset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define CURRENT_VSOC_LAYOUT_MAJOR_VERSION 2
#define CURRENT_VSOC_LAYOUT_MINOR_VERSION 0
#define VSOC_CREATE_FD_SCOPED_PERMISSION _IOW(0xF5, 0, struct fd_scoped_permission)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VSOC_GET_FD_SCOPED_PERMISSION _IOR(0xF5, 1, struct fd_scoped_permission)
#define VSOC_MAYBE_SEND_INTERRUPT_TO_HOST _IO(0xF5, 2)
#define VSOC_WAIT_FOR_INCOMING_INTERRUPT _IO(0xF5, 3)
#define VSOC_DESCRIBE_REGION _IOR(0xF5, 4, struct vsoc_device_region)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VSOC_SELF_INTERRUPT _IO(0xF5, 5)
#define VSOC_SEND_INTERRUPT_TO_HOST _IO(0xF5, 6)
#endif

