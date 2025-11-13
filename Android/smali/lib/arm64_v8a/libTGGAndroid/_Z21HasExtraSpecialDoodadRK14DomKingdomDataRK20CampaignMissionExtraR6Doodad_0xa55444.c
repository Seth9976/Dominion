// 函数: _Z21HasExtraSpecialDoodadRK14DomKingdomDataRK20CampaignMissionExtraR6Doodad
// 地址: 0xa55444
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9_14 = *arg2
int32_t x8 = 0
uint64_t x10 = zx.q(x9_14 - 0xdb1)

if (x10.d u<= 0x15)
    switch (x10)
        case 0, 1
            int32_t x8_1 = *(arg2 + 4)
            
            if (x8_1 s> 0x910)
                uint64_t x9_1 = zx.q(x8_1 - 0x911)
                
                if (x9_1.d u<= 0x1d)
                    switch (x9_1)
                        case 0
                            *arg3 = 0x48
                            x8 = 1
                        case 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 
                                0x13, 0x14, 0x15, 0x16, 0x17, 0x1b, 0x1c
                            goto label_a555a4
                        case 0x12
                            *arg3 = 0x4b
                            x8 = 1
                        case 0x18, 0x19, 0x1a
                        label_a5558c:
                            *arg3 = 0x1a
                            x8 = 1
                        case 0x1d
                            *arg3 = 0x57
                            x8 = 1
                else
                    if (x8_1 - 0xd28 u<= 7)
                        int32_t x9_3 = 1 << (x8_1 - 0xd28)
                        int32_t x8_4
                        
                        if ((x9_3 & 0x70) == 0)
                            if ((x9_3 & 0x89) == 0)
                                goto label_a55628
                            
                            x8_4 = 0x5f
                            goto label_a555a0
                        
                        x8_4 = 8
                    label_a555a0:
                        *arg3 = x8_4
                    label_a555a4:
                        int32_t x8_5 = *(arg2 + 4)
                        
                        if (*arg1 == x8_5 || *(arg1 + 4) == x8_5 || *(arg1 + 8) == x8_5
                                || *(arg1 + 0xc) == x8_5 || *(arg1 + 0x10) == x8_5
                                || *(arg1 + 0x14) == x8_5 || *(arg1 + 0x18) == x8_5
                                || *(arg1 + 0x1c) == x8_5 || *(arg1 + 0x20) == x8_5
                                || *(arg1 + 0x24) == x8_5)
                            return 0
                        
                        goto label_a5558c
                    
                label_a55628:
                    
                    if (x8_1 != 0xf46)
                        goto label_a555a4
                    
                    *arg3 = 0x52
                    x8 = 1
            else if (x8_1 - 0x105 u< 2)
                *arg3 = 0x3b
                x8 = 1
            else if (x8_1 == 0x100)
                *arg3 = 0x18
                x8 = 1
            else
                if (x8_1 != 0x500)
                    goto label_a555a4
                
                *arg3 = 0x34
                x8 = 1
        case 4, 5
        label_a55560:
            *arg3 = 0x21
            x8 = 1
        case 7, 9
            int32_t x8_3 = *(arg2 + 4)
            
            if (x8_3 s> 0x102)
                if (x8_3 == 0x103)
                    *arg3 = 0x20
                    x8 = 1
                else
                    if (x8_3 != 0x923)
                    label_a55558:
                        
                        if (x9_14 != 0xdba)
                            return 0
                        
                        goto label_a55560
                    
                    *arg3 = 0x24
                    x8 = 1
            else if (x8_3 == 0x100)
                *arg3 = 0x1c
                x8 = 1
            else
                if (x8_3 != 0x101)
                    goto label_a55558
                
                *arg3 = 0x65
                x8 = 1
        case 0xa, 0xb
            *arg3 = 0x2b
            x8 = 1
        case 0xd
            *arg3 = 0x3d
            x8 = 1
        case 0xe
            *arg3 = 0x55
            x8 = 1
        case 0xf
            *arg3 = 0x1f
            x8 = 1
        case 0x10, 0x15
            *arg3 = 0x1b
            x8 = 1

return zx.q(x8)
