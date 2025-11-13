// 函数: sub_c05ce8
// 地址: 0xc05ce8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = sub_c05bc0(arg4, *arg2, *arg1)
int32_t x0_3 = sub_c05bc0(arg4, *arg3, *arg2)

if ((x0_1 & 1) == 0)
    if ((x0_3 & 1) == 0)
        return 0
    
    int32_t x9_1 = *arg2
    *arg2 = *arg3
    *arg3 = x9_1
    
    if ((sub_c05bc0(arg4, *arg2, *arg1) & 1) != 0)
        int32_t x9_2 = *arg1
        *arg1 = *arg2
        *arg2 = x9_2
        return 2
else
    int32_t x2_2 = *arg1
    
    if ((x0_3 & 1) != 0)
        *arg1 = *arg3
        *arg3 = x2_2
        return 1
    
    *arg1 = *arg2
    *arg2 = x2_2
    
    if ((sub_c05bc0(arg4, *arg3, x2_2) & 1) != 0)
        int32_t x9_3 = *arg2
        *arg2 = *arg3
        *arg3 = x9_3
        return 2

return 1
