// 函数: res1_forward
// 地址: 0x10855ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg6 s>= 1)
    int64_t i = 0
    int32_t x8_1 = 0
    
    do
        if (*(arg5 + (i << 2)) != 0)
            *(arg4 + (sx.q(x8_1) << 3)) = *(arg4 + (i << 3))
            x8_1 += 1
        
        i += 1
    while (zx.q(arg6) != i)
    
    if (x8_1 != 0)
        sub_1085610(arg1, arg3, arg4, x8_1, arg7)

return 0
