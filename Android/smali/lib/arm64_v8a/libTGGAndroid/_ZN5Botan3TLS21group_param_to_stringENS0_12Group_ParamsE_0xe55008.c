// 函数: _ZN5Botan3TLS21group_param_to_stringENS0_12Group_ParamsE
// 地址: 0xe55008
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x10_4 = arg1.d & 0xffff
uint64_t x9 = zx.q(x10_4 - 0x17)
char* entry_x8

if (x9.d u> 6)
    uint64_t x9_1 = zx.q(x10_4 - 0x100)
    
    if (x9_1.d u> 4)
        *entry_x8 = 0
        return 
    
    char const* const x9_2
    
    switch (x9_1)
        case 0
            x9_2 = "ffdhe/ietf/2048"
        case 1
            x9_2 = "ffdhe/ietf/3072"
        case 2
            x9_2 = "ffdhe/ietf/4096"
        case 3
            x9_2 = "ffdhe/ietf/6144"
        case 4
            x9_2 = "ffdhe/ietf/8192"
    
    int64_t x10_3 = *(x9_2 + 7)
    int64_t x9_5 = *x9_2
    *entry_x8 = 0x1e
    *(entry_x8 + 8) = x10_3
    *(entry_x8 + 1) = x9_5
    entry_x8[0x10] = 0
    return 

char const* const x9_3
char const* const x10

switch (x9)
    case 0
        x10 = "secp256r1"
    label_e5508c:
        int64_t x10_1 = *x10
        *entry_x8 = 0x12
        entry_x8[9] = 0x31
        *(entry_x8 + 1) = x10_1
        entry_x8[0xa] = 0
        return 
    case 1
        x10 = "secp384r1"
        goto label_e5508c
    case 2
        x10 = "secp521r1"
        goto label_e5508c
    case 3
        x9_3 = "brainpool256r1"
    label_e550c8:
        int64_t x10_2 = *(x9_3 + 6)
        int64_t x9_4 = *x9_3
        *entry_x8 = 0x1c
        *(entry_x8 + 7) = x10_2
        *(entry_x8 + 1) = x9_4
        entry_x8[0xf] = 0
        return 
    case 4
        x9_3 = "brainpool384r1"
        goto label_e550c8
    case 5
        x9_3 = "brainpool512r1"
        goto label_e550c8
    case 6
        *entry_x8 = 0xc
        __builtin_strncpy(&entry_x8[1], "x25519", 7)
        return 
