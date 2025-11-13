// 函数: sub_f0fdcc
// 地址: 0xf0fdcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = 0
v0:8.q = 0
struct fd_set readfds
__builtin_memset(&readfds, 0, 0x80)
__FD_SET_chk(zx.q(*(arg1 + 0x10)), &readfds, 0x80, v0)
int64_t x8 = *(arg1 + 8)
struct timeval timeout
timeout.tv_sec = x8 s/ 0xf4240
timeout.tv_usec = x8 s% 0xf4240
int128_t var_d0

if (select(*(arg1 + 0x10) + 1, &readfds, nullptr, nullptr, &timeout) == 0)
    void** x0_4 = __cxa_allocate_exception(0x28)
    int64_t x0_5
    int128_t v0_1
    x0_5, v0_1 = operator new(0x20)
    int64_t var_c0 = x0_5
    var_d0 = data_71bd10
    __builtin_strncpy(x0_5, "Timeout during socket read", 0x1b)
    *x0_4 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_4[1])
    x0_4[4].d = 0
    *x0_4 = _vtable_for_Botan::System_Error + 0x10
    __cxa_throw(x0_4, _typeinfo_for_Botan::System_Error, Botan::Exception::~Exception)
    noreturn

ssize_t result = recv(*(arg1 + 0x10), arg2, arg3, 0)

if ((result & 0xffffffff80000000) == 0)
    return result

void* x0_8 = __cxa_allocate_exception(0x28)
__builtin_strncpy(&var_d0, "$Socket read failed", 0x14)
*__errno()
Botan::System_Error::System_Error(x0_8, &var_d0)
__cxa_throw(x0_8, _typeinfo_for_Botan::System_Error, Botan::Exception::~Exception)
noreturn
