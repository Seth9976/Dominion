// 函数: _Z22GfxCardEffectTransformR6DomGfx
// 地址: 0xb15b58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result
float v0
float v1
float v2
float v3
int128_t v4
result, v0, v1, v2, v3, v4 = UI2GetRect(zx.q(*(arg1 + 0x2148)), "itemCard", 0)
v4.d = v0 + v2
float* entry_x8
entry_x8[7] = 0
float v5 = fconvert.s(0.5f)
v1 = v1 + v3
v3 = v4.d f* v5
v4 = *QI
entry_x8[5] = v3
entry_x8[6] = v1 * v5
*(entry_x8 + 4) = v4
*entry_x8 = (v2 - v0) / float.s(0x43480000)
return result
