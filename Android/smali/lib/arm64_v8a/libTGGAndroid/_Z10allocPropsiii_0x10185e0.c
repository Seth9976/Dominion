// 函数: _Z10allocPropsiii
// 地址: 0x10185e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = 0
uint64_t x8 = 4
int128_t var_10 = data_71c940
int32_t x11 = 4

if (0 != arg1)
    goto label_101862c

do
    x8 = sx.q(x11) - 1
    *(&var_10 + (sx.q(x9.d) << 2)) = *(&var_10 + (x8 << 2))
    x11 = x8.d
    x9 = zx.q(x9.d - 1)
label_101862c:
    x9 = sx.q(x9.d) + 1
    
    if (x9.d s>= x11)
        break
while (*(&var_10 + (x9 << 2)) == arg1)

if (x8.d s>= 1)
    int32_t i = 0
    uint64_t x10_1 = zx.q(x8.d)
    
    do
        if (*(&var_10 + (sx.q(i) << 2)) == arg2)
            x10_1 = sx.q(x8.d) - 1
            int64_t i_2 = sx.q(i)
            i -= 1
            *(&var_10 + (i_2 << 2)) = *(&var_10 + (x10_1 << 2))
            x8 = zx.q(x10_1.d)
        
        i += 1
    while (i s< x8.d)
    
    if (x10_1.d s>= 1)
        int32_t i_1 = 0
        
        do
            if (*(&var_10 + (sx.q(i_1) << 2)) == arg3)
                x10_1 = sx.q(x10_1.d) - 1
                int64_t i_3 = sx.q(i_1)
                i_1 -= 1
                *(&var_10 + (i_3 << 2)) = *(&var_10 + (x10_1 << 2))
            
            i_1 += 1
        while (i_1 s< x10_1.d)

return zx.q(var_10.d)
