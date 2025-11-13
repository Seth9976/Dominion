// 函数: _Z22CardGetCharacteristicsR7DomGame11DomCardEnumP21AbilityCharacteristic12AbilityIndex
// 地址: 0xbcf180
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

switch (arg4)
    case 0, 0x58, 0x59, 0x5d, 0x5f
        *arg3 = 0x10
        return 1
    case 0x54, 0x5b, 0x5c, 0x5e, 0x65
        *arg3 = 0xa
        return 1
    case 0x55, 0x60, 0x61, 0x63, 0x64
        *arg3 = 1
        return 1
    case 0x56
        *arg3 = 0x1000000004
        return 2
    case 0x57, 0x66
        *arg3 = 4
        return 1
    case 0x5a, 0x62
        *arg3 = 0xd
        return 1

int32_t x8_2

if (arg2 == 0x1222 || arg2 == 0xc22)
    x8_2 = 2
    *arg3 = 0x160000000f
else
    x8_2 = 0

uint64_t x9 = zx.q(arg2 - 0x1500)

if (x9.d u> 0x28)
    goto label_bcf2a4

int32_t x9_1 = 0x10

switch (x9)
    case 0, 1, 0x18, 0x19, 0x1a, 0x21, 0x23
        goto label_bcf288
    case 2, 0x22
        *(arg3 + (zx.q(x8_2) << 2)) = 0xd
        return zx.q(x8_2) | 1
    case 3, 5, 0x1b, 0x1f, 0x24
        *(arg3 + (zx.q(x8_2) << 2)) = 4
        return zx.q(x8_2) | 1
    case 4, 7, 0x1c
        *(arg3 + (zx.q(x8_2) << 2)) = 0xa
        return zx.q(x8_2) | 1
    case 6, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x1d, 
            0x1e, 0x20, 0x25
        goto label_bcf2a4
    case 0xe
        *(arg3 + (zx.q(x8_2) << 2)) = 9
        return zx.q(x8_2) | 1
    case 0x26, 0x28
        x9_1 = 0xa
    label_bcf288:
        *(arg3 + (zx.q(x8_2) << 2)) = x9_1
        x8_2 |= 1
    label_bcf2a4:
        
        if (arg2 == 0x111b || arg2 == 0x1015)
            *(arg3 + (zx.q(x8_2) << 2)) = 0x13
            x8_2 += 1
        
        uint64_t x0_5
        
        if (arg2 s<= 0xf28)
            if (arg2 s<= 0xc13)
                if (arg2 s> 0x703)
                    if (arg2 s> 0xb07)
                        if (arg2 == 0xb08 || arg2 == 0xb21)
                            goto label_bcf464
                        
                        goto label_bcf46c
                    
                    if (arg2 == 0x704)
                        if (arg4 == 4)
                            goto label_bcf6c8
                        
                    label_bcf698:
                        
                        if (arg4 == 5)
                            goto label_bd0078
                        
                        return zx.q(x8_2)
                    
                    if (arg2 != 0x81f)
                        goto label_bcf46c
                    
                    *(arg3 + (zx.q(x8_2) << 2)) = 0x15
                    return zx.q(x8_2 + 1)
                
                if (arg2 == 0x401)
                    goto label_bcf464
                
                if (arg2 != 0x41b)
                    if (arg2 != 0x41e)
                        goto label_bcf46c
                    
                    if (arg4 != 0x29)
                        x0_5 = zx.q(x8_2)
                    else
                        x0_5 = zx.q(x8_2 + 1)
                        *(arg3 + (zx.q(x8_2) << 2)) = 3
                    
                    goto label_bd00d4
                
                if (arg4 == 0x28)
                    goto label_bcf6dc
                
            label_bcf6fc:
                
                if (arg4 != 0x27)
                    return zx.q(x8_2)
                
            label_bd0078:
                *(arg3 + (zx.q(x8_2) << 2)) = 4
                return zx.q(x8_2 + 1)
            
            if (arg2 s<= 0xe03)
                if (arg2 - 0xc14 u< 2)
                    goto label_bcf464
                
                if (arg2 == 0xd01)
                    if (arg4 != 0xb)
                        return zx.q(x8_2)
                    
                    goto label_bcf6f0
                
                if (arg2 == 0xd16)
                    goto label_bcf464
                
                goto label_bcf46c
            
            if (arg2 s<= 0xf00)
                if (arg2 != 0xe04)
                    if (arg2 == 0xe0d)
                        goto label_bcf464
                    
                    goto label_bcf46c
                
                if (arg4 == 7)
                    goto label_bcf6f0
                
                if (arg4 != 6)
                    return zx.q(x8_2)
                
                goto label_bcf6c8
            
            if (arg2 != 0xf01)
                if (arg2 != 0xf13)
                    goto label_bcf46c
                
                if (arg4 == 0x11)
                    goto label_bcf6c8
                
            label_bcf9f4:
                
                if (arg4 != 0x10)
                    return zx.q(x8_2)
                
            label_bd002c:
                *(arg3 + (zx.q(x8_2) << 2)) = 0xd
                return zx.q(x8_2 + 1)
            
            if (arg4 == 0x14)
                goto label_bcf6f0
            
            x0_5 = zx.q(x8_2)
            
            if (arg4 != 0x15)
                return x0_5
        else if (arg2 s> 0x121a)
            if (arg2 s<= 0x1301)
                if (arg2 == 0x121b)
                    if (arg4 == 0x50)
                    label_bcf6f0:
                        *(arg3 + (zx.q(x8_2) << 2)) = 3
                        return zx.q(x8_2 + 1)
                    
                    if (arg4 == 0x51)
                        goto label_bcf6c8
                    
                    return zx.q(x8_2)
                
                if (arg2 != 0x1225)
                    goto label_bcf46c
                
                if (arg4 == 0x4e)
                    goto label_bcf6c8
                
            label_bcf7c4:
                
                if (arg4 != 0x4f)
                    return zx.q(x8_2)
                
                goto label_bcfbec
            
            if (arg2 != 0x1302)
                if (arg2 != 0x130b)
                    goto label_bcf46c
                
                if (arg4 == 0xe)
                label_bcf6c8:
                    *(arg3 + (zx.q(x8_2) << 2)) = 0x12
                    return zx.q(x8_2 + 1)
                
            label_bcf898:
                
                if (arg4 != 0xf)
                    return zx.q(x8_2)
                
            label_bcfbec:
                *(arg3 + (zx.q(x8_2) << 2)) = 1
                return zx.q(x8_2 + 1)
            
        label_bcf464:
            *(arg3 + (zx.q(x8_2) << 2)) = 3
            x8_2 += 1
        label_bcf46c:
            
            if (arg2 s> 0xd17)
                if (arg2 s<= 0x1020)
                    if (arg2 - 0xe1f u<= 0xf)
                        if ((1 << (arg2 - 0xe1f) & 0xa041) != 0)
                            goto label_bcf720
                        
                        if (arg2 != 0xe26)
                            goto label_bcf48c
                        
                        *(arg3 + (zx.q(x8_2) << 2)) = 6
                        return zx.q(x8_2 + 1)
                    
                label_bcf48c:
                    uint64_t x9_8 = zx.q(arg2 - 0xf0b)
                    
                    if (x9_8.d u> 0x38 || (1 << x9_8 & 0x100000000000019) == 0)
                        uint64_t x9_10 = zx.q(arg2 - 0xd18)
                        
                        if (x9_10.d u> 0x32 || (1 << x9_10 & 0x4000080000001) == 0)
                            goto label_bcf738
                        
                        goto label_bcf720
                    
                    goto label_bcf720
                
                uint64_t x9_15 = zx.q(arg2 - 0x1101)
                
                if (x9_15.d u> 0x2b)
                label_bcf5f0:
                    
                    if (arg2 - 0x1021 u> 0x1f)
                        goto label_bcf738
                    
                    if ((1 << (arg2 - 0x1021) & 0x80800041) != 0)
                        goto label_bcf720
                    
                    if (arg2 != 0x1025)
                        goto label_bcf738
                    
                    if (arg4 == 0x25)
                        goto label_bd0078
                    
                label_bcfb28:
                    
                    if (arg4 != 0x24)
                        return zx.q(x8_2)
                    
                    goto label_bd0284
                
                if ((1 << x9_15 & 0x80008020001) != 0)
                    goto label_bcf720
                
                if (x9_15 != 5)
                    if (x9_15 != 6)
                        goto label_bcf5f0
                    
                    if (arg4 != 0x34)
                    label_bcf88c:
                        
                        if (arg4 == 0x35)
                            goto label_bcf8bc
                        
                        goto label_bcf8c4
                    
                    goto label_bd0078
                
                if (arg4 == 0x31)
                    *(arg3 + (zx.q(x8_2) << 2)) = 5
                    return zx.q(x8_2 + 1)
                
            label_bd0064:
                
                if (arg4 != 0x32)
                    return zx.q(x8_2)
                
            label_bd0228:
                *(arg3 + (zx.q(x8_2) << 2)) = 0xa
                return zx.q(x8_2 + 1)
            
            if (arg2 s> 0xa11)
                if (arg2 s> 0xb05)
                    uint64_t x9_16 = zx.q(arg2 - 0xb06)
                    
                    if (x9_16.d u> 0x32)
                        if (arg2 == 0xc0e || arg2 == 0xd08)
                            goto label_bcf720
                        
                        goto label_bcf738
                    
                    if ((1 << x9_16 & 0x400000080800b) != 0 || arg2 == 0xc0e || arg2 == 0xd08)
                        goto label_bcf720
                    
                    goto label_bcf738
                
                if (arg2 != 0xa12)
                    if (arg2 != 0xa13)
                        goto label_bcf738
                    
                    goto label_bcf720
                
                if (arg4 == 0x4b)
                    goto label_bd0078
                
            label_bd0098:
                
                if (arg4 != 1)
                    return zx.q(x8_2)
                
                goto label_bd0284
            
            if (arg2 - 0x40a u> 0x18)
            label_bcf514:
                
                if (arg2 - 0x90d u<= 0x1e && (1 << (arg2 - 0x90d) & 0x40001011) != 0)
                    goto label_bcf720
                
                if (arg2 == 0x704)
                    goto label_bcf698
                
                goto label_bcf738
            
            if ((1 << (arg2 - 0x40a) & 0x140a001) == 0)
                if (arg2 == 0x41b)
                    goto label_bcf6fc
                
                goto label_bcf514
            
        label_bcf720:
            *(arg3 + (zx.q(x8_2) << 2)) = 4
            x8_2 += 1
        label_bcf738:
            
            if (arg2 == 0x111a || arg2 == 0xe31)
                *(arg3 + (zx.q(x8_2) << 2)) = 2
                x8_2 += 1
            
            if (arg2 s<= 0x1102)
                if (arg2 s<= 0xe2e)
                    if (arg2 s<= 0xd0c)
                        if (arg2 == 0x41c || arg2 == 0xb18)
                            goto label_bcf8bc
                        
                        goto label_bcf8c4
                    
                    if (arg2 == 0xd0d || arg2 == 0xd2f || arg2 == 0xe2b)
                        goto label_bcf8bc
                    
                    goto label_bcf8c4
                
                if (arg2 s<= 0x1009)
                    if (arg2 == 0xe2f || arg2 == 0xf17 || arg2 == 0xf1e)
                        goto label_bcf8bc
                    
                    goto label_bcf8c4
                
                uint64_t x9_22 = zx.q(arg2 - 0x100a)
                
                if (x9_22.d u> 0x30 || (1 << x9_22 & 0x1000000000011) == 0)
                    goto label_bcf8c4
                
                goto label_bcf8bc
            
            if (arg2 s> 0x114c)
                if (arg2 s> 0x1309)
                    if (arg2 == 0x130c)
                        goto label_bcf8bc
                    
                    if (arg2 == 0x130b)
                        goto label_bcf898
                    
                    if (arg2 == 0x130a)
                        goto label_bcf8bc
                    
                    goto label_bcf8c4
                
                if (arg2 == 0x114d)
                    goto label_bcf87c
                
                if (arg2 == 0x1150)
                    goto label_bcf884
                
                if (arg2 != 0x1225)
                    goto label_bcf8c4
                
                goto label_bcf7c4
            
            uint64_t x9_21 = zx.q(arg2 - 0x1103)
            
            if (x9_21.d u> 0x1a)
                goto label_bcf8c4
            
            switch (x9_21)
                case 0
                    if (arg4 == 0x3c)
                        goto label_bcfbec
                    
                    goto label_bcfb74
                case 1, 2, 3, 5, 6, 7, 8, 9, 0xb, 0xc, 0xe, 0xf, 0x10, 0x11
                    goto label_bcf8c4
                case 4
                    goto label_bcf88c
                case 0xa
                    if (arg4 != 0x37)
                        goto label_bcfbf8
                    
                    goto label_bcfbec
                case 0xd
                    goto label_bcf8bc
        else
            if (arg2 s<= 0x1120)
                if (arg2 == 0xf29)
                label_bcf6dc:
                    *(arg3 + (zx.q(x8_2) << 2)) = 0x14
                    return zx.q(x8_2 + 1)
                
                if (arg2 == 0x1034)
                    goto label_bcf464
                
                if (arg2 != 0x1100)
                    goto label_bcf46c
                
                if (arg4 == 0x46)
                    goto label_bcf6f0
                
            label_bcff98:
                
                if (arg4 != 0x45)
                    return zx.q(x8_2)
                
                *(arg3 + (zx.q(x8_2) << 2)) = 9
                return zx.q(x8_2 + 1)
            
            uint64_t x9_5 = zx.q(arg2 - 0x1121)
            
            if (x9_5.d u> 0x2f)
                goto label_bcf46c
            
            switch (x9_5)
                case 0, 0x11
                    goto label_bcf464
                case 1, 2, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x12, 0x13, 0x14, 
                        0x15, 0x16, 0x17, 0x18, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 
                        0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x29, 0x2a, 0x2b, 0x2d, 0x2e
                    goto label_bcf46c
                case 3
                    if (arg4 != 0x39)
                        return zx.q(x8_2)
                    
                    goto label_bcf6f0
                case 0x19
                    if (arg4 == 0x3d)
                        goto label_bcf6f0
                    
                    if (arg4 == 0x3e)
                        goto label_bcf6c8
                    
                    return zx.q(x8_2)
                case 0x28
                    if (arg4 != 0x47)
                        goto label_bd0150
                    
                label_bd0284:
                    *(arg3 + (zx.q(x8_2) << 2)) = 0x10
                    return zx.q(x8_2 + 1)
                case 0x2c
                    if (arg4 == 0x40)
                        goto label_bcf6c8
                    
                label_bcf87c:
                    
                    if (arg4 == 0x3f)
                        goto label_bcfbec
                    
                    goto label_bcf884
                case 0x2f
                    if (arg4 == 0x41)
                        goto label_bcf6c8
                    
                label_bcf884:
                    
                    if (arg4 != 0x42 && arg4 != 0x35)
                        goto label_bcf8c4
                    
                label_bcf8bc:
                    *(arg3 + (zx.q(x8_2) << 2)) = 1
                    x8_2 += 1
                label_bcf8c4:
                    
                    if (arg2 s<= 0xe1a)
                        if (arg2 s<= 0xb19)
                            if (arg2 s> 0xb04)
                                if (arg2 - 0xb05 u>= 2)
                                    goto label_bcfa20
                                
                                goto label_bcfa14
                            
                            if ((arg2 - 0x402 u> 0x18 || (1 << (arg2 - 0x402) & 0x1080011) == 0)
                                    && arg2 != 0x204 && arg2 != 0x30f)
                                goto label_bcfa20
                            
                            goto label_bcfa14
                        
                        if (arg2 s> 0xd0a)
                            uint64_t x9_30 = zx.q(arg2 - 0xd0b)
                            
                            if ((x9_30.d u> 0x3f || (1 << x9_30 & 0x8000000000200001) == 0)
                                    && arg2 != 0xe0c)
                                goto label_bcfa20
                            
                            goto label_bcfa14
                        
                        if (arg2 == 0xb1a)
                            if (arg4 != 0xd)
                                goto label_bd0220
                            
                            goto label_bd002c
                        
                        if (arg2 == 0xb38 || arg2 == 0xd02)
                            goto label_bcfa14
                        
                        goto label_bcfa20
                    
                    if (arg2 s> 0x1102)
                        uint64_t x9_27 = zx.q(arg2 - 0x1103)
                        
                        if (x9_27.d u> 0x28)
                        label_bcf960:
                            
                            if (arg2 - 0x1214 u> 0xb || (1 << (arg2 - 0x1214) & 0x841) == 0)
                                goto label_bcfa20
                            
                            goto label_bcfa14
                        
                        if ((1 << x9_27 & 0x140000208c0) != 0)
                            goto label_bcfa14
                        
                        if (x9_27 == 0)
                        label_bcfb74:
                            
                            if (arg4 != 0x3b)
                                return zx.q(x8_2)
                            
                            goto label_bd002c
                        
                        if (x9_27 != 0xa)
                            goto label_bcf960
                        
                    label_bcfbf8:
                        
                        if (arg4 != 0x36)
                            return zx.q(x8_2)
                        
                        goto label_bd002c
                    
                    if (arg2 != 0xe1b)
                        if (arg2 == 0xf13)
                            goto label_bcf9f4
                        
                        if (arg2 == 0x1045)
                            goto label_bcfa14
                        
                        goto label_bcfa20
                    
                label_bcfa14:
                    *(arg3 + (zx.q(x8_2) << 2)) = 0xd
                    x8_2 += 1
                label_bcfa20:
                    int32_t x9_34 = 0x10
                    
                    if (arg2 s> 0xd11)
                        int32_t x10_10
                        
                        if (arg2 s> 0x100f)
                            if (arg2 s<= 0x1113)
                                if (arg2 s<= 0x1037)
                                    if (arg2 - 0x1010 u< 2)
                                        goto label_bcfc74
                                    
                                    if (arg2 != 0x1025)
                                        goto label_bcfc80
                                    
                                    goto label_bcfb28
                                
                                if (arg2 == 0x1038)
                                    goto label_bd0018
                                
                                x10_10 = 0x1045
                            label_bcfc68:
                                
                                if (arg2 != x10_10)
                                    goto label_bcfc80
                                
                                goto label_bcfc74
                            
                            if (arg2 s<= 0x1214)
                                if (arg2 - 0x1114 u> 0x17 || (1 << (arg2 - 0x1114) & 0xa00001) == 0)
                                    goto label_bcfc80
                                
                                goto label_bcfc74
                            
                            if (arg2 s<= 0x1223)
                                if (arg2 == 0x1215)
                                    goto label_bd0284
                                
                                x10_10 = 0x1220
                                goto label_bcfc68
                            
                            if (arg2 != 0x1224)
                                x10_10 = 0x1309
                                goto label_bcfc68
                            
                            if (arg4 == 0x52)
                                goto label_bd0284
                            
                        label_bd0290:
                            
                            if (arg4 != 0x53)
                                return zx.q(x8_2)
                            
                            *(arg3 + (zx.q(x8_2) << 2)) = 0xc
                            return zx.q(x8_2 + 1)
                        
                        if (arg2 s> 0xe01)
                            uint64_t x10_9 = zx.q(arg2 - 0xe02)
                            
                            if (x10_9.d u> 0x30)
                            label_bcfba8:
                                
                                if (arg2 != 0xf0b)
                                    x10_10 = 0x1001
                                    goto label_bcfc68
                                
                                void* x9_49 = arg3 + (zx.q(x8_2) << 2)
                                *x9_49 = 0x1100000010
                                *(x9_49 + 8) = 0x17
                                return zx.q(x8_2 + 3)
                            
                            if ((1 << x10_9 & 0x1082200000001) == 0)
                                if ((1 << x10_9 & 0x10400080000) != 0)
                                    goto label_bcfc74
                                
                                goto label_bcfba8
                            
                        label_bcfa9c:
                            x9_34 = 0x11
                        label_bcfc74:
                            *(arg3 + (zx.q(x8_2) << 2)) = x9_34
                            x8_2 += 1
                        label_bcfc80:
                            
                            if (arg2 == 0xf2a || arg2 == 0xb28)
                                *(arg3 + (zx.q(x8_2) << 2)) = 8
                                x8_2 += 1
                            
                            if (arg2 == 0x416 || arg2 == 0x50c)
                                *(arg3 + (zx.q(x8_2) << 2)) = 8
                                x8_2 += 1
                            
                            if (arg2 s> 0xd49)
                                if (arg2 s> 0xf46)
                                    if (arg2 == 0xf47 || arg2 == 0x1101 || arg2 == 0x1049)
                                        goto label_bcfd70
                                    
                                    goto label_bcfd80
                                
                                if ((arg2 - 0xe1f u> 0xf || (1 << (arg2 - 0xe1f) & 0x8041) == 0)
                                        && arg2 != 0xd4a)
                                    goto label_bcfd80
                                
                                goto label_bcfd70
                            
                            if (arg2 s<= 0x905)
                                if (arg2 == 0x41f || arg2 == 0x422 || arg2 == 0x50c)
                                    goto label_bcfd70
                                
                                goto label_bcfd80
                            
                            if (arg2 s> 0xb08)
                                if (arg2 == 0xb09 || arg2 == 0xc33)
                                    goto label_bcfd70
                                
                                goto label_bcfd80
                            
                            if (arg2 == 0x906 || arg2 == 0xb07)
                                goto label_bcfd70
                            
                            goto label_bcfd80
                        
                        if (arg2 == 0xd12)
                            goto label_bcfc74
                        
                        if (arg2 != 0xd4a)
                            goto label_bcfc80
                        
                        uint64_t x9_38 = zx.q(x8_2) << 2
                        x8_2 += 2
                        *(arg3 + x9_38) = 0x1100000010
                    label_bcfd70:
                        *(arg3 + (zx.q(x8_2) << 2)) = 7
                        x8_2 += 1
                    label_bcfd80:
                        
                        if (arg2 s<= 0x10ff)
                            if (arg2 s> 0xd49)
                                if (arg2 == 0xd4a || arg2 == 0xe1e || arg2 == 0xe21)
                                label_bcfe4c:
                                    *(arg3 + (zx.q(x8_2) << 2)) = 9
                                    x8_2 += 1
                            else if ((arg2 - 0xb03 u<= 0xd && (1 << (arg2 - 0xb03) & 0x2005) != 0)
                                    || arg2 == 0x604 || arg2 == 0x60d)
                                goto label_bcfe4c
                        else if (arg2 s> 0x1150)
                            if (arg2 == 0x1151 || arg2 == 0x1305 || arg2 == 0x1302)
                                goto label_bcfe4c
                        else if (arg2 - 0x1100 u<= 0x17)
                            if ((1 << (arg2 - 0x1100) & 0x840430) != 0)
                                goto label_bcfe4c
                            
                            if (arg2 == 0x1100)
                                goto label_bcff98
                            
                            if (arg2 == 0x1106)
                                goto label_bd0064
                        
                        if (arg2 == 0xc04)
                        label_bcfe74:
                            x0_5 = zx.q(x8_2 + 1)
                            *(arg3 + (zx.q(x8_2) << 2)) = 0xc
                        else
                            if (arg2 == 0x1224)
                                goto label_bd0290
                            
                            if (arg2 == 0x1152)
                                goto label_bcfe74
                            
                            x0_5 = zx.q(x8_2)
                        
                        if (arg2 s> 0xd05)
                            int32_t x8_7
                            
                            if (arg2 s> 0x1036)
                                uint64_t x8_8 = zx.q(arg2 - 0x1102)
                                
                                if ((x8_8.d u> 0x23 || (1 << x8_8 & 0x980300105) == 0) &&
                                        (arg2 - 0x1221 u> 7 || (1 << (arg2 - 0x1221) & 0x85) == 0))
                                    x8_7 = 0x1037
                                label_bcff50:
                                    
                                    if (arg2 == x8_7)
                                        goto label_bd00d4
                                else
                                label_bd00d4:
                                    *(arg3 + (zx.q(x0_5.d) << 2)) = 0xa
                                    x0_5 = zx.q(x0_5.d + 1)
                            else
                                if (arg2 s> 0xdff)
                                    if (arg2 - 0xe00 u<= 7)
                                        if ((1 << (arg2 - 0xe00) & 0xa1) != 0 || arg2 - 0xf15 u< 2)
                                            goto label_bd00d4
                                    else if (arg2 - 0xf15 u< 2)
                                        goto label_bd00d4
                                    
                                    x8_7 = 0x1022
                                    goto label_bcff50
                                
                                uint64_t x8_14 = zx.q(arg2 - 0xd14)
                                
                                if (x8_14.d u<= 0x36 && (1 << x8_14 & 0x40000000000003) != 0)
                                    goto label_bd00d4
                                
                                if (arg2 == 0xd06)
                                    *(arg3 + (zx.q(x0_5.d) << 2)) = 0xa
                                    return zx.q(x0_5.d + 1)
                        else if (arg2 s> 0x901)
                            uint64_t x8_12 = zx.q(arg2 - 0x902)
                            
                            if (x8_12.d u<= 0x20 && (1 << x8_12 & 0x100100491) != 0)
                                goto label_bd00d4
                            
                            if (arg2 - 0xb05 u<= 0x15)
                                if ((1 << (arg2 - 0xb05) & 0xaa1) != 0)
                                    goto label_bd00d4
                                
                                if (arg2 != 0xb1a)
                                    goto label_bd00a4
                                
                                x8_2 = x0_5.d
                            label_bd0220:
                                
                                if (arg4 != 0xc)
                                    return zx.q(x8_2)
                                
                                goto label_bd0228
                            
                        label_bd00a4:
                            uint64_t x8_18 = zx.q(arg2 - 0xc0c)
                            
                            if (x8_18.d u<= 0x23 && (1 << x8_18 & 0xa80000001) != 0)
                                goto label_bd00d4
                        else
                            if (arg2 s> 0x800)
                                if (arg2 - 0x801 u> 0x17 || (1 << (arg2 - 0x801) & 0x819001) == 0)
                                    goto label_bd00dc
                                
                                goto label_bd00d4
                            
                            if (arg2 == 0x41e)
                                goto label_bd00d4
                            
                            if (arg2 == 0x421)
                                if (arg4 != 0x2d)
                                    return x0_5
                                
                                *(arg3 + (zx.q(x0_5.d) << 2)) = 0xa
                                return zx.q(x0_5.d + 1)
                            
                            if (arg2 == 0x608)
                                goto label_bd00d4
                        
                    label_bd00dc:
                        
                        if (arg2 s> 0xf40)
                            int32_t x8_22
                            
                            if (arg2 s> 0x104b)
                                uint64_t x8_21 = zx.q(arg2 - 0x110f)
                                
                                if (x8_21.d u> 0x3a)
                                label_bd01f8:
                                    
                                    if (arg2 != 0x1235)
                                        x8_22 = 0x104c
                                        goto label_bd0204
                                else if ((1 << x8_21 & 0x180000041) == 0)
                                    if (x8_21 != 0x3a)
                                        goto label_bd01f8
                                    
                                    x8_2 = x0_5.d
                                label_bd0150:
                                    
                                    if (arg4 != 0x48)
                                        return zx.q(x8_2)
                                    
                                    *(arg3 + (zx.q(x8_2) << 2)) = 0xb
                                    return zx.q(x8_2 + 1)
                            else if (arg2 s> 0x1002)
                                if (arg2 != 0x1003)
                                    x8_22 = 0x1048
                                label_bd0204:
                                    
                                    if (arg2 != x8_22)
                                        return x0_5
                            else if (arg2 != 0xf41 && arg2 != 0x1000)
                                return x0_5
                        else if (arg2 s<= 0xd04)
                            if (arg2 s<= 0x814)
                                if (arg2 != 0x604 && arg2 != 0x61e)
                                    return x0_5
                            else if (arg2 != 0x815 && arg2 != 0xb23 && arg2 != 0xc2d)
                                return x0_5
                        else if (arg2 s> 0xe19)
                            if (arg2 != 0xe1a && arg2 != 0xe22 && (arg2 != 0xf01 || arg4 != 0x15))
                                return x0_5
                        else if (arg2 != 0xd05 && arg2 != 0xd4a && arg2 != 0xd4f)
                            return x0_5
                    else if (arg2 s<= 0xc06)
                        if (arg2 s<= 0xa11)
                            if (arg2 s> 0x61f)
                                if (arg2 == 0x620 || arg2 == 0xa0b)
                                    goto label_bcfc74
                                
                                goto label_bcfc80
                            
                            if (arg2 == 0x41a || arg2 == 0x613)
                                goto label_bcfc74
                            
                            goto label_bcfc80
                        
                        uint64_t x10_12 = zx.q(arg2 - 0xb12)
                        
                        if (x10_12.d u> 0x27)
                            if (arg2 == 0xa12)
                                goto label_bd0098
                            
                            if (arg2 == 0xb00)
                                goto label_bcfa9c
                            
                            goto label_bcfc80
                        
                        switch (x10_12)
                            case 0, 4
                                goto label_bcfc74
                            case 1, 2, 3, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 
                                    0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 
                                    0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25
                                goto label_bcfc80
                            case 0x26
                                *(arg3 + (zx.q(x8_2) << 2)) = 0x100000000f
                                return zx.q(x8_2 + 2)
                            case 0x27
                                goto label_bcfa9c
                    else
                        uint64_t x10_8 = zx.q(arg2 - 0xc07)
                        
                        if (x10_8.d u> 0x3b)
                            goto label_bcfc80
                        
                        uint64_t x0_8
                        bool cond:1
                        
                        switch (x10_8)
                            case 0, 0x12, 0x13, 0x24, 0x2b, 0x2e, 0x2f, 0x30, 0x31, 0x35, 0x3b
                                goto label_bcfc74
                            case 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xd, 0xe, 0xf, 0x10, 0x11, 
                                    0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 
                                    0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x25, 0x26, 0x27, 0x28, 
                                    0x2a, 0x2c, 0x2d, 0x33, 0x34, 0x37, 0x38, 0x39, 0x3a
                                goto label_bcfc80
                            case 0xc
                            label_bd0018:
                                *(arg3 + (zx.q(x8_2) << 2)) = 0xf
                                return zx.q(x8_2 + 1)
                            case 0x29
                                *(arg3 + (zx.q(x8_2) << 2)) = 0xe
                                return zx.q(x8_2 + 1)
                            case 0x32
                                x0_8 = zx.q(x8_2 + 1)
                                cond:1 = arg4 != 0x19
                            label_bd0248:
                                uint64_t x8_23 = zx.q(x8_2)
                                
                                if (cond:1)
                                    *(arg3 + (x8_23 << 2)) = 0x10
                                    return x0_8
                                
                                *(arg3 + (x8_23 << 2)) = 0xf
                                return x0_8
                            case 0x36
                                x0_8 = zx.q(x8_2 + 1)
                                cond:1 = arg4 != 0x18
                                goto label_bd0248
        
        *(arg3 + (zx.q(x0_5.d) << 2)) = 0xb
        return zx.q(x0_5.d + 1)
    case 0x27
        *(arg3 + (zx.q(x8_2) << 2)) = 0x10
        return zx.q(x8_2) | 1
