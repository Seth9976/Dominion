// 函数: _Z27RandomDoodadFromFlavorThemeR9RandomPCGPK11FlavorThemei
// 地址: 0xa55aec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_40[0xc]
int32_t x1

if (arg3 s< 1)
    x1 = 0
else
    int64_t i = 0
    x1 = 0
    
    do
        uint64_t x14_1 = zx.q(*(arg2 + (i << 2)))
        int32_t j = *(x14_1 * 0x38 + 0x1134d20)
        uint64_t x16_1
        
        if (x1 s<= 0)
            x16_1 = sx.q(x1)
        label_a55b7c:
            x1 += 1
            var_40[x16_1] = j
        else
            x16_1 = zx.q(x1)
            int32_t (* x17_1)[0xc] = &var_40
            uint64_t x2 = x16_1
            
            while (*x17_1 != j)
                uint64_t temp0_1 = x2
                x2 -= 1
                x17_1 = &(*x17_1)[1]
                
                if (temp0_1 == 1)
                    goto label_a55b7c
        int32_t j_1 = *(x14_1 * 0x38 + 0x1134d24)
        uint64_t x16_2
        
        if (x1 s<= 0)
            x16_2 = sx.q(x1)
        label_a55bc8:
            x1 += 1
            var_40[x16_2] = j_1
        else
            x16_2 = zx.q(x1)
            int32_t (* x17_2)[0xc] = &var_40
            uint64_t x2_1 = x16_2
            
            while (*x17_2 != j_1)
                uint64_t temp1_1 = x2_1
                x2_1 -= 1
                x17_2 = &(*x17_2)[1]
                
                if (temp1_1 == 1)
                    goto label_a55bc8
        int32_t j_2 = *(x14_1 * 0x38 + 0x1134d28)
        uint64_t x16_4
        
        if (x1 s<= 0)
            x16_4 = sx.q(x1)
        label_a55c14:
            x1 += 1
            var_40[x16_4] = j_2
        else
            x16_4 = zx.q(x1)
            int32_t (* x17_3)[0xc] = &var_40
            uint64_t x2_2 = x16_4
            
            while (*x17_3 != j_2)
                uint64_t temp2_1 = x2_2
                x2_2 -= 1
                x17_3 = &(*x17_3)[1]
                
                if (temp2_1 == 1)
                    goto label_a55c14
        int32_t j_3 = *(x14_1 * 0x38 + 0x1134d2c)
        uint64_t x16_6
        
        if (x1 s<= 0)
            x16_6 = sx.q(x1)
        label_a55c60:
            x1 += 1
            var_40[x16_6] = j_3
        else
            x16_6 = zx.q(x1)
            int32_t (* x17_4)[0xc] = &var_40
            uint64_t x2_3 = x16_6
            
            while (*x17_4 != j_3)
                uint64_t temp3_1 = x2_3
                x2_3 -= 1
                x17_4 = &(*x17_4)[1]
                
                if (temp3_1 == 1)
                    goto label_a55c60
        int32_t j_4 = *(x14_1 * 0x38 + 0x1134d30)
        uint64_t x16_8
        
        if (x1 s<= 0)
            x16_8 = sx.q(x1)
        label_a55cac:
            x1 += 1
            var_40[x16_8] = j_4
        else
            x16_8 = zx.q(x1)
            int32_t (* x17_5)[0xc] = &var_40
            uint64_t x2_4 = x16_8
            
            while (*x17_5 != j_4)
                uint64_t temp4_1 = x2_4
                x2_4 -= 1
                x17_5 = &(*x17_5)[1]
                
                if (temp4_1 == 1)
                    goto label_a55cac
        int32_t j_5 = *(x14_1 * 0x38 + 0x1134d34)
        uint64_t x15_2
        
        if (x1 s<= 0)
            x15_2 = sx.q(x1)
        label_a55b28:
            x1 += 1
            var_40[x15_2] = j_5
        else
            x15_2 = zx.q(x1)
            int32_t (* x16_10)[0xc] = &var_40
            uint64_t x17_6 = x15_2
            
            while (*x16_10 != j_5)
                uint64_t temp5_1 = x17_6
                x17_6 -= 1
                x16_10 = &(*x16_10)[1]
                
                if (temp5_1 == 1)
                    goto label_a55b28
        i += 1
    while (i != zx.q(arg3))

return zx.q(var_40[sx.q(RandomInt(arg1, x1))])
