// 函数: sub_1090b48
// 地址: 0x1090b48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 0)
    return 

int64_t* x0 = *(arg1 + 8)

if (x0 != 0)
    int64_t x8_1 = *x0
    
    if (x8_1 != 0)
        free(x8_1)
        x0 = *(arg1 + 8)
    
    int64_t x8_2 = x0[1]
    
    if (x8_2 != 0)
        free(x8_2)
        x0 = *(arg1 + 8)
    
    free(x0)

return free(arg1) __tailcall
