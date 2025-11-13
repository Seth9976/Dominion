// 函数: _Z28AnimationSetRateFromDurationP9Structuref
// 地址: 0xc7a560
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float** i_1 = *(*(arg1 + 0x38) + 8)

if (i_1 == 0)
    return 

float** i

do
    float* x9_1 = *i_1
    i = i_1[1]
    i_1 = i
    float v2
    
    if (x9_1[9] == 2)
        v2 = 0f
    else
        v2 = fconvert.s(1f) / arg2
    
    *x9_1 = v2
while (i != 0)
