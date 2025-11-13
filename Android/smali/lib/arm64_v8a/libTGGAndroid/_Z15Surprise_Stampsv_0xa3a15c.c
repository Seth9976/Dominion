// 函数: _Z15Surprise_Stampsv
// 地址: 0xa3a15c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x22 = *(gCampaignSetup + 0x19a0)
int64_t x23 = sx.q(*(gCampaignSetup + 0x19a8))
int32_t x0 = RandomCardStamp(false)
int32_t x20 = *(x22 + (x23 << 0xb) + 0xc)
int32_t x19 = x0
int32_t var_88
int32_t x25

if (x20 == 0)
    x25 = 0
label_a3a380:
    int32_t fp_1 = x25
    
    while (true)
        struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Surprise_Stamps()::$_46, std::__ndk1::allocator<Surprise_Stamps()::$_46>, bool (DomCardEnum)>::VTable
            * const var_c0 = &_vtable_for_std::__ndk1::__function::__func<Surprise_Stamps()::$_46, std::__ndk1::allocator<Surprise_Stamps()::$_46>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
        int32_t var_b8_1 = x19
        struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Surprise_Stamps()::$_46, std::__ndk1::allocator<Surprise_Stamps()::$_46>, bool (DomCardEnum)>::VTable
            * const* var_a0_1 = &var_c0
        int32_t x0_22
        char* x1_12
        x0_22, x1_12 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_c0, 0)
        
        if (&var_c0 == var_a0_1)
            x1_12 = (*var_a0_1)->vFunc_4(var_a0_1)
        else if (var_a0_1 != 0)
            x1_12 = (*var_a0_1)->j_operator delete(var_a0_1)
        
        if (x0_22 == 0)
            break
        
        if ((CampaignKingdomAdd(zx.q(x0_22), x1_12, 0, 0) & 1) != 0)
            (&var_88)[sx.q(x25)] = x0_22
            x25 += 1
            bool cond:0_1 = fp_1 s>= 2
            fp_1 += 1
            
            if (cond:0_1)
                break
        else if (fp_1 - 1 s>= 2)
            break
else
    int32_t x20_1
    
    if ((CanDoCardStamp(zx.q(x19), zx.q(x20)) & 1) != 0)
        x25 = 1
        var_88 = x20
        x20_1 = *(x22 + (x23 << 0xb) + 0x10)
        
        if (x20_1 != 0)
            goto label_a3a1e8
        
        goto label_a3a380
    
    x25 = 0
    x20_1 = *(x22 + (x23 << 0xb) + 0x10)
    
    if (x20_1 == 0)
        goto label_a3a380
    
label_a3a1e8:
    
    if ((CanDoCardStamp(zx.q(x19), zx.q(x20_1)) & 1) != 0)
        (&var_88)[zx.q(x25)] = x20_1
        x25 += 1
    
    int32_t x20_2 = *(x22 + (x23 << 0xb) + 0x14)
    
    if (x20_2 == 0)
        goto label_a3a380
    
    if ((CanDoCardStamp(zx.q(x19), zx.q(x20_2)) & 1) != 0)
        (&var_88)[zx.q(x25)] = x20_2
        x25 += 1
    
    int32_t x20_3 = *(x22 + (x23 << 0xb) + 0x18)
    
    if (x20_3 != 0)
        if ((CanDoCardStamp(zx.q(x19), zx.q(x20_3)) & 1) != 0)
            (&var_88)[zx.q(x25)] = x20_3
            x25 += 1
        
        int32_t x20_4 = *(x22 + (x23 << 0xb) + 0x1c)
        
        if (x20_4 != 0)
            if ((CanDoCardStamp(zx.q(x19), zx.q(x20_4)) & 1) != 0)
                (&var_88)[zx.q(x25)] = x20_4
                x25 += 1
            
            int32_t x20_5 = *(x22 + (x23 << 0xb) + 0x20)
            
            if (x20_5 != 0)
                if ((CanDoCardStamp(zx.q(x19), zx.q(x20_5)) & 1) != 0)
                    (&var_88)[zx.q(x25)] = x20_5
                    x25 += 1
                
                int32_t x20_6 = *(x22 + (x23 << 0xb) + 0x24)
                
                if (x20_6 != 0)
                    if ((CanDoCardStamp(zx.q(x19), zx.q(x20_6)) & 1) != 0)
                        (&var_88)[zx.q(x25)] = x20_6
                        x25 += 1
                    
                    int32_t x20_7 = *(x22 + (x23 << 0xb) + 0x28)
                    
                    if (x20_7 != 0)
                        if ((CanDoCardStamp(zx.q(x19), zx.q(x20_7)) & 1) != 0)
                            (&var_88)[zx.q(x25)] = x20_7
                            x25 += 1
                        
                        int32_t x20_8 = *(x22 + (x23 << 0xb) + 0x2c)
                        
                        if (x20_8 != 0)
                            if ((CanDoCardStamp(zx.q(x19), zx.q(x20_8)) & 1) != 0)
                                (&var_88)[zx.q(x25)] = x20_8
                                x25 += 1
                            
                            int32_t x20_9 = *(x22 + (x23 << 0xb) + 0x30)
                            
                            if (x20_9 != 0 && (CanDoCardStamp(zx.q(x19), zx.q(x20_9)) & 1) != 0)
                                (&var_88)[zx.q(x25)] = x20_9
                                x25 += 1
    
    if (x25 s<= 2)
        goto label_a3a380

