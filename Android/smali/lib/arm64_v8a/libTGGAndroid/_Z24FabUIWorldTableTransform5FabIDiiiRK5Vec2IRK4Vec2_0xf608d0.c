// 函数: _Z24FabUIWorldTableTransform5FabIDiiiRK5Vec2IRK4Vec2
// 地址: 0xf608d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t fp = zx.q(arg1) & 0xffff
int64_t x28 = *gFabs
int64_t* x26 = *(x28 + mulu.dp.d(fp.d, 0x4e8))
uint64_t x24 = zx.q(arg2)
int64_t* x9_1 = *x26
int128_t v0
int128_t v1

if (x9_1 == 0)
    if (x26[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    v0, v1 = AssetCatalogLoadAsset(x26, false, true)
    x9_1 = *x26

int64_t x27 = **x9_1
int32_t* x21_1 = x28 + fp * 0x4e8 + (sx.q(x24.d) << 2) + 0x88
int32_t x9_3 = *x21_1
FabState* x26_1
int32_t x8_2

if (x9_3 == 0)
    x8_2 = *(gFabs + 8)
label_f609d0:
    uint64_t x22_1 = zx.q(*(gFabs + 0x10))
    uint64_t x8_3
    int64_t x9_4
    int32_t x10_3
    
    if (x22_1.d != x8_2)
        x9_4 = *gFabs
        x10_3 = *(x9_4 + x22_1 * 0x4e8 + 0x4e0)
        x8_3 = x22_1
    else
        x9_4 = *gFabs
        x10_3 = x8_2 + 1
        *(gFabs + 8) = x10_3
        x8_3 = zx.q(x8_2)
    
    *(gFabs + 0x10) = x10_3
    x26_1 = x9_4 + x8_3 * 0x4e8
    v0, v1 = memset(x26_1, 0, 0x4e0)
    *(x26_1 + 0x4e0) = x22_1.d | *(gFabs + 0x18) << 0x10
    int32_t x8_7 = *(gFabs + 0x18)
    int32_t x8_8
    
    if (x8_7 == 0xffff)
        x8_8 = 1
    else
        x8_8 = x8_7 + 1
    
    *(gFabs + 0x14) += 1
    *(gFabs + 0x18) = x8_8
    *x21_1 = *(x26_1 + 0x4e0)
else
    x8_2 = *(gFabs + 8)
    uint64_t x10_1 = zx.q(x9_3.w)
    
    if (x10_1.d u>= x8_2)
        goto label_f609d0
    
    x26_1 = *gFabs + x10_1 * 0x4e8
    
    if (*(x26_1 + 0x4e0) != x9_3)
        goto label_f609d0
void* x8_10 = x28 + fp * 0x4e8
v0 = *(x8_10 + 0x50)
int64_t x8_11 = sx.q(x24.d)
bool cond:1 = *(x26_1 + 0x48c) s<= *(x26_1 + 0x60)
*(x26_1 + 0x40) = *(x8_10 + 0x40)
*(x26_1 + 0x50) = v0
void* x9_8
void* x10_5
void* x11_3
void* x12
void* x13
void* __offset(FabState, 0x4a4) x14

if (cond:1)
    void* x14_1 = x27 + x8_11 * 0xe0
    x9_8 = x14_1 + 0x10
    x10_5 = x14_1 + 0x14
    x11_3 = x14_1 + 0x18
    x12 = x14_1 + 0x1c
    x13 = x14_1 + 0x20
    x14 = x14_1 + 0x24
else
    x9_8 = x26_1 + 0x490
    x10_5 = x26_1 + 0x494
    x11_3 = x26_1 + 0x498
    x12 = x26_1 + 0x49c
    x13 = x26_1 + 0x4a0
    x14 = x26_1 + 0x4a4

v0.d = *x14
v1.d = *x13
uint64_t var_1f8
var_1f8.d = *x9_8
float v2 = *x12
int64_t v12
v12.d = *x11_3
int64_t v11
v11.d = *x10_5
v0.d = v0.d f+ v0.d
float v3 = *PI
v1.d = v1.d f+ v1.d
int64_t v10
v10.d = fconvert.s(0.5f)
v0.d = v0.d f* v3
v2 = (v2 + v2) * v3
v1.d = v1.d f* v3
v3 = float.s(0x3b360b61)
v0.d = v0.d f* v3
v0.d = v0.d f* v10.d
FabEl* x27_1 = x27 + x8_11 * 0xe0
int64_t v8
v8.d = v2 * v3
int64_t v13
v13.d = v1.d f* v3
float cosp_2
float sinp_2
sincosf(&sinp_2, &cosp_2, v0.d)
int64_t v15
v15.d = cosp_2
int64_t v14
v14.d = sinp_2
float cosp
float sinp
sincosf(&sinp, &cosp, v8.d f* v10.d)
int64_t v9
v9.d = cosp
v8.d = sinp
float cosp_1
float sinp_1
sincosf(&sinp_1, &cosp_1, v13.d f* v10.d)
float cosp_3 = cosp_1
float sinp_3 = sinp_1
float v6 = v14.d f* v8.d
float v7 = v15.d f* v8.d
v8.d = *(x26_1 + 0x40)
float v1_1 = *(x26_1 + 0x44)
float v0_3 = *(x26_1 + 0x48)
float v2_1 = *(x26_1 + 0x4c)
float v20 = *(x26_1 + 0x50)
float v17 = v11.d f+ v11.d
float v11_1 = v12.d
float v18 = v12.d f+ v12.d
v12.d = var_1f8.d
float v5 = v15.d f* v9.d
float v16 = v14.d f* v9.d
float v22 = cosp_3 * v5
float v23 = sinp_3 * v6
float v24 = cosp_3 * v7
float v25 = sinp_3 * v16
v5 = sinp_3 * v5
v6 = cosp_3 * v6
cosp_3 = cosp_3 * v16
sinp_3 = sinp_3 * v7
v7 = v20 * v20
v16 = v1_1 * v1_1
float v27 = v1_1 * v0_3
float v28 = v20 * v2_1
float v29 = v20 * v0_3
float v30 = v1_1 * v2_1
float v31 = v0_3 * v2_1
v9.d = v20 * v1_1
float v19 = v12.d f+ v12.d
v22 = v22 + v23
v23 = v24 - v25
v5 = v5 + v6
sinp_3 = cosp_3 - sinp_3
cosp_3 = v7 + v16
v7 = v7 - v16
float v26 = v0_3 * v0_3
v6 = v17 * (v27 - v28)
v24 = v18 * (v29 + v30)
v16 = v18 * (v31 f- v9.d)
v18 = v19 * (v30 - v29)
v17 = v17 * (v9.d f+ v31)
cosp_3 = cosp_3 - v26
v25 = v19 * (v27 + v28)
v29 = v7 + v26
v7 = v7 - v26
v19 = v20 * v22
v26 = v1_1 * v23
v27 = v0_3 * v5
v28 = v2_1 * sinp_3
v30 = v20 * v23
v31 = v1_1 * v22
v9.d = v0_3 * sinp_3
v13.d = v20 * v5
v20 = v20 * sinp_3
sinp_3 = v1_1 * sinp_3
v1_1 = v1_1 * v5
v5 = v2_1 * v5
v17 = v18 + v17
v18 = v0_3 * v22
v0_3 = v0_3 * v23
v23 = v2_1 * v23
v22 = v2_1 * v22
v2_1 = v2_1 * v2_1
v29 = v29 - v2_1
cosp_3 = v12.d f* (cosp_3 - v2_1) + v6
v2_1 = v11_1 * (v7 + v2_1) + v17
v11_1 = v1_1 + v22 + v20 - v0_3
v18 = v23 + v18 f+ v13.d
v13.d = v19 - v26 - v27 - v28
v12.d = v9.d f+ v31 + v30 - v5
float v10_1 = v18 - sinp_3
v2_1 = *(x26_1 + 0x5c) + v8.d f* v2_1
v0_3 = *(x26_1 + 0x54) + v8.d f* (v24 + cosp_3)
v1_1 = *(x26_1 + 0x58) + v8.d f* (v16 + v25 + v11.d * v29)
int32_t* entry_x8
entry_x8[2] = v10_1
entry_x8[3] = v11_1
entry_x8[6] = v1_1
entry_x8[7] = v2_1
entry_x8[4] = v13.d
entry_x8[5] = v0_3
*entry_x8 = v8.d
entry_x8[1] = v12.d
uint32_t x0_8 = FabUIState(zx.q(arg1), x24.d)
ElBox(x27_1, x26_1)
float v4 = fconvert.s(0.5f)
float var_154
float v0_4 = var_154 * v4
float var_14c
float v1_2 = var_14c * v4
float v2_2 = *V20
float v3_1 = *(V20 + 4)
float v5_1 = v3_1 - v1_2
float var_1d0 = v2_2 - v0_4
float var_1c8 = v0_4 + v2_2
XAsset* x8_12 = *(x26_1 + 0x68)
XAsset* x0_10

if (x8_12 == 0)
    x0_10 = *(x27_1 + 0x88)
else
    x0_10 = x8_12

int32_t v0_5
int32_t v1_3
int32_t v2_3
int32_t v3_2
v0_5, v1_3, v2_3, v3_2 = UILayoutExtentsBG(x0_10)
int32_t var_b0 = v0_5
int32_t var_ac = v1_3
int32_t var_a8 = v2_3
int32_t var_a4 = v3_2
UIScreenTransformRel(&var_1d0, &var_b0)
UITransform var_110
UIStateTableTransform(x0_8, arg3, &var_110, arg5, nullptr, nullptr)
UITransform var_170
int64_t result = UIStateTransformItemTL(UIStateSubstate(x0_8, arg3, arg5), arg4, &var_170, arg6)
float v0_6 = var_1d0
float v2_4 = v13.d f* v13.d
float v3_3 = v12.d f* v12.d
float v4_1 = v10_1 * v10_1
float v6_1 = v12.d f* v10_1
float v7_1 = v13.d f* v11_1
float v18_1 = v13.d f* v10_1
float v19_1 = v12.d f* v11_1
float v22_1 = *QI
float v23_1 = *(QI + 4)
float v24_1 = *(QI + 8)
float v25_1 = *(QI + 0xc)
float v26_1 = v2_4 + v3_3
float v5_2 = v11_1 * v11_1
float v20_1 = v10_1 * v11_1
float v21_1 = v13.d f* v12.d
float v27_1 = v6_1 - v7_1
float v28_1 = v18_1 + v19_1
v6_1 = v6_1 + v7_1
v2_4 = v2_4 - v3_3
v7_1 = v19_1 - v18_1
float v16_1 = 0f
v19_1 = v2_4 + v4_1 - v5_2
v2_4 = v2_4 - v4_1 + v5_2
v4_1 = v0_6 * (v26_1 - v4_1 - v5_2)
v5_2 = v5_1 * fconvert.s(-2f)
v0_6 = v0_6 + v0_6
float v1_4 = entry_x8[5] f+ v8.d f* (v5_2 * v28_1 + v4_1 + v27_1 * v16_1)
v3_3 = entry_x8[6] f+ v8.d f* (v5_2 * (v20_1 - v21_1) + v0_6 * v6_1 + v19_1 * v16_1)
v0_6 = entry_x8[7] f+ v8.d f* (v0_6 * v7_1 + (v21_1 + v20_1) * v16_1 - v5_1 * v2_4)
*entry_x8 = (v1_2 + v3_1) f* v8.d
entry_x8[1] = v22_1 f* v13.d + v25_1 f* v12.d + v24_1 * v10_1 - v23_1 * v11_1
entry_x8[2] = v22_1 * v11_1 + v23_1 f* v13.d + v25_1 * v10_1 - v24_1 f* v12.d
entry_x8[3] = v23_1 f* v12.d + v24_1 f* v13.d + v25_1 * v11_1 - v22_1 * v10_1
entry_x8[4] = v25_1 f* v13.d - v22_1 f* v12.d - v23_1 * v10_1 - v24_1 * v11_1
entry_x8[5] = v1_4
entry_x8[6] = v3_3
entry_x8[7] = v0_6
return result
