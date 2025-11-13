// 函数: _ZN5Botan5GHASH19set_associated_dataEPKhm
// 地址: 0xd81678
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x38) == *(arg1 + 0x40))
    int64_t x0 = *(arg1 + 0x20)
    int64_t x8_1 = *(arg1 + 0x28)
    
    if (x8_1 != x0)
        memset(x0, 0, x8_1 - x0)
    
    int64_t result = Botan::GHASH::ghash_update(arg1, &arg1[0x20], arg2)
    int64_t entry_x2
    *(arg1 + 0x98) = entry_x2
    return result

void** x0_2 = __cxa_allocate_exception(0x20)
int64_t x0_3
int128_t v0
x0_3, v0 = operator new(0x20)
int64_t var_40 = x0_3
int128_t var_50 = data_71abe0
__builtin_strncpy(x0_3, "Too late to set AD in GHASH", 0x1c)
*x0_2 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_2[1])
*x0_2 = _vtable_for_Botan::Invalid_State + 0x10
__cxa_throw(x0_2, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
noreturn
