// 函数: _ZN5Botan3TLS25padding_string_for_schemeENS0_16Signature_SchemeE
// 地址: 0xe55ac8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = arg1.d & 0xffff
char* entry_x8
char const* const x9_1
int32_t x10_7
int128_t v0

if (x9 s> 0x600)
    uint64_t x10_2 = zx.q(x9 - 0x804)
    char const* const x9_3
    
    if (x10_2.d u> 4)
        if (x9 - 0x602 u< 2)
            x9_1 = "EMSA1(SHA-512)"
        label_e55c04:
            int64_t x10_6 = *(x9_1 + 6)
            int64_t x9_2 = *x9_1
            *entry_x8 = 0x1c
            *(entry_x8 + 7) = x10_6
            *(entry_x8 + 1) = x9_2
            entry_x8[0xf] = 0
            return 
        
        if (x9 == 0x601)
            v0 = (*"EMSA_PKCS1(SHA-512)")[0].o
            x10_7 = 0x29323135
        label_e55c98:
            *entry_x8 = 0x26
            *(entry_x8 + 0x10) = x10_7
            *(entry_x8 + 1) = v0
            entry_x8[0x14] = 0
            return 
    else
        switch (x10_2)
            case 0
                x9_3 = "PSSR(SHA-256,MGF1,32)"
                goto label_e55cec
            case 1
                x9_3 = "PSSR(SHA-384,MGF1,48)"
                goto label_e55cec
            case 2
                x9_3 = "PSSR(SHA-512,MGF1,64)"
            label_e55cec:
                int64_t x10_8 = *(x9_3 + 0xd)
                v0 = *x9_3
                *entry_x8 = 0x2a
                *(entry_x8 + 0xe) = x10_8
                *(entry_x8 + 1) = v0
                entry_x8[0x16] = 0
                return 
            case 3, 4
                *entry_x8 = 8
                __builtin_strncpy(&entry_x8[1], "Pure", 5)
                return 
else if (x9 s> 0x401)
    if (x9 - 0x402 u< 2)
        x9_1 = "EMSA1(SHA-256)"
        goto label_e55c04
    
    if (x9 - 0x502 u< 2)
        x9_1 = "EMSA1(SHA-384)"
        goto label_e55c04
    
    if (x9 == 0x501)
        v0 = (*"EMSA_PKCS1(SHA-384)")[0].o
        x10_7 = 0x29343833
        goto label_e55c98
else if (x9 s<= 0x201)
    if (x9 == 0)
        *entry_x8 = 0
        return 
    
    if (x9 == 0x201)
        __builtin_strncpy(entry_x8, "\"EMSA_PKCS1(SHA-1)", 0x13)
        return 
else
    if (x9 - 0x202 u< 2)
        *entry_x8 = 0x18
        __builtin_strncpy(&entry_x8[1], "EMSA1(SHA-1)", 0xd)
        return 
    
    if (x9 == 0x401)
        v0 = (*"EMSA_PKCS1(SHA-256)")[0].o
        x10_7 = 0x29363532
        goto label_e55c98
void** x0 = __cxa_allocate_exception(0x20)
int64_t x0_1
int128_t v2
x0_1, v2 = operator new(0x40)
(*"e algorithm enum")[0].o
int64_t var_30 = x0_1
v2 = data_71ac40
__builtin_strncpy(x0_1, "padding_string_for_scheme: Unknown signature algorithm enum", 0x3c)
int128_t var_40 = v2
*x0 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0[1])
*x0 = _vtable_for_Botan::Invalid_State + 0x10
__cxa_throw(x0, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
noreturn
