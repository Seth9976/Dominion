// 函数: _Z16RollFlavorThemesR9RandomPCGRK13CampaignSetupP11FlavorTheme
// 地址: 0xa56264
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20

if (*arg2 == 0)
    int64_t x8_5 = *(sx.q(*(arg2 + 4)) * 0xa8 + 0x1135104)
    *arg3 = x8_5
    
    if (x8_5 u>> 0x20 != 0)
        x20 = 2
    else
        x20 = 1
else
    if (*(arg2 + 0x5018) == 0)
        return GetFlavorThemes(arg2 + 0x5010, arg3) __tailcall
    
    int64_t var_40 = 0
    int64_t var_38 = 0
    int32_t x0_1 = GetFlavorThemes(arg2 + 0x5010, &var_40)
    int32_t var_50
    int32_t var_4c[0x3]
    int32_t x22_1
    
    if (x0_1 s< 1)
        x20 = 0
        x22_1 = 0
    else
        int64_t i = 0
        int32_t x1_1 = 0
        x20 = 0
        
        do
            x22_1 = *(&var_40 + (i << 2))
            
            if (x20.d s<= 0)
                (&var_50)[sx.q(x20.d)] = x22_1
                x20 = zx.q(x20.d + 1)
            label_a562d8:
                x22_1 = x1_1
            else if (var_50 != x22_1)
                uint64_t x12_3 = zx.q(x20.d)
                int64_t x13_1 = 0
                int32_t x15_1
                
                do
                    if (x12_3 - 1 == x13_1)
                        x20 = zx.q(x20.d + 1)
                        (&var_50)[x12_3] = x22_1
                        goto label_a562d8_1
                    
                    x15_1 = var_4c[x13_1]
                    x13_1 += 1
                while (x15_1 != x22_1)
                
                if (x13_1 u>= x12_3)
                label_a562d8_1:
                    x22_1 = x1_1
            
            i += 1
            x1_1 = x22_1
        while (i != zx.q(x0_1))
    
    int32_t x0_5 = GetFlavorThemes(arg2 + 0x5018, &var_38)
    int32_t x12_5
    
    if (x0_5 s<= 0)
        x12_5 = x22_1
    else
        int64_t i_1 = 0
        
        do
            x12_5 = *(&var_40 + (i_1 << 2) + 8)
            
            if (x20.d s<= 0)
                (&var_50)[sx.q(x20.d)] = x12_5
                x20 = zx.q(x20.d + 1)
            label_a563d8:
                x12_5 = x22_1
            else if (var_50 != x12_5)
                uint64_t x14_5 = zx.q(x20.d)
                int64_t x15_3 = 0
                int32_t x17_2
                
                do
                    if (x14_5 - 1 == x15_3)
                        x20 = zx.q(x20.d + 1)
                        (&var_50)[x14_5] = x12_5
                        goto label_a563d8_1
                    
                    x17_2 = var_4c[x15_3]
                    x15_3 += 1
                while (x17_2 != x12_5)
                
                if (x15_3 u>= x14_5)
                label_a563d8_1:
                    x12_5 = x22_1
            
            i_1 += 1
            x22_1 = x12_5
        while (i_1 != zx.q(x0_5))
    
    if (x20.d s< 3)
        memcpy(arg3, &var_50, zx.q(x20.d) << 0x20 s>> 0x1e)
    else if (x20.d == 4)
        *arg3 = var_40.d
        *(arg3 + 4) = var_38.d
        x20 = 2
    else
        int32_t x8_10
        
        if (x12_5 == 0)
            int32_t x8_11 = var_40.d
            
            if (x8_11 == 0)
                int32_t x8_12 = var_40:4.d
                int32_t x8_13
                int32_t i_2
                int32_t x9_7
                uint64_t x9_8
                
                if (x8_12 == 0)
                    x8_13 = var_38.d
                    
                    if (x8_13 == 0)
                        i_2 = var_38:4.d
                        x20 = 0
                        
                        if (i_2 != 0)
                            x9_8 = 0
                        label_a5654c:
                            x20 = zx.q(x20.d + 1)
                            *(arg3 + (x9_8 << 2)) = i_2
                        label_a56554:
                            
                            if (x20.d == 2)
                                x20 = 2
                    else
                        x20 = 0
                        x9_7 = 1
                    label_a56508:
                        *(arg3 + (x20 << 2)) = x8_13
                        x20 = zx.q(x9_7)
                    label_a56510:
                        
                        if (x20.d != 2)
                            goto label_a56520
                        
                        x20 = 2
                else
                    *arg3 = x8_12
                label_a564ec:
                    x8_13 = var_38.d
                    
                    if (x8_13 != 0)
                        x20 = 1
                        
                        if (*arg3 == x8_13)
                            goto label_a56510
                        
                        x9_7 = 2
                        goto label_a56508
                    
                    x20 = 1
                label_a56520:
                    i_2 = var_38:4.d
                    
                    if (i_2 != 0)
                        x9_8 = zx.q(x20.d)
                        FlavorTheme* x10_2 = arg3
                        uint64_t x11_2 = x9_8
                        
                        while (*x10_2 != i_2)
                            uint64_t temp0_1 = x11_2
                            x11_2 -= 1
                            x10_2 += 4
                            
                            if (temp0_1 == 1)
                                goto label_a5654c
                        
                        goto label_a56554
            else
                *arg3 = x8_11
            label_a564c8:
                x8_10 = var_40:4.d
                
                if (x8_10 == 0 || *arg3 == x8_10)
                    goto label_a564ec
                
                *(arg3 + 4) = x8_10
                x20 = 2
        else
            *arg3 = x12_5
            x8_10 = var_40.d
            
            if (x8_10 == 0 || *arg3 == x8_10)
                goto label_a564c8
            
            *(arg3 + 4) = x8_10
            x20 = 2

return zx.q(x20.d)
