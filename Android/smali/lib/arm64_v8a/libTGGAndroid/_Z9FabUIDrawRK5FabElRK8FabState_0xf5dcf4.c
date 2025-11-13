// 函数: _Z9FabUIDrawRK5FabElRK8FabState
// 地址: 0xf5dcf4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_70 = v15
int64_t v14
int64_t var_68 = v14
int64_t v13
int64_t var_60 = v13
int64_t v12
int64_t var_58 = v12
int64_t v11
int64_t var_50 = v11
int64_t v10
int64_t var_48 = v10
int64_t v9
int64_t var_40 = v9
int64_t v8
int64_t var_38 = v8

if (*(arg1 + 0x88) == 0)
    return 

ElBox(arg1, arg2)
void* __offset(FabState, 0x490) x8_2
void* __offset(FabState, 0x494) x9_2
void* __offset(FabState, 0x498) x10_1
void* __offset(FabState, 0x49c) x11_1
void* __offset(FabState, 0x4a0) x12_1
void* __offset(FabState, 0x4a4) x13_1

if (*(arg2 + 0x48c) s<= *(arg2 + 0x60))
    x8_2 = arg1 + 0x10
    x9_2 = arg1 + 0x14
    x10_1 = arg1 + 0x18
    x11_1 = arg1 + 0x1c
    x12_1 = arg1 + 0x20
    x13_1 = arg1 + 0x24
else
    x8_2 = arg2 + 0x490
    x9_2 = arg2 + 0x494
    x10_1 = arg2 + 0x498
    x11_1 = arg2 + 0x49c
    x12_1 = arg2 + 0x4a0
    x13_1 = arg2 + 0x4a4

