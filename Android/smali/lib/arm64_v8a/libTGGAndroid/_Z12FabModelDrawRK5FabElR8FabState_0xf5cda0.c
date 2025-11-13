// 函数: _Z12FabModelDrawRK5FabElR8FabState
// 地址: 0xf5cda0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0_1 = StructureGetDef(*(arg1 + 0x60))
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
float var_130 = *x8_1
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
sincosf(&sinp_1, &cosp_1, v13.d f* v14.d)
float cosp_3 = cosp_1
float sinp_3 = sinp_1
int128_t v0_3
v0_3.d = *(arg2 + 0x40)
float v2_1 = *(arg2 + 0x44)
float v1_1 = *(arg2 + 0x48)
float v3_1 = *(arg2 + 0x4c)
float v21 = *(arg2 + 0x50)
float v18 = v10.d f+ v10.d
float v10_1 = v11.d
float v19 = v11.d f+ v11.d
v11.d = var_130
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
v1_1 = v1_1 * v24
v24 = v3_1 * v24
v23 = v3_1 * v23
v3_1 = v3_1 * v3_1
cosp_3 = cosp_3 - v3_1
v30 = v30 - v3_1
v3_1 = v16 + v3_1
v16 = v20 - v27
v20 = v8.d f+ v31
sinp_3 = v24 + v19 f+ v12.d - sinp_3
v31 = v4 f* v0_3.d
v3_1 = v0_3.d f* (v10_1 * v3_1 + v18)
float var_b4 = v2_1 + v23 + v21 - v1_1
v1_1 = v0_3.d f* (v25 + v11.d f* cosp_3 + v7)
v0_3.d = v0_3.d f* (v17 + v26 + v10.d * v30)
v16 = v16 - v28 - v29
v6 = v9.d f+ v20 - v6
v2_1 = *(arg2 + 0x5c) + v3_1
v1_1 = *(arg2 + 0x54) + v1_1
v0_3.d = *(arg2 + 0x58) f+ v0_3.d
float var_c0 = v31
int32_t var_a8 = v0_3.d
int128_t var_d0 = *(arg1 + 0x70)
v0_3.d = var_d0.d
Structure* x21_1

if (v0_3.d f!= *gRgbaWhite)
label_f5d114:
    Draw3DSetMaterialColor(&var_d0)
    
    if (zx.d(**(arg1 + 0x68)) != 0)
    label_f5d0c8:
        uint64_t x0_8 = zx.q(*(arg2 + 0x4c8))
        
        if (x0_8.d == 0)
            Structure* x0_6 = StructureCreate(*(arg1 + 0x60))
            AnimationPlayByName(x0_6, *(arg1 + 0x60), *(arg1 + 0x68), 0, 0, 0f, fconvert.s(0.5f))
            x0_8 = StructureGetID(x0_6)
            *(arg2 + 0x4c8) = x0_8.d
        
        Structure* x0_9 = StructureGet(x0_8)
        x21_1 = x0_9
        StructureUpdate(x0_9)
    else
        x21_1 = nullptr
else
    v0_3.d = var_d0:4.d
    
    if (v0_3.d f!= *(gRgbaWhite + 4))
        goto label_f5d114
    
    v0_3.d = var_d0:8.d
    
    if (v0_3.d f!= *(gRgbaWhite + 8))
        goto label_f5d114
    
    v0_3.d = var_d0:0xc.d
    
    if (v0_3.d f!= *(gRgbaWhite + 0xc))
        goto label_f5d114
    
    if (zx.d(**(arg1 + 0x68)) != 0)
        goto label_f5d0c8
    
    x21_1 = nullptr

void* x0_12
int128_t v17_1
x0_12, v17_1 = StructureGetDef(*(arg1 + 0x60))
uint64_t x8_6 = zx.q(*(x0_12 + 0x58))
int64_t x24_1
int64_t x25_1

