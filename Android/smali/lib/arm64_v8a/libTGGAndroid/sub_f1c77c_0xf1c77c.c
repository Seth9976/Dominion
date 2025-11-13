// 函数: sub_f1c77c
// 地址: 0xf1c77c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t fd = *(arg1 + 8)

if (fd s>= 1)
    fd = tcsetattr(fd, 0, arg1 + 0xc)
    
    if (fd != 0)
        void* x0 = __cxa_allocate_exception(0x28)
        int64_t x0_1
        int128_t v0
        x0_1, v0 = operator new(0x30)
        int64_t var_30 = x0_1
        int128_t var_40 = data_71d3f0
        __builtin_strncpy(x0_1, "Restoring terminal echo bit failed", 0x23)
        *__errno()
        Botan::System_Error::System_Error(x0, &var_40)
        __cxa_throw(x0, _typeinfo_for_Botan::System_Error, Botan::Exception::~Exception)
        noreturn
    
    *(arg1 + 8) = 0xffffffff

return fd
