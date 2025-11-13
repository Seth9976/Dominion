// 函数: _Z7FabDrawR8FabState12FabDrawStyleR12FabDrawState
// 地址: 0xf5e848
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
int64_t* x22 = *arg1

if (x22 == 0)
    return 

int64_t* x8_1 = *x22
FabState& x26_1 = arg1
int32_t x21_1 = arg2
int64_t* x22_1
int128_t v0
int128_t v1
int128_t v2

if (x8_1 == 0)
    if (x22[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    arg1, v0, v1, v2 = AssetCatalogLoadAsset(x22, false, true)
    x22_1 = **x22
    
    if (x22_1[1].d s>= 1)
        goto label_f5e8ec
    
    return 

x22_1 = *x8_1

if (x22_1[1].d s< 1)
    return 

label_f5e8ec:
void* __offset(FabState, 0xc) x8_6 = x26_1 + 0xc
v9.d = *PI
int64_t i = 0
void* __offset(FabState, 0x40) x28_1 = x26_1 + 0x40
v8.d = fconvert.s(0.5f)
v11.d = fconvert.s(0.5f)
int128_t var_140_1 = data_71b880

do
    int64_t x25_1 = *x22_1
    int32_t x9_1 = *(x26_1 + (i << 2) + 0x88)
    FabState* fp_1
    int32_t x8_8
    uint64_t x20_1
    
    if (x9_1 == 0)
        x8_8 = *(gFabs + 8)
        x20_1 = zx.q(*(gFabs + 0x10))
        uint64_t x8_9
        int64_t x9_2
        int32_t x10_3
        
        if (x20_1.d == x8_8)
        label_f5e998:
            x9_2 = *gFabs
            x10_3 = x8_8 + 1
            *(gFabs + 8) = x10_3
            x8_9 = zx.q(x8_8)
        else
        label_f5e9bc:
            x9_2 = *gFabs
            x10_3 = *(x9_2 + x20_1 * 0x4e8 + 0x4e0)
            x8_9 = x20_1
        
        fp_1 = x9_2 + x8_9 * 0x4e8
        *(gFabs + 0x10) = x10_3
        arg1, v0, v1, v2 = memset(fp_1, 0, 0x4e0)
        *(fp_1 + 0x4e0) = x20_1.d | *(gFabs + 0x18) << 0x10
        int32_t x8_13 = *(gFabs + 0x18)
        int32_t x8_14
        
        if (x8_13 == 0xffff)
            x8_14 = 1
        else
            x8_14 = x8_13 + 1
        
        *(gFabs + 0x14) += 1
        *(gFabs + 0x18) = x8_14
        *(x26_1 + (i << 2) + 0x88) = *(fp_1 + 0x4e0)
    else
        x8_8 = *(gFabs + 8)
        uint64_t x10_1 = zx.q(x9_1.w)
        
        if (x10_1.d u< x8_8)
            fp_1 = *gFabs + x10_1 * 0x4e8
        
        if (x10_1.d u>= x8_8 || *(fp_1 + 0x4e0) != x9_1)
            x20_1 = zx.q(*(gFabs + 0x10))
            
            if (x20_1.d != x8_8)
                goto label_f5e9bc
            
            goto label_f5e998
    int32_t x8_16 = *(fp_1 + 0x60)
    v1 = *(x28_1 + 0x10)
    bool cond:1_1 = *(fp_1 + 0x70) s> x8_16
    *(fp_1 + 0x40) = *x28_1
    *(fp_1 + 0x50) = v1
    void* __offset(FabState, 0x74) x9_6
    
    if (cond:1_1)
        x9_6 = fp_1 + 0x74
    else
        x9_6 = x25_1 + i * 0xe0 + 0x38
    
    if (zx.d(*x9_6) == 0)
        FabEl* x23_3 = x25_1 + i * 0xe0
        
        if (x21_1 == 0)
        label_f5eac0:
            v1 = *x8_6
            bool cond:2_1 = *(fp_1 + 0x4cc) s<= x8_16
            *(fp_1 + 0x1c) = *(x8_6 + 0x10)
            *(fp_1 + 0xc) = v1
            v2 = *(x8_6 + 0x30)
            int32_t x10_6 = *(x8_6 + 0x50)
            v1 = *(x8_6 + 0x20)
            *(fp_1 + 0x4c) = *(x8_6 + 0x40)
            *(fp_1 + 0x5c) = x10_6
            *(fp_1 + 0x3c) = v2
            *(fp_1 + 0x2c) = v1
            int64_t x9_18
            
            if (not(cond:2_1))
                x9_18 = *(fp_1 + 0x4d0)
            
            if (not(cond:2_1) && x9_18 != 0)
                arg1, v0, v1, v2 = x9_18(x23_3, fp_1)
            else
                uint64_t x9_19 = zx.q(*x23_3)
                
                if (x9_19.d u> 8)
                    goto label_f5f078
                
                int32_t var_130
                float var_c0
                
                switch (x9_19)
                    case 1
                        arg1, v0, v1, v2 = FabImageDraw(x23_3, fp_1)
                    case 2
                        arg1, v0, v1, v2 = FabUIDraw(x23_3, fp_1)
                    case 3
                        arg1, v0, v1, v2 = FabModelDraw(x23_3, fp_1)
                    case 4
                        int32_t x0_6 = Draw3DLayer(0x3e7)
                        Draw3DSkyBox(*(x25_1 + i * 0xe0 + 0x40), nullptr, nullptr)
                        arg1, v0, v1, v2 = Draw3DLayer(zx.q(x0_6))
                    case 5
                        int32_t x9_24 = *(fp_1 + 0x78)
                        void* x11_7 = x25_1 + i * 0xe0
                        void* x8_20
                        
                        if (x9_24 s> x8_16)
                            x8_20 = fp_1 + 0x7c
                        else
                            x8_20 = x11_7 + 0x94
                        
                        int64_t x8_21 = *x8_20
                        void* __offset(FabState, 0x84) x9_26
                        
                        if (x9_24 s> x8_16)
                            x9_26 = fp_1 + 0x84
                        else
                            x9_26 = x11_7 + 0x9c
                        
                        if (x8_21.d s>= 1)
                            uint64_t x25_2 = x8_21 u>> 0x20
                            
                            if (x25_2.d s>= 1)
                                int32_t x20_2 = *x9_26
                                int64_t j = 0
                                var_130.q = x8_21 & 0xffffffff
                                void* __offset(FabState, 0x40) var_128_1 = x28_1
                                int64_t* var_120_1 = x22_1
                                FabState& var_118_1 = x26_1
                                
                                do
                                    if (x20_2 s>= 1)
                                        int64_t x22_2 = 0
                                        
                                        do
                                            int32_t x26_2 = 0
                                            
                                            do
                                                var_c0.q = j | x22_2 << 0x20
                                                int32_t var_b8_1 = x26_2
                                                arg1, v0, v1, v2 = FabDraw(
                                                    FabSubstateTable(x23_3, fp_1, &var_c0), 
                                                    zx.q(x21_1), arg3)
                                                x26_2 += 1
                                            while (x20_2 != x26_2)
                                            
                                            x22_2 += 1
                                        while (x22_2 != x25_2)
                                    
                                    x28_1 = var_128_1
                                    x22_1 = var_120_1
                                    x26_1 = var_118_1
                                    j += 1
                                while (j != var_130.q)
                    case 6
                        arg1, v0, v1, v2 = FabLightDraw(x23_3, fp_1, arg3)
                    case 7
                        if (zx.d(*(*gAppInterface + 0x4d)) != 0)
                            void* x8_19
                            void* x9_23
                            void* x10_8
                            void* x11_6
                            void* x12_1
                            void* x13_1
                            void* __offset(FabState, 0x4a8) x14_1
                            
                            if (*(fp_1 + 0x48c) s<= x8_16)
                                void* x14_2 = x25_1 + i * 0xe0
                                x8_19 = x14_2 + 0x10
                                x9_23 = x14_2 + 0x14
                                x10_8 = x14_2 + 0x18
                                x11_6 = x14_2 + 0x1c
                                x12_1 = x14_2 + 0x20
                                x13_1 = x14_2 + 0x24
                                x14_1 = x14_2 + 0x28
                            else
                                x8_19 = fp_1 + 0x490
                                x9_23 = fp_1 + 0x494
                                x10_8 = fp_1 + 0x498
                                x11_6 = fp_1 + 0x49c
                                x12_1 = fp_1 + 0x4a0
                                x13_1 = fp_1 + 0x4a4
                                x14_1 = fp_1 + 0x4a8
                            
                            v0.d = *x13_1
                            float v4 = *x14_1
                            v1.d = *x12_1
                            v2.d = *x11_6
                            v0.d = v0.d f+ v0.d
                            v13.d = *x10_8
                            v12.d = *x9_23
                            float var_148_1 = *x8_19
                            float v3 = float.s(0x3b360b61)
                            v0.d = v0.d f* v9.d
                            v2.d = v2.d f+ v2.d
                            v1.d = v1.d f+ v1.d
                            v0.d = v0.d f* v3
                            v2.d = v2.d f* v9.d
                            v1.d = v1.d f* v9.d
                            v0.d = v0.d f* v8.d
                            var_130 = v9.d
                            v14.d = v2.d f* v3
                            v15.d = v1.d f* v3
                            float cosp_2
                            float sinp_2
                            sincosf(&sinp_2, &cosp_2, v0.d)
                            v10.d = cosp_2
                            v8.d = sinp_2
                            float cosp
                            float sinp
                            sincosf(&sinp, &cosp, v14.d f* v11.d)
                            v9.d = cosp
                            v14.d = sinp
                            float cosp_1
                            float sinp_1
                            sincosf(&sinp_1, &cosp_1, v15.d f* v11.d)
                            float cosp_3 = cosp_1
                            float sinp_3 = sinp_1
                            float v0_3 = *(fp_1 + 0x40)
                            float v2_1 = *(fp_1 + 0x44)
                            float v1_1 = *(fp_1 + 0x48)
                            float v3_1 = *(fp_1 + 0x4c)
                            float v21_1 = *(fp_1 + 0x50)
                            float v7_1 = v8.d f* v14.d
                            float v16_1 = v10.d f* v14.d
                            v14 = v12
                            float v18_1 = v12.d f+ v12.d
                            v12.d = var_148_1
                            float v6_1 = v10.d f* v9.d
                            float v17_1 = v8.d f* v9.d
                            float v23_1 = cosp_3 * v6_1
                            float v24_1 = sinp_3 * v7_1
                            float v25_1 = cosp_3 * v16_1
                            float v26_1 = sinp_3 * v17_1
                            v6_1 = sinp_3 * v6_1
                            v7_1 = cosp_3 * v7_1
                            cosp_3 = cosp_3 * v17_1
                            sinp_3 = sinp_3 * v16_1
                            v16_1 = v21_1 * v21_1
                            v17_1 = v2_1 * v2_1
                            float v28_1 = v2_1 * v1_1
                            float v29_1 = v21_1 * v3_1
                            float v30_1 = v21_1 * v1_1
                            float v31_1 = v2_1 * v3_1
                            v8.d = v1_1 * v3_1
                            v9.d = v21_1 * v2_1
                            float v19_1 = v13.d f+ v13.d
                            float v20_1 = v12.d f+ v12.d
                            v23_1 = v23_1 + v24_1
                            v24_1 = v25_1 - v26_1
                            v6_1 = v6_1 + v7_1
                            sinp_3 = cosp_3 - sinp_3
                            cosp_3 = v16_1 + v17_1
                            v16_1 = v16_1 - v17_1
                            float v27_1 = v1_1 * v1_1
                            v7_1 = v18_1 * (v28_1 - v29_1)
                            v25_1 = v19_1 * (v30_1 + v31_1)
                            v17_1 = v19_1 * (v8.d f- v9.d)
                            v19_1 = v20_1 * (v31_1 - v30_1)
                            v18_1 = v18_1 * (v9.d f+ v8.d)
                            cosp_3 = cosp_3 - v27_1
                            v26_1 = v20_1 * (v28_1 + v29_1)
                            v30_1 = v16_1 + v27_1
                            v16_1 = v16_1 - v27_1
                            v20_1 = v21_1 * v23_1
                            v27_1 = v2_1 * v24_1
                            v28_1 = v1_1 * v6_1
                            v29_1 = v3_1 * sinp_3
                            v31_1 = v21_1 * v24_1
                            v8.d = v2_1 * v23_1
                            v9.d = v1_1 * sinp_3
                            v10.d = v21_1 * v6_1
                            v21_1 = v21_1 * sinp_3
                            sinp_3 = v2_1 * sinp_3
                            v2_1 = v2_1 * v6_1
                            v6_1 = v3_1 * v6_1
                            v18_1 = v19_1 + v18_1
                            v19_1 = v1_1 * v23_1
                            v1_1 = v1_1 * v24_1
                            v24_1 = v3_1 * v24_1
                            v23_1 = v3_1 * v23_1
                            v3_1 = v3_1 * v3_1
                            float var_b8_2 = v24_1 + v19_1 f+ v10.d - sinp_3
                            float var_b4_1 = v2_1 + v23_1 + v21_1 - v1_1
                            float var_a8_1 =
                                *(fp_1 + 0x58) + v0_3 * (v17_1 + v26_1 + v14.d f* (v30_1 - v3_1))
                            float var_a4_1 =
                                *(fp_1 + 0x5c) + v0_3 * (v13.d f* (v16_1 + v3_1) + v18_1)
                            float var_ac_1 =
                                *(fp_1 + 0x54) + v0_3 * (v25_1 + v12.d f* (cosp_3 - v3_1) + v7_1)
                            var_c0 = v4 * v0_3
                            float var_bc_1 = v9.d f+ v8.d f+ v31_1 - v6_1
                            UIProjectInto3DTransform(&var_c0)
                            float128 v0_4
                            float128 v1_2
                            v0_4, v1_2 = SpriteSetDefault3dMaterial(nullptr)
                            v0_4.q = *V20
                            v0_4:8.q = v0_4.q
                            float128 var_d0 = vaddq_f32(v0_4, var_140_1)
                            
                            if ((zx.d(data_23ee3b0) & 1) == 0
                                    && __cxa_guard_acquire(&data_23ee3b0) != 0)
                                data_23ee3a8 = AssetPtrFromPath("sys/editor/camera.texture", 3)
                                __cxa_guard_release(&data_23ee3b0)
                            
                            DrawImageParams(data_23ee3a8, &var_d0, RECT1, gSpriteWhite, nullptr)
                            SpriteSetDefault3dMaterial(nullptr)
                            UIProjectiveMatrixRestore()
                            
                            if ((zx.d(data_23ee3c0) & 1) == 0)
                                int32_t x0_25
                                int128_t v0_6
                                x0_25, v0_6 = __cxa_guard_acquire(&data_23ee3c0)
                                
                                if (x0_25 != 0)
                                    data_23ee3b8 =
                                        AssetPtrFromPath("sys/editor/arrow_widget.structure", 2)
                                    __cxa_guard_release(&data_23ee3c0)
                            
                            int128_t var_f0 = data_71adf0
                            int128_t v0_7
                            int128_t v1_3
                            v0_7, v1_3 = Draw3DSetMaterialColor(&var_f0)
                            XAsset* x0_21 = data_23ee3b8
                            v8.d = fconvert.s(0.5f)
                            var_f0 = var_c0.o
                            int128_t var_e0_1 = (v20_1 - v27_1 - v28_1 - v29_1).o
                            v0_7.d = var_f0.d
                            v0_7.d = v0_7.d f* v8.d
                            var_f0.d = v0_7.d
                            Draw3DStructure(x0_21, &var_f0, nullptr)
                            arg1, v0, v1, v2 = Draw3DSetMaterialColor(gRgbaWhite)
                            v9.d = var_130
                    case 8
                        arg1, v0, v1, v2 = ParticleTryToGet(zx.q(*(fp_1 + 0x4c4)))
                        
                        if (arg1 != 0)
                            arg1, v0, v1, v2 = ParticleDraw(arg1)
        else if (x21_1 != 2)
            if (x21_1 != 1)
            label_f5f078:
                pthread_kill(pthread_self(), 6)
                int64_t* x0_28 = XNoReturn()
                __cxa_guard_abort(&data_23ee3c0)
                sub_1101e04(x0_28)
                noreturn
            
            if (zx.d(*(x25_1 + i * 0xe0 + 0x3a)) == 0 && zx.d(*(x25_1 + i * 0xe0 + 0x3b)) == 0
                    && (*x23_3 != 2 || zx.d(*(x25_1 + i * 0xe0 + 0x3c)) != 0))
                goto label_f5eac0
        else if (zx.d(*(x25_1 + i * 0xe0 + 0x3a)) == 0)
            goto label_f5eac0
    
    i += 1
while (i s< sx.q(x22_1[1].d))
