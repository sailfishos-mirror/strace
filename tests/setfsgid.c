/*
 * Check decoding of setfsgid syscall.
 *
 * Copyright (c) 2016-2021 The strace developers.
 * All rights reserved.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include "tests.h"
#include "scno.h"

#define SYSCALL_NR	__NR_setfsgid
#define SYSCALL_NAME	"setfsgid"

#if defined __NR_setfsgid32 && __NR_setfsgid != __NR_setfsgid32
# define UGID_TYPE	short
# define GETUGID	syscall(__NR_getegid)
#else
# define UGID_TYPE	int
# define GETUGID	getegid()
#endif

#include "setfsugid.c"