float v0_1 = *x13_1
float v1_1 = *x12_1
float var_24_1 = *x8_2
float v2_1 = *x11_1
v11.d = *x10_1
v10.d = *x9_2
float v3_1 = *PI
v9.d = fconvert.s(0.5f)
v0_1 = (v0_1 + v0_1) * v3_1
v2_1 = (v2_1 + v2_1) * v3_1
v1_1 = (v1_1 + v1_1) * v3_1
v3_1 = float.s(0x3b360b61)
v12.d = v2_1 * v3_1
v13.d = v1_1 * v3_1
float cosp_2
float sinp_2
sincosf(&sinp_2, &cosp_2, v0_1 * v3_1 f* v9.d)
v15.d = cosp_2
v14.d = sinp_2
float cosp
float sinp
sincosf(&sinp, &cosp, v12.d f* v9.d)
v8.d = cosp
v12.d = sinp
float cosp_1
float sinp_1
sincosf(&sinp_1, &cosp_1, v13.d f* v9.d)
float cosp_3 = cosp_1
float sinp_3 = sinp_1
float v0_4 = *(arg2 + 0x40)
float v2_2 = *(arg2 + 0x44)
float v1_2 = *(arg2 + 0x48)
float v3_2 = *(arg2 + 0x4c)
float v22_1 = *(arg2 + 0x50)
float v4_1 = *(arg2 + 0x54)
float v16_1 = v14.d f* v12.d
float v18_1 = v14.d f* v8.d
v14 = v10
float v19_1 = v10.d f+ v10.d
v10 = v11
float v20_1 = v11.d f+ v11.d
v11.d = var_24_1
float v7_1 = v15.d f* v8.d
float v17_1 = v15.d f* v12.d
float v23_1 = cosp_3 * v7_1
float v24_1 = sinp_3 * v16_1
float v25_1 = cosp_3 * v17_1
float v26_1 = sinp_3 * v18_1
v7_1 = sinp_3 * v7_1
v16_1 = cosp_3 * v16_1
cosp_3 = cosp_3 * v18_1
sinp_3 = sinp_3 * v17_1
v17_1 = v22_1 * v22_1
v18_1 = v2_2 * v2_2
float v28_1 = v2_2 * v1_2
float v29_1 = v22_1 * v3_2
float v30_1 = v22_1 * v1_2
float v31_1 = v2_2 * v3_2
v8.d = v1_2 * v3_2
v12.d = v22_1 * v2_2
float v21_1 = v11.d f+ v11.d
v23_1 = v23_1 + v24_1
v24_1 = v25_1 - v26_1
v7_1 = v7_1 + v16_1
sinp_3 = cosp_3 - sinp_3
cosp_3 = v17_1 + v18_1
v17_1 = v17_1 - v18_1
float v27_1 = v1_2 * v1_2
v16_1 = v19_1 * (v28_1 - v29_1)
v25_1 = v20_1 * (v30_1 + v31_1)
v18_1 = v20_1 * (v8.d f- v12.d)
v20_1 = v21_1 * (v31_1 - v30_1)
v19_1 = v19_1 * (v12.d f+ v8.d)
cosp_3 = cosp_3 - v27_1
v26_1 = v21_1 * (v28_1 + v29_1)
v30_1 = v17_1 + v27_1
v17_1 = v17_1 - v27_1
v21_1 = v22_1 * v23_1
v27_1 = v2_2 * v24_1
v28_1 = v1_2 * v7_1
v29_1 = v3_2 * sinp_3
v31_1 = v22_1 * v24_1
v8.d = v2_2 * v23_1
v12.d = v1_2 * sinp_3
v13.d = v22_1 * v7_1
v22_1 = v22_1 * sinp_3
sinp_3 = v2_2 * sinp_3
v2_2 = v2_2 * v7_1
v7_1 = v3_2 * v7_1
v19_1 = v20_1 + v19_1
v20_1 = v1_2 * v23_1
v1_2 = v1_2 * v24_1
v24_1 = v3_2 * v24_1
v23_1 = v3_2 * v23_1
v3_2 = v3_2 * v3_2
v30_1 = v30_1 - v3_2
cosp_3 = cosp_3 - v3_2
v3_2 = v17_1 + v3_2
v17_1 = v21_1 - v27_1
v22_1 = v23_1 + v22_1
v23_1 = v14.d f* v30_1
v27_1 = *(arg2 + 0x58)
v30_1 = *(arg2 + 0x5c)
v20_1 = v24_1 + v20_1 f+ v13.d
v17_1 = v17_1 - v28_1
v21_1 = v12.d f+ v8.d f+ v31_1
v28_1 = *(gDraw3DData + 0x24)
v31_1 = *(gDraw3DData + 0x28)
v24_1 = *(gDraw3DData + 0x2c)
sinp_3 = v20_1 - sinp_3
v1_2 = v2_2 + v22_1 - v1_2
v17_1 = v17_1 - v29_1
v7_1 = v21_1 - v7_1
v20_1 = v1_2 * v1_2
float sinp_4 = sinp_3
float var_ac_1 = v1_2
float var_b8 = v0_4
float var_b4_1 = v7_1
v2_2 = v0_4 * (v25_1 + v11.d f* cosp_3 + v16_1)
v3_2 = v30_1 + v0_4 * (v10.d f* v3_2 + v19_1)
cosp_3 = sinp_3 * v7_1 - v1_2 * v17_1
v1_2 = sinp_3 * v1_2 + v7_1 * v17_1
v2_2 = v4_1 + v2_2
v0_4 = v27_1 + v0_4 * (v18_1 + v26_1 + v23_1)
float var_a0_1 = v0_4
float var_9c_1 = v3_2
float var_a8_1 = v17_1
float var_a4_1 = v2_2
Draw3DStartForceZ(0, 
    (v2_2 - v28_1) * (cosp_3 + cosp_3)
        + (sinp_3 * sinp_3 - v20_1 + v17_1 * v17_1 - v7_1 * v7_1) * (v0_4 - v31_1)
        + (v1_2 + v1_2) * (v3_2 - v24_1))
UIProjectInto3DTransform(&var_b8)

if ((zx.d(data_23ee360) & 1) == 0 && __cxa_guard_acquire(&data_23ee360) != 0)
    data_23ee358 = AssetPtrFromPath("sys/sprite_3d.material", 5)
    __cxa_guard_release(&data_23ee360)
    v9.d = fconvert.s(0.5f)

SpriteSetDefault3dMaterial(data_23ee358)
float var_7c
float v0_5 = var_7c f* v9.d
float var_74
float v1_3 = var_74 f* v9.d
float v2_3 = *V20
float v3_3 = *(V20 + 4)
float var_c8 = v2_3 - v0_5
float var_c4_1 = v3_3 - v1_3
float var_c0_1 = v0_5 + v2_3
float var_bc_1 = v1_3 + v3_3
XAsset* x8_4 = *(arg2 + 0x68)
XAsset* x0_5

