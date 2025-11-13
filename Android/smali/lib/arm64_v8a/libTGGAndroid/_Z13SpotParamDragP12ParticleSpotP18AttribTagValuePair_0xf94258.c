// 函数: _Z13SpotParamDragP12ParticleSpotP18AttribTagValuePair
// 地址: 0xf94258
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = *(arg2 + 8)
void* x21 = *(arg1 + 0x30)
ParticleSpot* x19 = arg1
float v0
int128_t v1

if (x20[1].d == 1)
    int32_t* x8_1 = *x20
    v0 = *x8_1
    v1.d = x8_1[1]

int128_t v5

if (x20[1].d != 1 || not(v0 f== v1.d))
    int32_t x8_2 = *arg2
    float v0_1 = MakeUnitFloat(WhiteNoise((*(x21 + 0x2c) + x8_2) * x8_2))
    arg1, v0, v1, v5 = TrackScalarGetValue(x20, *(x21 + 0x314), *(x21 + 0x308), v0_1)
    x21 = *(x19 + 0x30)

v1.q = *(x19 + 0xc)
void* x8_3 = *(x21 + 0x300)
float v2 = *(x19 + 0x14)
int128_t v3 = vmul_f32(v1, v1, 0)
v5.d = *(x8_3 + 0x80)
v3.d = v3.d f+ v3:4.d
float v4 = v3.d f+ v2 * v2
v3.d = fconvert.s(1f)
v0 = v0 * v4 f* v5.d
v5.d = float.s(0x3727c5ac)
v4 = sqrt(v4)
float temp0 = vmin_f32(v0, v3.d)

if (v4 f>= v5.d)
    v5.d = float.s(0x3727c5ac)
    v4 = v3.d f/ (v4 f+ v5.d)
    v5.d = v1.d f* v4
    v5:4.d = v1:4.d f* v4
    v4 = v2 * v4
    double v6_1 = vmul_f32(v5, v5, 0)
    v6_1.d = v6_1.d f+ v6_1:4.d
    v6_1.d = v4 * v4 f+ v6_1.d
    v6_1.d = sqrt(v6_1.d)
    v6_1.d = v3.d f/ v6_1.d
    v3.d = v5.d f* v6_1.d
    v3:4.d = v5:4.d f* v6_1.d
    v4 = v4 f* v6_1.d
else
    v3.q = *V0
    v4 = *(V0 + 8)

v3.d = v3.d f* temp0
v3:4.d = v3:4.d f* temp0
*(x19 + 0xc) = vsub_f32(v1, v3)
*(x19 + 0x14) = v2 - temp0 * v4
