// 函数: _Z9FabUpdateR8FabStatefi
// 地址: 0xf5f7f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_a0 = v15
int64_t v14
int64_t var_98 = v14
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
int64_t* x21 = *arg1
FabState& var_f8 = arg1

if (x21 == 0)
    return 

int64_t* x8_1 = *x21
v8 = arg2.q
int128_t v1
int128_t v2

if (x8_1 == 0)
    if (x21[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    arg1, v1, v2 = AssetCatalogLoadAsset(x21, false, true)
    x8_1 = *x21

int64_t* x9_1 = *x8_1

if (x9_1[1].d s< 1)
    return 

int64_t i = 0
int64_t* var_100_1 = x9_1
float var_114_1 = *PI

do
    int64_t fp_1 = *x9_1
    int32_t x9_2 = *(var_f8 + (i << 2) + 0x88)
    FabState* x21_1
    int32_t x8_8
    uint64_t x20_1
    
    if (x9_2 == 0)
        x8_8 = *(gFabs + 8)
        x20_1 = zx.q(*(gFabs + 0x10))
        uint64_t x8_9
        int64_t x9_3
        int32_t x10_4
        
        if (x20_1.d == x8_8)
        label_f5f94c:
            x9_3 = *gFabs
            x10_4 = x8_8 + 1
            *(gFabs + 8) = x10_4
            x8_9 = zx.q(x8_8)
        else
        label_f5f970:
            x9_3 = *gFabs
            x10_4 = *(x9_3 + x20_1 * 0x4e8 + 0x4e0)
            x8_9 = x20_1
        
        x21_1 = x9_3 + x8_9 * 0x4e8
        *(gFabs + 0x10) = x10_4
        arg1, v1, v2 = memset(x21_1, 0, 0x4e0)
        *(x21_1 + 0x4e0) = x20_1.d | *(gFabs + 0x18) << 0x10
        int32_t x8_13 = *(gFabs + 0x18)
        int32_t x8_14
        
        if (x8_13 == 0xffff)
            x8_14 = 1
        else
            x8_14 = x8_13 + 1
        
        *(gFabs + 0x14) += 1
        *(gFabs + 0x18) = x8_14
        *(var_f8 + (i << 2) + 0x88) = *(x21_1 + 0x4e0)
    else
        x8_8 = *(gFabs + 8)
        uint64_t x10_2 = zx.q(x9_2.w)
        
        if (x10_2.d u< x8_8)
            x21_1 = *gFabs + x10_2 * 0x4e8
        
        if (x10_2.d u>= x8_8 || *(x21_1 + 0x4e0) != x9_2)
            x20_1 = zx.q(*(gFabs + 0x10))
            
            if (x20_1.d != x8_8)
                goto label_f5f970
            
            goto label_f5f94c
    int32_t* x22_3 = fp_1 + i * 0xe0
    arg2 = (*(var_f8 + 0x50)).d
    *(x21_1 + 0x40) = *(var_f8 + 0x40)
    *(x21_1 + 0x50) = arg2.o
    v2 = *(var_f8 + 0x3c)
    int32_t x8_17 = *(var_f8 + 0x5c)
    v1 = *(var_f8 + 0x4c)
    *(x21_1 + 0x2c) = (*(var_f8 + 0x2c)).d.o
    *(x21_1 + 0x5c) = x8_17
    *(x21_1 + 0x4c) = v1
    *(x21_1 + 0x3c) = v2
    v1 = *(var_f8 + 0xc)
    *(x21_1 + 0x1c) = (*(var_f8 + 0x1c)).d.o
    *(x21_1 + 0xc) = v1
    int32_t x8_18 = *x22_3
    
    if (x8_18 == 2)
        XAsset* x8_22 = *(x21_1 + 0x68)
        uint32_t x0_9 = *(x21_1 + 8)
        XAsset* x22_4
        
        if (x8_22 == 0)
            x22_4 = *(fp_1 + i * 0xe0 + 0x88)
        else
            x22_4 = x8_22
        
        uint32_t x0_5
        
        if (x0_9 != 0)
            if (UIStateAsset(x0_9) != x22_4)
                UIStateDestroy(*(x21_1 + 8))
                x0_5 = UIStateLoad(x22_4)
                *(x21_1 + 8) = x0_5
            else
                x0_5 = *(x21_1 + 8)
        else if (x22_4 != 0)
            x0_5 = UIStateLoad(x22_4)
            *(x21_1 + 8) = x0_5
        else
            x0_5 = 0
        
        arg1, v1, v2 = UIStateUpdateNew(x0_5, arg3, v8.d)
    else
        float var_c0
        
        if (x8_18 == 8)
            uint64_t x0_11 = zx.q(*(x21_1 + 0x4c4))
            float v3
            
            if (x0_11.d == 0)
                float* x8_26
                void* x9_15
                void* x10_9
                void* x11_4
                void* x12_3
                void* x13_2
                void* x14_2
                
                if (*(x21_1 + 0x48c) s<= *(x21_1 + 0x60))
                    void* x14_4 = fp_1 + i * 0xe0
                    x8_26 = x14_4 + 0x10
                    x9_15 = x14_4 + 0x14
                    x10_9 = x14_4 + 0x18
                    x11_4 = x14_4 + 0x1c
                    x12_3 = x14_4 + 0x20
                    x13_2 = x14_4 + 0x24
                    x14_2 = x14_4 + 0x28
                else
                    x8_26 = x21_1 + 0x490
                    x9_15 = x21_1 + 0x494
                    x10_9 = x21_1 + 0x498
                    x11_4 = x21_1 + 0x49c
                    x12_3 = x21_1 + 0x4a0
                    x13_2 = x21_1 + 0x4a4
                    x14_2 = x21_1 + 0x4a8
                
                arg2 = *x13_2
                v1.d = *x12_3
                float var_120_2 = *x10_9
                v2.d = *x11_4
                float var_11c_2 = *x8_26
                float var_118_2 = *x14_2
                v14.d = *x9_15
                v3 = float.s(0x3b360b61)
                v2.d = v2.d f+ v2.d
                v1.d = v1.d f+ v1.d
                v10.d = fconvert.s(0.5f)
                v2.d = v2.d f* var_114_1
                v1.d = v1.d f* var_114_1
                v15.d = v2.d f* v3
                v13.d = v1.d f* v3
                float cosp_2
                float sinp_2
                sincosf(&sinp_2, &cosp_2, (arg2 + arg2) * var_114_1 * v3 f* v10.d)
                v11.d = cosp_2
                v9.d = sinp_2
                float cosp
                float sinp
                sincosf(&sinp, &cosp, v15.d f* v10.d)
                v12.d = cosp
                v15.d = sinp
                float cosp_1
                float sinp_1
                sincosf(&sinp_1, &cosp_1, v13.d f* v10.d)
                float cosp_7 = cosp_1
                float sinp_7 = sinp_1
                float v0_7 = *(x21_1 + 0x40)
                float v2_2 = *(x21_1 + 0x44)
                float v1_2 = *(x21_1 + 0x48)
                float v3_2 = *(x21_1 + 0x4c)
                float v21_2 = *(x21_1 + 0x50)
                float v6_2 = v11.d f* v12.d
                float v17_2 = v9.d f* v12.d
                v13 = v14
                float v18_2 = v14.d f+ v14.d
                v12.d = var_120_2
                v14.d = var_11c_2
                float v7_2 = v9.d f* v15.d
                float v16_2 = v11.d f* v15.d
                float v23_2 = cosp_7 * v6_2
                float v24_2 = sinp_7 * v7_2
                float v25_2 = cosp_7 * v16_2
                float v26_2 = sinp_7 * v17_2
                v6_2 = sinp_7 * v6_2
                v7_2 = cosp_7 * v7_2
                cosp_7 = cosp_7 * v17_2
                sinp_7 = sinp_7 * v16_2
                v16_2 = v21_2 * v21_2
                v17_2 = v2_2 * v2_2
                float v28_2 = v2_2 * v1_2
                float v29_2 = v21_2 * v3_2
                float v30_2 = v21_2 * v1_2
                float v31_2 = v2_2 * v3_2
                v9.d = v1_2 * v3_2
                v10.d = v21_2 * v2_2
                float v19_2 = v12.d f+ v12.d
                float v20_2 = v14.d f+ v14.d
                v23_2 = v23_2 + v24_2
                v24_2 = v25_2 - v26_2
                v6_2 = v6_2 + v7_2
                sinp_7 = cosp_7 - sinp_7
                cosp_7 = v16_2 + v17_2
                v16_2 = v16_2 - v17_2
                float v27_2 = v1_2 * v1_2
                v7_2 = v18_2 * (v28_2 - v29_2)
                v25_2 = v19_2 * (v30_2 + v31_2)
                v17_2 = v19_2 * (v9.d f- v10.d)
                v19_2 = v20_2 * (v31_2 - v30_2)
                v18_2 = v18_2 * (v10.d f+ v9.d)
                cosp_7 = cosp_7 - v27_2
                v26_2 = v20_2 * (v28_2 + v29_2)
                v30_2 = v16_2 + v27_2
                v16_2 = v16_2 - v27_2
                v20_2 = v21_2 * v23_2
                v27_2 = v2_2 * v24_2
                v28_2 = v1_2 * v6_2
                v29_2 = v3_2 * sinp_7
                v31_2 = v21_2 * v24_2
                v9.d = v2_2 * v23_2
                v10.d = v1_2 * sinp_7
                v11.d = v21_2 * v6_2
                v21_2 = v21_2 * sinp_7
                sinp_7 = v2_2 * sinp_7
                v2_2 = v2_2 * v6_2
                v6_2 = v3_2 * v6_2
                v18_2 = v19_2 + v18_2
                v19_2 = v1_2 * v23_2
                v1_2 = v1_2 * v24_2
                v24_2 = v3_2 * v24_2
                v23_2 = v3_2 * v23_2
                v3_2 = v3_2 * v3_2
                cosp_7 = cosp_7 - v3_2
                v30_2 = v30_2 - v3_2
                v3_2 = v16_2 + v3_2
                v16_2 = v20_2 - v27_2
                v20_2 = v9.d f+ v31_2
                v31_2 = var_118_2 * v0_7
                float var_b8_2 = v24_2 + v19_2 f+ v11.d - sinp_7
                float var_b4_1 = v2_2 + v23_2 + v21_2 - v1_2
                v2_2 = *(x21_1 + 0x5c) + v0_7 * (v12.d f* v3_2 + v18_2)
                v1_2 = *(x21_1 + 0x54) + v0_7 * (v25_2 + v14.d f* cosp_7 + v7_2)
                v0_7 = *(x21_1 + 0x58) + v0_7 * (v17_2 + v26_2 + v13.d f* v30_2)
                var_c0 = v31_2
                float var_bc_1 = v10.d f+ v20_2 - v6_2
                float var_a8_1 = v0_7
                float var_a4_1 = v2_2
                float var_b0_1 = v16_2 - v28_2 - v29_2
                float var_ac_1 = v1_2
                arg1, v1, v2 =
                    ParticleGetID(ParticleCreateParams(*(fp_1 + i * 0xe0 + 0xd0), &var_c0))
                *(x21_1 + 0x4c4) = arg1.d
            else
                arg1, v1, v2 = ParticleTryToGet(x0_11)
                
                if (arg1 != 0)
                    ParticleSystem* x22_5 = arg1
                    void* __offset(FabState, 0x490) x8_24
                    void* __offset(FabState, 0x494) x9_13
                    void* x10_8
                    void* x11_3
                    void* x12_2
                    void* x13_1
                    void* __offset(FabState, 0x4a8) x14_1
                    
                    if (*(x21_1 + 0x48c) s<= *(x21_1 + 0x60))
                        void* x14_3 = fp_1 + i * 0xe0
                        x8_24 = x14_3 + 0x10
                        x9_13 = x14_3 + 0x14
                        x10_8 = x14_3 + 0x18
                        x11_3 = x14_3 + 0x1c
                        x12_2 = x14_3 + 0x20
                        x13_1 = x14_3 + 0x24
                        x14_1 = x14_3 + 0x28
                    else
                        x8_24 = x21_1 + 0x490
                        x9_13 = x21_1 + 0x494
                        x10_8 = x21_1 + 0x498
                        x11_3 = x21_1 + 0x49c
                        x12_2 = x21_1 + 0x4a0
                        x13_1 = x21_1 + 0x4a4
                        x14_1 = x21_1 + 0x4a8
                    
                    arg2 = *x13_1
                    v1.d = *x12_2
                    float var_120_1 = *x10_8
                    v2.d = *x11_3
                    float var_11c_1 = *x8_24
                    float var_118_1 = *x14_1
                    v14.d = *x9_13
                    v3 = float.s(0x3b360b61)
                    v2.d = v2.d f+ v2.d
                    v1.d = v1.d f+ v1.d
                    v10.d = fconvert.s(0.5f)
                    v2.d = v2.d f* var_114_1
                    v1.d = v1.d f* var_114_1
                    v9.d = v2.d f* v3
                    v13.d = v1.d f* v3
                    float cosp_5
                    float sinp_5
                    sincosf(&sinp_5, &cosp_5, (arg2 + arg2) * var_114_1 * v3 f* v10.d)
                    v11.d = cosp_5
                    v15.d = sinp_5
                    float cosp_3
                    float sinp_3
                    sincosf(&sinp_3, &cosp_3, v9.d f* v10.d)
                    v12.d = cosp_3
                    v9.d = sinp_3
                    float cosp_4
                    float sinp_4
                    sincosf(&sinp_4, &cosp_4, v13.d f* v10.d)
                    float cosp_6 = cosp_4
                    float sinp_6 = sinp_4
                    float v0_4 = *(x21_1 + 0x40)
                    float v2_1 = *(x21_1 + 0x44)
                    float v1_1 = *(x21_1 + 0x48)
                    float v3_1 = *(x21_1 + 0x4c)
                    float v21_1 = *(x21_1 + 0x50)
                    float v22_1 = *(x21_1 + 0x54)
                    float v6_1 = v11.d f* v12.d
                    float v17_1 = v15.d f* v12.d
                    v12 = v14
                    float v18_1 = v14.d f+ v14.d
                    v14.d = var_120_1
                    v13.d = var_11c_1
                    float v7_1 = v15.d f* v9.d
                    float v16_1 = v11.d f* v9.d
                    float v23_1 = cosp_6 * v6_1
                    float v24_1 = sinp_6 * v7_1
                    float v25_1 = cosp_6 * v16_1
                    float v26_1 = sinp_6 * v17_1
                    v6_1 = sinp_6 * v6_1
                    v7_1 = cosp_6 * v7_1
                    cosp_6 = cosp_6 * v17_1
                    sinp_6 = sinp_6 * v16_1
                    v16_1 = v21_1 * v21_1
                    v17_1 = v2_1 * v2_1
                    float v28_1 = v2_1 * v1_1
                    float v29_1 = v21_1 * v3_1
                    float v30_1 = v21_1 * v1_1
                    float v31_1 = v2_1 * v3_1
                    v9.d = v1_1 * v3_1
                    v10.d = v21_1 * v2_1
                    float v19_1 = v14.d f+ v14.d
                    float v20_1 = v13.d f+ v13.d
                    v23_1 = v23_1 + v24_1
                    v24_1 = v25_1 - v26_1
                    v6_1 = v6_1 + v7_1
                    sinp_6 = cosp_6 - sinp_6
                    cosp_6 = v16_1 + v17_1
                    v16_1 = v16_1 - v17_1
                    float v27_1 = v1_1 * v1_1
                    v7_1 = v18_1 * (v28_1 - v29_1)
                    v25_1 = v19_1 * (v30_1 + v31_1)
                    v17_1 = v19_1 * (v9.d f- v10.d)
                    v19_1 = v20_1 * (v31_1 - v30_1)
                    v18_1 = v18_1 * (v10.d f+ v9.d)
                    cosp_6 = cosp_6 - v27_1
                    v26_1 = v20_1 * (v28_1 + v29_1)
                    v30_1 = v16_1 + v27_1
                    v16_1 = v16_1 - v27_1
                    v20_1 = v21_1 * v23_1
                    v27_1 = v2_1 * v24_1
                    v28_1 = v1_1 * v6_1
                    v29_1 = v3_1 * sinp_6
                    v31_1 = v21_1 * v24_1
                    v9.d = v2_1 * v23_1
                    v10.d = v1_1 * sinp_6
                    v11.d = v21_1 * v6_1
                    v21_1 = v21_1 * sinp_6
                    sinp_6 = v2_1 * sinp_6
                    v2_1 = v2_1 * v6_1
                    v6_1 = v3_1 * v6_1
                    v18_1 = v19_1 + v18_1
                    v19_1 = v1_1 * v23_1
                    v1_1 = v1_1 * v24_1
                    v24_1 = v3_1 * v24_1
                    v23_1 = v3_1 * v23_1
                    v3_1 = v3_1 * v3_1
                    cosp_6 = cosp_6 - v3_1
                    v30_1 = v30_1 - v3_1
                    v3_1 = v16_1 + v3_1
                    v16_1 = v20_1 - v27_1
                    v21_1 = v23_1 + v21_1
                    v23_1 = v12.d f* v30_1
                    v27_1 = *(x21_1 + 0x58)
                    v30_1 = *(x21_1 + 0x5c)
                    *(x22_5 + 0x5c) = v24_1 + v19_1 f+ v11.d - sinp_6
                    *(x22_5 + 0x60) = v2_1 + v21_1 - v1_1
                    *(x22_5 + 0x54) = var_118_1 * v0_4
                    *(x22_5 + 0x58) = v10.d f+ v9.d f+ v31_1 - v6_1
                    *(x22_5 + 0x64) = v16_1 - v28_1 - v29_1
                    *(x22_5 + 0x68) = v22_1 + v0_4 * (v25_1 + v13.d f* cosp_6 + v7_1)
                    *(x22_5 + 0x6c) = v27_1 + v0_4 * (v17_1 + v26_1 + v23_1)
                    *(x22_5 + 0x70) = v30_1 + v0_4 * (v14.d f* v3_1 + v18_1)
                    arg1, v1, v2 = ParticleUpdate(x22_5)
        else if (x8_18 == 5)
            int32_t x8_19 = *(x21_1 + 0x78)
            int32_t x9_7 = *(x21_1 + 0x60)
            void* x11_2 = fp_1 + i * 0xe0
            void* x8_20
            
            if (x8_19 s> x9_7)
                x8_20 = x21_1 + 0x7c
            else
                x8_20 = x11_2 + 0x94
            
            int64_t x8_21 = *x8_20
            void* __offset(FabState, 0x84) x9_9
            
            if (x8_19 s> x9_7)
                x9_9 = x21_1 + 0x84
            else
                x9_9 = x11_2 + 0x9c
            
            if (x8_21.d s>= 1)
                uint64_t fp_2 = x8_21 u>> 0x20
                
                if (fp_2.d s>= 1)
                    int32_t x20_2 = *x9_9
                    int64_t j = 0
                    
                    do
                        if (x20_2 s>= 1)
                            int64_t x23_1 = 0
                            
                            do
                                int32_t x28_1 = 0
                                
                                do
                                    var_c0.q = j | x23_1 << 0x20
                                    int32_t var_b8_1 = x28_1
                                    arg1, v1, v2 = FabUpdate(
                                        FabSubstateTable(x22_3, x21_1, &var_c0), arg3, v8.d)
                                    x28_1 += 1
                                while (x20_2 != x28_1)
                                
                                x23_1 += 1
                            while (x23_1 != fp_2)
                        
                        j += 1
                    while (j != (x8_21 & 0xffffffff))
    
    x9_1 = var_100_1
    i += 1
while (i s< sx.q(x9_1[1].d))