if (x8_4 == 0)
    x0_5 = *(arg1 + 0x88)
else
    x0_5 = x8_4

int32_t v0_6
int32_t v1_4
int32_t v2_4
int32_t v3_4
v0_6, v1_4, v2_4, v3_4 = UILayoutExtentsBG(x0_5)
int32_t var_d8 = v0_6
int32_t var_d4_1 = v1_4
int32_t var_cc_1 = v3_4
int128_t v0_7
int128_t v1_5
int128_t v2_5
int128_t v3_5
int128_t v4_3
int128_t v5_2
v0_7, v1_5, v2_5, v3_5, v4_3, v5_2 = UIScreenTransformRel(&var_c8, &var_d8)
int64_t var_ec
v1_5.q = var_ec
int64_t var_e4
v2_5.q = var_e4
v3_5.q = var_d8.q
v4_3.q = v2_4.q
v0_7.q = *V21
bool cond:0_1 = *(arg2 + 0x4b4) s> *(arg2 + 0x60)
v5_2.d = 0x3f000000
v5_2:4.d = 0x3f000000
int128_t v6_1 = vadd_f32(v1_5, v2_5)
void* __offset(FabEl, 0x90) x8_6

if (cond:0_1)
    x8_6 = arg2 + 0x4b8
else
    x8_6 = arg1 + 0x90

int128_t v3_6 = vadd_f32(v3_5, v4_3)
int128_t v4_4 = vmul_f32(v6_1, v5_2, 0)
v6_1.d = *x8_6
int128_t v1_6 = vsub_f32(v1_5, v4_4)
int128_t v2_6 = vsub_f32(v2_5, v4_4)
double v3_7 = vmul_f32(v3_6, v5_2, 0)
v0_7.d = v0_7.d f* v6_1.d
v0_7:4.d = v0_7:4.d f* v6_1.d
int128_t v1_7 = vmul_f32(v1_6, v0_7, 0)
int128_t v0_8 = vmul_f32(v2_6, v0_7, 0)
int64_t var_ec_1 = vadd_f32(v4_4, v1_7).q
double var_e4_1 = vadd_f32(v4_4, v0_8)
int32_t var_12c
double v0_9
v0_9.d = var_12c
v2_6.d = fconvert.s(1f)
int128_t v1_8
v1_8.d = v2_6.d f- v6_1.d
double var_138
v2_6.q = var_138
v4_4 = var_c8.o
v3_7.d = v3_7.d f* v0_9.d
v3_7:4.d = v3_7:4.d f* v0_9.d
v0_9.d = v6_1.d f* v0_9.d
v1_8.d = v3_7.d f* v1_8.d
v1_8:4.d = v3_7:4.d f* v1_8.d
int32_t var_12c_1 = v0_9.d
double v0_10 = vadd_f32(v2_6, v1_8)
int32_t var_160_1 = 0xffffffff
int128_t var_170 = v4_4
var_138 = v0_10
SetClipRect(&var_170)
XAsset* x8_7 = *(arg2 + 0x68)
uint32_t x0_8 = *(arg2 + 8)
XAsset* x20_2

if (x8_7 == 0)
    x20_2 = *(arg1 + 0x88)
else
    x20_2 = x8_7

uint32_t x8_8

if (x0_8 == 0)
    if (x20_2 != 0)
        goto label_f5e18c
    
    x8_8 = 0
else
    int64_t x0_9 = UIStateAsset(x0_8)
    x8_8 = *(arg2 + 8)
    
    if (x0_9 != x20_2)
        UIStateDestroy(x8_8)
    label_f5e18c:
        uint32_t x0_12 = UIStateLoad(x20_2)
        x8_8 = x0_12
        *(arg2 + 8) = x0_12

UIStateDraw(x8_8, &var_138, fconvert.s(1f))
void var_150
SetClipRect(&var_150)
SpriteSetDefault3dMaterial(nullptr)
UIProjectiveMatrixRestore()
Draw3DStopForceZ()
