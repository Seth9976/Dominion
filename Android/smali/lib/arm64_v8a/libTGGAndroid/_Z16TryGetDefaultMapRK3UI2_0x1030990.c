// 函数: _Z16TryGetDefaultMapRK3UI2
// 地址: 0x1030990
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* x8 = *(gUI2 + 0x60)

if (x8 != 0 && x8 != *(arg1 + 0x1688))
    int32_t x9_2 = *(arg1 + 0x167c)
    
    if (x9_2 == 3)
        return UI2TryGetAttribsByName(x8, "Text") __tailcall
    
    if (x9_2 == 5)
        return UI2TryGetAttribsByName(x8, "Button") __tailcall

return 0
