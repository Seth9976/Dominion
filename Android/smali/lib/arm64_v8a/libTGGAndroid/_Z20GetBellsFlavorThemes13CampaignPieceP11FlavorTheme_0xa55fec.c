// 函数: _Z20GetBellsFlavorThemes13CampaignPieceP11FlavorTheme
// 地址: 0xa55fec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(arg1 - 0x1771)
int64_t result = 0
int32_t x8_1

if (x9.d u> 0x72)
    uint64_t x8_2 = zx.q(arg1 - 0x1b59)
    
    if (x8_2.d u> 0x10)
        return result
    
    switch (x8_2)
        case 0
            goto label_a56064
        case 1
            x8_1 = 0xc
            goto label_a560fc
        case 2, 8
            goto label_a5605c
        case 3
            goto label_a5606c
        case 4
            *arg2 = 1
            return 1
        case 5, 9, 0x10
            goto label_a56054
        case 6
            x8_1 = 0x15
            goto label_a560fc
        case 7
            goto label_a56088
        case 0xa, 0xc, 0xe
            goto label_a5604c
        case 0xb
            x8_1 = 2
            goto label_a560fc
        case 0xd
            x8_1 = 0x11
            goto label_a560fc
        case 0xf
            goto label_a56090
else
    switch (x9)
        case 0
        label_a5604c:
            x8_1 = 0x18
            goto label_a560fc
        case 1, 0x6a
        label_a5605c:
            x8_1 = 0xd
            goto label_a560fc
        case 2, 0x66
        label_a56054:
            x8_1 = 9
            goto label_a560fc
        case 3, 0x65
        label_a56064:
            x8_1 = 0x10
            goto label_a560fc
        case 4, 7, 0x67
            x8_1 = 0x13
        label_a560fc:
            *arg2 = x8_1
            return 1
        case 5
            x8_1 = 0x12
            goto label_a560fc
        case 6, 0x6e
            x8_1 = 0xe
            goto label_a560fc
        case 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 
                0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 
                0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 
                0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 
                0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 
                0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 
                0x5e, 0x5f, 0x60, 0x61, 0x62
            return result
        case 0x63, 0x70
        label_a5606c:
            x8_1 = 0xb
            goto label_a560fc
        case 0x64, 0x71
            *arg2 = 1
            return 1
        case 0x68
            x8_1 = 3
            goto label_a560fc
        case 0x69
            *arg2 = 0xa00000012
            return 2
        case 0x6b
            x8_1 = 4
            goto label_a560fc
        case 0x6c
            x8_1 = 0x16
            goto label_a560fc
        case 0x6d
            *arg2 = 0x700000008
            return 2
        case 0x6f
        label_a56090:
            x8_1 = 0xf
            goto label_a560fc
        case 0x72
        label_a56088:
            x8_1 = 0x17
            goto label_a560fc
