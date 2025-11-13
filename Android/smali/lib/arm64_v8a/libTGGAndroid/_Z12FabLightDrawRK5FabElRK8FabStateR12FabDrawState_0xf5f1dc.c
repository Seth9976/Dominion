// 函数: _Z12FabLightDrawRK5FabElRK8FabStateR12FabDrawState
// 地址: 0xf5f1dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

FabDrawState& x19 = arg3
void* __offset(FabState, 0x490) x8_1
void* __offset(FabState, 0x494) x9_1
void* __offset(FabState, 0x498) x10
void* __offset(FabState, 0x49c) x11
void* __offset(FabState, 0x4a0) x12
void* __offset(FabState, 0x4a4) x13
void* __offset(FabState, 0x4a8) x14

if (*(arg2 + 0x48c) s<= *(arg2 + 0x60))
    x8_1 = arg1 + 0x10
    x9_1 = arg1 + 0x14
    x10 = arg1 + 0x18
    x11 = arg1 + 0x1c
    x12 = arg1 + 0x20
    x13 = arg1 + 0x24
    x14 = arg1 + 0x28
else
    x8_1 = arg2 + 0x490
    x9_1 = arg2 + 0x494
    x10 = arg2 + 0x498
    x11 = arg2 + 0x49c
    x12 = arg2 + 0x4a0
    x13 = arg2 + 0x4a4
    x14 = arg2 + 0x4a8

float v4 = *x14
float v0 = *x13
float v1 = *x12
float var_d0 = *x8_1
float v2 = *x11
int64_t v11
v11.d = *x10
int64_t v10
v10.d = *x9_1
float v3 = *PI
int64_t v14
v14.d = fconvert.s(0.5f)
v0 = (v0 + v0) * v3
v2 = (v2 + v2) * v3
v1 = (v1 + v1) * v3
v3 = float.s(0x3b360b61)
int64_t v12
v12.d = v2 * v3
int64_t v13
v13.d = v1 * v3
float cosp_2
float sinp_2
sincosf(&sinp_2, &cosp_2, v0 * v3 f* v14.d)
int64_t v8
v8.d = cosp_2
int64_t v15
v15.d = sinp_2
float cosp
float sinp
sincosf(&sinp, &cosp, v12.d f* v14.d)
int64_t v9
v9.d = cosp
v12.d = sinp
float cosp_1
float sinp_1
int64_t result = sincosf(&sinp_1, &cosp_1, v13.d f* v14.d)
float cosp_3 = cosp_1
float sinp_3 = sinp_1
float v0_3 = *(arg2 + 0x40)
float v2_1 = *(arg2 + 0x44)
float v1_1 = *(arg2 + 0x48)
float v3_1 = *(arg2 + 0x4c)
float v21 = *(arg2 + 0x50)
float v18 = v10.d f+ v10.d
float v10_1 = v11.d
float v19 = v11.d f+ v11.d
v11.d = var_d0
float v6 = v8.d f* v9.d
float v7 = v15.d f* v12.d
float v16 = v8.d f* v12.d
float v17 = v15.d f* v9.d
float v23 = cosp_3 * v6
float v24 = sinp_3 * v7
float v25 = cosp_3 * v16
float v26 = sinp_3 * v17
v6 = sinp_3 * v6
v7 = cosp_3 * v7
cosp_3 = cosp_3 * v17
sinp_3 = sinp_3 * v16
v16 = v21 * v21
v17 = v2_1 * v2_1
float v28 = v2_1 * v1_1
float v29 = v21 * v3_1
float v30 = v21 * v1_1
float v31 = v2_1 * v3_1
v8.d = v1_1 * v3_1
v9.d = v21 * v2_1
float v20 = v11.d f+ v11.d
v23 = v23 + v24
v24 = v25 - v26
v6 = v6 + v7
sinp_3 = cosp_3 - sinp_3
cosp_3 = v16 + v17
v16 = v16 - v17
float v27 = v1_1 * v1_1
v7 = v18 * (v28 - v29)
v25 = v19 * (v30 + v31)
v17 = v19 * (v8.d f- v9.d)
v19 = v20 * (v31 - v30)
v18 = v18 * (v9.d f+ v8.d)
cosp_3 = cosp_3 - v27
v26 = v20 * (v28 + v29)
v30 = v16 + v27
v16 = v16 - v27
v20 = v21 * v23
v27 = v2_1 * v24
v28 = v1_1 * v6
v29 = v3_1 * sinp_3
v31 = v21 * v24
v8.d = v2_1 * v23
v9.d = v1_1 * sinp_3
v12.d = v21 * v6
v21 = v21 * sinp_3
sinp_3 = v2_1 * sinp_3
v2_1 = v2_1 * v6
v6 = v3_1 * v6
v18 = v19 + v18
v19 = v1_1 * v23
v13.d = v1_1 * v24
v1_1 = v3_1 * v24
v23 = v3_1 * v23
v3_1 = v3_1 * v3_1
v24 = v30 - v3_1
cosp_3 = v11.d f* (cosp_3 - v3_1) + v7
v21 = v2_1 + v23 + v21
v2_1 = v9.d f+ v8.d f+ v31 - v6
v19 = v1_1 + v19 f+ v12.d
v7 = v0_3 * (v10_1 * (v16 + v3_1) + v18)
v1_1 = v20 - v27 - v28 - v29
v3_1 = v19 - sinp_3
sinp_3 = v21 f- v13.d
float var_78 = v3_1
float sinp_4 = sinp_3
float var_68 = *(arg2 + 0x58) + v0_3 * (v17 + v26 + v10.d * v24)
float var_64 = *(arg2 + 0x5c) + v7
float var_70 = v1_1
float var_6c = *(arg2 + 0x54) + v0_3 * (v25 + cosp_3)
float var_80 = v4 * v0_3
float var_7c = v2_1
uint64_t x8_2 = zx.q(*(arg1 + 0xb4))

