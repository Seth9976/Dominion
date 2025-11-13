// 函数: _Z13ApplyClippingRK3UI25RectFR11ClipRegion2
// 地址: 0x102a8e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_v0
int32_t var_28 = entry_v0
int32_t v1
int32_t var_24 = v1
int32_t v2
int32_t var_20 = v2
int32_t v3
int32_t var_1c = v3
int32_t x8 = *(arg1 + 0x1450)
int128_t* x19 = arg2
int32_t x8_1

if (x8 == 1)
    x8_1 = -1
else if (x8 == 4)
    x8_1 = 3
else
    if (x8 != 3)
        return 0
    
    x8_1 = 0xc

int32_t var_18 = x8_1
IntersectClipRect(&var_28)
int32_t var_30
x19[1].d = var_30
int128_t var_40
*x19 = var_40
return 1
