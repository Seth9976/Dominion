// 函数: _ZN5Botan11PK_VerifierC1ERKNS_10Public_KeyERKNSt6__ndk112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEENS_16Signature_FormatESC_
// 地址: 0xdff07c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
int32_t result = arg4.d
int64_t entry_x4
(*(*arg2 + 0x70))(arg2, arg3, entry_x4)
int64_t var_50
int64_t x8_1 = var_50
int64_t* var_50_1 = nullptr
int64_t* x0_1 = *arg1
*arg1 = x8_1

if (x0_1 != 0)
    (*(*x0_1 + 0x18))()
    int64_t* x0_2 = var_50_1
    var_50_1 = nullptr
    
    if (x0_2 != 0)
        (*(*x0_2 + 0x18))()
    
    x8_1 = *arg1

if (x8_1 != 0)
    *(arg1 + 8) = result
    *(arg1 + 0x10) = (*(*arg2 + 0x48))(arg2)
    int64_t x0_6 = (*(*arg2 + 0x50))(arg2)
    int64_t x1_1 = *(arg1 + 0x10)
    *(arg1 + 0x18) = x0_6
    sub_dfe5b4(result, x1_1)
    return result

void** x0_8 = __cxa_allocate_exception(0x20)
(*(*arg2 + 0x10))(arg2)
void var_88
int128_t* x0_11
int128_t v0
x0_11, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_88, nullptr)
int64_t var_60 = x0_11[1].q
int128_t var_70 = *x0_11
__builtin_memset(x0_11, 0, 0x18)
int128_t* x0_13
int128_t v0_1
x0_13, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_70)
int64_t var_40 = x0_13[1].q
var_50_1.o = *x0_13
__builtin_memset(x0_13, 0, 0x18)
*x0_8 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_8[1])
*x0_8 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_8, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
