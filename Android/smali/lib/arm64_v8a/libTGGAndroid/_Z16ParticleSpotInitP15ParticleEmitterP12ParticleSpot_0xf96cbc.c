// 函数: _Z16ParticleSpotInitP15ParticleEmitterP12ParticleSpot
// 地址: 0xf96cbc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v13
int64_t var_90 = v13
int64_t v12
int64_t var_88 = v12
int64_t v11
int64_t var_80 = v11
int64_t v10
int64_t var_78 = v10
int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
int64_t* x21 = **(arg1 + 0x300)
int64_t* x8_1 = *x21

if (x8_1 == 0)
    if (x21[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x21, false, true)
    x8_1 = *x21

int64_t x23 = sx.q(*(arg1 + 0x2f0))
int64_t x24 = **x8_1
*(arg2 + 0x30) = arg1
int32_t x0_4
int128_t v0
int128_t v1
int128_t v2
int128_t v3
int128_t v4
int128_t v5
int128_t v16
int128_t v17
int128_t v18
int128_t v19
x0_4, v0, v1, v2, v3, v4, v5, v16, v17, v18, v19 = RandomInt(gRNG, 0x7fffffff)
*(arg2 + 0x2c) = x0_4
*(arg1 + 0x30c) = 0x3f800000
v1 = *(TI + 0x10)
*(arg1 + 0x290) = *TI
*(arg1 + 0x2a0) = v1
void* x27 = *(*(arg2 + 0x30) + 0x300)
uint64_t x21_1 = zx.q(*(x27 + 0x50))

if (x21_1.d s>= 1)
    void* x22_1 = *(x27 + 0x48)
    int32_t x1_1
    int64_t i_5
    
    if (x21_1.d u> 8)
        int64_t x8_6
        
        if ((x21_1 & 7) == 0)
            x8_6 = 8
        else
            x8_6 = x21_1 & 7
        
        i_5 = x21_1 - x8_6
        void* x9_1 = x22_1 + 0x4c
        v0.q = 0
        v0:8.q = 0
        int64_t i_4 = i_5
        v1.q = 0
        v1:8.q = 0
        int64_t i
        
        do
            v2.d = *x9_1
            v3.d = *(x9_1 + 4)
            v4.d = *(x9_1 + 8)
            v5.d = *(x9_1 + 0xc)
            v2:4.d = *(x9_1 + 0x10)
            v3:4.d = *(x9_1 + 0x14)
            v4:4.d = *(x9_1 + 0x18)
            v5:4.d = *(x9_1 + 0x1c)
            v2:8.d = *(x9_1 + 0x20)
            v3:8.d = *(x9_1 + 0x24)
            v4:8.d = *(x9_1 + 0x28)
            v5:8.d = *(x9_1 + 0x2c)
            v2:0xc.d = *(x9_1 + 0x30)
            v3:0xc.d = *(x9_1 + 0x34)
            v4:0xc.d = *(x9_1 + 0x38)
            v5:0xc.d = *(x9_1 + 0x3c)
            v16.d = *(x9_1 - 0x40)
            v17.d = *(x9_1 - 0x3c)
            v18.d = *(x9_1 - 0x38)
            v19.d = *(x9_1 - 0x34)
            v16:4.d = *(x9_1 - 0x30)
            v17:4.d = *(x9_1 - 0x2c)
            v18:4.d = *(x9_1 - 0x28)
            v19:4.d = *(x9_1 - 0x24)
            v16:8.d = *(x9_1 - 0x20)
            v17:8.d = *(x9_1 - 0x1c)
            v18:8.d = *(x9_1 - 0x18)
            v19:8.d = *(x9_1 - 0x14)
            v16:0xc.d = *(x9_1 - 0x10)
            v17:0xc.d = *(x9_1 - 0xc)
            v18:0xc.d = *(x9_1 - 8)
            v19:0xc.d = *(x9_1 - 4)
            i = i_4
            i_4 -= 8
            x9_1 += 0x80
            v1 += v2
            v0 += v16
        while (i != 8)
        uint128_t v0_1
        v0_1.d = vaddvq_u32(v1 + v0)
        x1_1 = v0_1.d
    else
        i_5 = 0
        x1_1 = 0
    
    int64_t i_3 = x21_1 - i_5
    int32_t* x8_8 = x22_1 + (i_5 << 4) + 0xc
    int64_t i_1
    
    do
        int32_t x10_1 = *x8_8
        x8_8 = &x8_8[4]
        i_1 = i_3
        i_3 -= 1
        x1_1 += x10_1
    while (i_1 != 1)
    int32_t x0_6
    x0_6, v0, v1 = RandomInt(gRNG, x1_1)
    int64_t x8_9 = 0
    int32_t x9_2 = 0
    int32_t* x10_2 = x22_1 + 0xc
    
    while (true)
        x9_2 += *x10_2
        
        if (x0_6 s< x9_2)
            break
        
        x8_9 += 1
        x10_2 = &x10_2[4]
        
        if (x21_1 == x8_9)
            pthread_kill(pthread_self(), 6)
            x8_9, v0, v1 = XNoReturn()
            break
    
    *(arg2 + 0x40) = x8_9.d

int64_t* x21_2 = **(arg1 + 0x300)
int64_t* x8_11 = *x21_2

if (x8_11 == 0)
    if (x21_2[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    v0, v1 = AssetCatalogLoadAsset(x21_2, false, true)
    x8_11 = *x21_2

if (zx.d(*(**x8_11 + sx.q(*(arg1 + 0x2f0)) * 0x168 + 0xde)) != 0)
    v1.d = *CIRCLE_FULL
    v0.d = 0f
    v0, v1 = RandomRange(gRNG, v0.d, v1.d)
    *(arg2 + 0x24) = v0.d

int64_t* x21_3 = **(arg1 + 0x300)
int64_t* x8_18 = *x21_3

if (x8_18 == 0)
    if (x21_3[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    v0, v1 = AssetCatalogLoadAsset(x21_3, false, true)
    x8_18 = *x21_3

if (zx.d(*(**x8_18 + sx.q(*(arg1 + 0x2f0)) * 0x168 + 0xe0)) != 0)
    v0.d = 0f
    v1.d = fconvert.s(1f)
    *(arg1 + 0x308) = RandomRange(gRNG, v0.d, v1.d)

int64_t* x21_4 = **(arg1 + 0x300)
int64_t* x8_25 = *x21_4

if (x8_25 == 0)
    if (x21_4[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x21_4, false, true)
    x8_25 = *x21_4

int64_t var_120

if (zx.d(*(**x8_25 + sx.q(*(arg1 + 0x2f0)) * 0x168 + 0xdf)) != 0)
    v8.d = fconvert.s(1f)
    double v0_6
    int128_t v1_2
    float v2_1
    int128_t v3_2
    
    do
        var_120 = RandomUnit(gRNG)
        int64_t v0_4 = RandomUnit(gRNG)
        float v0_5
        int128_t v1_1
        int128_t v3_1
        v0_5, v1_1, v3_1 = RandomUnit(gRNG)
        v3_1:4.d = v0_4.o.d
        v1_1.q = *V1
        v2_1 = v0_5 + v0_5 - *(V1 + 8)
        v1_2 = vsub_f32(vadd_f32(v3_1, v3_1), v1_1)
        v0_6 = vmul_f32(v1_2, v1_2, 0)
        v0_6.d = v0_6.d f+ v0_6:4.d
        v3_2.d = v2_1 * v2_1
        v0_6.d = v0_6.d f+ v3_2.d
    while (v0_6.d f> v8.d)
    
    v3_2.d = sqrt(v0_6.d)
    v0_6.d = *CIRCLE_FULL
    v3_2.d = fconvert.s(1f) f/ v3_2.d
    v8.d = v1_2.d f* v3_2.d
    v8:4.d = v1_2:4.d f* v3_2.d
    v9.d = v2_1 f* v3_2.d
    float cosp_7
    float sinp_7
    sincosf(&sinp_7, &cosp_7, RandomFloat(gRNG, v0_6.d) * fconvert.s(0.5f))
    float cosp_8 = cosp_7
    float sinp_8 = sinp_7
    int64_t v2_2
    v2_2.d = v8.d f* sinp_8
    v2_2:4.d = v8:4.d f* sinp_8
    *(arg1 + 0x294) = v2_2
    *(arg1 + 0x29c) = v9.d f* sinp_8
    *(arg1 + 0x2a0) = cosp_8

float y = 0f

if ((EmitterTryGetLaunchParam(arg1, 0x1a, &y) & 1) != 0)
    v8.d = y
    
    if ((zx.d(*guard_variable_for_DegToRad(float)::CONVERSION) & 1) == 0
            && __cxa_guard_acquire(guard_variable_for_DegToRad(float)::CONVERSION) != 0)
        *DegToRad(float)::CONVERSION = *TWO_PI / float.s(0x43b40000)
        __cxa_guard_release(guard_variable_for_DegToRad(float)::CONVERSION)
    
    y = v8.d f* *DegToRad(float)::CONVERSION

float var_98 = 0f

if ((EmitterTryGetLaunchParam(arg1, 0x1b, &var_98) & 1) != 0)
    v8.d = var_98
    
    if ((zx.d(*guard_variable_for_DegToRad(float)::CONVERSION) & 1) == 0
            && __cxa_guard_acquire(guard_variable_for_DegToRad(float)::CONVERSION) != 0)
        *DegToRad(float)::CONVERSION = *TWO_PI / float.s(0x43b40000)
        __cxa_guard_release(guard_variable_for_DegToRad(float)::CONVERSION)
    
    var_98 = v8.d f* *DegToRad(float)::CONVERSION

float var_9c

if ((EmitterTryGetLaunchParam(arg1, 0x19, &var_9c) & 1) != 0)
    float cosp_6
    float sinp_6
    sincosf(&sinp_6, &cosp_6, y)
    int128_t v0_11
    v0_11.d = sinp_6
    var_120.o = v0_11
    v0_11.d = var_98
    float cosp_5
    float sinp_5
    int128_t v1_4
    int128_t v3_3
    int128_t v5_1
    v1_4, v3_3, v5_1 = sincosf(&sinp_5, &cosp_5, v0_11.d)
    v1_4.d = cosp_5
    float v2_3 = var_9c
    v5_1:4.d = cosp_6
    v3_3.q = *(arg2 + 0xc)
    float v4_2 = *(arg2 + 0x14)
    v1_4.d = v5_1.d f* v1_4.d
    v1_4:4.d = v5_1:4.d f* v1_4.d
    v5_1.d = 0x3c23d70a
    v5_1:4.d = 0x3c23d70a
    float v0_12 = sinp_5 * v2_3
    v1_4.d = v1_4.d f* v2_3
    v1_4:4.d = v1_4:4.d f* v2_3
    *(arg2 + 0xc) = vadd_f32(v3_3, vmul_f32(v1_4, v5_1, 0))
    *(arg2 + 0x14) = v0_12 * float.s(0x3c23d70a) + v4_2

float var_a0

if ((EmitterTryGetLaunchParam(arg1, 0x18, &var_a0) & 1) != 0)
    float cosp_4
    float sinp_4
    sincosf(&sinp_4, &cosp_4, y)
    int128_t v0_14
    v0_14.d = sinp_4
    var_120.o = v0_14
    v0_14.d = var_98
    float cosp_3
    float sinp_3
    int128_t v0_15
    int128_t v2_4
    v0_15, v2_4 = sincosf(&sinp_3, &cosp_3, v0_14.d)
    v0_15.d = cosp_3
    float sinp_9 = sinp_3
    float v1_7 = var_a0
    v2_4.q = *(arg1 + 0x2a4)
    int64_t v4_3
    v4_3:4.d = cosp_4
    v0_15.d = v4_3.d f* v0_15.d
    v0_15:4.d = v4_3:4.d f* v0_15.d
    v0_15.d = v0_15.d f* v1_7
    v0_15:4.d = v0_15:4.d f* v1_7
    *(arg1 + 0x2a4) = vadd_f32(v2_4, v0_15)
    double v0_16
    v0_16.d = *(arg1 + 0x2ac)
    v0_16.d = sinp_9 * v1_7 f+ v0_16.d
    *(arg1 + 0x2ac) = v0_16.d

float var_a4

if ((EmitterTryGetLaunchParam(arg1, 0x1c, &var_a4) & 1) != 0)
    *(arg1 + 0x2a4) = var_a4 + *(arg1 + 0x2a4)

float var_a8

if ((EmitterTryGetLaunchParam(arg1, 0x1d, &var_a8) & 1) != 0)
    *(arg1 + 0x2a8) = var_a8 + *(arg1 + 0x2a8)

float var_ac

if ((EmitterTryGetLaunchParam(arg1, 0x1e, &var_ac) & 1) != 0)
    *(arg1 + 0x2ac) = var_ac + *(arg1 + 0x2ac)

int64_t* x22_3 = **(arg1 + 0x300)
int64_t* x8_34 = *x22_3

if (x8_34 == 0)
    if (x22_3[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x22_3, false, true)
    x8_34 = *x22_3

uint32_t x22_4 = zx.d(*(**x8_34 + sx.q(*(arg1 + 0x2f0)) * 0x168 + 0xe3))
int32_t x8_39 = 0

if (x22_4 == 0)
    int32_t x1_11 = *(x24 + x23 * 0x168 + 0xf8)
    
    if (x1_11 s>= 2)
        x8_39 = RandomInt(gRNG, x1_11)

int32_t x0_48 = 0
*(arg2 + 0x38) = x8_39

if (x22_4 == 0)
    int32_t x1_12 = *(x24 + x23 * 0x168 + 0xfc)
    
    if (x1_12 s>= 2)
        x0_48 = RandomInt(gRNG, x1_12)

*(arg2 + 0x3c) = x0_48
float var_b0
ParticleEmitter* result
int128_t v0_20
int128_t v1_11
int128_t v2_5
int128_t v3_4
int128_t v4_4
result, v0_20, v1_11, v2_5, v3_4, v4_4 = EmitterTryGetLaunchParam(arg1, 0x22, &var_b0)

if ((result.d & 1) != 0)
    v0_20.q = *(x27 + 0x68)
    v1_11.d = *(x27 + 0x70)
    v2_5.q = *(x27 + 0x90)
    v3_4.d = *(x27 + 0x98)
    v4_4.d = *(x27 + 0x80)
    int128_t v0_21 = vsub_f32(v0_20, v2_5)
    v2_5.d = var_b0
    v1_11.d = v1_11.d f- v3_4.d
    v0_21.d = v0_21.d f* v2_5.d
    v0_21:4.d = v0_21:4.d f* v2_5.d
    v3_4.d = *gSecondsPerUpdate f/ v4_4.d
    v4_4.q = *(arg2 + 0xc)
    v1_11.d = v1_11.d f* v2_5.d
    v2_5.d = *(arg2 + 0x14)
    v0_21.d = v0_21.d f* v3_4.d
    v0_21:4.d = v0_21:4.d f* v3_4.d
    v1_11.d = v3_4.d f* v1_11.d
    v1_11.d = v1_11.d f+ v2_5.d
    *(arg2 + 0xc) = vadd_f32(v4_4, v0_21).q
    *(arg2 + 0x14) = v1_11.d

void* x8_41 = x24 + x23 * 0x168
int128_t var_d0
int128_t var_c0

if (*(x8_41 + 0x110) s>= 1)
    v0_20.d = *TWO_PI
    v1_11.d = float.s(0x43b40000)
    int64_t i_2 = 0
    v8.d = fconvert.s(0.5f)
    v9.d = v0_20.d f/ v1_11.d
    v10.d = fconvert.s(1f)
    
    do
        int32_t* x8_48 = *(x24 + x23 * 0x168 + 0x118)
        uint64_t x9_10 = zx.q(x8_48[i_2 * 4] - 9)
        int64_t (* const x8_46)()
        float v5_2
        float v6_1
        float v7_1
        float v19_1
        float v20_1
        float v21_1
        float v22_1
        float v23_1
        float v24_1
        
        if (x9_10.d u<= 0x2f)
            switch (x9_10)
                case 0
                    result = *(x8_48 + (i_2 << 4) + 8)
                    
                    if (result == 0)
                        var_d0 = *TI
                        var_c0 = *(TI + 0x10)
                    else
                        v0_20.d = 0f
                        result, v0_20, v1_11, v2_5, v3_4, v4_4 =
                            AnimPathGetPosAtTime(result, 0, v0_20.d)
                    
                    v0_20.d = var_d0.d
                    v1_11.d = var_d0:4.d
                    v4_4.d = var_d0:8.d
                    v3_4.d = var_d0:0xc.d
                    v7_1 = var_c0.d
                    v19_1 = *(arg1 + 0x2a0)
                    v20_1 = *(arg1 + 0x294)
                    v21_1 = *(arg1 + 0x298)
                    v23_1 = v7_1 * v7_1
                    v24_1 = v1_11.d f* v1_11.d
                    float v25_1 = v1_11.d f* v4_4.d
                    float v26_1 = v7_1 f* v3_4.d
                    float v27_1 = v7_1 f* v4_4.d
                    float v28_1 = v1_11.d f* v3_4.d
                    float v29_1 = v4_4.d f* v3_4.d
                    float v30_1 = v7_1 f* v1_11.d
                    v11.d = v1_11.d f* v20_1
                    v12.d = v7_1 * v20_1
                    v13.d = v25_1 - v26_1
                    v25_1 = v25_1 + v26_1
                    v26_1 = v23_1 + v24_1
                    v23_1 = v23_1 - v24_1
                    v24_1 = v27_1 + v28_1
                    v27_1 = v28_1 - v27_1
                    v28_1 = v29_1 - v30_1
                    v29_1 = v30_1 + v29_1
                    float v31_1 = v7_1 * v19_1 f- v11.d
                    v11.d = v7_1 * v21_1
                    v30_1 = v1_11.d f* v19_1 f+ v12.d
                    v12.d = v4_4.d f* v19_1
                    v11.d = v12.d f+ v11.d
                    v12.d = *(arg1 + 0x290)
                    v6_1 = *(arg1 + 0x2ac)
                    v2_5.d = *(arg1 + 0x2a4)
                    v22_1 = *(arg1 + 0x29c)
                    v5_2 = *(arg1 + 0x2a8)
                    v12.d = v0_20.d f* v12.d
                    *(arg1 + 0x290) = v12.d
                    v12.d = v6_1 + v6_1
                    v24_1 = v24_1 f* v12.d
                    v28_1 = v28_1 f* v12.d
                    v12.d = v2_5.d f+ v2_5.d
                    v7_1 = v3_4.d f* v19_1 + v7_1 * v22_1
                    v19_1 = v4_4.d f* v4_4.d
                    v25_1 = v12.d f* v25_1
                    v27_1 = v12.d f* v27_1
                    v12.d = v5_2 + v5_2
                    v26_1 = v26_1 - v19_1
                    v13.d = v13.d f* v12.d
                    v29_1 = v29_1 f* v12.d
                    v12.d = v23_1 + v19_1
                    v19_1 = v23_1 - v19_1
                    v23_1 = v31_1 - v4_4.d f* v21_1
                    v30_1 = v30_1 + v4_4.d f* v22_1
                    v4_4.d = v4_4.d f* v20_1
                    v20_1 = v3_4.d f* v20_1
                    v31_1 = v1_11.d f* v21_1
                    v1_11.d = v1_11.d f* v22_1
                    v22_1 = v3_4.d f* v22_1
                    v21_1 = v3_4.d f* v21_1
                    v3_4.d = v3_4.d f* v3_4.d
                    v27_1 = v27_1 + v29_1
                    v26_1 = v26_1 f- v3_4.d
                    v29_1 = v12.d f- v3_4.d
                    v3_4.d = v19_1 f+ v3_4.d
                    v1_11.d = v20_1 f+ v11.d f- v1_11.d
                    v2_5.d = v2_5.d f* v26_1
                    v3_4.d = v3_4.d f* v6_1
                    *(arg1 + 0x298) = v1_11.d
                    v1_11.d = v2_5.d f+ v13.d
                    v2_5.d = v25_1 + v5_2 * v29_1
                    v3_4.d = v3_4.d f+ v27_1
                    v1_11.d = v1_11.d f+ v24_1
                    v2_5.d = v2_5.d f+ v28_1
                    v3_4.d = v0_20.d f* v3_4.d
                    v1_11.d = v0_20.d f* v1_11.d
                    v0_20.d = v0_20.d f* v2_5.d
                    v4_4.d = v31_1 + v7_1 f- v4_4.d
                    v2_5.d = var_c0:0xc.d f+ v3_4.d
                    v1_11.d = var_c0:4.d f+ v1_11.d
                    v0_20.d = var_c0:8.d f+ v0_20.d
                    *(arg1 + 0x294) = v30_1 - v21_1
                    *(arg1 + 0x29c) = v4_4.d
                    *(arg1 + 0x2a0) = v23_1 - v22_1
                    *(arg1 + 0x2a4) = v1_11.d
                    *(arg1 + 0x2a8) = v0_20.d
                    *(arg1 + 0x2ac) = v2_5.d
                case 0xe
                    DefScalarTrack* x23_7 = *(x8_48 + (i_2 << 4) + 8)
                    void* x26_7 = *(arg2 + 0x30)
                    
                    if (*(x23_7 + 8) == 1)
                        int32_t* x8_80 = *x23_7
                        v0_20.d = *x8_80
                        v1_11.d = x8_80[1]
                    
                    if (*(x23_7 + 8) != 1 || not(v0_20.d f== v1_11.d))
                        float v0_36 = MakeUnitFloat(WhiteNoise(*(x26_7 + 0x2c) * 0x17 + 0x211))
                        result, v0_20, v1_11, v2_5, v3_4, v4_4 =
                            TrackScalarGetValue(x23_7, *(x26_7 + 0x314), *(x26_7 + 0x308), v0_36)
                    
                    v1_11.d = float.s(0x42c80000)
                    v0_20.d = v1_11.d f/ v0_20.d
                    *(arg1 + 0x30c) = v0_20.d
                case 0x1a
                    int64_t* x23_1 = *(x8_48 + (i_2 << 4) + 8)
                    void* x26_1 = *(arg2 + 0x30)
                    
                    if (x23_1[1].d == 1)
                        int32_t* x8_52 = *x23_1
                        v0_20.d = *x8_52
                        v1_11.d = x8_52[1]
                    
                    if (x23_1[1].d != 1 || not(v0_20.d f== v1_11.d))
                        float v0_22 = MakeUnitFloat(WhiteNoise(*(x26_1 + 0x2c) * 0x23 + 0x4c9))
                        v0_20, v1_11 =
                            TrackScalarGetValue(x23_1, *(x26_1 + 0x314), *(x26_1 + 0x308), v0_22)
                    
                    if ((zx.d(*guard_variable_for_DegToRad(float)::CONVERSION) & 1) == 0)
                        var_120.d = v0_20.d
                        int32_t x0_99
                        x0_99, v0_20, v1_11 =
                            __cxa_guard_acquire(guard_variable_for_DegToRad(float)::CONVERSION)
                        v0_20.d = var_120.d
                        
                        if (x0_99 != 0)
                            *DegToRad(float)::CONVERSION = v9.d
                            v0_20, v1_11 = __cxa_guard_release(
                                guard_variable_for_DegToRad(float)::CONVERSION, v0_20)
                            v0_20.d = var_120.d
                    
                    v1_11.d = *DegToRad(float)::CONVERSION
                    v0_20.d = v0_20.d f* v1_11.d
                    v0_20.d = v0_20.d f* v8.d
                    float cosp
                    float sinp
                    result, v0_20, v1_11, v2_5, v3_4, v4_4 = sincosf(&sinp, &cosp, v0_20.d)
                    v0_20.d = cosp
                    v1_11.d = sinp
                    x8_46 = VZ
                label_f97450:
                    v2_5.d = *x8_46
                    v3_4.d = *(x8_46 + 4)
                    v4_4.d = *(x8_46 + 8)
                    v5_2 = *(arg1 + 0x2a0)
                    v6_1 = *(arg1 + 0x294)
                    v7_1 = *(arg1 + 0x298)
                    float v16_1 = *(arg1 + 0x29c)
                    v2_5.d = v2_5.d f* v1_11.d
                    v3_4.d = v3_4.d f* v1_11.d
                    v1_11.d = v1_11.d f* v4_4.d
                    v4_4.d = v0_20.d f* v5_2
                    float v17_1 = v0_20.d f* v6_1
                    float v18_1 = v0_20.d f* v7_1
                    v0_20.d = v0_20.d f* v16_1
                    v19_1 = v2_5.d f* v6_1
                    v20_1 = v3_4.d f* v7_1
                    v21_1 = v1_11.d f* v16_1
                    v22_1 = v5_2 f* v2_5.d
                    v23_1 = v3_4.d f* v16_1
                    v24_1 = v1_11.d f* v7_1
                    v16_1 = v2_5.d f* v16_1
                    v2_5.d = v2_5.d f* v7_1
                    v7_1 = v5_2 f* v3_4.d
                    v5_2 = v5_2 f* v1_11.d
                    v1_11.d = v1_11.d f* v6_1
                    v3_4.d = v3_4.d f* v6_1
                    v4_4.d = v4_4.d f- v19_1
                    v0_20.d = v5_2 f+ v0_20.d
                    v4_4.d = v4_4.d f- v20_1
                    v1_11.d = v1_11.d f+ v7_1 + v18_1
                    v0_20.d = v2_5.d f+ v0_20.d
                    v2_5.d = v4_4.d f- v21_1
                    v4_4.d = v22_1 + v17_1 + v23_1 - v24_1
                    v1_11.d = v1_11.d f- v16_1
                    v0_20.d = v0_20.d f- v3_4.d
                    *(arg1 + 0x294) = v4_4.d
                    *(arg1 + 0x298) = v1_11.d
                    *(arg1 + 0x29c) = v0_20.d
                    *(arg1 + 0x2a0) = v2_5.d
                case 0x1b
                    int64_t* x23_8 = *(x8_48 + (i_2 << 4) + 8)
                    void* x26_8 = *(arg2 + 0x30)
                    
                    if (x23_8[1].d == 1)
                        int32_t* x8_85 = *x23_8
                        v0_20.d = *x8_85
                        v1_11.d = x8_85[1]
                    
                    if (x23_8[1].d != 1 || not(v0_20.d f== v1_11.d))
                        float v0_38 = MakeUnitFloat(WhiteNoise(*(x26_8 + 0x2c) * 0x24 + 0x510))
                        v0_20, v1_11 =
                            TrackScalarGetValue(x23_8, *(x26_8 + 0x314), *(x26_8 + 0x308), v0_38)
                    
                    if ((zx.d(*guard_variable_for_DegToRad(float)::CONVERSION) & 1) == 0)
                        var_120.d = v0_20.d
                        int32_t x0_102
                        x0_102, v0_20, v1_11 =
                            __cxa_guard_acquire(guard_variable_for_DegToRad(float)::CONVERSION)
                        v0_20.d = var_120.d
                        
                        if (x0_102 != 0)
                            *DegToRad(float)::CONVERSION = v9.d
                            v0_20, v1_11 = __cxa_guard_release(
                                guard_variable_for_DegToRad(float)::CONVERSION, v0_20)
                            v0_20.d = var_120.d
                    
                    v1_11.d = *DegToRad(float)::CONVERSION
                    v0_20.d = v0_20.d f* v1_11.d
                    v0_20.d = v0_20.d f* v8.d
                    float cosp_1
                    float sinp_1
                    result, v0_20, v1_11, v2_5, v3_4, v4_4 = sincosf(&sinp_1, &cosp_1, v0_20.d)
                    v0_20.d = cosp_1
                    v1_11.d = sinp_1
                    x8_46 = VX
                    goto label_f97450
                case 0x1c
                    int64_t* x23_9 = *(x8_48 + (i_2 << 4) + 8)
                    void* x26_9 = *(arg2 + 0x30)
                    
                    if (x23_9[1].d == 1)
                        int32_t* x8_91 = *x23_9
                        v0_20.d = *x8_91
                        v1_11.d = x8_91[1]
                    
                    if (x23_9[1].d != 1 || not(v0_20.d f== v1_11.d))
                        float v0_40 = MakeUnitFloat(WhiteNoise(*(x26_9 + 0x2c) * 0x25 + 0x559))
                        v0_20, v1_11 =
                            TrackScalarGetValue(x23_9, *(x26_9 + 0x314), *(x26_9 + 0x308), v0_40)
                    
                    if ((zx.d(*guard_variable_for_DegToRad(float)::CONVERSION) & 1) == 0)
                        var_120.d = v0_20.d
                        int32_t x0_105
                        x0_105, v0_20, v1_11 =
                            __cxa_guard_acquire(guard_variable_for_DegToRad(float)::CONVERSION)
                        v0_20.d = var_120.d
                        
                        if (x0_105 != 0)
                            *DegToRad(float)::CONVERSION = v9.d
                            v0_20, v1_11 = __cxa_guard_release(
                                guard_variable_for_DegToRad(float)::CONVERSION, v0_20)
                            v0_20.d = var_120.d
                    
                    v1_11.d = *DegToRad(float)::CONVERSION
                    v0_20.d = v0_20.d f* v1_11.d
                    v0_20.d = v0_20.d f* v8.d
                    float cosp_2
                    float sinp_2
                    result, v0_20, v1_11, v2_5, v3_4, v4_4 = sincosf(&sinp_2, &cosp_2, v0_20.d)
                    v0_20.d = cosp_2
                    v1_11.d = sinp_2
                    x8_46 = VY
                    goto label_f97450
                case 0x1d
                    DefScalarTrack* x23_2 = *(x8_48 + (i_2 << 4) + 8)
                    void* x26_2 = *(arg2 + 0x30)
                    
                    if (*(x23_2 + 8) == 1)
                        int32_t* x8_55 = *x23_2
                        v0_20.d = *x8_55
                        v1_11.d = x8_55[1]
                    
                    if (*(x23_2 + 8) != 1 || not(v0_20.d f== v1_11.d))
                        float v0_26 = MakeUnitFloat(WhiteNoise(*(x26_2 + 0x2c) * 0x26 + 0x5a4))
                        result, v0_20, v1_11, v2_5, v3_4, v4_4 =
                            TrackScalarGetValue(x23_2, *(x26_2 + 0x314), *(x26_2 + 0x308), v0_26)
                    
                    v1_11.d = *arg2
                    v0_20.d = v0_20.d f+ v1_11.d
                    *arg2 = v0_20.d
                case 0x1e
                    DefScalarTrack* x23_10 = *(x8_48 + (i_2 << 4) + 8)
                    void* x26_10 = *(arg2 + 0x30)
                    
                    if (*(x23_10 + 8) == 1)
                        int32_t* x8_97 = *x23_10
                        v0_20.d = *x8_97
                        v1_11.d = x8_97[1]
                    
                    if (*(x23_10 + 8) != 1 || not(v0_20.d f== v1_11.d))
                        float v0_42 = MakeUnitFloat(WhiteNoise(*(x26_10 + 0x2c) * 0x27 + 0x5f1))
                        result, v0_20, v1_11, v2_5, v3_4, v4_4 =
                            TrackScalarGetValue(x23_10, *(x26_10 + 0x314), *(x26_10 + 0x308), v0_42)
                    
                    v1_11.d = *(arg2 + 4)
                    v0_20.d = v0_20.d f+ v1_11.d
                    *(arg2 + 4) = v0_20.d
                case 0x1f
                    DefScalarTrack* x23_11 = *(x8_48 + (i_2 << 4) + 8)
                    void* x26_11 = *(arg2 + 0x30)
                    
                    if (*(x23_11 + 8) == 1)
                        int32_t* x8_102 = *x23_11
                        v0_20.d = *x8_102
                        v1_11.d = x8_102[1]
                    
                    if (*(x23_11 + 8) != 1 || not(v0_20.d f== v1_11.d))
                        float v0_44 = MakeUnitFloat(WhiteNoise(*(x26_11 + 0x2c) * 0x28 + 0x640))
                        result, v0_20, v1_11, v2_5, v3_4, v4_4 =
                            TrackScalarGetValue(x23_11, *(x26_11 + 0x314), *(x26_11 + 0x308), v0_44)
                    
                    v1_11.d = *(arg2 + 8)
                    v0_20.d = v0_20.d f+ v1_11.d
                    *(arg2 + 8) = v0_20.d
                case 0x20
                    DefScalarTrack* x23_12 = *(x8_48 + (i_2 << 4) + 8)
                    void* x26_12 = *(arg2 + 0x30)
                    
                    if (*(x23_12 + 8) == 1)
                        int32_t* x8_107 = *x23_12
                        v0_20.d = *x8_107
                        v1_11.d = x8_107[1]
                    
                    if (*(x23_12 + 8) != 1 || not(v0_20.d f== v1_11.d))
                        float v0_46 = MakeUnitFloat(WhiteNoise(*(x26_12 + 0x2c) * 0x29 + 0x691))
                        result, v0_20, v1_11, v2_5, v3_4, v4_4 =
                            TrackScalarGetValue(x23_12, *(x26_12 + 0x314), *(x26_12 + 0x308), v0_46)
                    
                    v1_11.d = *(arg1 + 0x2a4)
                    v0_20.d = v0_20.d f+ v1_11.d
                    *(arg1 + 0x2a4) = v0_20.d
                case 0x21
                    DefScalarTrack* x23_13 = *(x8_48 + (i_2 << 4) + 8)
                    void* x26_13 = *(arg2 + 0x30)
                    
                    if (*(x23_13 + 8) == 1)
                        int32_t* x8_112 = *x23_13
                        v0_20.d = *x8_112
                        v1_11.d = x8_112[1]
                    
                    if (*(x23_13 + 8) != 1 || not(v0_20.d f== v1_11.d))
                        float v0_48 = MakeUnitFloat(WhiteNoise(*(x26_13 + 0x2c) * 0x2a + 0x6e4))
                        result, v0_20, v1_11, v2_5, v3_4, v4_4 =
                            TrackScalarGetValue(x23_13, *(x26_13 + 0x314), *(x26_13 + 0x308), v0_48)
                    
                    v1_11.d = *(arg1 + 0x2a8)
                    v0_20.d = v0_20.d f+ v1_11.d
                    *(arg1 + 0x2a8) = v0_20.d
                case 0x22
                    DefScalarTrack* x23_3 = *(x8_48 + (i_2 << 4) + 8)
                    void* x26_3 = *(arg2 + 0x30)
                    
                    if (*(x23_3 + 8) == 1)
                        int32_t* x8_60 = *x23_3
                        v0_20.d = *x8_60
                        v1_11.d = x8_60[1]
                    
                    if (*(x23_3 + 8) != 1 || not(v0_20.d f== v1_11.d))
                        float v0_28 = MakeUnitFloat(WhiteNoise(*(x26_3 + 0x2c) * 0x2b + 0x739))
                        result, v0_20, v1_11, v2_5, v3_4, v4_4 =
                            TrackScalarGetValue(x23_3, *(x26_3 + 0x314), *(x26_3 + 0x308), v0_28)
                    
                    v1_11.d = *(arg1 + 0x2ac)
                    v0_20.d = v0_20.d f+ v1_11.d
                    *(arg1 + 0x2ac) = v0_20.d
                case 0x23
                    DefScalarTrack* x23_4 = *(x8_48 + (i_2 << 4) + 8)
                    void* x26_4 = *(arg2 + 0x30)
                    
                    if (*(x23_4 + 8) == 1)
                        int32_t* x8_65 = *x23_4
                        v0_20.d = *x8_65
                        v1_11.d = x8_65[1]
                    
                    if (*(x23_4 + 8) != 1 || not(v0_20.d f== v1_11.d))
                        float v0_30 = MakeUnitFloat(WhiteNoise(*(x26_4 + 0x2c) * 0x2c + 0x790))
                        result, v0_20, v1_11, v2_5, v3_4, v4_4 =
                            TrackScalarGetValue(x23_4, *(x26_4 + 0x314), *(x26_4 + 0x308), v0_30)
                    
                    v1_11.d = *(arg2 + 0xc)
                    v0_20.d = v0_20.d f+ v1_11.d
                    *(arg2 + 0xc) = v0_20.d
                case 0x24
                    DefScalarTrack* x23_5 = *(x8_48 + (i_2 << 4) + 8)
                    void* x26_5 = *(arg2 + 0x30)
                    
                    if (*(x23_5 + 8) == 1)
                        int32_t* x8_70 = *x23_5
                        v0_20.d = *x8_70
                        v1_11.d = x8_70[1]
                    
                    if (*(x23_5 + 8) != 1 || not(v0_20.d f== v1_11.d))
                        float v0_32 = MakeUnitFloat(WhiteNoise(*(x26_5 + 0x2c) * 0x2d + 0x7e9))
                        result, v0_20, v1_11, v2_5, v3_4, v4_4 =
                            TrackScalarGetValue(x23_5, *(x26_5 + 0x314), *(x26_5 + 0x308), v0_32)
                    
                    v1_11.d = *(arg2 + 0x10)
                    v0_20.d = v0_20.d f+ v1_11.d
                    *(arg2 + 0x10) = v0_20.d
                case 0x25
                    DefScalarTrack* x23_6 = *(x8_48 + (i_2 << 4) + 8)
                    void* x26_6 = *(arg2 + 0x30)
                    
                    if (*(x23_6 + 8) == 1)
                        int32_t* x8_75 = *x23_6
                        v0_20.d = *x8_75
                        v1_11.d = x8_75[1]
                    
                    if (*(x23_6 + 8) != 1 || not(v0_20.d f== v1_11.d))
                        float v0_34 = MakeUnitFloat(WhiteNoise(*(x26_6 + 0x2c) * 0x2e + 0x844))
                        result, v0_20, v1_11, v2_5, v3_4, v4_4 =
                            TrackScalarGetValue(x23_6, *(x26_6 + 0x314), *(x26_6 + 0x308), v0_34)
                    
                    v1_11.d = *(arg2 + 0x14)
                    v0_20.d = v0_20.d f+ v1_11.d
                    *(arg2 + 0x14) = v0_20.d
                case 0x2d
                    int64_t* x23_14 = *(x8_48 + (i_2 << 4) + 8)
                    void* x26_14 = *(arg2 + 0x30)
                    
                    if (x23_14[1].d == 1)
                        int32_t* x8_117 = *x23_14
                        v0_20.d = *x8_117
                        v1_11.d = x8_117[1]
                    
                    if (x23_14[1].d != 1 || not(v0_20.d f== v1_11.d))
                        float v0_50 = MakeUnitFloat(WhiteNoise(*(x26_14 + 0x2c) * 0x36 + 0xb64))
                        result, v0_20, v1_11, v2_5, v3_4, v4_4 =
                            TrackScalarGetValue(x23_14, *(x26_14 + 0x314), *(x26_14 + 0x308), v0_50)
                    
                    if ((zx.d(*guard_variable_for_DegToRad(float)::CONVERSION) & 1) == 0)
                        var_120.d = v0_20.d
                        result, v0_20, v1_11, v2_5, v3_4, v4_4 =
                            __cxa_guard_acquire(guard_variable_for_DegToRad(float)::CONVERSION)
                        v0_20.d = var_120.d
                        
                        if (result.d != 0)
                            *DegToRad(float)::CONVERSION = v9.d
                            result, v0_20, v1_11, v2_5, v3_4, v4_4 = __cxa_guard_release(
                                guard_variable_for_DegToRad(float)::CONVERSION, v0_20)
                            v0_20.d = var_120.d
                    
                    v2_5.d = *(arg2 + 0x24)
                    v1_11.d = *DegToRad(float)::CONVERSION
                    v0_20.d = v0_20.d f* v1_11.d
                    v0_20.d = v2_5.d f+ v0_20.d
                    *(arg2 + 0x24) = v0_20.d
                case 0x2f
                    do
                        var_120 = RandomUnit(gRNG)
                        int64_t v0_25 = RandomUnit(gRNG)
                        int128_t v1_14
                        int128_t v3_5
                        result, v0_20, v1_14, v3_5, v4_4 = RandomUnit(gRNG)
                        v0_20.d = v0_20.d f+ v0_20.d
                        v3_5:4.d = v0_25.o.d
                        v1_14.q = *V1
                        v0_20.d = v0_20.d f- *(V1 + 8)
                        v1_11 = vsub_f32(vadd_f32(v3_5, v3_5), v1_14)
                        v2_5 = vmul_f32(v1_11, v1_11, 0)
                        v2_5.d = v2_5.d f+ v2_5:4.d
                        v3_4.d = v0_20.d f* v0_20.d
                        v2_5.d = v2_5.d f+ v3_4.d
                    while (v2_5.d f> v10.d)
                    
                    v2_5.d = sqrt(v2_5.d)
                    v2_5.d = v10.d f/ v2_5.d
                    v1_11.d = v1_11.d f* v2_5.d
                    v1_11:4.d = v1_11:4.d f* v2_5.d
                    v0_20.d = v0_20.d f* v2_5.d
                    *(arg2 + 0x18) = v1_11.q
                    *(arg2 + 0x20) = v0_20.d
        i_2 += 1
    while (i_2 s< sx.q(*(x8_41 + 0x110)))

v0_20 = *(TI + 0x10)
int64_t* x8_121 = *(arg1 + 0x300)
*(arg1 + 0x2b0) = *TI
*(arg1 + 0x2c0) = v0_20
int64_t* x20_1 = *x8_121
int64_t* x8_122 = *x20_1

if (x8_122 == 0)
    if (x20_1[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    result, v0_20, v1_11 = AssetCatalogLoadAsset(x20_1, false, true)
    x8_122 = *x20_1

if (zx.d(*(**x8_122 + sx.q(*(arg1 + 0x2f0)) * 0x168 + 0xe1)) != 0)
    result = *(arg1 + 0x2f8)
    
    if (result == 0)
        void* x8_128 = *(arg1 + 0x300)
        v0_20 = *(x8_128 + 0x64)
        v1_11 = *(x8_128 + 0x54)
    else
        result, v0_20, v1_11 = ParticleGetParticleToSystemTransform(result)
        v1_11 = var_d0
        v0_20 = var_c0
    
    *(arg1 + 0x2b0) = v1_11
    *(arg1 + 0x2c0) = v0_20

return result
