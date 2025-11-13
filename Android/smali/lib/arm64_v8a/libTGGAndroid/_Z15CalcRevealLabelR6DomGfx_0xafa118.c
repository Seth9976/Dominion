// 函数: _Z15CalcRevealLabelR6DomGfx
// 地址: 0xafa118
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x1 = zx.q(*(arg1 + 0x5c))
uint64_t x8 = zx.q(x1.d - 0x3e9)
int32_t x0_3
int32_t x19_1

if (x8.d u<= 0x83)
    switch (x8)
        case 0
            x19_1 = *(arg1 + 0x58)
            x0_3 = 5
        case 1, 4, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 
            0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 
            0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 
            0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 
            0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 
            0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 
            0x5d, 0x5e, 0x5f, 0x60, 0x61, 0x62, 0x63, 0x69, 0x7c
        label_afa1c4:
            
            if (x1.d - 7 u> 0x40)
                x19_1 = *(arg1 + 0x58)
                x0_3 = 0x14
            else
                int32_t x0_5 = BoardPileWhat(gDomClient + 0x20728, x1)
                
                if (x0_5 s> 0xd3c)
                    if (x0_5 == 0xd3d)
                        x19_1 = -1
                        x0_3 = 0xe
                    else if (x0_5 == 0x1128)
                        x19_1 = -1
                        x0_3 = 0x11
                    else if (x0_5 != 0x1301)
                        x19_1 = *(arg1 + 0x58)
                        x0_3 = 0x14
                    else
                        x19_1 = -1
                        x0_3 = 0x13
                else if (x0_5 == 0x70d)
                    x19_1 = -1
                    x0_3 = 0x10
                else if (x0_5 == 0x718)
                    x19_1 = -1
                    x0_3 = 0x12
                else if (x0_5 != 0xd30)
                    x19_1 = *(arg1 + 0x58)
                    x0_3 = 0x14
                else
                    x19_1 = -1
                    x0_3 = 0xd
        case 2
            x19_1 = *(arg1 + 0x58)
            x0_3 = 1
        case 3
            x19_1 = *(arg1 + 0x58)
            x0_3 = 3
        case 5, 6, 7
            int32_t x8_1 = *(arg1 + 0x64)
            int32_t x20_1
            
            if (x8_1 == 0)
                x20_1 = *(arg1 + 0x68)
            else
                x20_1 = x8_1
            
            if (x20_1 == 0)
                x19_1 = 0
                x0_3 = 0x19
            else
                *(arg1 + 0x58)
                LocalWho()
                x19_1 = *(arg1 + 0x58)
                CardWhat(gDomClient + 0x20728, zx.q(x20_1))
                x0_3 = 0x15
        case 0x64
            x19_1 = *(arg1 + 0x58)
            x0_3 = 4
        case 0x65
            x19_1 = *(arg1 + 0x58)
            x0_3 = 0x16
        case 0x66
            x19_1 = *(arg1 + 0x58)
            x0_3 = 0x17
        case 0x67
            x19_1 = *(arg1 + 0x58)
            x0_3 = 0x18
        case 0x68
            x19_1 = *(arg1 + 0x58)
            x0_3 = 6
        case 0x6a
            x19_1 = *(arg1 + 0x58)
            x0_3 = 0x15
        case 0x6b
            x19_1 = *(arg1 + 0x58)
            x0_3 = 0xb
        case 0x6c
            x19_1 = *(arg1 + 0x58)
            x0_3 = 0x15
        case 0x6d
            x19_1 = *(arg1 + 0x58)
            x0_3 = 0x15
        case 0x6e
            x19_1 = *(arg1 + 0x58)
            x0_3 = 0x15
        case 0x6f
            x19_1 = *(arg1 + 0x58)
            x0_3 = 0x15
        case 0x70
            x19_1 = *(arg1 + 0x58)
            x0_3 = 0x15
        case 0x71
            x19_1 = *(arg1 + 0x58)
            x0_3 = 0x15
        case 0x72
            x19_1 = *(arg1 + 0x58)
            x0_3 = 0x15
        case 0x73
            x19_1 = *(arg1 + 0x58)
            x0_3 = 0x15
        case 0x74
            x19_1 = *(arg1 + 0x58)
            x0_3 = 0x15
        case 0x75
            x19_1 = *(arg1 + 0x58)
            x0_3 = 0x15
        case 0x76
            x19_1 = *(arg1 + 0x58)
            x0_3 = 7
        case 0x77
            x19_1 = *(arg1 + 0x58)
            x0_3 = 8
        case 0x78
            x19_1 = *(arg1 + 0x58)
            x0_3 = 9
        case 0x79
            x19_1 = *(arg1 + 0x58)
            x0_3 = 0xa
        case 0x7a, 0x7b
            x19_1 = -1
            x0_3 = 0xd
        case 0x7d
            x19_1 = *(arg1 + 0x58)
            x0_3 = 0x15
        case 0x7e
            x19_1 = *(arg1 + 0x58)
            x0_3 = 0x15
        case 0x7f
            x19_1 = *(arg1 + 0x58)
            x0_3 = 0x15
        case 0x80
            x19_1 = *(arg1 + 0x58)
            x0_3 = 0x15
        case 0x81
            x19_1 = *(arg1 + 0x58)
            x0_3 = 0x15
        case 0x82
            x19_1 = *(arg1 + 0x58)
            x0_3 = 0x15
        case 0x83
            x19_1 = *(arg1 + 0x58)
            x0_3 = 0x15
else if (x1.d == 2)
    x19_1 = -1
    x0_3 = 0xc
else
    if (x1.d != 3)
        goto label_afa1c4
    
    x19_1 = -1
    x0_3 = 0xf

return zx.q(x0_3) | zx.q(x19_1) << 0x20
