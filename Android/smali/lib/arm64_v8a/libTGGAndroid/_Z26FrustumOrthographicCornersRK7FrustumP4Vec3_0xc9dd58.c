// 函数: _Z26FrustumOrthographicCornersRK7FrustumP4Vec3
// 地址: 0xc9dd58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.d = *(arg1 + 0x10)
int128_t v2
v2.d = *arg1
float v1 = *(arg1 + 4)
int128_t v3
v3.q = *VFWD
int128_t v4
v4.d = *(VFWD + 8)
int128_t v5
v5.q = *VUP
int64_t v7 = *VRIGHT
int128_t v16
v16.d = *(VRIGHT + 8)
v3.d = v3.d f* v0.d
v3:4.d = v3:4.d f* v0.d
v0.d = v0.d f* v4.d
v4.d = v5.d f* v1
v4:4.d = v5:4.d f* v1
v5.d = v7.d f* v2.d
v5:4.d = v7:4.d f* v2.d
v2.d = v2.d f* v16.d
v0.d = v0.d f+ v1 * *(VUP + 8)
v0.d = v0.d f+ v2.d
*arg2 = vadd_f32(vadd_f32(v3, v4), v5)
*(arg2 + 8) = v0.d
float v6 = *(arg1 + 0x10)
v0.q = *VFWD
double v1_1
v1_1.d = *(VFWD + 8)
v2.q = *VUP
int128_t v3_1
v3_1.d = *(VUP + 8)
v7.d = *(arg1 + 4)
v16.d = *(arg1 + 8)
v4.q = *VRIGHT
v5.d = *(VRIGHT + 8)
int128_t v17
v17.d = v0.d f* v6
v17:4.d = v0:4.d f* v6
int128_t v18
v18.d = v2.d f* v7.d
v18:4.d = v2:4.d f* v7.d
v7.d = v7.d f* v3_1.d
int128_t v17_1 = vadd_f32(v17, v18)
v18.d = v4.d f* v16.d
v18:4.d = v4:4.d f* v16.d
v16.d = v16.d f* v5.d
*(arg2 + 0xc) = vadd_f32(v17_1, v18)
*(arg2 + 0x14) = v6 f* v1_1.d f+ v7.d f+ v16.d
double v7_1
v7_1.d = *(arg1 + 0xc)
v6 = *(arg1 + 0x10)
v16.d = *arg1
v17_1.d = v0.d f* v6
v17_1:4.d = v0:4.d f* v6
v18.d = v2.d f* v7_1.d
v18:4.d = v2:4.d f* v7_1.d
v7_1.d = v3_1.d f* v7_1.d
int128_t v17_2 = vadd_f32(v17_1, v18)
v18.d = v4.d f* v16.d
v18:4.d = v4:4.d f* v16.d
v16.d = v5.d f* v16.d
*(arg2 + 0x18) = vadd_f32(v17_2, v18)
*(arg2 + 0x20) = v1_1.d f* v6 f+ v7_1.d f+ v16.d
double v7_2
v7_2.d = *(arg1 + 0xc)
v6 = *(arg1 + 0x10)
v16.d = *(arg1 + 8)
v17_2.d = v0.d f* v6
v17_2:4.d = v0:4.d f* v6
v18.d = v2.d f* v7_2.d
v18:4.d = v2:4.d f* v7_2.d
v7_2.d = v3_1.d f* v7_2.d
int128_t v17_3 = vadd_f32(v17_2, v18)
v18.d = v4.d f* v16.d
v18:4.d = v4:4.d f* v16.d
v16.d = v5.d f* v16.d
*(arg2 + 0x24) = vadd_f32(v17_3, v18)
*(arg2 + 0x2c) = v1_1.d f* v6 f+ v7_2.d f+ v16.d
v6 = *(arg1 + 0x14)
v16.d = *arg1
double v7_3
v7_3.d = *(arg1 + 4)
v17_3.d = v0.d f* v6
v17_3:4.d = v0:4.d f* v6
v18.d = v2.d f* v7_3.d
v18:4.d = v2:4.d f* v7_3.d
v7_3.d = v3_1.d f* v7_3.d
int128_t v17_4 = vadd_f32(v17_3, v18)
v18.d = v4.d f* v16.d
v18:4.d = v4:4.d f* v16.d
v16.d = v5.d f* v16.d
*(arg2 + 0x30) = vadd_f32(v17_4, v18).q
*(arg2 + 0x38) = v1_1.d f* v6 f+ v7_3.d f+ v16.d
v6 = *(arg1 + 0x14)
int128_t v7_4
v7_4.d = *(arg1 + 4)
v16.d = *(arg1 + 8)
v17_4.d = v0.d f* v6
v17_4:4.d = v0:4.d f* v6
v18.d = v2.d f* v7_4.d
v18:4.d = v2:4.d f* v7_4.d
v7_4.d = v3_1.d f* v7_4.d
v6 = v1_1.d f* v6 f+ v7_4.d
v7_4.d = v4.d f* v16.d
v7_4:4.d = v4:4.d f* v16.d
v16.d = v5.d f* v16.d
*(arg2 + 0x3c) = vadd_f32(vadd_f32(v17_4, v18), v7_4).q
*(arg2 + 0x44) = v6 f+ v16.d
v6 = *(arg1 + 0x14)
int128_t v7_5
v7_5.d = *(arg1 + 0xc)
v16.d = v0.d f* v6
v16:4.d = v0:4.d f* v6
int128_t v17_5
v17_5.d = v2.d f* v7_5.d
v17_5:4.d = v2:4.d f* v7_5.d
int128_t v16_1 = vadd_f32(v16, v17_5)
v17_5.d = *arg1
v7_5.d = v3_1.d f* v7_5.d
v6 = v1_1.d f* v6 f+ v7_5.d
v7_5.d = v4.d f* v17_5.d
v7_5:4.d = v4:4.d f* v17_5.d
v17_5.d = v5.d f* v17_5.d
*(arg2 + 0x48) = vadd_f32(v16_1, v7_5)
*(arg2 + 0x50) = v6 f+ v17_5.d
v6 = *(arg1 + 0x14)
v16_1.d = *(arg1 + 8)
double v7_6
v7_6.d = *(arg1 + 0xc)
v0.d = v0.d f* v6
v0:4.d = v0:4.d f* v6
v1_1.d = v1_1.d f* v6
v2.d = v2.d f* v7_6.d
v2:4.d = v2:4.d f* v7_6.d
v3_1.d = v3_1.d f* v7_6.d
v4.d = v4.d f* v16_1.d
v4:4.d = v4:4.d f* v16_1.d
v5.d = v5.d f* v16_1.d
v1_1.d = v1_1.d f+ v3_1.d
v1_1.d = v1_1.d f+ v5.d
*(arg2 + 0x54) = vadd_f32(vadd_f32(v0, v2), v4)
*(arg2 + 0x5c) = v1_1.d
