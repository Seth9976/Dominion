// 函数: _Z14UIRectContainsP6XAssetiRK11UITransformRK4Vec2
// 地址: 0x105374c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((AppHasFocus() & 1) != 0)
    int32_t v0_1
    int32_t v1_1
    int32_t v2_1
    int32_t v3_1
    v0_1, v1_1, v2_1, v3_1 = UIElementRegionRect(arg1, arg2, arg3)
    int32_t v4_1 = *arg4
    
    if (v0_1 f<= v4_1)
        v0_1 = *(arg4 + 4)
        
        if (not(v3_1 f< v0_1) && not(v2_1 f< v4_1) && not(v1_1 f> v0_1))
            return 1

return 0
