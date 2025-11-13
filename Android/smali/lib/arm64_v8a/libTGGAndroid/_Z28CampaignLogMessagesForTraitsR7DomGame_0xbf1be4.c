// 函数: _Z28CampaignLogMessagesForTraitsR7DomGame
// 地址: 0xbf1be4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x24 = 0
void* __offset(DomGame, 0xd80) x25 = arg1 + 0xd80
void* __offset(DomGame, 0x1508) x27 = arg1 + 0x1508

while (true)
    void* x28_1 = arg1 + x24 * 0x3c
    int32_t i = *(x28_1 + 0xd7c)
    
    if (i == 0)
        break
    
    int32_t x23_1 = (i + 0x170000) s% 0x3e5
    int32_t* x8_2 = *(&data_1838a20 + (sx.q(x23_1) << 3))
    
    if (x8_2 != 0)
        while (*x8_2 != i || x8_2[1] != 0x17)
            x8_2 = *(x8_2 + 0x10)
            
            if (x8_2 == 0)
                goto label_bf1c7c
        
        if ((zx.d(*(*(x8_2 + 8) + 0xcd)) & 1) != 0)
        label_bf1e18:
            int64_t x23_4 = 0
            void* __offset(DomGame, 0xd80) x21_1 = x25
            
            while (true)
                int32_t x8_17 = *x21_1
                int64_t x6_1
                
                if (x8_17 == 0)
                    x6_1 = neg.q(x23_4)
                    
                    if (x6_1.d u< 2)
                        break
                    
                    if (*(arg1 + 0x150c) - 3 u< 4)
                        break
                else
                    if (x8_17 == 0x106 && *(arg1 + 0x150c) - 3 u>= 4 && zx.d(*x27) == 0)
                        uint64_t x2_3
                        
                        if (*(arg1 + 0x19d4) == 0xffffffff)
                            x2_3 = zx.q(*(arg1 + 0x19d8))
                        else
                            x2_3 = 0xffffffff
                        
                        int32_t var_80_1 = 0
                        int32_t var_88_1 = 0
                        int32_t var_90_1 = 0
                        DomAddLogEvent(arg1, 0xffffffff, x2_3, 0x49, 0, x21_1, 1, 
                            zx.q(*(x28_1 + 0xd7c)))
                    
                    x23_4 -= 1
                    x21_1 += 4
                    
                    if (x23_4 == -0xe)
                        x6_1 = 0xe
                        
                        if (*(arg1 + 0x150c) - 3 u< 4)
                            break
                    else
                        continue
                
                if (zx.d(*x27) != 0)
                    break
                
                uint64_t x2_4
                
                if (*(arg1 + 0x19d4) == 0xffffffff)
                    x2_4 = zx.q(*(arg1 + 0x19d8))
                else
                    x2_4 = 0xffffffff
                
                int32_t var_80_2 = 0
                int32_t var_88_2 = 0
                int32_t var_90_2 = 0
                DomAddLogEvent(arg1, 0xffffffff, x2_4, 0x49, 0, arg1 + x24 * 0x3c + 0xd80, x6_1, 
                    zx.q(*(x28_1 + 0xd7c)))
                break
    else
    label_bf1c7c:
        int32_t var_64
        int64_t x0_1 = DomCardExp(zx.q(i), &var_64)
        int64_t var_70
        
        if (DomExpGet(x0_1, &var_70) != 0)
            int64_t x8_3 = var_70
            int32_t x10_2 = var_64
            
            while (true)
                int64_t x10_3 = sx.q(x10_2)
                
                if (*(x8_3 + muls.dp.d(x10_2, 0x780) + 4) s<= 0x17
                        && *(x8_3 + x10_3 * 0x780 + 8) s> 0x17)
                    break
                
                int32_t x11_6 = *(x8_3 + x10_3 * 0x780 + 0xc)
                
                if (x11_6 == 0)
                    *(x8_3 + x10_3 * 0x780 + 0xc0)
                    XTrace("can't find card %d cardcur %d version %d")
                    break
                
                x10_2 = x11_6 + neg.d(x0_1.d << 8)
                var_64 = x10_2
        
        int32_t* x0_3 = malloc(0x18)
        int64_t x8_7 = sx.q(x23_1) << 3
        int64_t x9_8 = *(&data_1838a20 + x8_7)
        *x0_3 = i
        x0_3[1] = 0x17
        *(x0_3 + 0x10) = x9_8
        *(&data_1838a20 + x8_7) = x0_3
        int64_t x0_5 = DomCardExp(zx.q(i), &var_64)
        int64_t x26_1 = sx.q(var_64)
        
        if (DomExpGet(x0_5, &var_70).d == 0)
            uint64_t x8_13 = *EXP_BASE_DEFS
            *(x0_3 + 8) = x8_13
            
            if ((zx.d(*(x8_13 + 0xcd)) & 1) != 0)
                goto label_bf1e18
        else
            int64_t x8_8 = var_70
            int32_t x10_4 = var_64
            int64_t x10_5
            
            while (true)
                x10_5 = sx.q(x10_4)
                
                if (*(x8_8 + muls.dp.d(x10_4, 0x780) + 4) s<= 0x17
                        && *(x8_8 + x10_5 * 0x780 + 8) s>= 0x18)
                    void* x8_15 = x8_8 + x10_5 * 0x780
                    *(x0_3 + 8) = x8_15
                    
                    if ((zx.d(*(x8_15 + 0xcd)) & 1) == 0)
                        goto label_bf1c24
                    
                    goto label_bf1e18
                
                int32_t x11_12 = *(x8_8 + x10_5 * 0x780 + 0xc)
                
                if (x11_12 == 0)
                    break
                
                x10_4 = x11_12 + neg.d(x0_5.d << 8)
                var_64 = x10_4
            
            *(x8_8 + x10_5 * 0x780 + 0xc0)
            XTrace("can't find card %d cardcur %d version %d")
            void* x8_11 = var_70 + x26_1 * 0x780
            *(x0_3 + 8) = x8_11
            
            if ((zx.d(*(x8_11 + 0xcd)) & 1) != 0)
                goto label_bf1e18
    
label_bf1c24:
    x24 += 1
    x25 += 0x3c
    
    if (x24 == 4)
        break
