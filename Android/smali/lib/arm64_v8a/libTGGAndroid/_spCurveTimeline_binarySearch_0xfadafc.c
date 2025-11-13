// 函数: _spCurveTimeline_binarySearch
// 地址: 0xfadafc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_2 = arg2 s/ arg3
int32_t x10 = x8_2 - 2

if (x8_2 != 2)
    int32_t x8 = 0
    int32_t x9_1 = x10
    
    do
        int32_t x10_1 = x10 s>> 1
        float v1 = *(arg1 + (sx.q((x10_1 + 1) * arg3) << 2))
        v1 - arg4
        
        if (not(v1 > arg4))
            x8 = x10_1 + 1
        
        if (v1 > arg4)
            x9_1 = x10_1
        
        x10 = x8 + x9_1
    while (x8 != x9_1)
    
    arg3 *= x8 + 1

return zx.q(arg3)
