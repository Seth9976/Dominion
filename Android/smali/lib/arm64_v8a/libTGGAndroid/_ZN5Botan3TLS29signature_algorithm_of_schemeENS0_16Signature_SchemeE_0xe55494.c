// 函数: _ZN5Botan3TLS29signature_algorithm_of_schemeENS0_16Signature_SchemeE
// 地址: 0xe55494
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = arg1.d & 0xffff
char* entry_x8

if (x9 s> 0x502)
    int32_t x10_2
    int16_t x10_3
    int16_t x11
    
    if (x9 s> 0x803)
        if (x9 - 0x804 u< 3)
        label_e555ac:
            x10_3 = 0x5352
        label_e555b8:
            *entry_x8 = 6
            *(entry_x8 + 1) = zx.d(x10_3) | 0x410000
            return 
        
        if (x9 == 0x807)
            *entry_x8 = 0xe
            __builtin_strncpy(&entry_x8[1], "Ed25519", 8)
            return 
        
        if (x9 == 0x808)
            x10_2 = 0x34346445
            x11 = 0x38
            goto label_e55578
    else
        if (x9 == 0x602)
        label_e555a4:
            x10_3 = 0x5344
            goto label_e555b8
        
        if (x9 == 0x603)
            goto label_e55570
        
        if (x9 == 0x503)
        label_e55570:
            x10_2 = 0x53444345
            x11 = 0x41
        label_e55578:
            *entry_x8 = 0xa
            *(entry_x8 + 1) = x10_2
            *(entry_x8 + 5) = x11
            return 
        
        if (x9 == 0x601)
            goto label_e555ac
else
    switch (x9)
        case 0
            *entry_x8 = 0
            return 
        case 0x201
            goto label_e555ac
        case 0x202
            goto label_e555a4
        case 0x203
            goto label_e55570
        case 0x401
            goto label_e555ac
        case 0x402
            goto label_e555a4
        case 0x403
            goto label_e55570
        case 0x501
            goto label_e555ac
        case 0x502
            goto label_e555a4
void** x0 = __cxa_allocate_exception(0x20)
int64_t x0_1
int128_t v2
x0_1, v2 = operator new(0x40)
(*"e algorithm enum")[0].o
int64_t var_30 = x0_1
v2 = data_71a920
__builtin_strncpy(x0_1, "signature_algorithm_of_scheme: Unknown signature algorithm enum", 0x40)
int128_t var_40 = v2
*x0 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0[1])
*x0 = _vtable_for_Botan::Invalid_State + 0x10
__cxa_throw(x0, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
noreturn
