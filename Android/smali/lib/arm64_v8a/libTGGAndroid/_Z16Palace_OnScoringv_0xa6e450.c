// 函数: _Z16Palace_OnScoringv
// 地址: 0xa6e450
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_1910[0x240]
void var_c90
int32_t i_2 = CountCardTypes(&var_c90, &var_1910)
int32_t var_1918 = 0
int64_t var_1920 = 0
int32_t x8
int32_t x9_1
int32_t x10_1

if (i_2 s< 1)
    x10_1 = 0
    x9_1 = 0
    x8 = 0
else
    uint64_t i_1 = zx.q(i_2)
    int32_t (* x9)[0x240] = &var_1910
    void* x10 = &var_c90
    uint64_t i
    
    do
        int32_t x12_2 = *x10 - 0x104
        
        if (x12_2 u< 3)
            *(&var_1920 + (zx.q(x12_2) << 2)) = *x9
        
        x9 = &(*x9)[1]
        i = i_1
        i_1 -= 1
        x10 += 4
    while (i != 1)
    x8 = var_1920.d
    x9_1 = var_1920:4.d
    x10_1 = var_1918

int32_t x9_2

x9_2 = x9_1 s< x10_1 ? x9_1 : x10_1

int32_t x8_1

x8_1 = x8 s< x9_2 ? x8 : x9_2

return zx.q(x8_1 * 3)
