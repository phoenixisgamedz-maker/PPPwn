/*
 * Copyright (C) 2024 Andy Nguyen
 *
 * This software may be modified and distributed under the terms
 * of the MIT license.  See the LICENSE file for details.
 */

#ifndef __OFFSETS_H__
#define __OFFSETS_H__

#if (FIRMWARE == 700 || FIRMWARE == 701 || FIRMWARE == 702)
#define kdlsym_addr_Xfast_syscall 0xffffffff822001c0
#define kdlsym_addr_printf 0xffffffff822bc730
#define kdlsym_addr_sysent 0xffffffff83325660
#define kdlsym_addr_amd_syscall_patch1 0xffffffff82200490
#define kdlsym_addr_amd_syscall_patch2 0xffffffff822004b5
#define kdlsym_addr_amd_syscall_patch3 0xffffffff822004b9
#define kdlsym_addr_amd_syscall_patch4 0xffffffff822004c2
#define kdlsym_addr_copyin_patch1 0xffffffff8222f287
#define kdlsym_addr_copyin_patch2 0xffffffff8222f293
#define kdlsym_addr_copyout_patch1 0xffffffff8222f192
#define kdlsym_addr_copyout_patch2 0xffffffff8222f19e
#define kdlsym_addr_copyinstr_patch1 0xffffffff8222f733
#define kdlsym_addr_copyinstr_patch2 0xffffffff8222f73f
#define kdlsym_addr_copyinstr_patch3 0xffffffff8222f770

#elif (FIRMWARE == 900)
#define kdlsym_addr_Xfast_syscall 0xffffffff822001c0
#define kdlsym_addr_printf 0xffffffff822b7a30
#define kdlsym_addr_sysent 0xffffffff83300310
#define kdlsym_addr_amd_syscall_patch1 0xffffffff82200490
#define kdlsym_addr_amd_syscall_patch2 0xffffffff822004b5
#define kdlsym_addr_amd_syscall_patch3 0xffffffff822004b9
#define kdlsym_addr_amd_syscall_patch4 0xffffffff822004c2
#define kdlsym_addr_copyin_patch1 0xffffffff824716f7
#define kdlsym_addr_copyin_patch2 0xffffffff82471703
#define kdlsym_addr_copyout_patch1 0xffffffff82471602
#define kdlsym_addr_copyout_patch2 0xffffffff8247160e
#define kdlsym_addr_copyinstr_patch1 0xffffffff82471ba3
#define kdlsym_addr_copyinstr_patch2 0xffffffff82471baf
#define kdlsym_addr_copyinstr_patch3 0xffffffff82471be0

#elif (FIRMWARE == 1100)
#define kdlsym_addr_Xfast_syscall 0xffffffff822001c0
#define kdlsym_addr_printf 0xffffffff824fcbd0
#define kdlsym_addr_sysent 0xffffffff83301760
#define kdlsym_addr_amd_syscall_patch1 0xffffffff82200490
#define kdlsym_addr_amd_syscall_patch2 0xffffffff822004b5
#define kdlsym_addr_amd_syscall_patch3 0xffffffff822004b9
#define kdlsym_addr_amd_syscall_patch4 0xffffffff822004c2
#define kdlsym_addr_copyin_patch1 0xffffffff824de037
#define kdlsym_addr_copyin_patch2 0xffffffff824de043
#define kdlsym_addr_copyout_patch1 0xffffffff824ddf42
#define kdlsym_addr_copyout_patch2 0xffffffff824ddf4e
#define kdlsym_addr_copyinstr_patch1 0xffffffff824de4e3
#define kdlsym_addr_copyinstr_patch2 0xffffffff824de4ef
#define kdlsym_addr_copyinstr_patch3 0xffffffff824de520

#elif (FIRMWARE == 1250)
#define kdlsym_addr_Xfast_syscall 0xffffffff822001c0
#define kdlsym_addr_printf 0xffffffff823f6d20
#define kdlsym_addr_sysent 0xffffffff83301a40
#define kdlsym_addr_amd_syscall_patch1 0xffffffff82200490
#define kdlsym_addr_amd_syscall_patch2 0xffffffff822004b5
#define kdlsym_addr_amd_syscall_patch3 0xffffffff822004b9
#define kdlsym_addr_amd_syscall_patch4 0xffffffff822004c2
#define kdlsym_addr_copyin_patch1 0xffffffff824fc157
#define kdlsym_addr_copyin_patch2 0xffffffff824fc163
#define kdlsym_addr_copyout_patch1 0xffffffff824fc062
#define kdlsym_addr_copyout_patch2 0xffffffff824fc06e
#define kdlsym_addr_copyinstr_patch1 0xffffffff824fc603
#define kdlsym_addr_copyinstr_patch2 0xffffffff824fc60f
#define kdlsym_addr_copyinstr_patch3 0xffffffff824fc640

#else
#error "Invalid firmware"
#endif

#define kdlsym(sym) (kaslr_offset + kdlsym_addr_##sym)

#endif
