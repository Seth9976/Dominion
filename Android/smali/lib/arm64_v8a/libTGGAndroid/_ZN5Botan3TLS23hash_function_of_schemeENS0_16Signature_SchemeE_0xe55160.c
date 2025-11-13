// 函数: _ZN5Botan3TLS23hash_function_of_schemeENS0_16Signature_SchemeE
// 地址: 0xe55160
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = arg1.d & 0xffff
char* entry_x8

if (x9 s<= 0x500)
    if (x9 - 0x201 u< 3)
        __builtin_strcpy(entry_x8, "\nSHA-1")
        return 
    
    if (x9 - 0x401 u>= 3)
        if (x9 != 0)
            goto label_e552a4
        
        *entry_x8 = 0
        return 
    
    goto label_e551a0

uint64_t x10_2 = zx.q(x9 - 0x804)

if (x10_2.d u<= 4)
    int32_t x11_2
    
    switch (x10_2)
        case 0
        label_e551a0:
            x11_2 = 0x3635322d
        case 1
        label_e5524c:
            x11_2 = 0x3438332d
        case 2
        label_e55264:
            x11_2 = 0x3231352d
        case 3, 4
            *entry_x8 = 8
            __builtin_strncpy(&entry_x8[1], "Pure", 5)
            return 
    
    *entry_x8 = 0xe
    __builtin_strncpy(&entry_x8[1], "SHA-", 4)
    *(entry_x8 + 4) = x11_2
    entry_x8[8] = 0
    return 

if (x9 - 0x501 u< 3)
    goto label_e5524c

if (x9 - 0x601 u< 3)
    goto label_e55264

label_e552a4:
void** x0 = __cxa_allocate_exception(0x20)
int64_t x0_1
int128_t v2
x0_1, v2 = operator new(0x40)
(*"e algorithm enum")[0].o
int64_t var_30 = x0_1
v2 = data_71b210
__builtin_strncpy(x0_1, "hash_function_of_scheme: Unknown signature algorithm enum", 0x3a)
int128_t var_40 = v2
*x0 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0[1])
*x0 = _vtable_for_Botan::Invalid_State + 0x10
__cxa_throw(x0, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
noreturn
