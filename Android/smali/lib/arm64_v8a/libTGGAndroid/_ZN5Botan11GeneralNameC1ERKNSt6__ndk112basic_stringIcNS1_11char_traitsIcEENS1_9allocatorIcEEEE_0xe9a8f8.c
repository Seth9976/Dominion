// 函数: _ZN5Botan11GeneralNameC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xe9a8f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x18) = zx.o(0)
*arg1 = _vtable_for_Botan::GeneralName + 0x10
*(arg1 + 0x28) = zx.o(0)
*(arg1 + 8) = zx.o(0)
uint64_t entry_x1
std::__ndk1::allocator<char>* x0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::find(
    entry_x1.b, 0x3a)
int128_t var_60

if (x0_1 == -1)
    void** x0_6 = __cxa_allocate_exception(0x20)
    int64_t x0_7
    int128_t v0_2
    x0_7, v0_2 = operator new(0x30)
    int64_t var_50_1 = x0_7
    v0_2 = data_71bb40
    __builtin_strncpy(x0_7, "Failed to decode Name Constraint", 0x21)
    var_60 = v0_2
    *x0_6 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_6[1])
    *x0_6 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_6, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_60, entry_x1, 0, x0_1)

if ((zx.d(*(arg1 + 8)) & 1) != 0)
    operator delete(*(arg1 + 0x18))

int128_t v0 = var_60
int64_t var_50
*(arg1 + 0x18) = var_50
*(arg1 + 8) = v0
int64_t result
int128_t v0_1
result, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_60, entry_x1, x0_1 + 1, -ffffffffffffffff)

if ((zx.d(*(arg1 + 0x20)) & 1) != 0)
    result, v0_1 = operator delete(*(arg1 + 0x30))

v0_1 = var_60
*(arg1 + 0x30) = var_50
*(arg1 + 0x20) = v0_1
return result
