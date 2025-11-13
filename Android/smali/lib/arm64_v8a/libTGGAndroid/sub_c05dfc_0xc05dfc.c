// 函数: sub_c05dfc
// 地址: 0xc05dfc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = sub_c05ce8(arg1, arg2, arg3, arg5)

if ((sub_c05bc0(arg5, *arg4, *arg3) & 1) != 0)
    int32_t x9_1 = *arg3
    *arg3 = *arg4
    *arg4 = x9_1
    
    if ((sub_c05bc0(arg5, *arg3, *arg2) & 1) == 0)
        x19 += 1
    else
        int32_t x9_2 = *arg2
        *arg2 = *arg3
        *arg3 = x9_2
        
        if ((sub_c05bc0(arg5, *arg2, *arg1) & 1) == 0)
            x19 += 2
        else
            int32_t x9_3 = *arg1
            x19 += 3
            *arg1 = *arg2
            *arg2 = x9_3

return zx.q(x19)
