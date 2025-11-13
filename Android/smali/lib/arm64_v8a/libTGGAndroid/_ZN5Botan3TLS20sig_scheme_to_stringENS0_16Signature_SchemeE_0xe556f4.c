// 函数: _ZN5Botan3TLS20sig_scheme_to_stringENS0_16Signature_SchemeE
// 地址: 0xe556f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = arg1.d & 0xffff
char* entry_x8
char const* const x9_1
char const* const x9_2
int64_t x10_1
int16_t x11_1
int32_t x11_3

if (x9 s> 0x502)
    if (x9 s<= 0x602)
        if (x9 == 0x503)
            x11_3 = 0x34383341
        label_e55920:
            *entry_x8 = 0x18
            *(entry_x8 + 9) = x11_3
            __builtin_strncpy(&entry_x8[1], "ECDSA_SH", 8)
            entry_x8[0xd] = 0
            return 
        
        if (x9 == 0x601)
            x9_2 = "RSA_PKCS1_SHA512"
        label_e558dc:
            int128_t v0 = *x9_2
            *entry_x8 = 0x20
            entry_x8[0x11] = 0
            *(entry_x8 + 1) = v0
            return 
        
        if (x9 == 0x602)
            x10_1 = 0x354148535f415344
            x11_1 = 0x3231
        label_e55820:
            *entry_x8 = 0x14
            *(entry_x8 + 9) = x11_1
            *(entry_x8 + 1) = x10_1
            entry_x8[0xb] = 0
            return 
    else
        uint64_t x10_2 = zx.q(x9 - 0x804)
        
        if (x10_2.d u<= 4)
            switch (x10_2)
                case 0
                    x9_1 = "RSA_PSS_SHA256"
                case 1
                    x9_1 = "RSA_PSS_SHA384"
                case 2
                    x9_1 = "RSA_PSS_SHA512"
                case 3
                    *entry_x8 = 0x16
                    __builtin_strncpy(&entry_x8[1], "EDDSA_25519", 0xc)
                    return 
                case 4
                    *entry_x8 = 0x12
                    __builtin_strncpy(&entry_x8[1], "EDDSA_448", 0xa)
                    return 
            
            goto label_e559c0
        
        if (x9 == 0x603)
            x11_3 = 0x32313541
            goto label_e55920
else
    switch (x9)
        case 0
            *entry_x8 = 0
            return 
        case 0x201
            x9_1 = "RSA_PKCS1_SHA1"
        label_e559c0:
            int64_t x10_3 = *(x9_1 + 6)
            int64_t x9_3 = *x9_1
            *entry_x8 = 0x1c
            *(entry_x8 + 7) = x10_3
            *(entry_x8 + 1) = x9_3
            entry_x8[0xf] = 0
            return 
        case 0x202
            *entry_x8 = 0x10
            __builtin_strncpy(&entry_x8[1], "DSA_SHA1", 9)
            return 
        case 0x203
            x10_1 = 0x48535f4153444345
            x11_1 = 0x3141
            goto label_e55820
        case 0x401
            x9_2 = "RSA_PKCS1_SHA256"
            goto label_e558dc
        case 0x402
            x10_1 = 0x324148535f415344
            x11_1 = 0x3635
            goto label_e55820
        case 0x403
            x11_3 = 0x36353241
            goto label_e55920
        case 0x501
            x9_2 = "RSA_PKCS1_SHA384"
            goto label_e558dc
        case 0x502
            x10_1 = 0x334148535f415344
            x11_1 = 0x3438
            goto label_e55820
void** x0 = __cxa_allocate_exception(0x20)
int64_t x0_1
int128_t v2
x0_1, v2 = operator new(0x40)
(*"gnature algorithm enum")[0].o
int64_t var_30 = x0_1
v2 = data_71bff0
__builtin_strncpy(x0_1, "sig_scheme_to_string: Unknown signature algorithm enum", 0x37)
int128_t var_40 = v2
*x0 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0[1])
*x0 = _vtable_for_Botan::Invalid_State + 0x10
__cxa_throw(x0, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
noreturn
