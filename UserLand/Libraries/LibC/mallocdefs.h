/*
 * Copyright (c) 2021, Krisna Pranav
 *
 * SPDX-License-Identifier: BSD-2-Clause
*/


#pragma once

// includes
#include <AK/IntrusiveList.h>
#include <AK/Types.h>

#define MAGIC_PAGE_HEADER 0x42657274     // 'Bert'
#define MAGIC_BIGALLOC_HEADER 0x42697267 // 'Birg'
#define MALLOC_SCRUB_BYTE 0xdc
#define FREE_SCRUB_BYTE 0xed

#define PAGE_ROUND_UP(x) ((((size_t)(x)) + PAGE_SIZE - 1) & (~(PAGE_SIZE - 1)))
