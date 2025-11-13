// 函数: sub_f1003c
// 地址: 0xf1003c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = 0
v0:8.q = 0
struct fd_set writefds
__builtin_memset(&writefds, 0, 0x80)
ssize_t result = __FD_SET_chk(zx.q(*(arg1 + 0x98)), &writefds, 0x80, v0)

if (arg3 != 0)
    int64_t x23_1 = 0
    
    do
        int64_t x8_1 = *(arg1 + 0x90)
        struct timeval timeout
        timeout.tv_sec = x8_1 s/ 0xf4240
        timeout.tv_usec = x8_1 s% 0xf4240
        int128_t var_f0
        
        if (select(*(arg1 + 0x98) + 1, nullptr, &writefds, nullptr, &timeout) == 0)
            void** x0_4 = __cxa_allocate_exception(0x28)
            int64_t x0_5
            int128_t v0_1
            x0_5, v0_1 = operator new(0x20)
            int64_t var_e0 = x0_5
            var_f0 = data_71abe0
            __builtin_strncpy(x0_5, "Timeout during socket write", 0x1c)
            *x0_4 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_4[1])
            x0_4[4].d = 0
            *x0_4 = _vtable_for_Botan::System_Error + 0x10
            __cxa_throw(x0_4, _typeinfo_for_Botan::System_Error, Botan::Exception::~Exception)
            noreturn
        
        result = sendto(*(arg1 + 0x98), arg2 + x23_1, arg3 - x23_1, 0, arg1 + 8, *(arg1 + 0x88))
        
        if ((result & 0xffffffff80000000) != 0)
            void* x0_8 = __cxa_allocate_exception(0x28)
            __builtin_strncpy(&var_f0, "&Socket write failed", 0x15)
            *__errno()
            Botan::System_Error::System_Error(x0_8, &var_f0)
            __cxa_throw(x0_8, _typeinfo_for_Botan::System_Error, Botan::Exception::~Exception)
            noreturn
        
        x23_1 += result
    while (x23_1 != arg3)

return result
