/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 */

#include <stddef.h>
#include <inttypes.h>

#define DISABLE_WARNINGS() \
    _Pragma("GCC diagnostic push")
    _Pragma("GCC diagnostic ignored \"-Wunused-parameter\"")

#define ENABLE_WARNINGS() \
    _Pragma("GCC diagnostic pop")