int32_t x20_11

if (x25 != 3)
    int32_t x0_26 = RandomCardStamp(true)
    x20_11 = *(x22 + (x23 << 0xb) + 0xc)
    x19 = x0_26
    
    if (x20_11 != 0)
        int32_t x21_2
        
        if ((CanDoCardStamp(zx.q(x19), zx.q(x20_11)) & 1) == 0)
            x20_11 = 0
            x21_2 = *(x22 + (x23 << 0xb) + 0x10)
            
            if (x21_2 != 0)
            label_a3a478:
                
                if ((CanDoCardStamp(zx.q(x19), zx.q(x21_2)) & 1) != 0)
                    (&var_88)[zx.q(x20_11)] = x21_2
                    x20_11 += 1
                
                int32_t x21_3 = *(x22 + (x23 << 0xb) + 0x14)
                
                if (x21_3 != 0)
                    if ((CanDoCardStamp(zx.q(x19), zx.q(x21_3)) & 1) != 0)
                        (&var_88)[zx.q(x20_11)] = x21_3
                        x20_11 += 1
                    
                    int32_t x21_4 = *(x22 + (x23 << 0xb) + 0x18)
                    
                    if (x21_4 != 0)
                        if ((CanDoCardStamp(zx.q(x19), zx.q(x21_4)) & 1) != 0)
                            (&var_88)[zx.q(x20_11)] = x21_4
                            x20_11 += 1
                        
                        int32_t x21_5 = *(x22 + (x23 << 0xb) + 0x1c)
                        
                        if (x21_5 != 0)
                            if ((CanDoCardStamp(zx.q(x19), zx.q(x21_5)) & 1) != 0)
                                (&var_88)[zx.q(x20_11)] = x21_5
                                x20_11 += 1
                            
                            int32_t x21_6 = *(x22 + (x23 << 0xb) + 0x20)
                            
                            if (x21_6 != 0)
                                if ((CanDoCardStamp(zx.q(x19), zx.q(x21_6)) & 1) != 0)
                                    (&var_88)[zx.q(x20_11)] = x21_6
                                    x20_11 += 1
                                
                                int32_t x21_7 = *(x22 + (x23 << 0xb) + 0x24)
                                
                                if (x21_7 != 0)
                                    if ((CanDoCardStamp(zx.q(x19), zx.q(x21_7)) & 1) != 0)
                                        (&var_88)[zx.q(x20_11)] = x21_7
                                        x20_11 += 1
                                    
                                    int32_t x21_8 = *(x22 + (x23 << 0xb) + 0x28)
                                    
                                    if (x21_8 != 0)
                                        if ((CanDoCardStamp(zx.q(x19), zx.q(x21_8)) & 1) != 0)
                                            (&var_88)[zx.q(x20_11)] = x21_8
                                            x20_11 += 1
                                        
                                        int32_t x21_9 = *(x22 + (x23 << 0xb) + 0x2c)
                                        
                                        if (x21_9 != 0)
                                            if ((CanDoCardStamp(zx.q(x19), zx.q(x21_9)) & 1) != 0)
                                                (&var_88)[zx.q(x20_11)] = x21_9
                                                x20_11 += 1
                                            
                                            int32_t x21_10 = *(x22 + (x23 << 0xb) + 0x30)
                                            
                                            if (x21_10 != 0 && (
                                                    CanDoCardStamp(zx.q(x19), zx.q(x21_10)) & 1) != 0)
                                                (&var_88)[zx.q(x20_11)] = x21_10
                                                x20_11 += 1
        else
            var_88 = x20_11
            x20_11 = 1
            x21_2 = *(x22 + (x23 << 0xb) + 0x10)
            
            if (x21_2 != 0)
                goto label_a3a478
else
    x20_11 = 3

ShuffleIntsN(gCampaignSetup, &var_88, x20_11, 3)
CampaignAddExtra(zx.q(x19), zx.q(var_88), 0xffffffff, 0, 0)
int32_t var_84
CampaignAddExtra(zx.q(x19), zx.q(var_84), 0xffffffff, 0, 0)
int32_t var_80
return CampaignAddExtra(zx.q(x19), zx.q(var_80), 0xffffffff, 0, 0)
