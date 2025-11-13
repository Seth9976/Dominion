// 函数: _Z8ClipTestRK5RectF
// 地址: 0xfcb304
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0 = *arg1
float v1 = *(arg1 + 4)
float v17 = 0f
uint64_t x9 = *gpRenderAppData
float v6 = *(arg1 + 8)
float v5 = *(arg1 + 0xc)
float v4 = *(x9 + 0x124)
uint64_t x8 = *gpSpriteAppData
float v3 = *(x9 + 0x128)
float v2 = *(x9 + 0x130)
float v20 = *(x9 + 0x134)
float v19 = *(x9 + 0x138)
float v16 = *(x9 + 0x140)
int32_t x9_1 = *(x8 + 0x38)
float v18 = *(x9 + 0x13c) * v17

if ((x9_1 & 4) != 0 && not(v16 + v18 + v20 * v6 + v19 * v5 f>= *(x8 + 0x2c)))
    return 0

if ((x9_1 & 8) != 0 && not(v16 + v0 * v20 + v1 * v19 + v18 <= *(x8 + 0x34)))
    return 0

float v7 = *(x9 + 0x12c) * v17

if ((x9_1 & 2) != 0 && not(v2 + v7 + v4 * v6 + v3 * v5 >= *(x8 + 0x28)))
    return 0

if ((x9_1 & 1) != 0 && not(v2 + v0 * v4 + v1 * v3 + v7 <= *(x8 + 0x30)))
    return 0

return 1
