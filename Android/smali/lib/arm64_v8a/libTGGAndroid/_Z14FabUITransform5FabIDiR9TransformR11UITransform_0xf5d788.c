// 函数: _Z14FabUITransform5FabIDiR9TransformR11UITransform
// 地址: 0xf5d788
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x26 = zx.q(arg1)
int64_t x25 = *gFabs
int64_t* x21 = *(x25 + mulu.dp.d(x26.d, 0x4e8))
int64_t* x8_1 = *x21
int128_t v0
int128_t v1

if (x8_1 == 0)
    if (x21[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    v0, v1 = AssetCatalogLoadAsset(x21, false, true)
    x8_1 = *x21

int64_t x24 = **x8_1
int32_t x9_1 = *(x25 + x26 * 0x4e8 + (sx.q(arg2) << 2) + 0x88)
FabState* x21_1
int32_t x8_4
uint64_t fp_1

if (x9_1 == 0)
    x8_4 = *(gFabs + 8)
    fp_1 = zx.q(*(gFabs + 0x10))
    uint64_t x8_5
    int64_t x9_2
    int32_t x10_3
    
    if (fp_1.d == x8_4)
    label_f5d874:
        x9_2 = *gFabs
        x10_3 = x8_4 + 1
        *(gFabs + 8) = x10_3
        x8_5 = zx.q(x8_4)
    else
    label_f5d898:
        x9_2 = *gFabs
        x10_3 = *(x9_2 + fp_1 * 0x4e8 + 0x4e0)
        x8_5 = fp_1
    
    *(gFabs + 0x10) = x10_3
    x21_1 = x9_2 + x8_5 * 0x4e8
    v0, v1 = memset(x21_1, 0, 0x4e0)
    *(x21_1 + 0x4e0) = fp_1.d | *(gFabs + 0x18) << 0x10
    int32_t x8_9 = *(gFabs + 0x18)
    int32_t x8_10
    
    if (x8_9 == 0xffff)
        x8_10 = 1
    else
        x8_10 = x8_9 + 1
    
    *(gFabs + 0x14) += 1
    *(gFabs + 0x18) = x8_10
    *(x25 + x26 * 0x4e8 + (sx.q(arg2) << 2) + 0x88) = *(x21_1 + 0x4e0)
else
    x8_4 = *(gFabs + 8)
    uint64_t x10_1 = zx.q(x9_1.w)
    
    if (x10_1.d u< x8_4)
        x21_1 = *gFabs + x10_1 * 0x4e8
    
    if (x10_1.d u>= x8_4 || *(x21_1 + 0x4e0) != x9_1)
        fp_1 = zx.q(*(gFabs + 0x10))
        
        if (fp_1.d != x8_4)
            goto label_f5d898
        
        goto label_f5d874
void* x8_12 = x25 + x26 * 0x4e8
v0 = *(x8_12 + 0x50)
int64_t x22_1 = sx.q(arg2)
*(x21_1 + 0x40) = *(x8_12 + 0x40)
*(x21_1 + 0x50) = v0
ElBox(x24 + muls.dp.d(arg2, 0xe0), x21_1)
void* x8_14
void* x9_6
void* x10_4
void* x11_3
void* x12
void* x13

if (*(x21_1 + 0x48c) s<= *(x21_1 + 0x60))
    void* x13_1 = x24 + x22_1 * 0xe0
    x8_14 = x13_1 + 0x10
    x9_6 = x13_1 + 0x14
    x10_4 = x13_1 + 0x18
    x11_3 = x13_1 + 0x1c
    x12 = x13_1 + 0x20
    x13 = x13_1 + 0x24
else
    x8_14 = x21_1 + 0x490
    x9_6 = x21_1 + 0x494
    x10_4 = x21_1 + 0x498
    x11_3 = x21_1 + 0x49c
    x12 = x21_1 + 0x4a0
    x13 = x21_1 + 0x4a4

float v0_1 = *x13
float v1_1 = *x12
float var_164 = *x8_14
float v2 = *x11_3
int64_t v11
v11.d = *x10_4
int64_t v10
v10.d = *x9_6
float v3 = *PI
int64_t v9
v9.d = fconvert.s(0.5f)
v0_1 = (v0_1 + v0_1) * v3
v2 = (v2 + v2) * v3
v1_1 = (v1_1 + v1_1) * v3
v3 = float.s(0x3b360b61)
int64_t v12
v12.d = v2 * v3
int64_t v13
v13.d = v1_1 * v3
float cosp_2
float sinp_2
sincosf(&sinp_2, &cosp_2, v0_1 * v3 f* v9.d)
int64_t v15
v15.d = cosp_2
int64_t v14
v14.d = sinp_2
float cosp
float sinp
sincosf(&sinp, &cosp, v12.d f* v9.d)
int64_t v8
v8.d = cosp
v12.d = sinp
float cosp_1
float sinp_1
sincosf(&sinp_1, &cosp_1, v13.d f* v9.d)
float cosp_3 = cosp_1
float sinp_3 = sinp_1
float v0_4 = *(x21_1 + 0x40)
float v2_1 = *(x21_1 + 0x44)
float v1_2 = *(x21_1 + 0x48)
float v3_1 = *(x21_1 + 0x4c)
float v21 = *(x21_1 + 0x50)
float v22 = *(x21_1 + 0x54)
float v18 = v10.d f+ v10.d
float v10_1 = v11.d
float v19 = v11.d f+ v11.d
v11.d = var_164
float v6 = v15.d f* v8.d
float v7 = v14.d f* v12.d
float v16 = v15.d f* v12.d
float v17 = v14.d f* v8.d
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
float v28 = v2_1 * v1_2
float v29 = v21 * v3_1
float v30 = v21 * v1_2
float v31 = v2_1 * v3_1
v8.d = v1_2 * v3_1
v12.d = v21 * v2_1
float v20 = v11.d f+ v11.d
v23 = v23 + v24
v24 = v25 - v26
v6 = v6 + v7
sinp_3 = cosp_3 - sinp_3
cosp_3 = v16 + v17
v16 = v16 - v17
float v27 = v1_2 * v1_2
v7 = v18 * (v28 - v29)
v25 = v19 * (v30 + v31)
v17 = v19 * (v8.d f- v12.d)
v19 = v20 * (v31 - v30)
v18 = v18 * (v12.d f+ v8.d)
cosp_3 = cosp_3 - v27
v26 = v20 * (v28 + v29)
v30 = v16 + v27
v16 = v16 - v27
v20 = v21 * v23
v27 = v2_1 * v24
v28 = v1_2 * v6
v29 = v3_1 * sinp_3
v31 = v21 * v24
v8.d = v2_1 * v23
v12.d = v1_2 * sinp_3
v13.d = v21 * v6
v21 = v21 * sinp_3
sinp_3 = v2_1 * sinp_3
v2_1 = v2_1 * v6
v6 = v3_1 * v6
v18 = v19 + v18
v19 = v1_2 * v23
v1_2 = v1_2 * v24
v24 = v3_1 * v24
v23 = v3_1 * v23
v3_1 = v3_1 * v3_1
cosp_3 = cosp_3 - v3_1
v30 = v30 - v3_1
v3_1 = v16 + v3_1
v16 = v20 - v27
v21 = v23 + v21
v23 = v10.d * v30
v27 = *(x21_1 + 0x58)
v30 = *(x21_1 + 0x5c)
*arg3 = v0_4
*(arg3 + 4) = v12.d f+ v8.d f+ v31 - v6
*(arg3 + 8) = v24 + v19 f+ v13.d - sinp_3
*(arg3 + 0xc) = v2_1 + v21 - v1_2
*(arg3 + 0x10) = v16 - v28 - v29
*(arg3 + 0x14) = v22 + v0_4 * (v25 + v11.d f* cosp_3 + v7)
*(arg3 + 0x18) = v27 + v0_4 * (v17 + v26 + v23)
*(arg3 + 0x1c) = v30 + v0_4 * (v10_1 * v3_1 + v18)
v2_1 = *V20
v3_1 = *(V20 + 4)
sinp_3 = fconvert.s(0.5f)
float var_ac
v0_4 = var_ac * sinp_3
float var_a4
v1_2 = var_a4 * sinp_3
float var_d8 = v2_1 - v0_4
float var_d4 = v3_1 - v1_2
float var_d0 = v0_4 + v2_1
float var_cc = v1_2 + v3_1
XAsset* x8_15 = *(x21_1 + 0x68)
void* x20_1 = x24 + x22_1 * 0xe0
XAsset* x0_8

if (x8_15 == 0)
    x0_8 = *(x20_1 + 0x88)
else
    x0_8 = x8_15

int32_t v0_5
int32_t v1_3
int32_t v2_2
int32_t v3_2
v0_5, v1_3, v2_2, v3_2 = UILayoutExtentsBG(x0_8)
int32_t var_e8 = v0_5
int32_t var_e4 = v1_3
int32_t var_dc = v3_2
int64_t result
int128_t v0_6
int128_t v1_4
int128_t v2_3
int128_t v3_3
result, v0_6, v1_4, v2_3, v3_3 = UIScreenTransformRel(&var_d8, &var_e8)
int128_t var_148
*arg4 = var_148
int128_t var_138
*(arg4 + 0x10) = var_138
int128_t var_108
*(arg4 + 0x40) = var_108
int128_t var_f8
*(arg4 + 0x50) = var_f8
v1_4.q = *(arg4 + 0x4c)
int128_t var_128
*(arg4 + 0x20) = var_128
int128_t var_118
*(arg4 + 0x30) = var_118
v0_6.q = *V21
v2_3.q = *(arg4 + 0x54)
v3_3.d = 0x3f000000
v3_3:4.d = 0x3f000000
void* x8_17

if (*(x21_1 + 0x4b4) s> *(x21_1 + 0x60))
    x8_17 = x21_1 + 0x4b8
else
    x8_17 = x20_1 + 0x90

float v5 = *x8_17
int128_t v4_1 = vmul_f32(vadd_f32(v1_4, v2_3), v3_3, 0)
int128_t v1_5 = vsub_f32(v1_4, v4_1)
int128_t v2_4 = vsub_f32(v2_3, v4_1)
v0_6.d = v0_6.d f* v5
v0_6:4.d = v0_6:4.d f* v5
int128_t v1_6 = vmul_f32(v1_5, v0_6, 0)
int128_t v0_7 = vmul_f32(v2_4, v0_6, 0)
int128_t v1_7 = vadd_f32(v4_1, v1_6)
int128_t v0_8 = vadd_f32(v4_1, v0_7)
*(arg4 + 0x4c) = v1_7.q
*(arg4 + 0x54) = v0_8.q
v0_8.q = var_e8.q
v1_7.q = v2_2.q
v4_1.d = *(arg4 + 0xc)
v2_4.d = fconvert.s(1f)
v2_4.d = v2_4.d f- v5
int128_t v0_9 = vadd_f32(v0_8, v1_7)
v1_7.q = *arg4
int128_t v0_10
v0_10.d = vmul_f32(v0_9, v3_3, 0).d f* v4_1.d
v0_10:4.d = v0_10:4.d f* v4_1.d
v0_10.d = v0_10.d f* v2_4.d
v0_10:4.d = v0_10:4.d f* v2_4.d
*arg4 = vadd_f32(v1_7, v0_10)
*(arg4 + 0xc) = v5 f* v4_1.d
return result
