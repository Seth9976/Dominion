// 函数: _Z31Draw3DRenderItemSubmissionBeginv
// 地址: 0xc9b864
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(gDraw3DData + "r_landscape_col_2") = 1
int128_t v1 = *gRgbaWhite
int128_t v2
v2.q = *VX
float v3 = *(VX + 8)
int128_t v4
v4.q = *VY
float v5 = *(VY + 8)
*(gDraw3DData + 0x4bc) = v1
int128_t v6
v6.q = *VZ
*(gDraw3DData + 0x4b8) = 0
*(gDraw3DData + 0x4cc) = zx.o(0)
float v0 = *(VZ + 8)
int128_t v2_2 = vsub_f32(vsub_f32(v2, v4), v6)
v0 = v3 - v5 - v0
int128_t v3_1 = vmul_f32(v2_2, v2_2, 0)
v4.d = v0 * v0
v3_1.d = v3_1.d f+ v3_1:4.d
v3_1.d = v3_1.d f+ v4.d
v4.d = fconvert.s(1f)
v3_1.d = sqrt(v3_1.d)
v3_1.d = v4.d f/ v3_1.d
v4 = *V40
v2_2.d = v2_2.d f* v3_1.d
v2_2:4.d = v2_2:4.d f* v3_1.d
v0 = v0 f* v3_1.d
v3_1 = *V40
*(gDraw3DData + 0x4dc) = v1
*(gDraw3DData + 0x4ec) = 0
*(gDraw3DData + 0x344) = v2_2.q
*(gDraw3DData + 0x34c) = v0
*(gDraw3DData + 0x374) = v1
*(gDraw3DData + 0x564) = v4
*(gDraw3DData + 0x574) = v3_1
*(gDraw3DData + 0x560) = 0
*(gDraw3DData + 0x584) = 0x3f80000000000007
