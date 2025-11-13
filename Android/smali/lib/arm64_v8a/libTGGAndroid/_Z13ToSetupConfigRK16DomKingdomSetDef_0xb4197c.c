// 函数: _Z13ToSetupConfigRK16DomKingdomSetDef
// 地址: 0xb4197c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x8
void* result = memset(entry_x8, 0, 0x1990)
int32_t x8 = *(arg1 + 0x4c)

if (x8 u<= 0x18)
    int32_t x9_1 = 1
    
    if ((1 << x8 & 0x1fffcff) == 0)
        goto label_b41a04
    
    int32_t x10_2 = *(arg1 + 0x50)
    
    if (x10_2 u<= 0x18)
        x9_1 = 1
        
        if ((1 << x10_2 & 0x1fffcff) == 0)
            goto label_b41a04
        
        int64_t x9_2 = sx.q(*(arg1 + 0x54))
        
        if (x9_2.d u< 0x19)
            x9_1 = *(&data_801da4 + (x9_2 << 2))
        label_b41a04:
            entry_x8[0x2ff] = x9_1
            
            if (x8 u<= 0x18)
                int32_t x8_2
                
                if (x8 == 0xe)
                    entry_x8[0x300] = 1
                    __builtin_memset(&entry_x8[0x276], 0, 0x1f0)
                    x8_2 = 9
                label_b41c3c:
                    entry_x8[0x272] = x8_2
                    entry_x8[0x273] = 0xffffffff
                    *(entry_x8 + 0x9d0) = 0xa00000000
                    uint64_t x8_34 = zx.q(*(arg1 + 0x50))
                    
                    if (x8_34.d u<= 0x18)
                        int32_t x8_35 = 2
                        
                        switch (x8_34)
                            case 0
                            label_b41dc0:
                                int32_t x9_7 = *(arg1 + 0x10)
                                *entry_x8 = 1
                                entry_x8[1] = x9_7
                                entry_x8[2] = 0
                                int32_t x9_8 = *(arg1 + 0x14)
                                entry_x8[4] = 1
                                entry_x8[5] = x9_8
                                entry_x8[6] = 0
                                int32_t x9_9 = *(arg1 + 0x18)
                                entry_x8[8] = 1
                                entry_x8[9] = x9_9
                                entry_x8[0xa] = 0
                                int32_t x9_10 = *(arg1 + 0x1c)
                                entry_x8[0xc] = 1
                                entry_x8[0xd] = x9_10
                                entry_x8[0xe] = 0
                                int32_t x9_11 = *(arg1 + 0x20)
                                entry_x8[0x10] = 1
                                entry_x8[0x11] = x9_11
                                entry_x8[0x12] = 0
                                int32_t x9_12 = *(arg1 + 0x24)
                                entry_x8[0x14] = 1
                                entry_x8[0x15] = x9_12
                                entry_x8[0x16] = 0
                                int32_t x9_13 = *(arg1 + 0x28)
                                entry_x8[0x18] = 1
                                entry_x8[0x19] = x9_13
                                entry_x8[0x1a] = 0
                                int32_t x9_14 = *(arg1 + 0x2c)
                                entry_x8[0x1c] = 1
                                entry_x8[0x1d] = x9_14
                                entry_x8[0x1e] = 0
                                int32_t x9_15 = *(arg1 + 0x30)
                                entry_x8[0x20] = 1
                                entry_x8[0x21] = x9_15
                                entry_x8[0x22] = 0
                                int32_t x9_16 = *(arg1 + 0x34)
                                entry_x8[0x26] = 0
                                entry_x8[0x24] = 1
                                entry_x8[0x25] = x9_16
                                int32_t x9_17 = *(arg1 + 0x3c)
                                
                                if (x9_17 == 0)
                                    *(entry_x8 + 0xa0) = 0
                                    entry_x8[0x2a] = 0
                                else
                                    entry_x8[0x28] = 1
                                    entry_x8[0x29] = x9_17
                                    entry_x8[0x2a] = 0
                                    result = ClearReferenceCards(&entry_x8[0x2c])
                                    int32_t x22_1 = *(arg1 + 0x3c)
                                    
                                    if (*(arg1 + 0x58) == 3 && x22_1 == 0xf3a)
                                        entry_x8[0x2c] = *(arg1 + 0x5c)
                                    label_b41e94:
                                        
                                        if (*(GetClient() + 0x5068) == 0)
                                            result = DomDefGet(zx.q(x22_1), 0x18)
                                            
                                            if ((zx.d(*(result + 0xcd)) & 1) != 0)
                                                entry_x8[0x2c] = *(arg1 + 0x5c)
                                        else
                                            result =
                                                DomDefGet(zx.q(x22_1), zx.q(*(ActiveGame() + 0x30)))
                                            
                                            if ((zx.d(*(result + 0xcd)) & 1) != 0)
                                                entry_x8[0x2c] = *(arg1 + 0x5c)
                                    else if (x22_1 != 0)
                                        goto label_b41e94
                                    
                                    if (*(arg1 + 0x3c) == 0x121a)
                                        entry_x8[0x2c] = *(arg1 + 0x5c)
                                
                                int32_t x8_45 = *(arg1 + 0x40)
                                
                                if (x8_45 == 0)
                                    *(entry_x8 + 0xe8) = 0
                                    entry_x8[0x3c] = 0
                                else
                                    entry_x8[0x3b] = x8_45
                                    entry_x8[0x3c] = 0
                                    entry_x8[0x3a] = 1
                                    result = ClearReferenceCards(&entry_x8[0x3e])
                                    int32_t x22_2 = *(arg1 + 0x40)
                                    
                                    if (*(arg1 + 0x58) == 3 && x22_2 == 0xf3a)
                                        entry_x8[0x3e] = *(arg1 + 0x5c)
                                    label_b41f30:
                                        
                                        if (*(GetClient() + 0x5068) == 0)
                                            result = DomDefGet(zx.q(x22_2), 0x18)
                                            
                                            if ((zx.d(*(result + 0xcd)) & 1) != 0)
                                                entry_x8[0x3e] = *(arg1 + 0x60)
                                        else
                                            result =
                                                DomDefGet(zx.q(x22_2), zx.q(*(ActiveGame() + 0x30)))
                                            
                                            if ((zx.d(*(result + 0xcd)) & 1) != 0)
                                                entry_x8[0x3e] = *(arg1 + 0x60)
                                    else if (x22_2 != 0)
                                        goto label_b41f30
                                    
                                    if (*(arg1 + 0x40) == 0x121a)
                                        entry_x8[0x3e] = *(arg1 + 0x60)
                                
                                int32_t x8_53 = *(arg1 + 0x44)
                                
                                if (x8_53 == 0)
                                    *(entry_x8 + 0x130) = 0
                                    entry_x8[0x4e] = 0
                                else
                                    entry_x8[0x4d] = x8_53
                                    entry_x8[0x4e] = 0
                                    entry_x8[0x4c] = 1
                                    result = ClearReferenceCards(&entry_x8[0x50])
                                    int32_t x22_3 = *(arg1 + 0x44)
                                    
                                    if (*(arg1 + 0x58) == 3 && x22_3 == 0xf3a)
                                        entry_x8[0x50] = *(arg1 + 0x5c)
                                    label_b41fd0:
                                        
                                        if (*(GetClient() + 0x5068) == 0)
                                            result = DomDefGet(zx.q(x22_3), 0x18)
                                            
                                            if ((zx.d(*(result + 0xcd)) & 1) != 0)
                                                entry_x8[0x50] = *(arg1 + 0x64)
                                        else
                                            result =
                                                DomDefGet(zx.q(x22_3), zx.q(*(ActiveGame() + 0x30)))
                                            
                                            if ((zx.d(*(result + 0xcd)) & 1) != 0)
                                                entry_x8[0x50] = *(arg1 + 0x64)
                                    else if (x22_3 != 0)
                                        goto label_b41fd0
                                    
                                    if (*(arg1 + 0x44) == 0x121a)
                                        entry_x8[0x50] = *(arg1 + 0x64)
                                
                                int32_t x8_61 = *(arg1 + 0x48)
                                
                                if (x8_61 == 0)
                                    *(entry_x8 + 0x178) = 0
                                    entry_x8[0x60] = 0
                                else
                                    entry_x8[0x5f] = x8_61
                                    entry_x8[0x60] = 0
                                    entry_x8[0x5e] = 1
                                    result = ClearReferenceCards(&entry_x8[0x62])
                                    int32_t x22_4 = *(arg1 + 0x48)
                                    
                                    if (*(arg1 + 0x58) == 3 && x22_4 == 0xf3a)
                                        entry_x8[0x62] = *(arg1 + 0x5c)
                                    label_b42070:
                                        
                                        if (*(GetClient() + 0x5068) == 0)
                                            result = DomDefGet(zx.q(x22_4), 0x18)
                                            
                                            if ((zx.d(*(result + 0xcd)) & 1) != 0)
                                                entry_x8[0x62] = *(arg1 + 0x68)
                                        else
                                            result =
                                                DomDefGet(zx.q(x22_4), zx.q(*(ActiveGame() + 0x30)))
                                            
                                            if ((zx.d(*(result + 0xcd)) & 1) != 0)
                                                entry_x8[0x62] = *(arg1 + 0x68)
                                    else if (x22_4 != 0)
                                        goto label_b42070
                                    
                                    if (*(arg1 + 0x48) == 0x121a)
                                        entry_x8[0x62] = *(arg1 + 0x68)
                                
                                uint64_t x8_70 = zx.q(*(arg1 + 0x58) - 1)
                                int32_t x8_81
                                
                                if (x8_70.d u<= 5)
                                    switch (x8_70)
                                        case 0
                                            int32_t x8_71 = *(arg1 + 0x5c)
                                            entry_x8[0x70] = 1
                                            entry_x8[0x71] = x8_71
                                            entry_x8[0x72] = 0
                                        case 1
                                            int32_t x8_77 = *(arg1 + 0x5c)
                                            entry_x8[0x76] = 0
                                            entry_x8[0x74] = 1
                                            entry_x8[0x75] = x8_77
                                            int32_t x8_78 = *(arg1 + 0x60)
                                            entry_x8[0x78] = 1
                                            entry_x8[0x7a] = 0
                                            entry_x8[0x79] = x8_78
                                            int32_t x8_79 = *(arg1 + 0x64)
                                            entry_x8[0x7c] = 1
                                            entry_x8[0x7d] = x8_79
                                            entry_x8[0x7e] = 0
                                        case 3
                                            int32_t x8_80 = *(arg1 + 0x5c)
                                            entry_x8[0x84] = 1
                                            entry_x8[0x85] = x8_80
                                            entry_x8[0x86] = 0
                                        case 4
                                            x8_81 = *(arg1 + 0x5c)
                                        label_b421b0:
                                            entry_x8[0xcd] = x8_81
                                            entry_x8[0xcc] = 1
                                            entry_x8[0xce] = 0
                                        case 5
                                            x8_81 = *(arg1 + 0x60)
                                            goto label_b421b0
                                return result
                            case 1, 2
                                goto label_b41cf4
                            case 3, 4
                                x8_35 = 3
                            label_b41cf4:
                                entry_x8[0x276] = x8_35
                                entry_x8[0x277] = 0xffffffff
                                *(entry_x8 + 0x9e0) = 0xa00000000
                                uint64_t x8_36 = zx.q(*(arg1 + 0x54))
                                
                                if (x8_36.d u<= 0x18)
                                    int32_t x8_37 = 2
                                    
                                    switch (x8_36)
                                        case 1, 2
                                            goto label_b41dac
                                        case 3, 4
                                            x8_37 = 3
                                        label_b41dac:
                                            entry_x8[0x27a] = x8_37
                                            entry_x8[0x27b] = 0xffffffff
                                            *(entry_x8 + 0x9f0) = 0xa00000000
                                        case 5, 6
                                            x8_37 = 4
                                            goto label_b41dac
                                        case 7
                                            x8_37 = 5
                                            goto label_b41dac
                                        case 8, 9
                                            x8_37 = 6
                                            goto label_b41dac
                                        case 0xa, 0xb
                                            x8_37 = 7
                                            goto label_b41dac
                                        case 0xc, 0xd
                                            x8_37 = 8
                                            goto label_b41dac
                                        case 0xe
                                            x8_37 = 9
                                            goto label_b41dac
                                        case 0xf, 0x10
                                            x8_37 = 0xa
                                            goto label_b41dac
                                        case 0x11
                                            x8_37 = 0xb
                                            goto label_b41dac
                                        case 0x12
                                            x8_37 = 0xc
                                            goto label_b41dac
                                        case 0x13
                                            x8_37 = 0xd
                                            goto label_b41dac
                                        case 0x14
                                            x8_37 = 0xe
                                            goto label_b41dac
                                        case 0x15
                                            x8_37 = 0xf
                                            goto label_b41dac
                                        case 0x16
                                            x8_37 = 0x10
                                            goto label_b41dac
                                        case 0x17
                                            x8_37 = 0x11
                                            goto label_b41dac
                                        case 0x18
                                            x8_37 = 0x12
                                            goto label_b41dac
                                    
                                    goto label_b41dc0
                            case 5, 6
                                x8_35 = 4
                                goto label_b41cf4
                            case 7
                                x8_35 = 5
                                goto label_b41cf4
                            case 8, 9
                                x8_35 = 6
                                goto label_b41cf4
                            case 0xa, 0xb
                                x8_35 = 7
                                goto label_b41cf4
                            case 0xc, 0xd
                                x8_35 = 8
                                goto label_b41cf4
                            case 0xe
                                x8_35 = 9
                                goto label_b41cf4
                            case 0xf, 0x10
                                x8_35 = 0xa
                                goto label_b41cf4
                            case 0x11
                                x8_35 = 0xb
                                goto label_b41cf4
                            case 0x12
                                x8_35 = 0xc
                                goto label_b41cf4
                            case 0x13
                                x8_35 = 0xd
                                goto label_b41cf4
                            case 0x14
                                x8_35 = 0xe
                                goto label_b41cf4
                            case 0x15
                                x8_35 = 0xf
                                goto label_b41cf4
                            case 0x16
                                x8_35 = 0x10
                                goto label_b41cf4
                            case 0x17
                                x8_35 = 0x11
                                goto label_b41cf4
                            case 0x18
                                x8_35 = 0x12
                                goto label_b41cf4
                else
                    int32_t x9_3 = *(arg1 + 0x50)
                    
                    if (x9_3 u<= 0x18)
                        int32_t x9_5
                        
                        if (x9_3 == 0xe)
                            x9_5 = 1
                        label_b41a40:
                            entry_x8[0x300] = x9_5
                            __builtin_memset(&entry_x8[0x272], 0, 0x200)
                            
                            if (x8 u<= 0x18)
                                x8_2 = 2
                                
                                switch (x8)
                                    case 0
                                        goto label_b41dc0
                                    case 1, 2
                                        goto label_b41c3c
                                    case 3, 4
                                        x8_2 = 3
                                        goto label_b41c3c
                                    case 5, 6
                                        x8_2 = 4
                                        goto label_b41c3c
                                    case 7
                                        x8_2 = 5
                                        goto label_b41c3c
                                    case 8, 9
                                        x8_2 = 6
                                        goto label_b41c3c
                                    case 0xa, 0xb
                                        x8_2 = 7
                                        goto label_b41c3c
                                    case 0xc, 0xd
                                        x8_2 = 8
                                        goto label_b41c3c
                                    case 0xf, 0x10
                                        x8_2 = 0xa
                                        goto label_b41c3c
                                    case 0x11
                                        x8_2 = 0xb
                                        goto label_b41c3c
                                    case 0x12
                                        x8_2 = 0xc
                                        goto label_b41c3c
                                    case 0x13
                                        x8_2 = 0xd
                                        goto label_b41c3c
                                    case 0x14
                                        x8_2 = 0xe
                                        goto label_b41c3c
                                    case 0x15
                                        x8_2 = 0xf
                                        goto label_b41c3c
                                    case 0x16
                                        x8_2 = 0x10
                                        goto label_b41c3c
                                    case 0x17
                                        x8_2 = 0x11
                                        goto label_b41c3c
                                    case 0x18
                                        x8_2 = 0x12
                                        goto label_b41c3c
                        else
                            int64_t x9_4 = sx.q(*(arg1 + 0x54))
                            
                            if (x9_4.d u< 0x19)
                                x9_5 = *(&data_801d40 + (x9_4 << 2))
                                goto label_b41a40

pthread_kill(pthread_self(), 6)
return GetOwnedExpansionEditions(XNoReturn()) __tailcall
