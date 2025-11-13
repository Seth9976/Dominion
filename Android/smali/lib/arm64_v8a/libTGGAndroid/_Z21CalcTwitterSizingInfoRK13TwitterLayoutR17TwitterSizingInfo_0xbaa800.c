// 函数: _Z21CalcTwitterSizingInfoRK13TwitterLayoutR17TwitterSizingInfo
// 地址: 0xbaa800
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x98)
int64_t v8
v8.d = float.s(0x44480000)
float v4 = float.s(x8)
int64_t v11
v11.d = v8.d f/ (v4 f* v8.d / (float.s(*(arg1 + 0x94)) * fconvert.s(30f)) + fconvert.s(1f))
int64_t v9
v9.d = fconvert.s(10f)
int64_t v12
v12.d = (v8.d f- v11.d + fconvert.s(-20f) - float.s(x8 - 1) f* v9.d) / v4
float v0_1
float v1_1
float v2_1
float v3_1
v0_1, v1_1, v2_1, v3_1 = UI2SubBoundary(*UI2_TWITTER_NAME_BAR)
v0_1 = v2_1 - v0_1
v1_1 = v3_1 - v1_1
v2_1 = *V21
v3_1 = *(V21 + 4)
int64_t v13
v13.d = v0_1 - (v2_1 + v2_1) f* v9.d
int64_t v10
v10.d = v1_1 - (v3_1 + v3_1) f* v9.d
int32_t v0_2
int32_t v1_2
int32_t v2_2
int32_t v3_2
v0_2, v1_2, v2_2, v3_2 = UI2SubBoundary(*UI2_TWITTER_CARD)
int64_t v14
v14.d = v2_2 f- v0_2
int64_t v15
v15.d = v3_2 f- v1_2
int64_t result
int128_t v0_3
float v1_3
int128_t v2_3
int64_t v3_3
int128_t v17
result, v0_3, v1_3, v2_3, v3_3, v17 = UI2SubBoundary(*UI2_TWITTER_LANDSCAPE)
float v4_1 = v11.d f/ v10.d
v2_3:4.d = v3_3.d
v3_3.d = fconvert.s(20f)
v0_3:4.d = v1_3
v1_3 = v13.d f+ v3_3.d
v3_3.d = *(arg1 + 0x94)
float v18 = *(arg1 + 0x98)
float v6 = 0f
v17.d = fconvert.s(10f)
v17:4.d = fconvert.s(10f)
float v5 = v12.d f/ v15.d
float v19 = v4_1 f* v9.d
v4_1 = v4_1 * v6
double v0_5 = vadd_f32(vsub_f32(v2_3, v0_3), v17)
float v7 = (v14.d f+ v9.d) * v5
v2_3.d = v4_1 + v19
v17.d = v0_5.d f* v5
v17:4.d = v0_5:4.d f* v5
v0_5.d = float.s(v3_3.d)
v2_3.d = v4_1 f+ v2_3.d
v0_5.d = v7 f* v0_5.d
v2_3.d = v0_5.d f+ v2_3.d
v2_3.d = v19 f+ v2_3.d
v2_3.d = v2_3.d f/ v1_3
v1_3 = v2_3.d f* v6
float v16 = (v15.d f+ v9.d) * v5
v3_3.d = float.s(v18)
v3_3.d = v16 f* v3_3.d
v6 = v19 + v19 + v10.d f* v2_3.d
v4_1 = v4_1 + v19 + v1_3
v0_5.d = v0_5.d f+ v4_1
v0_5.d = v19 f+ v0_5.d
v3_3.d = v8.d f/ (v19 + v3_3.d f+ v6)
v0_5.d = v0_5.d f* v3_3.d
v18 = v19 f* v3_3.d
v2_3.d = v2_3.d f* v3_3.d
v4_1 = v4_1 f* v3_3.d
v6 = v6 f* v3_3.d
v7 = v7 f* v3_3.d
v16 = v16 f* v3_3.d
v5 = v5 f* v3_3.d
v3_3.d = v17.d f* v3_3.d
v3_3:4.d = v17:4.d f* v3_3.d
*arg2 = v18
*(arg2 + 4) = v18
*(arg2 + 8) = v2_3.d
*(arg2 + 0xc) = v4_1
*(arg2 + 0x10) = v6
*(arg2 + 0x14) = v7
*(arg2 + 0x18) = v16
*(arg2 + 0x1c) = v5
*(arg2 + 0x28) = v5
*(arg2 + 0x20) = v3_3
return result
