// 函数: _Z10IsInConfigRK14DomSetupConfig11DomCardEnum
// 地址: 0xbf35a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_84 = *arg1

if (x8_84 == 0)
label_bf36c0:
    int32_t x8_19 = *(arg1 + 0xa0)
    
    if (x8_19 != 1)
        if (x8_19 != 0)
            goto label_bf371c
        
    label_bf36d0:
        int64_t x8_20 = 0
        
        while (true)
            void* x10_1 = arg1 + x8_20
            int32_t x9_2 = *(x10_1 + 0x1c0)
            
            if (x9_2 == 1)
                if (*(x10_1 + 0x1c4) == arg2)
                    break
                
            label_bf36e4:
                x8_20 += 0x10
                
                if (x8_20 != 0x6b0)
                    continue
            else if (x9_2 != 0)
                goto label_bf36e4
            
            return 0
    else if (*(arg1 + 0xa4) != arg2)
    label_bf371c:
        
        if (*(arg1 + 0xb0) != arg2 && *(arg1 + 0xb4) != arg2 && *(arg1 + 0xb8) != arg2
                && *(arg1 + 0xbc) != arg2 && *(arg1 + 0xc0) != arg2 && *(arg1 + 0xc4) != arg2
                && *(arg1 + 0xc8) != arg2 && *(arg1 + 0xcc) != arg2 && *(arg1 + 0xd0) != arg2
                && *(arg1 + 0xd4) != arg2 && *(arg1 + 0xd8) != arg2 && *(arg1 + 0xdc) != arg2
                && *(arg1 + 0xe0) != arg2 && *(arg1 + 0xe4) != arg2)
            int32_t x8_36 = *(arg1 + 0xe8)
            
            if (x8_36 == 0)
                goto label_bf36d0
            
            if ((x8_36 != 1 || *(arg1 + 0xec) != arg2) && *(arg1 + 0xf8) != arg2
                    && *(arg1 + 0xfc) != arg2 && *(arg1 + 0x100) != arg2 && *(arg1 + 0x104) != arg2
                    && *(arg1 + 0x108) != arg2 && *(arg1 + 0x10c) != arg2
                    && *(arg1 + 0x110) != arg2 && *(arg1 + 0x114) != arg2
                    && *(arg1 + 0x118) != arg2 && *(arg1 + 0x11c) != arg2
                    && *(arg1 + 0x120) != arg2 && *(arg1 + 0x124) != arg2
                    && *(arg1 + 0x128) != arg2 && *(arg1 + 0x12c) != arg2)
                int32_t x8_52 = *(arg1 + 0x130)
                
                if (x8_52 == 0)
                    goto label_bf36d0
                
                if ((x8_52 != 1 || *(arg1 + 0x134) != arg2) && *(arg1 + 0x140) != arg2
                        && *(arg1 + 0x144) != arg2 && *(arg1 + 0x148) != arg2
                        && *(arg1 + 0x14c) != arg2 && *(arg1 + 0x150) != arg2
                        && *(arg1 + 0x154) != arg2 && *(arg1 + 0x158) != arg2
                        && *(arg1 + 0x15c) != arg2 && *(arg1 + 0x160) != arg2
                        && *(arg1 + 0x164) != arg2 && *(arg1 + 0x168) != arg2
                        && *(arg1 + 0x16c) != arg2 && *(arg1 + 0x170) != arg2
                        && *(arg1 + 0x174) != arg2)
                    int32_t x8_68 = *(arg1 + 0x178)
                    
                    if (x8_68 == 0)
                        goto label_bf36d0
                    
                    if ((x8_68 != 1 || *(arg1 + 0x17c) != arg2) && *(arg1 + 0x188) != arg2
                            && *(arg1 + 0x18c) != arg2 && *(arg1 + 0x190) != arg2
                            && *(arg1 + 0x194) != arg2 && *(arg1 + 0x198) != arg2
                            && *(arg1 + 0x19c) != arg2 && *(arg1 + 0x1a0) != arg2
                            && *(arg1 + 0x1a4) != arg2 && *(arg1 + 0x1a8) != arg2
                            && *(arg1 + 0x1ac) != arg2 && *(arg1 + 0x1b0) != arg2
                            && *(arg1 + 0x1b4) != arg2 && *(arg1 + 0x1b8) != arg2
                            && *(arg1 + 0x1bc) != arg2)
                        goto label_bf36d0
else if (x8_84 != 1 || *(arg1 + 4) != arg2)
    int32_t x8_1 = *(arg1 + 0x10)
    
    if (x8_1 != 1)
        if (x8_1 == 0)
            goto label_bf36c0
        
        goto label_bf35e4
    
    if (*(arg1 + 0x14) != arg2)
    label_bf35e4:
        int32_t x8_3 = *(arg1 + 0x20)
        
        if (x8_3 == 0)
            goto label_bf36c0
        
        if (x8_3 != 1 || *(arg1 + 0x24) != arg2)
            int32_t x8_5 = *(arg1 + 0x30)
            
            if (x8_5 == 0)
                goto label_bf36c0
            
            if (x8_5 != 1 || *(arg1 + 0x34) != arg2)
                int32_t x8_7 = *(arg1 + 0x40)
                
                if (x8_7 == 0)
                    goto label_bf36c0
                
                if (x8_7 != 1 || *(arg1 + 0x44) != arg2)
                    int32_t x8_9 = *(arg1 + 0x50)
                    
                    if (x8_9 == 0)
                        goto label_bf36c0
                    
                    if (x8_9 != 1 || *(arg1 + 0x54) != arg2)
                        int32_t x8_11 = *(arg1 + 0x60)
                        
                        if (x8_11 == 0)
                            goto label_bf36c0
                        
                        if (x8_11 != 1 || *(arg1 + 0x64) != arg2)
                            int32_t x8_13 = *(arg1 + 0x70)
                            
                            if (x8_13 == 0)
                                goto label_bf36c0
                            
                            if (x8_13 != 1 || *(arg1 + 0x74) != arg2)
                                int32_t x8_15 = *(arg1 + 0x80)
                                
                                if (x8_15 == 0)
                                    goto label_bf36c0
                                
                                if ((x8_15 != 1 || *(arg1 + 0x84) != arg2)
                                        && (*(arg1 + 0x90) != 1 || *(arg1 + 0x94) != arg2))
                                    goto label_bf36c0

return 1
