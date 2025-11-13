// 函数: spTrackEntry_getAnimationTime
// 地址: 0xfbc7dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t result

if (*(arg1 + 0x2c) == 0)
    int32_t v2 = *(arg1 + 0x44)
    float v0 = *(arg1 + 0x54) + *(arg1 + 0x40)
    
    if (v0 f< v2)
        result.d = v0
    else
        result.d = v2
    
    return result

result.d = *(arg1 + 0x40)
float y = *(arg1 + 0x44) f- result.d

if (not(y != 0f))
    return result

result.d = result.d f+ fmodf(*(arg1 + 0x54), y)
return result
