// 函数: _Z17IntersectClipRectRK11ClipRegion2
// 地址: 0xfcb030
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x10 = *(arg1 + 0x10)
ClipRegion2* x0 = *gpSpriteAppData + 0x28
int128_t* entry_x8

if (x10 == 0)
    entry_x8[1].d = *(x0 + 0x10)
    *entry_x8 = *x0
    return x0

float v1 = 0f
entry_x8[1].d = *(x0 + 0x10)
*entry_x8 = *x0
int128_t v0
v0.d = *arg1
float v2 = *(arg1 + 4)
float v18 = *(arg1 + 8)
float v19 = *(arg1 + 0xc)
uint64_t x11_2 = *gpRenderAppData
float v3 = *(x11_2 + 0x124)
float v4 = *(x11_2 + 0x128)
float v7 = *(x11_2 + 0x134)
float v16 = *(x11_2 + 0x138)
float v6 = *(x11_2 + 0x130)
float v5 = *(x11_2 + 0x12c) * v1
v1 = *(x11_2 + 0x13c) * v1
float v17 = v0.d f* v3
v0.d = v0.d f* v7
v3 = v3 * v18
v7 = v7 * v18
v18 = v2 * v4
v2 = v2 * v16
v4 = v4 * v19
v16 = v16 * v19
v19 = *(x11_2 + 0x140)
v0.d = v0.d f+ v2
v2 = v3 + v4
v0.d = v0.d f+ v1
v3 = v6 + v17 + v18 + v5
v2 = v6 + v5 + v2
v0.d = v19 f+ v0.d
v1 = v19 + v1 + v7 + v16
v3 - v2

v4 = v3 < v2 ? v2 : v3

if (v3 < v2)
    v2 = v3

v0.d f- v1

if (v0.d f< v1)
    v3 = v0.d
else
    v3 = v1

if (v0.d f< v1)
    v0.d = v1
else
    v0.d = v0.d

float var_28 = v2
float var_24 = v3
float var_20 = v4
int32_t var_1c = v0.d
int32_t var_18 = x10
int64_t x0_1
int128_t v0_1
x0_1, v0_1 = ClipRegionIntersect(x0, &var_28)
uint64_t x8 = *gpSpriteAppData
int32_t var_30
*(x8 + 0x38) = var_30
int128_t var_40
*(x8 + 0x28) = var_40
return x0_1
