// 函数: _ZN5Botan10system_rngEv
// 地址: 0xccd68c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(data_23eca00) & 1) == 0 && __cxa_guard_acquire(&data_23eca00) != 0)
    data_23ecbc0 = &_vtable_for_Botan::(anonymous namespace)::System_RNG_Impl{for `Botan::RandomNumberGenerator'}
    int32_t x0_3 = open("/dev/urandom", 0x102)
    data_23ecbc8 = x0_3
    
    if ((x0_3 & 0x80000000) != 0)
        int32_t x0_4 = open("/dev/urandom", 0x100)
        data_23ecbc8 = x0_4
        data_23ecbcc = 0
        
        if ((x0_4 & 0x80000000) != 0)
            void* x0_5 = __cxa_allocate_exception(0x28)
            int64_t x0_6
            int128_t v0
            x0_6, v0 = operator new(0x30)
            int64_t var_30 = x0_6
            int128_t var_40 = data_71b7f0
            __builtin_strncpy(x0_6, "System_RNG failed to open RNG device", 0x25)
            *__errno()
            Botan::System_Error::System_Error(x0_5, &var_40)
            __cxa_throw(x0_5, _typeinfo_for_Botan::System_Error, Botan::Exception::~Exception)
            noreturn
    else
        data_23ecbcc = 1
    
    __cxa_atexit(func_e3c1e0, &data_23ecbc0, &data_1122730)
    __cxa_guard_release(&data_23eca00)

return &data_23ecbc0
