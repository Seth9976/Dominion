// 函数: _Z16ApplySetSealevelRK24HeightmapPatternSeaLevelP4Vec3i
// 地址: 0xc16194
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint128_t v1
v1.d = *(arg2 + 8)
void* __offset(Vec3, 0x14) x9 = arg2 + 0x14
int64_t i = 4
float v2 = v1.d
uint128_t v0 = v1
float var_10030[0x4000]
var_10030[0] = v1.d
float128 v3

do
    v3.d = *x9
    x9 += 0xc
    *(&var_10030 + i) = v3.d
    i += 4
    
    if (v3.d f< v0.d)
        v0.d = v3.d
    else
        v0.d = v0.d
    
    if (v3.d f> v2)
        v2 = v3.d
while (i != 0x10000)

v3.d = *arg1

if (v3.d f<= 0f)
    float128 v5
    v5.d = v1.d f- v0.d
    float v6 = float.s(0x3c23d70a)
    v1.d = v2 f- v0.d + v6
    uint128_t v2_2 = vdupq_laneq_s32(v0, 0)
    void* __offset(Vec3, 0x20) x9_4 = arg2 + 0x20
    v3.d = 0x3c23d70a
    v3:4.d = 0x3c23d70a
    v3:8.d = 0x3c23d70a
    v3:0xc.d = 0x3c23d70a
    v5.d = (v5.d f+ v6) f/ v1.d
    uint128_t v4_1 = vdupq_laneq_s32(v1, 0)
    int64_t i_4 = 0x3ffc
    *(arg2 + 8) = v5.d
    int32_t i_1
    
    do
        v5.d = *(x9_4 - 0xc)
        *(x9_4 - 8)
        int128_t v7
        v7.d = *(x9_4 - 4)
        v5:4.d = *x9_4
        *(x9_4 + 4)
        v7:4.d = *(x9_4 + 8)
        v5:8.d = *(x9_4 + 0xc)
        *(x9_4 + 0x10)
        v7:8.d = *(x9_4 + 0x14)
        v5:0xc.d = *(x9_4 + 0x18)
        *(x9_4 + 0x1c)
        v7:0xc.d = *(x9_4 + 0x20)
        void* __offset(Vec3, 0x2c) x11_2 = x9_4 + 0xc
        void* __offset(Vec3, 0x38) x12_1 = x9_4 + 0x18
        i_1 = i_4
        i_4 -= 4
        v5 = vdivq_f32(vaddq_f32(vsubq_f32(v5, v2_2), v3), v4_1)
        *(x9_4 - 0xc) = v5.d
        *x9_4 = v5:4.d
        x9_4 += 0x30
        *x11_2 = v5:8.d
        *x12_1 = v5:0xc.d
    while (i_1 != 4)
    v2_2.d = *(arg2 + 0x2ffe4)
    v3.d = *(arg2 + 0x2fff0)
    v4_1.d = *(arg2 + 0x2fffc)
    v2_2.d = v2_2.d f- v0.d
    v3.d = v3.d f- v0.d
    v0.d = v4_1.d f- v0.d
    v4_1.d = float.s(0x3c23d70a)
    v2_2.d = v2_2.d f+ v4_1.d
    v3.d = v3.d f+ v4_1.d
    v0.d = v0.d f+ v4_1.d
    v2_2.d = v2_2.d f/ v1.d
    v3.d = v3.d f/ v1.d
    v0.d = v0.d f/ v1.d
    *(arg2 + 0x2ffe4) = v2_2.d
    *(arg2 + 0x2fff0) = v3.d
    *(arg2 + 0x2fffc) = v0.d
else
    int64_t __saved_fp
    std::__ndk1::__less<float, float> var_28
    std::__ndk1::__sort<std::__ndk1::__less<float, float>&, float*>(&var_10030, &__saved_fp, 
        &var_28)
    float temp0_1 = vrndm_f32(*arg1 * float.s(0x46800000))
    float v1_1
    
    if (temp0_1 < 0f)
        v1_1 = fconvert.s(-0.5f)
    else
        v1_1 = fconvert.s(0.5f)
    
    v1_1 = var_10030[sx.q(vcvts_s32_f32(temp0_1 + v1_1))]
    int64_t i_2 = 0
    float v0_1 = 0f
    float v2_1
    
    do
        v2_1 = *(arg2 + 8 + i_2) - v1_1
        *(arg2 + 8 + i_2) = v2_1
        i_2 += 0xc
        
        if (v2_1 > v0_1)
            v0_1 = v2_1
    while (i_2 != 0x30000)
    
    int64_t i_3 = 0
    v0_1 = fconvert.s(1f) / v0_1
    
    do
        void* x9_3 = arg2 + i_3
        i_3 += 0x18
        v2_1 = v0_1 * *(x9_3 + 0x14)
        *(x9_3 + 8) = v0_1 * *(x9_3 + 8)
        *(x9_3 + 0x14) = v2_1
    while (i_3 != 0x30000)
