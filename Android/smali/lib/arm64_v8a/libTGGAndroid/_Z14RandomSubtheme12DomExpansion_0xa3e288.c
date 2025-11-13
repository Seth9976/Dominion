// 函数: _Z14RandomSubtheme12DomExpansion
// 地址: 0xa3e288
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*(gCampaignSetup + 0x19a8))
int32_t var_50[0x10]
int32_t x1

if (x9.d s<= 0)
    int32_t x10_1 = *((sx.q(arg1) - 3) * 0xa8 + 0x11352bc)
    int32_t x10_3
    
    if (x10_1 == 0)
        x1 = 0
        x10_3 = *((sx.q(arg1) - 3) * 0xa8 + 0x11352c0)
        
        if (x10_3 != 0)
            var_50[zx.q(x1)] = x10_3
            x1 += 1
    else
        x1 = 1
        var_50[0] = x10_1
        x10_3 = *((sx.q(arg1) - 3) * 0xa8 + 0x11352c0)
        
        if (x10_3 != 0)
            var_50[zx.q(x1)] = x10_3
            x1 += 1
    int32_t x10_5 = *((sx.q(arg1) - 3) * 0xa8 + 0x11352c4)
    
    if (x10_5 != 0)
        var_50[zx.q(x1)] = x10_5
        x1 += 1
    
    int32_t x10_7 = *((sx.q(arg1) - 3) * 0xa8 + 0x11352c8)
    
    if (x10_7 != 0)
        var_50[zx.q(x1)] = x10_7
        x1 += 1
    
    int32_t x10_9 = *((sx.q(arg1) - 3) * 0xa8 + 0x11352cc)
    
    if (x10_9 != 0)
        var_50[zx.q(x1)] = x10_9
        x1 += 1
    
    int32_t x10_11 = *((sx.q(arg1) - 3) * 0xa8 + 0x11352d0)
    
    if (x10_11 != 0)
        var_50[zx.q(x1)] = x10_11
        x1 += 1
    
    int32_t x10_13 = *((sx.q(arg1) - 3) * 0xa8 + 0x11352d4)
    
    if (x10_13 != 0)
        var_50[zx.q(x1)] = x10_13
        x1 += 1
    
    int32_t x10_15 = *((sx.q(arg1) - 3) * 0xa8 + 0x11352d8)
    
    if (x10_15 != 0)
        var_50[zx.q(x1)] = x10_15
        x1 += 1
    
    int32_t x10_17 = *((sx.q(arg1) - 3) * 0xa8 + 0x11352dc)
    
    if (x10_17 != 0)
        var_50[zx.q(x1)] = x10_17
        x1 += 1
    
    int32_t x10_19 = *((sx.q(arg1) - 3) * 0xa8 + 0x11352e0)
    
    if (x10_19 != 0)
        var_50[zx.q(x1)] = x10_19
        x1 += 1
    
    int32_t x10_21 = *((sx.q(arg1) - 3) * 0xa8 + 0x11352e4)
    
    if (x10_21 != 0)
        var_50[zx.q(x1)] = x10_21
        x1 += 1
    
    int32_t x10_23 = *((sx.q(arg1) - 3) * 0xa8 + 0x11352e8)
    
    if (x10_23 != 0)
        var_50[zx.q(x1)] = x10_23
        x1 += 1
    
    int32_t x10_25 = *((sx.q(arg1) - 3) * 0xa8 + 0x11352ec)
    
    if (x10_25 != 0)
        var_50[zx.q(x1)] = x10_25
        x1 += 1
    
    int32_t x10_27 = *((sx.q(arg1) - 3) * 0xa8 + 0x11352f0)
    
    if (x10_27 != 0)
        var_50[zx.q(x1)] = x10_27
        x1 += 1
    
    int32_t x10_29 = *((sx.q(arg1) - 3) * 0xa8 + 0x11352f4)
    
    if (x10_29 != 0)
        var_50[zx.q(x1)] = x10_29
        x1 += 1
    
    int32_t x8_4 = *((sx.q(arg1) - 3) * 0xa8 + 0x11352f8)
    
    if (x8_4 != 0)
        var_50[zx.q(x1)] = x8_4
        x1 += 1
else
    int64_t i = 0
    x1 = 0
    int32_t* x11_2 = *(gCampaignSetup + 0x19a0) + 0x54c
    
    do
        int32_t x13_2 = *(&data_1135278 + (sx.q(arg1) - 3) * 0xa8 + (i << 2) + 0x44)
        
        if (x13_2 != 0)
            uint64_t x14_2 = x9
            int32_t* x15_1 = x11_2
            
            while (x15_1[-1] != arg1 || *x15_1 != x13_2)
                uint64_t temp0_1 = x14_2
                x14_2 -= 1
                x15_1 = &x15_1[0x200]
                
                if (temp0_1 == 1)
                    var_50[sx.q(x1)] = x13_2
                    x1 += 1
                    break
        
        i += 1
    while (i != 0x10)

return zx.q(var_50[sx.q(RandomInt(gCampaignSetup, x1))])
