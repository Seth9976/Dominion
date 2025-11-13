// 函数: _Z19HasAssociatedDoodad13CampaignPieceR6Doodad
// 地址: 0xa54c0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_1 = arg1
uint64_t x10 = zx.q(x8_1 - 0x1771)
int64_t result = 0
int32_t x9 = 0x58

if (x10.d u> 0x72)
    uint64_t x8 = zx.q(x8_1 - 0x1b59)
    
    if (x8.d u<= 0x10)
        switch (x8)
            case 0
                result = 1
                *arg2 = 0x2e
            case 1
                goto label_a54c80
            case 2
                goto label_a54c78
            case 3
                result = 1
                *arg2 = 0x20
            case 4
                result = 1
                *arg2 = 0x3a
            case 5
                goto label_a54c88
            case 6
                goto label_a54c90
            case 7
                result = 1
                *arg2 = 0x31
            case 8
                goto label_a54c98
            case 9
                result = 1
                *arg2 = 0x53
            case 0xa
                result = 1
                *arg2 = x9
            case 0xb
                result = 1
                *arg2 = 0x55
            case 0xc
                result = 1
                *arg2 = 0x1b
            case 0xd
                result = 1
                *arg2 = 5
            case 0xe
                result = 1
                *arg2 = 0x5a
            case 0xf
                result = 1
                *arg2 = 0x52
            case 0x10
                goto label_a54ca0
else
    switch (x10)
        case 0
            result = 1
            *arg2 = x9
        case 1, 0x66
        label_a54c78:
            result = 1
            *arg2 = 0x39
        case 2
        label_a54ca0:
            result = 1
            *arg2 = 0x21
        case 3
            result = 1
            *arg2 = 0x61
        case 4
            result = 1
            *arg2 = 0x4f
        case 5
            result = 1
            *arg2 = 0x36
        case 6, 0x67
            result = 1
            *arg2 = 0x23
        case 7
        label_a54c80:
            result = 1
            *arg2 = 0x45
        case 0x63
            result = 1
            *arg2 = 0xf
        case 0x64
            result = 1
            *arg2 = 0x35
        case 0x65
            result = 1
            *arg2 = 0x34
        case 0x68
            result = 1
            *arg2 = 0xe
        case 0x69
            result = 1
            *arg2 = 0x24
        case 0x6a
        label_a54c98:
            result = 1
            *arg2 = 0x41
        case 0x6b
        label_a54c90:
            result = 1
            *arg2 = 0xd
        case 0x6c
            result = 1
            *arg2 = 0x25
        case 0x6d
            result = 1
            *arg2 = 0x1f
        case 0x6e
            result = 1
            *arg2 = 0x29
        case 0x6f
            result = 1
            *arg2 = 0x40
        case 0x70
            result = 1
            *arg2 = 0x33
        case 0x71
        label_a54c88:
            result = 1
            *arg2 = 0x57
        case 0x72
            result = 1
            *arg2 = 0x4c

return result
