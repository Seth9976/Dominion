// 函数: sub_f418ac
// 地址: 0xf418ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 0x20)
int64_t var_58 = arg2
int64_t var_28 = arg3
int64_t var_40 = x8
int64_t* x0 = *(arg1 + 0x50)

if (x0 == 0)
    sub_a58ab4()
    noreturn

int32_t x0_1
int128_t result
x0_1, result = (*(*x0 + 0x30))(x0, &var_40, &var_58, &var_28)

if (x0_1 == 0)
    return result

void** x0_2 = __cxa_allocate_exception(0x20)
std::__ndk1::to_string(x0_1)
int128_t* x0_5
int128_t v0
x0_5, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_58, nullptr)
int64_t var_30 = x0_5[1].q
var_40.o = *x0_5
__builtin_memset(x0_5, 0, 0x18)
*x0_2 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_2[1])
*x0_2 = _vtable_for_Botan::Invalid_State + 0x10
__cxa_throw(x0_2, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
noreturn
