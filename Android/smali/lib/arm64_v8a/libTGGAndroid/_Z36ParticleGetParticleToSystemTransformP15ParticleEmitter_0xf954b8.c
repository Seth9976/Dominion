// 函数: _Z36ParticleGetParticleToSystemTransformP15ParticleEmitter
// 地址: 0xf954b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

ParticleEmitter* x19 = arg1
int64_t* x21 = **(arg1 + 0x300)
int64_t* x9_1 = *x21

if (x9_1 == 0)
    if (x21[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x21, false, true)
    x9_1 = *x21

float* entry_x8
float v0
float v1
float v2
float v3
float v4
float v5
float v6
float v7
float v16
float v18
float v19
float v20
float v21
float v22
float v23
float v24
float v25
float v26
float v27

if (zx.d(*(**x9_1 + sx.q(*(x19 + 0x2f0)) * 0x168 + 0xe1)) == 0)
    arg1 = *(x19 + 0x2f8)
    
    if (arg1 == 0)
        void* x8_5 = *(x19 + 0x300)
        v5 = *(x19 + 0x2a4)
        v6 = *(x19 + 0x2a8)
        v7 = *(x19 + 0x2ac)
        v0 = *(x8_5 + 0x54)
        v2 = *(x8_5 + 0x58)
        v1 = *(x8_5 + 0x5c)
        v3 = *(x8_5 + 0x60)
        v4 = *(x8_5 + 0x64)
        v16 = v6 + v6
        v20 = v2 * v2
        v21 = v2 * v1
        v19 = v4 * v4
        v22 = v4 * v3
        v23 = v4 * v1
        v24 = v2 * v3
        v25 = v1 * v3
        v26 = v4 * v2
        float v17 = v7 + v7
        v27 = v21 - v22
        v21 = v21 + v22
        v22 = v19 + v20
        v19 = v19 - v20
        v20 = v23 + v24
        v23 = v24 - v23
        v24 = v25 - v26
        v25 = v26 + v25
        v26 = v5 + v5
        v20 = v20 * v17
        v17 = v24 * v17
        v24 = v1 * v1
        v27 = v27 * v16
        v16 = v26 * v23 + v25 * v16
        v23 = v3 * v3
        v7 = *(x8_5 + 0x70) + v0 * ((v19 - v24 + v23) * v7 + v16)
        v5 = *(x8_5 + 0x68) + v0 * (v5 * (v22 - v24 - v23) + v27 + v20)
        entry_x8[6] = *(x8_5 + 0x6c) + v0 * (v26 * v21 + v6 * (v19 + v24 - v23) + v17)
        entry_x8[7] = v7
        entry_x8[5] = v5
        v5 = *(x19 + 0x2a0)
        v6 = *(x19 + 0x294)
        v7 = *(x19 + 0x298)
        v16 = *(x19 + 0x29c)
        v17 = v4 * v5
        v18 = v2 * v6
        v21 = v4 * v6
        v20 = v3 * v16
        v22 = v2 * v5
        v24 = v3 * v7
        v25 = v4 * v7
        v27 = v3 * v6
        v4 = v4 * v16
        v23 = v1 * v16
        v16 = v2 * v16
        v2 = v2 * v7 + v3 * v5 + v4
        v3 = v17 - v18 - v1 * v7 - v20
        v4 = v22 + v21 + v23 - v24
        v5 = v27 + v1 * v5 + v25 - v16
        v1 = v2 - v1 * v6
    else
        ParticleGetParticleToSystemTransform(arg1)
        float var_40
        v0 = var_40
        float v7_1 = *(x19 + 0x2ac)
        v5 = *(x19 + 0x2a4)
        float v6_1 = *(x19 + 0x2a8)
        float var_30
        float v17_1 = var_30 * var_30
        float var_3c
        float v18_1 = var_3c * var_3c
        float var_38
        float v21_1 = var_3c * var_38
        float var_34
        float v22_1 = var_30 * var_34
        float v23_1 = var_30 * var_38
        float v24_1 = var_3c * var_34
        float v25_1 = var_38 * var_34
        float v26_1 = var_30 * var_3c
        float v27_1 = v21_1 - v22_1
        v21_1 = v21_1 + v22_1
        v22_1 = v17_1 + v18_1
        v17_1 = v17_1 - v18_1
        v18_1 = v23_1 + v24_1
        v23_1 = v24_1 - v23_1
        v24_1 = v25_1 - v26_1
        v25_1 = v26_1 + v25_1
        v26_1 = v7_1 + v7_1
        float v20_1 = v6_1 + v6_1
        v18_1 = v18_1 * v26_1
        v24_1 = v24_1 * v26_1
        v26_1 = v5 + v5
        float v19_1 = var_38 * var_38
        v27_1 = v27_1 * v20_1
        v20_1 = v26_1 * v23_1 + v25_1 * v20_1
        v23_1 = var_34 * var_34
        float var_28
        entry_x8[6] = var_28 + v0 * (v26_1 * v21_1 + v6_1 * (v17_1 + v19_1 - v23_1) + v24_1)
        float var_24
        entry_x8[7] = var_24 + v0 * ((v17_1 - v19_1 + v23_1) * v7_1 + v20_1)
        float var_2c
        entry_x8[5] = var_2c + v0 * (v5 * (v22_1 - v19_1 - v23_1) + v27_1 + v18_1)
        v5 = *(x19 + 0x2a0)
        v6_1 = *(x19 + 0x294)
        v7_1 = *(x19 + 0x298)
        float v16_1 = *(x19 + 0x29c)
        v1 = var_3c * v7_1 + var_34 * v5 + var_30 * v16_1
        v3 = var_30 * v5 - var_3c * v6_1 - var_38 * v7_1 - var_34 * v16_1
        v4 = var_3c * v5 + var_30 * v6_1 + var_38 * v16_1 - var_34 * v7_1
        v5 = var_34 * v6_1 + var_38 * v5 + var_30 * v7_1 - var_3c * v16_1
        v1 = v1 - var_38 * v6_1
    
    entry_x8[1] = v4
    entry_x8[2] = v5
    entry_x8[3] = v1
    entry_x8[4] = v3
else
    v1 = *(x19 + 0x2c0)
    v2 = *(x19 + 0x2b4)
    v3 = *(x19 + 0x2b8)
    v4 = *(x19 + 0x2bc)
    v7 = *(x19 + 0x2ac)
    v5 = *(x19 + 0x2a4)
    v6 = *(x19 + 0x2a8)
    v18 = v1 * v1
    v19 = v2 * v2
    v21 = v2 * v3
    v22 = v1 * v4
    v23 = v1 * v3
    v24 = v2 * v4
    v25 = v3 * v4
    v26 = v1 * v2
    v27 = v21 - v22
    v21 = v21 + v22
    v22 = v18 + v19
    v18 = v18 - v19
    v19 = v23 + v24
    v23 = v24 - v23
    v24 = v25 - v26
    v25 = v26 + v25
    v26 = v7 + v7
    v19 = v19 * v26
    v24 = v24 * v26
    v26 = v5 + v5
    v21 = v26 * v21
    v23 = v26 * v23
    v26 = v6 + v6
    v20 = v3 * v3
    v23 = v23 + v25 * v26
    v25 = v4 * v4
    v0 = *(x19 + 0x2b0)
    v7 = *(x19 + 0x2cc) + v0 * ((v18 - v20 + v25) * v7 + v23)
    v5 = *(x19 + 0x2c4) + v0 * (v5 * (v22 - v20 - v25) + v27 * v26 + v19)
    entry_x8[6] = *(x19 + 0x2c8) + v0 * (v21 + v6 * (v18 + v20 - v25) + v24)
    entry_x8[7] = v7
    entry_x8[5] = v5
    v5 = *(x19 + 0x2a0)
    v6 = *(x19 + 0x294)
    v7 = *(x19 + 0x298)
    v16 = *(x19 + 0x29c)
    entry_x8[1] = v2 * v5 + v1 * v6 + v3 * v16 - v4 * v7
    entry_x8[2] = v4 * v6 + v3 * v5 + v1 * v7 - v2 * v16
    entry_x8[3] = v2 * v7 + v4 * v5 + v1 * v16 - v3 * v6
    entry_x8[4] = v1 * v5 - v2 * v6 - v3 * v7 - v4 * v16
*entry_x8 = v0 * *(x19 + 0x290)
