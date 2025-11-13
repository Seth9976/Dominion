// 函数: _Z14MagicLamp_Hintv
// 地址: 0xa96dc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_1910
void var_c90
int32_t x0
int32_t x16
int32_t x17
x0, x16, x17 = CountCardTypesWhere(0x3e9, &var_c90, &var_1910)
int32_t x10

if (x0 s< 1)
    x10 = 0
else
    uint64_t x8_1 = zx.q(x0)
    int64_t i_4
    
    if (x0 != 1)
        i_4 = x8_1 & 0xfffffffe
        int32_t x10_1 = 0
        int32_t x11_1 = 0
        void var_190c
        void* x12_1 = &var_190c
        void var_c8c
        void* x13_1 = &var_c8c
        int64_t i_3 = i_4
        int64_t i
        
        do
            int32_t x15_4 = *(x12_1 - 4)
            
            if (x15_4 == 1)
                x16 = *(x13_1 - 4)
            
            int32_t x0_2 = *x12_1
            
            if (x0_2 == 1)
                x17 = *x13_1
            
            x16 = x16 != 0xd22 ? 1 : 0
            x17 = x17 != 0xd22 ? 1 : 0
            x10_1 += (x15_4 == 1 ? 1 : 0) & x16
            x12_1 += 8
            i = i_3
            i_3 -= 2
            x11_1 += (x0_2 == 1 ? 1 : 0) & x17
            x13_1 += 8
        while (i != 2)
        x10 = x11_1 + x10_1
        
        if (i_4 != x8_1)
            goto label_a96eb4
    else
        i_4 = 0
        x10 = 0
    label_a96eb4:
        void* x11_2 = &var_c90 + (i_4 << 2)
        void* x12_3 = &(&var_1910)[i_4]
        int64_t i_2 = x8_1 - i_4
        int64_t i_1
        
        do
            if (*x12_3 == 1 && *x11_2 != 0xd22)
                x10 += 1
            
            x11_2 += 4
            i_1 = i_2
            i_2 -= 1
            x12_3 += 4
        while (i_1 != 1)

return zx.q(x10 s> 4 ? 1 : 0)
