// 函数: _ZN5Botan18asn1_tag_to_stringENS_8ASN1_TagE
// 地址: 0xcaf4e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(arg1.d - 1)
char* entry_x8

if (x9.d u<= 0x1d)
    char const* const x8_4
    char const* const x8_5
    int32_t x9_1
    char const* const x9_2
    int64_t x9_3
    int64_t x9_4
    int32_t x10_2
    int16_t x10_3
    
    switch (x9)
        case 0
            x9_1 = 0x4c4f4f42
            x10_2 = 0x4e41454c
        label_caf5f0:
            *entry_x8 = 0xe
            *(entry_x8 + 1) = x9_1
            *(entry_x8 + 4) = x10_2
            entry_x8[8] = 0
            return 
        case 1
            x9_1 = 0x45544e49
            x10_2 = 0x52454745
            goto label_caf5f0
        case 2
            x9_2 = "BIT STRING"
        label_caf7f8:
            x9_3 = *x9_2
            x10_3 = 0x474e
            goto label_caf800
        case 3
            *entry_x8 = 0x18
            __builtin_strncpy(&entry_x8[1], "OCTET STRING", 0xd)
            return 
        case 4
            *entry_x8 = 8
            __builtin_strncpy(&entry_x8[1], "NULL", 5)
            return 
        case 5
            *entry_x8 = 0xc
            __builtin_strncpy(&entry_x8[1], "OBJECT", 7)
            return 
        case 9
            x9_3 = 0x544152454d554e45
            x10_3 = 0x4445
        label_caf800:
            *entry_x8 = 0x14
            *(entry_x8 + 9) = x10_3
            *(entry_x8 + 1) = x9_3
            entry_x8[0xb] = 0
            return 
        case 0xb
            *entry_x8 = 0x16
            __builtin_strncpy(&entry_x8[1], "UTF8 STRING", 0xc)
            return 
        case 0xf
            x9_4 = 0x45434e4555514553
        label_caf770:
            *entry_x8 = 0x10
            *(entry_x8 + 1) = x9_4
            entry_x8[9] = 0
            return 
        case 0x10
            *entry_x8 = 6
            *(entry_x8 + 1) = 0x544553
            return 
        case 0x11
            x8_4 = "NUMERIC STRING"
        label_caf79c:
            int64_t x9_5 = *(x8_4 + 6)
            int64_t x8_6 = *x8_4
            *entry_x8 = 0x1c
            *(entry_x8 + 7) = x9_5
            *(entry_x8 + 1) = x8_6
            entry_x8[0xf] = 0
            return 
        case 0x12
            x8_5 = "PRINTABLE STRING"
        label_caf7cc:
            int128_t v0 = *x8_5
            *entry_x8 = 0x20
            entry_x8[0x11] = 0
            *(entry_x8 + 1) = v0
            return 
        case 0x13
            x9_2 = "T61 STRING"
            goto label_caf7f8
        case 0x15
            x9_2 = "IA5 STRING"
            goto label_caf7f8
        case 0x16
            x9_4 = 0x454d495420435455
            goto label_caf770
        case 0x17
            x8_5 = "GENERALIZED TIME"
            goto label_caf7cc
        case 0x19
            x8_4 = "VISIBLE STRING"
            goto label_caf79c
        case 0x1b
            x8_5 = "UNIVERSAL STRING"
            goto label_caf7cc
        case 0x1d
            x9_2 = "BMP STRING"
            goto label_caf7f8
    
    goto label_caf570

if (arg1.d == 0xff00)
    *entry_x8 = 0x12
    __builtin_strncpy(&entry_x8[1], "NO_OBJECT", 0xa)
    return 

label_caf570:
std::__ndk1::to_string(zx.q(arg1.d))
char var_48
int128_t* x0_2
int128_t v0_1
x0_2, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_48, nullptr)
void* x8 = x0_2[1].q
int128_t var_30 = *x0_2
__builtin_memset(x0_2, 0, 0x18)
int128_t v0_2
arg1, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_30)
v0_2 = *arg1
*(entry_x8 + 0x10) = *(arg1 + 0x10)
*entry_x8 = v0_2
__builtin_memset(arg1, 0, 0x18)
void* var_38

if ((zx.d(var_30.b) & 1) != 0)
    operator delete(x8)
    
    if ((zx.d(var_48) & 1) != 0)
        operator delete(var_38)
else if ((zx.d(var_48) & 1) != 0)
    operator delete(var_38)
