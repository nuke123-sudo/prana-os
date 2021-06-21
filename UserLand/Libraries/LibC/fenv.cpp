/*
 * Copyright (c) 2021, Krisna Pranav
 *
 * SPDX-License-Identifier: BSD-2-Clause
*/


// includes
#include <AK/Types.h>
#include <fenv.h>

static_assert(sizeof(__x87_floating_point_environment) == 28);

static u16 read_status_register()
{
    u16 status_register;
    asm volatile("fstsw %0"
                 : "=m"(status_register));
    return status_register;
}

static u16 read_control_word()
{
    u16 control_word;
    asm volatile("fstcw %0"
                 : "=m"(control_word));
    return control_word;
}
