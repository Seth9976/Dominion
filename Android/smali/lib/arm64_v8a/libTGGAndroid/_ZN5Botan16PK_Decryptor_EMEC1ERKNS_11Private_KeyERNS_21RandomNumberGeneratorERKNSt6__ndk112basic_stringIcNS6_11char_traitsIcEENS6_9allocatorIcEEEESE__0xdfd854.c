// 函数: _ZN5Botan16PK_Decryptor_EMEC1ERKNS_11Private_KeyERNS_21RandomNumberGeneratorERKNSt6__ndk112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEESE_
// 地址: 0xdfd854
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::PK_Decryptor_EME + 0x10
*(arg1 + 8) = 0
int64_t entry_x4
(*(*arg2 + 0x90))(arg2, arg3, arg4, entry_x4)
int64_t var_50
int64_t x8_2 = var_50
int64_t* result_1 = nullptr
int64_t* result = *(arg1 + 8)
*(arg1 + 8) = x8_2

if (result != 0)
    (*(*result + 0x18))()
    result = result_1
    result_1 = nullptr
    
    if (result != 0)
        result = (*(*result + 0x18))()
    
    x8_2 = *(arg1 + 8)

if (x8_2 != 0)
    return result

void** x0_1 = __cxa_allocate_exception(0x20)
void* x9_1 = arg2 + *(*arg2 - 0x88)
(*(*x9_1 + 0x10))(x9_1)
void var_88
int128_t* x0_4
int128_t v0
x0_4, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_88, nullptr)
int64_t var_60 = x0_4[1].q
int128_t var_70 = *x0_4
__builtin_memset(x0_4, 0, 0x18)
int128_t* x0_6
int128_t v0_1
x0_6, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_70)
int64_t var_40 = x0_6[1].q
result_1.o = *x0_6
__builtin_memset(x0_6, 0, 0x18)
*x0_1 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_1[1])
*x0_1 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_1, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
