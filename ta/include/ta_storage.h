/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright (c) 2014, STMicroelectronics International N.V.
 * All rights reserved.
 */

#ifndef __TA_STORAGE_H
#define __TA_STORAGE_H

#define TA_STORAGE_UUID { 0xb689f2a7, 0x8adf, 0x477a, \
	{ 0x9f, 0x99, 0x32, 0xe9, 0x0c, 0x0a, 0xd0, 0xa2 } }
#define TA_STORAGE2_UUID { 0x731e279e, 0xaafb, 0x4575, \
	{ 0xa7, 0x71, 0x38, 0xca, 0xa6, 0xf0, 0xcc, 0xa6 } }

struct ta_storage_obj_info {
	uint32_t object_type;
	uint32_t object_size;
	uint32_t max_object_size;
	uint32_t object_usage;
	uint32_t data_size;
	uint32_t data_position;
	uint32_t handle_flags;
};

#define TA_STORAGE_CMD_OPEN			0
#define TA_STORAGE_CMD_CLOSE			1
#define TA_STORAGE_CMD_READ			2
#define TA_STORAGE_CMD_WRITE			3
#define TA_STORAGE_CMD_CREATE			4
#define TA_STORAGE_CMD_SEEK			5
#define TA_STORAGE_CMD_UNLINK			6
#define TA_STORAGE_CMD_RENAME			7
#define TA_STORAGE_CMD_TRUNC			8
#define TA_STORAGE_CMD_ALLOC_ENUM		9
#define TA_STORAGE_CMD_FREE_ENUM		10
#define TA_STORAGE_CMD_RESET_ENUM		11
#define TA_STORAGE_CMD_START_ENUM		12
#define TA_STORAGE_CMD_NEXT_ENUM		13
#define TA_STORAGE_CMD_CREATE_OVERWRITE		14
#define TA_STORAGE_CMD_KEY_IN_PERSISTENT	15
#define TA_STORAGE_CMD_LOOP			16
#define TA_STORAGE_CMD_RESTRICT_USAGE		17
#define TA_STORAGE_CMD_ALLOC_OBJ		18
#define TA_STORAGE_CMD_FREE_OBJ			19
#define TA_STORAGE_CMD_RESET_OBJ		20
#define TA_STORAGE_CMD_GET_OBJ_INFO		21
#define TA_STORAGE_CMD_OPEN_ID_IN_SHM		22
#define TA_STORAGE_CMD_CREATE_ID_IN_SHM		23
#define TA_STORAGE_CMD_CREATEOVER_ID_IN_SHM	24
#define TA_STORAGE_CMD_RENAME_ID_IN_SHM		25

#endif /*__TA_STORAGE_H*/
