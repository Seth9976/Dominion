// 函数: _Z33ParticleGetParticleWorldTransformRK19ParticleRenderStateP15ParticleEmitter
// 地址: 0xf98a98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x22 = **(arg2 + 0x300)
int64_t* x9_1 = *x22

if (x9_1 == 0)
    if (x22[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x22, false, true)
    x9_1 = *x22

float* entry_x8
float v0
float v1
float v3
float v4
float v5
float v6
float v7
float v16
float v20
float v24
float v2
float v17
float v18
float v19
float v21
float v22
float v23
float v25
float v26
float v27

if (zx.d(*(**x9_1 + sx.q(*(arg2 + 0x2f0)) * 0x168 + 0xe1)) == 0)
    v0 = *(arg1 + 0x68)
    v2 = *(arg1 + 0x6c)
    v1 = *(arg1 + 0x70)
    v3 = *(arg1 + 0x74)
    v4 = *(arg1 + 0x78)
    v7 = *(arg2 + 0x2ac)
    v5 = *(arg2 + 0x2a4)
    v6 = *(arg2 + 0x2a8)
    v17 = v4 * v4
    v18 = v2 * v2
    v21 = v2 * v1
    v22 = v4 * v3
    v23 = v4 * v1
    v24 = v2 * v3
    v25 = v1 * v3
    v26 = v4 * v2
    v27 = v21 - v22
    v21 = v21 + v22
    v22 = v17 + v18
    v17 = v17 - v18
    v18 = v23 + v24
    v23 = v24 - v23
    v24 = v25 - v26
    v25 = v26 + v25
    v26 = v7 + v7
    v20 = v6 + v6
    v18 = v18 * v26
    v24 = v24 * v26
    v26 = v5 + v5
    v19 = v1 * v1
    v27 = v27 * v20
    v20 = v26 * v23 + v25 * v20
    v23 = v3 * v3
    v7 = *(arg1 + 0x84) + v0 * ((v17 - v19 + v23) * v7 + v20)
    v5 = *(arg1 + 0x7c) + v0 * (v5 * (v22 - v19 - v23) + v27 + v18)
    entry_x8[6] = *(arg1 + 0x80) + v0 * (v26 * v21 + v6 * (v17 + v19 - v23) + v24)
    entry_x8[7] = v7
    entry_x8[5] = v5
    v5 = *(arg2 + 0x2a0)
    v6 = *(arg2 + 0x294)
    v7 = *(arg2 + 0x298)
    v16 = *(arg2 + 0x29c)
    v17 = v4 * v5
    v18 = v2 * v6
    v21 = v4 * v6
    v20 = v3 * v16
    v22 = v2 * v5
    v24 = v3 * v7
    v25 = v4 * v7
    v26 = v1 * v5
    v27 = v3 * v6
    v4 = v4 * v16
    v23 = v1 * v16
    v16 = v2 * v16
    v2 = v2 * v7
    v3 = v3 * v5 + v4
    v4 = v17 - v18 - v1 * v7
    v5 = v22 + v21 + v23
    v7 = v27 + v26 + v25
    v3 = v2 + v3
else
    v2 = *(arg2 + 0x2c0)
    v3 = *(arg2 + 0x2b4)
    v1 = *(arg2 + 0x2b8)
    v4 = *(arg2 + 0x2bc)
    v7 = *(arg2 + 0x2ac)
    v5 = *(arg2 + 0x2a4)
    v6 = *(arg2 + 0x2a8)
    v18 = v2 * v2
    v19 = v3 * v3
    v21 = v3 * v1
    v22 = v2 * v4
    v23 = v2 * v1
    v24 = v3 * v4
    v25 = v1 * v4
    v26 = v2 * v3
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
    v20 = v1 * v1
    v23 = v23 + v25 * v26
    v25 = v4 * v4
    v0 = *(arg2 + 0x2b0)
    v7 = *(arg2 + 0x2cc) + v0 * ((v18 - v20 + v25) * v7 + v23)
    v5 = *(arg2 + 0x2c4) + v0 * (v5 * (v22 - v20 - v25) + v27 * v26 + v19)
    entry_x8[6] = *(arg2 + 0x2c8) + v0 * (v21 + v6 * (v18 + v20 - v25) + v24)
    entry_x8[7] = v7
    entry_x8[5] = v5
    v5 = *(arg2 + 0x2a0)
    v6 = *(arg2 + 0x294)
    v7 = *(arg2 + 0x298)
    v16 = *(arg2 + 0x29c)
    v17 = v2 * v5
    v18 = v3 * v6
    v21 = v2 * v6
    v20 = v4 * v16
    v22 = v3 * v5
    v24 = v4 * v7
    v25 = v2 * v7
    v26 = v1 * v5
    v27 = v4 * v6
    v2 = v2 * v16
    v23 = v1 * v16
    v16 = v3 * v16
    v3 = v3 * v7
    v2 = v4 * v5 + v2
    v4 = v17 - v18 - v1 * v7
    v5 = v22 + v21 + v23
    v7 = v27 + v26 + v25
    v3 = v3 + v2
entry_x8[1] = v5 - v24
entry_x8[2] = v7 - v16
entry_x8[3] = v3 - v1 * v6
entry_x8[4] = v4 - v20
*entry_x8 = v0 * *(arg2 + 0x290)
