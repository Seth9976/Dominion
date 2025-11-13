// 函数: _Z16RevealTempOffsetRK9Transformfii
// 地址: 0xb11020
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v1 = *arg1
float v2
int128_t v3

if (arg2 >= float.s(0x3dcccccd))
    v2 = fconvert.s(1f)
    
    if (not(arg2 <= float.s(0x3f666666)))
        v3.d = float.s(0xbf666666)
        arg2 = arg2 f+ v3.d
        v3.d = float.s(0x3dccccd0)
        arg2 = arg2 f/ v3.d
        
        if (not(arg2 <= 0f))
            v3.d = fconvert.s(1f)
            v2 = 0f
            
            if (not(arg2 f>= v3.d))
                v2 = v3.d f- arg2 * arg2
else
    arg2 = arg2 / float.s(0x3dcccccd)
    v2 = 0f
    
    if (not(arg2 <= 0f))
        v2 = fconvert.s(1f)
        
        if (not(arg2 >= v2))
            v2 = arg2 * (fconvert.s(2f) - arg2) + 0f

v3 = *(arg1 + 0x10)
float v7 = v1 * float.s(0x447a0000)
float v5 = v2 * fconvert.s(3f) + fconvert.s(1f)
int32_t* entry_x8
*entry_x8 = (*arg1).d.o
*(entry_x8 + 0x10) = v3
v1 = v1 * float.s(0xc42f0000) * v2
arg2 = v7 * float.s((arg3 << 1) - arg4 + 1) * v2
v3.d = entry_x8[6]
v2 = v7 * v2 f+ v3.d
v3.d = v5 * *entry_x8
entry_x8[5] = 0f - arg2 + entry_x8[5] f+ v1
entry_x8[6] = v2
*entry_x8 = v3.d