if (x8_2.d u> 3)
label_f5f6b0:
    pthread_kill(pthread_self(), 6)
    XNoReturn()
label_f5f6c0:
    
    if (__cxa_guard_acquire(&data_23ee390) != 0)
        *x19 = AssetPtrFromPath("sys/editor/light.texture", 3)
        __cxa_guard_release(x19 + 8)
    
    goto label_f5f590

float var_b0

switch (x8_2)
    case 0, 2
        goto label_f5f6b0
    case 1
        int32_t x2 = *x19
        
        if (x2 s<= 3)
            v0_3 = v3_1 * v2_1 - sinp_3 * v1_1
            cosp_3 = v1_1 * v1_1
            v1_1 = v3_1 * sinp_3 + v2_1 * v1_1
            float var_ac_1 = v3_1 * v3_1 - sinp_3 * sinp_3 + cosp_3 - v2_1 * v2_1
            float var_a8_1 = v1_1 + v1_1
            var_b0 = v0_3 + v0_3
            *x19 = x2 + 1
            result = Draw3DDirectionalLight(&var_b0, arg1 + 0xb8, x2)
        
        if (zx.d(*(*gAppInterface + 0x4d)) == 0)
            return result
        
        UIProjectInto3DTransform(&var_80)
        float128 v0_4
        float128 v1_2
        v0_4, v1_2 = SpriteSetDefault3dMaterial(nullptr)
        v0_4.q = *V20
        x19 = &data_23ee388
        v0_4:8.q = v0_4.q
        float128 var_90 = vaddq_f32(v0_4, data_71b880)
        
        if ((zx.d(data_23ee390) & 1) == 0)
            goto label_f5f6c0
        
    label_f5f590:
        DrawImageParams(*x19, &var_90, RECT1, gSpriteWhite, nullptr)
        SpriteSetDefault3dMaterial(nullptr)
        UIProjectiveMatrixRestore()
        
        if ((zx.d(*(x19 + 0x18)) & 1) == 0)
            int32_t x0_16
            int128_t v0_6
            x0_16, v0_6 = __cxa_guard_acquire(0x23ee3a0)
            
            if (x0_16 != 0)
                data_23ee398 = AssetPtrFromPath("sys/editor/arrow_widget.structure", 2)
                __cxa_guard_release(0x23ee3a0)
        
        var_b0.o = data_71adf0
        int128_t v0_7
        int128_t v1_3
        v0_7, v1_3 = Draw3DSetMaterialColor(&var_b0)
        XAsset* x0_7 = data_23ee398
        var_b0.o = var_80.o
        int128_t var_a0_1 = var_70.o
        v0_7.d = var_b0
        v1_3.d = fconvert.s(0.5f)
        v0_7.d = v0_7.d f* v1_3.d
        var_b0 = v0_7.d
        Draw3DStructure(x0_7, &var_b0, nullptr)
        return Draw3DSetMaterialColor(gRgbaWhite)
    case 3
        result = Draw3DSetIBL(*(arg1 + 0xc8), arg1 + 0xb8)
        
        if (zx.d(*(*gAppInterface + 0x4d)) == 0)
            return result
        
        UIProjectInto3DTransform(&var_80)
        float128 v0_8
        float128 v1_4
        v0_8, v1_4 = SpriteSetDefault3dMaterial(nullptr)
        v0_8.q = *V20
        v0_8:8.q = v0_8.q
        var_b0.o = vaddq_f32(v0_8, data_71b880)
        
        if ((zx.d(data_23ee380) & 1) == 0 && __cxa_guard_acquire(&data_23ee380) != 0)
            data_23ee378 = AssetPtrFromPath("sys/editor/env_probe.texture", 3)
            __cxa_guard_release(&data_23ee380)
        
        DrawImageParams(data_23ee378, &var_b0, RECT1, gSpriteWhite, nullptr)
        SpriteSetDefault3dMaterial(nullptr)
        return UIProjectiveMatrixRestore()
