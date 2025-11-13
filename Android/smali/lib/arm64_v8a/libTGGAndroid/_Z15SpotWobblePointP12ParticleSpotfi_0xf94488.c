// 函数: _Z15SpotWobblePointP12ParticleSpotfi
// 地址: 0xf94488
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v10
v10.d = fconvert.s(1f)
arg2 = float.s(arg3) * arg2 * *(*(*(arg1 + 0x30) + 0x300) + 0x80)
uint32_t temp0 = vcvtms_s32_f32(arg2)
int128_t v0 = fmodf(arg2, fconvert.s(1f))
uint32_t x0_1 = WhiteNoise(*(arg1 + 0x2c) * temp0 * 0x4d)
uint32_t x0_3 = WhiteNoise(temp0 * *(arg1 + 0x2c) * 0x4e)
uint32_t x0_5 = WhiteNoise(temp0 * *(arg1 + 0x2c) * 0x4f)
uint32_t x0_7 = WhiteNoise((temp0 - 1) * *(arg1 + 0x2c) * 0x4d)
uint32_t x0_9 = WhiteNoise((temp0 - 1) * *(arg1 + 0x2c) * 0x4e)
uint32_t x0_11 = WhiteNoise((temp0 - 1) * *(arg1 + 0x2c) * 0x4f)
int64_t v0_1 = MakeUnitFloat(x0_1)
int64_t var_90 = MakeUnitFloat(x0_3)
int128_t v0_3 = MakeUnitFloat(x0_5)
int64_t v0_4 = MakeUnitFloat(x0_7)
int64_t var_80 = MakeUnitFloat(x0_9)
int64_t result
int128_t v0_6
int128_t v1_1
int128_t v3
int128_t v16
result, v0_6, v1_1, v3, v16 = MakeUnitFloat(x0_11)
v1_1:4.d = v0_4.o.d

if (not(v0.d f<= 0f))
    v16:4.d = v0_1.o.d
    
    if (v0.d f>= v10.d)
        v1_1 = v16
    else
        int128_t v6_1 = vadd_f32(v0, v0)
        v3.d = fconvert.s(3f)
        v3:4.d = fconvert.s(3f)
        int128_t v0_8 = vmul_f32(vmul_f32(v0, v0, 0), vsub_f32(v3, v6_1), 0)
        int128_t v6_2
        v6_2.d = fconvert.s(3f)
        float v4_1 = v0.d f* v0.d * (v6_2.d f- (v0.d f+ v0.d))
        int128_t v3_1 = vsub_f32(v3, vadd_f32(v0_8, v0_8))
        int128_t v5_2
        v5_2.d = v4_1 + v4_1
        float v7_1 = v6_2.d f- v5_2.d
        int128_t v0_9 = vmul_f32(v0_8, v0_8, 0)
        double v5_3 = vsub_f32(v16, v1_1)
        v6_2.d = v0_3.d f- v0_6.d
        v0_6 = vmul_f32(v0_9, v3_1, 0)
        v3_1.d = v4_1 * v4_1 * v7_1
        v0_6.d = v5_3.d f* v0_6.d
        v0_6:4.d = v5_3:4.d f* v0_6.d
        v3_1.d = v3_1.d f* v6_2.d
        v1_1 = vadd_f32(v1_1, v0_6)

v0_6.d = v1_1:4.d
return result
