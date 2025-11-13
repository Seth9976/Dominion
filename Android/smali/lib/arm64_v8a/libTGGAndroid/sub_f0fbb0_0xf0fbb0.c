// 函数: sub_f0fbb0
// 地址: 0xf0fbb0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = 0
v0:8.q = 0
struct fd_set writefds
__builtin_memset(&writefds, 0, 0x80)
ssize_t result = __FD_SET_chk(zx.q(*(arg1 + 0x10)), &writefds, 0x80, v0)

if (arg3 != 0)
    int64_t x22_1 = 0
    
    do
        int64_t x8_1 = *(arg1 + 8)
        struct timeval timeout
        timeout.tv_sec = x8_1 s/ 0xf4240
        timeout.tv_usec = x8_1 s% 0xf4240
        int128_t var_e0
        
        if (select(*(arg1 + 0x10) + 1, nullptr, &writefds, nullptr, &timeout) == 0)
            void** x0_4 = __cxa_allocate_exception(0x28)
            int64_t x0_5
            int128_t v0_1
            x0_5, v0_1 = operator new(0x20)
            int64_t var_d0 = x0_5
            var_e0 = data_71abe0
            __builtin_strncpy(x0_5, "Timeout during socket write", 0x1c)
            *x0_4 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_4[1])
            x0_4[4].d = 0
            *x0_4 = _vtable_for_Botan::System_Error + 0x10
            __cxa_throw(x0_4, _typeinfo_for_Botan::System_Error, Botan::Exception::~Exception)
            noreturn
        
        result = send(*(arg1 + 0x10), arg2 + x22_1, arg3 - x22_1, 0)
        
        if ((result & 0xffffffff80000000) != 0)
            void* x0_8 = __cxa_allocate_exception(0x28)
            __builtin_strncpy(&var_e0, "&Socket write failed", 0x15)
            *__errno()
            Botan::System_Error::System_Error(x0_8, &var_e0)
            __cxa_throw(x0_8, _typeinfo_for_Botan::System_Error, Botan::Exception::~Exception)
            noreturn
        
        x22_1 += result
    while (x22_1 != arg3)

return result
