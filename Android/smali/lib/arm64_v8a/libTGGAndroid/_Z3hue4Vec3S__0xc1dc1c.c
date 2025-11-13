// 函数: _Z3hue4Vec3S_
// 地址: 0xc1dc1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v6 = fconvert.s(1f)
float v7 = 0f
float entry_v4
int128_t entry_v5
int128_t v19

if (entry_v4 f< entry_v5.d)
    v19.d = v7
else
    v19.d = v6

int128_t v20
v20.d = v6 f- v19.d
int128_t v21
v21.d = entry_v4 f* v19.d
v19.d = entry_v5.d f* v19.d
entry_v5.d = entry_v5.d f* v20.d
entry_v5.d = v21.d f+ entry_v5.d
entry_v4 = v19.d f+ entry_v4 f* v20.d
float entry_v3

if (entry_v3 f< entry_v5.d)
    v19.d = v7
else
    v19.d = v6

v20.d = v6 f- v19.d
v21.d = entry_v5.d f* v19.d
float v22 = entry_v3 f* v19.d
v19.d = entry_v4 f* v19.d
v21.d = v21.d f+ entry_v3 f* v20.d
entry_v4 = v19.d f+ entry_v4 f* v20.d
entry_v5.d = entry_v5.d f* v20.d
int128_t v16
v16.d = float.s(0x3727c5ac)
entry_v3 = v22 f+ entry_v5.d

if (v21.d f< entry_v4)
    entry_v4 = v21.d

entry_v5.d = entry_v3 f+ v16.d
float entry_v1
int128_t entry_v2

if (entry_v1 f< entry_v2.d)
    v16.d = v7
else
    v16.d = v6

int128_t v17
v17.d = float.s(0x3f2aaaab)
entry_v4 = (entry_v3 - entry_v4) f/ entry_v5.d
entry_v5.d = v6 f- v16.d
v21.d = entry_v1 f* v16.d
v22 = entry_v2.d f* v16.d
entry_v2.d = entry_v2.d f* entry_v5.d
v20.d = float.s(0x3eaaaaab)
entry_v2.d = v21.d f+ entry_v2.d
v19.d = v16.d f* v20.d
v16.d = v16.d f* v7
v17.d = entry_v5.d f* v17.d
entry_v1 = entry_v1 f* entry_v5.d
entry_v5.d = v16.d f- entry_v5.d
v16.d = v17.d f- v19.d
double entry_v0

if (entry_v0.d f< entry_v2.d)
    v17.d = v7
else
    v17.d = v6

entry_v1 = v22 + entry_v1
v19.d = v6 f- v17.d
v21.d = entry_v2.d f* v17.d
v22 = entry_v0.d f* v17.d
entry_v5.d = entry_v5.d f* v17.d
v17.d = entry_v1 f* v17.d
entry_v0.d = entry_v0.d f* v19.d
entry_v0.d = v21.d f+ entry_v0.d
entry_v1 = v17.d f+ entry_v1 f* v19.d
entry_v2.d = entry_v2.d f* v19.d
v16.d = v16.d f* v19.d
v19.q = 0x3ee4f8b580000000
entry_v2.d = v22 f+ entry_v2.d
entry_v5.d = entry_v5.d f+ v16.d
v16.d = entry_v0.d f- entry_v1

if (entry_v0.d f< entry_v1)
    entry_v0.d = entry_v0.d
else
    entry_v0.d = entry_v1

entry_v0.d = entry_v2.d f- entry_v0.d
v16.q = fconvert.d(v16.d)
v21.q = *V1
v22 = *(V1 + 8)
entry_v5.q = fconvert.d(entry_v5.d)
entry_v0.d = fconvert.s(v16.q f/ (fconvert.d(entry_v0.d) * fconvert.d(6.0) + 9.9999997473787516e-06)
    f+ entry_v5.q)
entry_v0.d = fabs(entry_v0.d)
v16.q = 0x3f2aaaab3f800000
entry_v5.d = v21.d f* entry_v0.d
entry_v5:4.d = v21:4.d f* entry_v0.d
entry_v0.d = entry_v0.d f* v22
entry_v0.d = entry_v0.d f+ v20.d
v20.d = float.s(sx.d(vcvts_s64_f32(entry_v0.d)))
int128_t v5 = vadd_f32(entry_v5, v16)
entry_v0.d = entry_v0.d f- v20.d
entry_v0.d = entry_v0.d f* fconvert.s(6f)
float128 v1_2 = vcvtq_f64_s64(vcvtq_s64_f64(vcvt_f64_f32(v5)))
double v18
v18.d = fconvert.s(-3f)
v17.d = fconvert.s(6f)
v17:4.d = fconvert.s(6f)
entry_v2.d = fconvert.s(-3f)
entry_v2:4.d = fconvert.s(-3f)
v18.d = v22 f* v18.d
int128_t v1_4 = vsub_f32(v5, vcvt_f32_f64(v1_2, v1_2))
int128_t v2 = vmul_f32(v21, entry_v2, 0)
entry_v0.d = entry_v0.d f+ v18.d
entry_v0.d = fabs(entry_v0.d)
entry_v0.d = entry_v0.d f- v22
int128_t v1_7 = vabs_f32(vadd_f32(vmul_f32(v1_4, v17, 0), v2))
v19.d = fconvert.s(1f)
v19:4.d = fconvert.s(1f)
v2.d = vmin_f32(entry_v0.d, v6)
int128_t v0 = vsub_f32(v1_7, v21)

if (entry_v0.d f< 0f)
    v1_7.d = v7
else
    v1_7.d = v2.d

int128_t v2_1 = vcltz_f32(v0, 0)
v16.d = v6 - entry_v4
v20.d = v21.d f* v16.d
v20:4.d = v21:4.d f* v16.d
int128_t v0_2
v0_2.d = (vmin_f32(v0, v19) & not.o(v2_1)).d f* entry_v4
v0_2:4.d = v0_2:4.d f* entry_v4
v16.d = v16.d f* v22
v1_7.d = entry_v4 f* v1_7.d
v1_7.d = v16.d f+ v1_7.d
double v0_3
v0_3.d = vadd_f32(v20, v0_2).d f* entry_v3
v0_3:4.d = v0_3:4.d f* entry_v3
v2_1.d = entry_v3 f* v1_7.d
v1_7.d = v0_3:4.d