if (x8_6.d s>= 1)
    char** x26_1 = *(x0_12 + 0x50)
    char* s2 = *(arg1 + 0x80)
    x25_1 = 0
    x24_1 = 0
    
    while (true)
        int32_t x0_14
        x0_14, v17_1 = strcasecmp(*x26_1, s2)
        
        if (x0_14 == 0)
            break
        
        x25_1 -= 1
        x24_1 += 0x100000000
        x26_1 = &x26_1[3]
        
        if (neg.q(x8_6) == x25_1)
            goto label_f5d188

DefStructureMaterialTable* x2_2

if (x8_6.d s>= 1 && x25_1.d != 1)
    x2_2 = *(x0_1 + 0x50) + (x24_1 s>> 0x20) * 0x18 + 8
    
    if (*(gFabs + 0x28) != 0)
        goto label_f5d1ac
    
    goto label_f5d228

label_f5d188:
XAsset* x0_15
XAsset* x2_3

if (*(x0_1 + 0x48) == 0)
    if ((zx.d(data_23ee350) & 1) == 0 && __cxa_guard_acquire(&data_23ee350) != 0)
        data_23ee348 = AssetPtrFromPath("sys/draw3d.material", 5)
        __cxa_guard_release(&data_23ee350)
    
    x0_15 = *(arg1 + 0x60)
    x2_3 = data_23ee348
    goto label_f5d1e8

x2_2 = x0_1 + 0x40
int64_t result

if (*(gFabs + 0x28) == 0)
label_f5d228:
    float v0_5 = var_c0
    float v18_1 = sinp_3 + sinp_3
    float v20_1 = v6 + v6
    float v1_3 = fconvert.s(1f)
    v17_1 = data_71cfa0
    float v5 = v16 + v16
    float v21_1 = sinp_3 * v18_1
    float v22_1 = sinp_3 * v20_1
    float v24_1 = var_b4 * v20_1
    float v19_1 = var_b4 * (var_b4 + var_b4)
    float v23_1 = var_b4 * v5
    float v2_2 = sinp_3 * v5
    float v3_2 = v18_1 * var_b4
    float v4_1 = v6 * v5
    v5 = v1_3 - v21_1
    v1_3 = v1_3 - v6 * v20_1
    float var_108_1 = v0_5 * (v24_1 + v2_2)
    float var_104_1 = v1_1
    float var_f8_1 = v0_5 * (v3_2 - v4_1)
    int32_t var_f4_1 = var_a8
    float var_f0_1 = v0_5 * (v24_1 - v2_2)
    float var_ec_1 = v0_5 * (v3_2 + v4_1)
    float var_110 = v0_5 * (v5 - v19_1)
    float var_10c_1 = v0_5 * (v22_1 - v23_1)
    float var_100_1 = v0_5 * (v22_1 + v23_1)
    float var_fc_1 = v0_5 * (v1_3 - v19_1)
    float var_e8_1 = v0_5 * (v1_3 - v21_1)
    float var_e4_1 = v2_1
    int128_t var_e0_1 = v17_1
    result = Draw3DStructureMaterialTableMatrix(*(arg1 + 0x60), &var_110, x2_2, x21_1)
    
    if (not(var_d0.d f!= *gRgbaWhite))
    label_f5d308:
        
        if (not(var_d0:4.d f!= *(gRgbaWhite + 4)) && not(var_d0:8.d f!= *(gRgbaWhite + 8))
                && var_d0:0xc.d f== *(gRgbaWhite + 0xc))
            return result
else
label_f5d1ac:
    
    if ((zx.d(data_23ee340) & 1) == 0 && __cxa_guard_acquire(&data_23ee340) != 0)
        data_23ee338 = AssetPtrFromPath("sys/draw3d.material", 5)
        __cxa_guard_release(&data_23ee340)
    
    x0_15 = *(arg1 + 0x60)
    x2_3 = data_23ee338
label_f5d1e8:
    result = Draw3DStructureParams(x0_15, &var_c0, x2_3, nullptr, x21_1)
    
    if (var_d0.d f== *gRgbaWhite)
        goto label_f5d308
return Draw3DSetMaterialColor(gRgbaWhite)
