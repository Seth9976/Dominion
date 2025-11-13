// 函数: _ZN5Botan14GeneralSubtreeC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xe9cce0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::GeneralSubtree + 0x10
*(arg1 + 8) = _vtable_for_Botan::GeneralName + 0x10
*(arg1 + 0x10) = zx.o(0)
*(arg1 + 0x20) = zx.o(0)
*(arg1 + 0x30) = zx.o(0)
*(arg1 + 0x40) = 0
*(arg1 + 0x48) = -1
uint64_t var_48
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x1
int64_t x0_1 = std::__ndk1::stoull(entry_x1, &var_48, 0xa)
char var_88
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_88, entry_x1, var_48 + 1, -ffffffffffffffff)
uint64_t var_50
int64_t x0_4 = std::__ndk1::stoull(&var_88, &var_50, 0xa)
void* var_78

if ((zx.d(var_88) & 1) != 0)
    operator delete(var_78)
char var_a0
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_a0, entry_x1, var_48 + var_50 + 2, -ffffffffffffffff)
Botan::GeneralName::GeneralName(&var_88)
void* var_90

if ((zx.d(var_a0) & 1) != 0)
    operator delete(var_90)

if (var_48 == 0 || var_50 == 0)
    void** x0_13 = __cxa_allocate_exception(0x20)
    int64_t x0_14
    int128_t v0
    x0_14, v0 = operator new(0x30)
    int64_t var_90_1 = x0_14
    v0 = data_71bb40
    __builtin_strncpy(x0_14, "Failed to decode Name Constraint", 0x21)
    var_a0.o = v0
    *x0_13 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_13[1])
    *x0_13 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_13, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

*(arg1 + 0x40) = x0_1
*(arg1 + 0x48) = x0_4
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
    arg1 + 0x10)
int64_t result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
    arg1 + 0x28)
var_88.q = _vtable_for_Botan::GeneralName + 0x10
char var_68
void* var_58

if ((zx.d(var_68) & 1) != 0)
    result = operator delete(var_58)
char var_80

if ((zx.d(var_80) & 1) == 0)
    return result

void* var_70
return operator delete(var_70)
