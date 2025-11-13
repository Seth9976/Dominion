// 函数: sub_f0c1d8
// 地址: 0xf0c1d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(std::__ndk1::unique_lock<std::__ndk1::mutex>, 0x18) var_40 = arg1 + 0x18
char var_38 = 1
std::__ndk1::mutex::lock()
std::__ndk1::__assoc_sub_state::__sub_wait(arg1)
int64_t var_28 = 0
int64_t x22 = *(arg1 + 0x10)
int64_t result
int128_t v0
result, v0 = std::exception_ptr::~exception_ptr()

if (x22 != 0)
    void var_48
    std::exception_ptr::exception_ptr(&var_48)
    std::rethrow_exception(&var_48)
    noreturn

*arg2 = *(arg1 + 0x78)
int64_t x9 = *(arg1 + 0x88)
int64_t x8 = *(arg1 + 0x90)
__builtin_memset(arg1 + 0x78, 0, 0x18)
arg2[1].q = x9
*(arg2 + 0x18) = x8
int32_t x8_1 = *(arg1 + 0x98)
*(arg1 + 0x90) = -1
arg2[2].d = x8_1
*(arg1 + 0x98) = 1

if (zx.d(var_38) == 0)
    return result

return std::__ndk1::mutex::unlock()
