// 函数: _Z17UI2ParticleUpdateR3UI2f
// 地址: 0x10235f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

UI2& i = arg1
XAsset* x21 = *(arg1 + 0x14e8)
ParticleSystem* x20 = ParticleTryToGet(zx.q(*(arg1 + 0x13d8)))
float v0 = GameGetTimeSimulation()
int32_t v0_1 = UI2PropDynamic<float>::Eval(v0)
int32_t x0_4
float* x3
int128_t v0_2
int128_t v1
int128_t v2
int128_t v5
x0_4, x3, v0_2, v1, v2, v5 = ParticleIs3D(x20)
int32_t var_48
double var_38

if ((x0_4 & 1) == 0)
    float v3_1 = fconvert.s(0.5f)
    v0_2.q = *V21
    v1.d = 0x42c80000
    v1:4.d = 0x42c80000
    v2.q = *(i + 0x175c)
    int128_t v0_3 = vmul_f32(v0_2, v1, 0)
    v1.d = v3_1 f* v2.d
    v3_1 = v3_1 f* v2:4.d
    v5.q = *V20
    var_38 = vdiv_f32(v2, vsub_f32(v0_3, v5))
    double v0_5
    v0_5.d = *(i + 0x16b0)
    v2.d = *(i + 0x16c0)
    v5.d = *(i + 0x16b4)
    float v6_1 = *(i + 0x16b8)
    float v7_1 = *(i + 0x16bc)
    v1.d = v1.d f* v0_5.d
    v3_1 = v3_1 f* v0_5.d
    v0_5.d = v0_5.d f* 0f
    float v4_1 = v2.d f* v2.d
    float v18_1 = v5.d f* v5.d
    float v19_1 = v6_1 * v6_1
    float v20_1 = v7_1 * v7_1
    float v21_1 = v5.d f* v6_1
    float v22_1 = v2.d f* v7_1
    float v23_1 = v2.d f* v6_1
    v6_1 = v6_1 * v7_1
    v7_1 = v5.d f* v7_1
    v2.d = v2.d f* v5.d
    v5.d = v4_1 + v18_1
    v0_5.d = v0_5.d f+ v0_5.d
    v2.d = v6_1 f- v2.d
    v5.d = v5.d f- v19_1
    v4_1 = v4_1 - v18_1 + v19_1
    v7_1 = v0_5.d f* (v23_1 + v7_1)
    v0_5.d = v0_5.d f* v2.d
    v2.d = v5.d f- v20_1
    v18_1 = (v1.d f+ v1.d) * (v21_1 + v22_1)
    v1.d = v1.d f* v2.d
    v2.d = v3_1 * (v4_1 - v20_1)
    v1.d = v1.d f+ (v3_1 + v3_1) * (v21_1 - v22_1)
    v2.d = v18_1 f+ v2.d
    v1.d = v7_1 f+ v1.d
    v0_5.d = v0_5.d f+ v2.d
    v1.d = *(i + 0x16c4) f+ v1.d
    v0_5.d = *(i + 0x16c8) f+ v0_5.d
    var_48 = v1.d
    int32_t var_44_1 = v0_5.d
else
    UI2ParticleTransform3D(i, &var_38, &var_48, x3)

int64_t result
float v0_7
int128_t v1_1
int128_t v3_2
result, v0_7, v1_1, v3_2 = UI2PropDynamic<float>::Eval(v0)
v1_1.d = *(i + 0x1710)
float v10 = v0_7 f* v1_1.d

if (x21 == 0 || x20 != 0 || v10 == 0f)
    if (x21 != 0)
        if (x21 == *(i + 0x13e0))
            goto label_10237c4
        
        if (x20 != 0)
            ParticleDestroy(x20)
        
        goto label_10237b4
    
    if (x20 == 0)
        goto label_10237c4
    
    *(i + 0x13e0) = 0
    
    if (v10 != 0f)
    label_10237d0:
        
        if (x20 != 0)
            v0_7 = *(*gpRenderAppData + 0xa0)
            v3_2.q = *VZ
            v10 = *(VZ + 8)
            v1_1.d = 0xc2c80000
            v1_1:4.d = 0xc2c80000
            int64_t var_60_1 = v3_2.q
            v3_2.d = v3_2.d f* v0_7
            v3_2:4.d = v3_2:4.d f* v0_7
            int128_t v1_2 = vmul_f32(v3_2, v1_1, 0)
            v3_2.q = var_48.q
            *(x20 + 0x68) = vadd_f32(v3_2, v1_2)
            *(x20 + 0x70) = v0_7 * v10 * float.s(0xc2c80000) + 0f
            v0_7 = var_38.d
            double v1_3
            v1_3.d = var_38:4.d
            v3_2.d = *QUARTER_PI
            v3_2.d = v3_2.d f+ v0_1
            
            if (not(v0_7 f< v1_3.d))
                v0_7 = v1_3.d
            
            *(x20 + 0x54) = v0_7
            float cosp
            float sinp
            sincosf(&sinp, &cosp, v3_2.d f* fconvert.s(0.5f))
            float cosp_1 = cosp
            float sinp_1 = sinp
            int64_t v3_3
            v3_3.d = sinp_1 f* var_60_1:4.d
            *(x20 + 0x60) = sinp_1 * v10
            *(x20 + 0x64) = cosp_1
            *(x20 + 0x58) = sinp_1 f* var_60_1.d
            *(x20 + 0x5c) = v3_3.d
            result = ParticleUpdateParams(x20, arg2)
            
            do
                *(i + 0x1378) = 2
                i = *(i + 0x17d0)
            while (i != 0)
else if (x21 != *(i + 0x13e0) || zx.d(*(i + 0x14)) != 0)
label_10237b4:
    ParticleSystem* x0_9 = ParticleCreate(x21, &var_48)
    x20 = x0_9
    result, v1_1, v3_2 = ParticleGetID(x0_9)
    *(i + 0x13d8) = result.d
label_10237c4:
    *(i + 0x13e0) = x21
    
    if (not(v10 == 0f))
        goto label_10237d0

return result
