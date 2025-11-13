// 函数: _ZN5Botan9to_stringENS_9ErrorTypeE
// 地址: 0xe8c1cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x8
char const* const x9_1
int64_t x9_5
int64_t x9_8
char x10_4
int16_t x10_5

if (arg1.d s> 0x12b)
    if (arg1.d == 0x12c)
        x9_1 = "ZlibError"
    label_e8c4d0:
        x9_5 = *x9_1
        x10_4 = 0x72
    label_e8c4d8:
        *entry_x8 = 0x12
        entry_x8[9] = x10_4
        *(entry_x8 + 1) = x9_5
        entry_x8[0xa] = 0
        return 
    
    if (arg1.d != 0x12d)
        if (arg1.d != 0x12e)
            goto label_e8c520
        
        x9_1 = "LzmaError"
        goto label_e8c4d0
    
    x9_8 = 0x7272453270697a42
    x10_5 = 0x726f
label_e8c504:
    *entry_x8 = 0x14
    *(entry_x8 + 9) = x10_5
    *(entry_x8 + 1) = x9_8
    entry_x8[0xb] = 0
    return 

uint64_t x8 = zx.q(arg1.d - 1)

if (x8.d u> 0xcb)
label_e8c520:
    int64_t x0
    int128_t v0_1
    x0, v0_1 = operator new(0x20)
    v0_1 = data_71af80
    *(entry_x8 + 0x10) = x0
    *entry_x8 = v0_1
    __builtin_strncpy(x0, "Unrecognized Botan error", 0x19)
    return 

char const* const x8_1
char const* const x8_2
char const* const x8_3
int32_t x9
char const* const x9_2
int64_t x9_3
int16_t x9_4
int64_t x9_7
int32_t x10_2
int32_t x10_3
int128_t v0

switch (x8)
    case 0
        x9 = 0x6e6b6e55
        x10_2 = 0x6e776f6e
    case 1
        x9_2 = "SystemError"
    label_e8c44c:
        x9_3 = *x9_2
        x10_3 = 0x726f7272
        goto label_e8c458
    case 2
        x8_1 = "NotImplemented"
    label_e8c3c0:
        int64_t x9_9 = *(x8_1 + 6)
        int64_t x8_5 = *x8_1
        *entry_x8 = 0x1c
        *(entry_x8 + 7) = x9_9
        *(entry_x8 + 1) = x8_5
        entry_x8[0xf] = 0
        return 
    case 3
        x9_3 = 0x6d654d664f74754f
        x10_3 = 0x79726f6d
    label_e8c458:
        *entry_x8 = 0x16
        *(entry_x8 + 8) = x10_3
        *(entry_x8 + 1) = x9_3
        entry_x8[0xc] = 0
        return 
    case 4
        x8_2 = "InternalError"
    label_e8c4a0:
        int64_t x9_12 = *(x8_2 + 5)
        int64_t x8_6 = *x8_2
        *entry_x8 = 0x1a
        *(entry_x8 + 6) = x9_12
        *(entry_x8 + 1) = x8_6
        entry_x8[0xe] = 0
        return 
    case 5
        x9 = 0x72456f49
        x10_2 = 0x726f7272
    case 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 
            0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 
            0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 
            0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 
            0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 
            0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 
            0x5e, 0x5f, 0x60, 0x61, 0x62, 0x6f, 0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 
            0x78, 0x79, 0x7a, 0x7b, 0x7c, 0x7d, 0x7e, 0x7f, 0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 
            0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 
            0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9a, 0x9b, 0x9c, 0x9d, 0x9e, 0x9f, 0xa0, 0xa1, 
            0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 
            0xb0, 0xb1, 0xb2, 0xb3, 0xb4, 0xb5, 0xb6, 0xb7, 0xb8, 0xb9, 0xba, 0xbb, 0xbc, 0xbd, 
            0xbe, 0xbf, 0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6
        goto label_e8c520
    case 0x63
        v0 = (*"InvalidObjectState")[0].o
        x9_4 = 0x6574
    label_e8c324:
        *entry_x8 = 0x24
        *(entry_x8 + 0x11) = x9_4
        *(entry_x8 + 1) = v0
        entry_x8[0x13] = 0
        return 
    case 0x64
        x9_5 = 0x6553746f4e79654b
        x10_4 = 0x74
        goto label_e8c4d8
    case 0x65
        x8_3 = "InvalidArgument"
    label_e8c360:
        int64_t x9_6 = *(x8_3 + 7)
        int64_t x8_4 = *x8_3
        *entry_x8 = 0x1e
        *(entry_x8 + 8) = x9_6
        *(entry_x8 + 1) = x8_4
        entry_x8[0x10] = 0
        return 
    case 0x66
        __builtin_strncpy(entry_x8, " InvalidKeyLength", 0x12)
        return 
    case 0x67
        v0 = (*"InvalidNonceLength")[0].o
        x9_4 = 0x6874
        goto label_e8c324
    case 0x68
        x9_2 = "LookupError"
        goto label_e8c44c
    case 0x69
        x8_3 = "EncodingFailure"
        goto label_e8c360
    case 0x6a
        x8_3 = "DecodingFailure"
        goto label_e8c360
    case 0x6b
        x9_7 = 0x45534c54
    label_e8c484:
        *entry_x8 = 0x10
        *(entry_x8 + 1) =
            (((x9_7 & 0xffff0000ffffffff) | 0x727200000000) & 0xffffffffffff) | 0x726f000000000000
        entry_x8[9] = 0
        return 
    case 0x6c
        x9_1 = "HttpError"
        goto label_e8c4d0
    case 0x6d
        x9_8 = 0x5464696c61766e49
        x10_5 = 0x6761
        goto label_e8c504
    case 0x6e
        x8_1 = "RoughtimeError"
        goto label_e8c3c0
    case 0xc7
        *entry_x8 = 0x18
        __builtin_strncpy(&entry_x8[1], "OpenSSLError", 0xd)
        return 
    case 0xc8
        __builtin_strncpy(entry_x8, "\"CommonCryptoError", 0x13)
        return 
    case 0xc9
        x9_2 = "Pkcs11Error"
        goto label_e8c44c
    case 0xca
        x9_7 = 0x454d5054
        goto label_e8c484
    case 0xcb
        x8_2 = "DatabaseError"
        goto label_e8c4a0

*entry_x8 = 0xe
*(entry_x8 + 1) = x9
*(entry_x8 + 4) = x10_2
entry_x8[8] = 0
