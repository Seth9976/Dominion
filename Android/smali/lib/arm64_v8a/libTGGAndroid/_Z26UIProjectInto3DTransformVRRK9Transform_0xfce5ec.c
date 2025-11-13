// 函数: _Z26UIProjectInto3DTransformVRRK9Transform
// 地址: 0xfce5ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v2 = *(arg1 + 8)
float v3 = *(arg1 + 0xc)
float v0 = *arg1
float v4 = *(arg1 + 4)
float v5 = *(arg1 + 0x10)
float v6 = *(arg1 + 0x14)
float v7 = *(arg1 + 0x18)
float v16 = *(arg1 + 0x1c)
uint64_t x9 = *gpRenderAppData
float v18 = v2 + v2
float v20 = v4 + v4
v5 = v5 + v5
float v1 = fconvert.s(1f)
int128_t v17 = data_71cfa0
float v21 = v2 * v18
float v22 = v2 * v20
float v23 = v3 * v5
float v24 = v3 * v20
v2 = v2 * v5
v20 = v4 * v20
float v19 = v3 * (v3 + v3)
v3 = v18 * v3
v4 = v4 * v5
*(x9 + 0xa0) = v16
*(x9 + 0x130) = v6
*(x9 + 0x140) = v7
*(x9 + 0x150) = v16
v5 = v1 - v21
v1 = v1 - v20
*(x9 + 0x128) = v0 * (v22 - v23)
*(x9 + 0x12c) = v0 * (v24 + v2)
*(x9 + 0x134) = v0 * (v22 + v23)
*(x9 + 0x13c) = v0 * (v3 - v4)
*(x9 + 0x144) = v0 * (v24 - v2)
*(x9 + 0x148) = v0 * (v3 + v4)
*(x9 + 0x124) = v0 * (v5 - v19)
*(x9 + 0x138) = v0 * (v1 - v19)
*(x9 + 0x14c) = v0 * (v1 - v21)
*(x9 + 0x154) = v17
*(x9 + 0x164) = 1
return Draw3DQuadGroupStart(arg1 + 0x14) __tailcall
