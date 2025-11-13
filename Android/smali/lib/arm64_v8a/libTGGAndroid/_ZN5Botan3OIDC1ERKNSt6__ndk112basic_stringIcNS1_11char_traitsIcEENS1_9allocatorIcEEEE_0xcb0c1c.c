// 函数: _ZN5Botan3OIDC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xcb0c1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*arg1 = _vtable_for_Botan::OID + 0x10
void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x8) x21_1 = arg1 + 8
*x21_1 = 0
char* entry_x1
uint64_t x8_1 = zx.q(*entry_x1)
uint64_t x8_2

if ((x8_1.d & 1) == 0)
    x8_2 = x8_1 u>> 1
else
    x8_2 = *(entry_x1 + 8)

if (x8_2 == 0)
    return 

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const
    & x19_1 = arg1
int32_t* var_38
sub_cb08dc(&var_38, entry_x1)
arg1 = *x21_1

if (arg1 != 0)
    *(x19_1 + 0x10) = arg1
    int128_t v0_1
    arg1, v0_1 = operator delete(arg1)
    __builtin_memset(x21_1, 0, 0x18)

int32_t* x8_3 = var_38
*(x19_1 + 8) = x8_3
int128_t var_30
*(x19_1 + 0x10) = var_30
int32_t x9_4

if ((var_30.q - x8_3) s>> 2 u>= 2)
    x9_4 = *x8_3

if ((var_30.q - x8_3) s>> 2 u< 2 || x9_4 u>= 3)
    void* __offset(
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
        0x8) var_40 = x21_1
    void** x0_1 = __cxa_allocate_exception(0x20)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Invalid ASN.1 OID: ", entry_x1)
    *x0_1 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_1[1])
    *x0_1 = _vtable_for_Botan::Decoding_Error + 0x10
    
    if ((zx.d(var_38.b) & 1) != 0)
        operator delete(var_30:8.q)
    
    *x0_1 = _vtable_for_Botan::Invalid_OID + 0x10
    __cxa_throw(x0_1, _typeinfo_for_Botan::Invalid_OID, Botan::Exception::~Exception)
    noreturn

if (x9_4 == 2 || x8_3[1] u< 0x28)
    return 

void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x8) var_40_1 = x21_1
void** x0_6 = __cxa_allocate_exception(0x20)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Invalid ASN.1 OID: ", entry_x1)
*x0_6 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_6[1])
*x0_6 = _vtable_for_Botan::Decoding_Error + 0x10

if ((zx.d(var_38.b) & 1) != 0)
    operator delete(var_30:8.q)

*x0_6 = _vtable_for_Botan::Invalid_OID + 0x10
__cxa_throw(x0_6, _typeinfo_for_Botan::Invalid_OID, Botan::Exception::~Exception)
noreturn
