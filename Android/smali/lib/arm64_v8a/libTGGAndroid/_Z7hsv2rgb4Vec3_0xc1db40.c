// 函数: _Z7hsv2rgb4Vec3
// 地址: 0xc1db40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v6
v6.d = fconvert.s(6f)
v6:4.d = fconvert.s(6f)
int128_t v3
v3.q = *V1
float v4 = *(V1 + 8)
int128_t v5
v5.q = 0x3f2aaaab3f800000
int128_t entry_v0
int128_t v7
v7.d = v3.d f* entry_v0.d
v7:4.d = v3:4.d f* entry_v0.d
int128_t v5_1 = vadd_f32(v7, v5)
v7.d = float.s(0x3eaaaaab)
entry_v0.d = entry_v0.d f* v4
entry_v0.d = entry_v0.d f+ v7.d
v7.d = float.s(sx.d(vcvts_s64_f32(entry_v0.d)))
entry_v0.d = entry_v0.d f- v7.d
v7.d = fconvert.s(6f)
entry_v0.d = entry_v0.d f* v7.d
float128 v7_3 = vcvtq_f64_s64(vcvtq_s64_f64(vcvt_f64_f32(v5_1)))
int128_t v7_4
v7_4.d = fconvert.s(-3f)
v7_4.d = v4 f* v7_4.d
entry_v0.d = entry_v0.d f+ v7_4.d
v7_4.d = fconvert.s(-3f)
v7_4:4.d = fconvert.s(-3f)
entry_v0.d = fabs(entry_v0.d)
int128_t v5_4 =
    vadd_f32(vmul_f32(vsub_f32(v5_1, vcvt_f32_f64(v7_3, v7_3)), v6, 0), vmul_f32(v3, v7_4, 0))
int128_t v7_5
v7_5.d = fconvert.s(1f)
entry_v0.d = entry_v0.d f- v4
bool cond:0 = entry_v0.d f< 0f
entry_v0.d = vmin_f32(entry_v0.d, v7_5.d)
int32_t entry_v1
v7_5.d = v7_5.d f- entry_v1
v6.d = fconvert.s(1f)
v6:4.d = fconvert.s(1f)
v7_5.d = v3.d f* v7_5.d
v7_5:4.d = v3:4.d f* v7_5.d
int128_t v3_1 = vsub_f32(vabs_f32(v5_4), v3)
int128_t v5_5
v5_5.d = 0f

if (cond:0)
    entry_v0.d = v5_5.d
else
    entry_v0.d = entry_v0.d

int128_t v5_6 = vcltz_f32(v3_1, 0)
entry_v0.d = entry_v1 f* entry_v0.d
int64_t v3_3 = vmin_f32(v3_1, v6) & (not.o(v5_6)).q
entry_v0.d = v3_3.d f* entry_v1
entry_v0:4.d = v3_3:4.d f* entry_v1
double v0
float entry_v2
v0.d = vadd_f32(v7_5, entry_v0).d f* entry_v2
v0:4.d = v0:4.d f* entry_v2
