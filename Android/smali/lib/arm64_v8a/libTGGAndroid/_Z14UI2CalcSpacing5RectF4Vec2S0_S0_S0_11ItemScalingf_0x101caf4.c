// 函数: _Z14UI2CalcSpacing5RectF4Vec2S0_S0_S0_11ItemScalingf
// 地址: 0x101caf4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1.d == 0xd)
    return 

float arg_0
float v16 = arg_0
float arg_4
float v17 = arg_4
float entry_v2 = entry_v2 - arg7
float entry_v1
float entry_v3
arg7 = entry_v3 - entry_v1
int128_t entry_v6
int128_t entry_v7

if (not(entry_v6.d f< 0f) && not(entry_v7.d f< 0f))
    if (entry_v6.d f> v16)
        entry_v1 = entry_v6.d
    else
        entry_v1 = v16
    
    if (not(v16 < 0f))
        v16 = entry_v1
    
    if (not(v17 < 0f) && entry_v7.d f> v17)
        v17 = entry_v7.d

float v22 = 0f
float arg_8
float entry_v4
entry_v1 = entry_v4 * arg_8 + entry_v6.d f* (arg_8 - *V21)
float arg_c
float entry_v5
float v20 = entry_v5 * arg_c + entry_v7.d f* (arg_c - *(V21 + 4))
entry_v3 = entry_v2 / entry_v1

if (entry_v1 == 0f)
    entry_v3 = v22

if (v20 == 0f)
    entry_v1 = v22
else
    entry_v1 = arg7 / v20

if (not(entry_v6.d f>= 0f) && arg_8 > fconvert.s(1f))
    goto label_101cbb0

if (entry_v7.d f>= 0f || arg_c <= fconvert.s(1f))
    if (entry_v3 < entry_v1)
        entry_v1 = entry_v3
    
    if (not(entry_v1 == 0f))
        goto label_101cbe0
else
    entry_v1 = entry_v3
label_101cbb0:
    
    if (entry_v1 != 0f)
    label_101cbe0:
        float v21 = fconvert.s(1f)
        entry_v3 = 0f
        v20 = 0f
        
        if (not(arg_8 <= v21))
            v20 = (entry_v2 - arg_8 * entry_v4 * entry_v1) / (arg_8 + fconvert.s(-1f))
        
        if (not(arg_c <= v21))
            entry_v3 = (arg7 - arg_c * entry_v5 * entry_v1) / (arg_c + fconvert.s(-1f))
        
        arg7 = v16 * entry_v1
        entry_v2 = v17 * entry_v1
        entry_v4 = entry_v6.d f* entry_v1
        
        if (v20 < arg7)
            arg7 = v20
        
        entry_v5 = entry_v7.d f* entry_v1
        
        if (entry_v3 < entry_v2)
            entry_v2 = entry_v3
        
        entry_v6.d = fconvert.s(1f)
        
        if (not(arg7 > entry_v4))
            arg7 = entry_v4
        
        entry_v1 = entry_v6.d f/ entry_v1
        
        if (not(entry_v2 > entry_v5))
            entry_v2 = entry_v5
        
        entry_v6.d = entry_v1 * arg7
        entry_v7.d = entry_v1 * entry_v2
        return 

entry_v6.d = *V20
entry_v7.d = *(V20 + 4)
