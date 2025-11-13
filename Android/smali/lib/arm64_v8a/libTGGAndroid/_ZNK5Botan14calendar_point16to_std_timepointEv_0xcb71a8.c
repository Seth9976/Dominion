// 函数: _ZNK5Botan14calendar_point16to_std_timepointEv
// 地址: 0xcb71a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x0
int32_t x8 = *entry_x0

if (x8 u<= 0x7b1)
    void** x0_2 = __cxa_allocate_exception(0x20)
    int64_t x0_3
    int128_t v0_1
    x0_3, v0_1 = operator new(0x50)
    int64_t var_30 = x0_3
    int128_t var_40 = data_71aa60
    __builtin_strncpy(x0_3, 
        "calendar_point::to_std_timepoint() does not support years before 1970", 0x46)
    *x0_2 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_2[1])
    *x0_2 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_2, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

if (x8 u< 0x960)
    int32_t x9 = entry_x0[1]
    int32_t x11
    
    x11 = x9 u> 2 ? -3 : 9
    
    int32_t x8_1 = x8 - (x9 u< 3 ? 1 : 0)
    uint32_t x14_3 = (x8_1 & 0xffff) u/ 0x190
    int32_t x8_2 = x8_1 + x14_3 * 0xfffffe70
    return std::__ndk1::chrono::system_clock::from_time_t(zx.q(entry_x0[4] * 0x3c)
        + zx.q(entry_x0[3] * 0xe10) + zx.q(entry_x0[5]) + mulu.dp.d(
        entry_x0[2] + (2 + (x11 + x9) * 0x99) u/ 5 + x14_3 * 0x23ab1 + (x8_2 u>> 2) + x8_2 * 0x16d
            - x8_2 u/ 0x64 - 0xafa6d, 
        0x15180)) __tailcall

void** x0_6 = __cxa_allocate_exception(0x20)
int64_t x0_7
int128_t v0_2
x0_7, v0_2 = operator new(0x50)
v0_2 = data_71aa50
int64_t var_30_1 = x0_7
__builtin_strncpy(x0_7, "calendar_point::to_std_timepoint() does not support years after 2400", 
    0x45)
int128_t var_40_1 = v0_2
*x0_6 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_6[1])
*x0_6 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_6, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
