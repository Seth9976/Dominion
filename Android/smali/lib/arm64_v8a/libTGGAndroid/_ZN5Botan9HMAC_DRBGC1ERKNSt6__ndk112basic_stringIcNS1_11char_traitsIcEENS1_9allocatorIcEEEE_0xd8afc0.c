// 函数: _ZN5Botan9HMAC_DRBGC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xd8afc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::Stateful_RNG + 0x10
std::__ndk1::recursive_mutex::recursive_mutex()
*(arg1 + 0x50) = 0
__builtin_memset(arg1 + 0x30, 0, 0x1c)
*arg1 = _vtable_for_Botan::HMAC_DRBG + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x1
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "HMAC(", entry_x1)
char var_78[0x10]
int128_t* x0_2
int128_t v0
x0_2, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_78)
void* x8_2 = x0_2[1].q
int128_t var_60 = *x0_2
__builtin_memset(x0_2, 0, 0x18)
int16_t var_90 = 0
Botan::MessageAuthenticationCode::create_or_throw(&var_60, &var_90)

if ((zx.d(var_90.b) & 1) == 0)
    if ((zx.d(var_60.b) & 1) != 0)
        goto label_d8b11c
    
    goto label_d8b080

void* var_80
operator delete(var_80)
void* var_68

if ((zx.d(var_60.b) & 1) == 0)
label_d8b080:
    
    if ((zx.d(var_78[0]) & 1) != 0)
        operator delete(var_68)
else
label_d8b11c:
    operator delete(x8_2)
    
    if ((zx.d(var_78[0]) & 1) != 0)
        operator delete(var_68)
__builtin_memset(arg1 + 0x60, 0, 0x18)
int64_t* x0_5 = *(arg1 + 0x58)
*(arg1 + 0x78) = 0x10000
int64_t x0_6 = (**x0_5)()
int64_t x8_11

if (x0_6 u< 0x20)
    x8_11 = (x0_6 << 3) - 0x20
else
    x8_11 = 0x100

*(arg1 + 0x80) = x8_11
std::__ndk1::recursive_mutex::lock()
void* x8_12 = *arg1
*(arg1 + 0x50) = 0
*(arg1 + 0x48) = 0
(*(x8_12 + 0x80))(arg1)
return std::__ndk1::recursive_mutex::unlock()
