// 函数: _ZN5Botan5CPUID5stateEv
// 地址: 0xd069a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(*guard_variable_for_Botan::CPUID::state()::g_cpuid) & 1) == 0
        && __cxa_guard_acquire(guard_variable_for_Botan::CPUID::state()::g_cpuid) != 0)
    *Botan::CPUID::state()::g_cpuid = 0
    *(Botan::CPUID::state()::g_cpuid + 8) = 0
    uint64_t x0_4 = getauxval(0x13)
    
    if (x0_4 == 0x20 || x0_4 == 0x80 || x0_4 == 0x40)
        *(Botan::CPUID::state()::g_cpuid + 8) = x0_4
    
    uint64_t x0_5 = getauxval(0x10)
    uint64_t x0_6 = getauxval(0x1a)
    int64_t x10_2 = *(Botan::CPUID::state()::g_cpuid + 8)
    int64_t x11_4 = (-0x40001 & ((-0x20001
        & (((x0_6 & 1) << 0x10 & 0xfffffffffffffffe) | (x0_5 & 0x1000) u>> 0xc))
        | (1 & x0_6 u>> 1) << 0x11)) | (1 & x0_6 u>> 2) << 0x12
    *Botan::CPUID::state()::g_cpuid =
        (-0x80001 & x11_4) | (1 & x0_6 u>> 3) << 0x13 | 0x8000000000000000
    
    if (x10_2 == 0)
        *(Botan::CPUID::state()::g_cpuid + 8) = 0x20
    
    *(Botan::CPUID::state()::g_cpuid + 0x10) = 0x67452301
    __cxa_guard_release(guard_variable_for_Botan::CPUID::state()::g_cpuid)

return Botan::CPUID::state()::g_cpuid
