// 函数: _Z19FabUIWorldTransform5FabIDiiRK4Vec2
// 地址: 0xf60500
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x26 = zx.q(arg1) & 0xffff
int64_t x25 = *gFabs
int32_t x23 = arg1
int64_t* x24 = *(x25 + mulu.dp.d(x26.d, 0x4e8))
int64_t* x9_1 = *x24
int128_t v0
int128_t v1

if (x9_1 == 0)
    if (x24[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    v0, v1 = AssetCatalogLoadAsset(x24, false, true)
    x9_1 = *x24

int64_t fp = **x9_1
int32_t x9_3 = *(x25 + x26 * 0x4e8 + (sx.q(arg2) << 2) + 0x88)
FabState* x24_1
int32_t x8_2

if (x9_3 == 0)
    x8_2 = *(gFabs + 8)
label_f605e8:
    uint64_t x21_1 = zx.q(*(gFabs + 0x10))
    uint64_t x8_3
    int64_t x9_4
    int32_t x10_3
    
    if (x21_1.d != x8_2)
        x9_4 = *gFabs
        x10_3 = *(x9_4 + x21_1 * 0x4e8 + 0x4e0)
        x8_3 = x21_1
    else
        x9_4 = *gFabs
        x10_3 = x8_2 + 1
        *(gFabs + 8) = x10_3
        x8_3 = zx.q(x8_2)
    
    *(gFabs + 0x10) = x10_3
    x24_1 = x9_4 + x8_3 * 0x4e8
    v0, v1 = memset(x24_1, 0, 0x4e0)
    *(x24_1 + 0x4e0) = x21_1.d | *(gFabs + 0x18) << 0x10
    int32_t x8_7 = *(gFabs + 0x18)
    int32_t x8_8
    
    if (x8_7 == 0xffff)
        x8_8 = 1
    else
        x8_8 = x8_7 + 1
    
    *(gFabs + 0x14) += 1
    *(gFabs + 0x18) = x8_8
    *(x25 + x26 * 0x4e8 + (sx.q(arg2) << 2) + 0x88) = *(x24_1 + 0x4e0)
else
    x8_2 = *(gFabs + 8)
    uint64_t x10_1 = zx.q(x9_3.w)
    
    if (x10_1.d u>= x8_2)
        goto label_f605e8
    
    x24_1 = *gFabs + x10_1 * 0x4e8
    
    if (*(x24_1 + 0x4e0) != x9_3)
        goto label_f605e8
void* x8_10 = x25 + x26 * 0x4e8
v0 = *(x8_10 + 0x50)
FabEl* x25_1 = fp + sx.q(arg2) * 0xe0
*(x24_1 + 0x40) = *(x8_10 + 0x40)
*(x24_1 + 0x50) = v0
FabWorldTransform(zx.q(x23), arg2)
uint32_t x0_6 = FabUIState(zx.q(x23), arg2)
ElBox(x25_1, x24_1)
float v2 = fconvert.s(0.5f)
float var_134
float v0_1 = var_134 * v2
float var_12c
float v1_1 = var_12c * v2
float v3 = *V20
float v4 = *(V20 + 4)
float var_80 = v3 - v0_1
float var_7c = v4 - v1_1
float var_78 = v0_1 + v3
float var_74 = v1_1 + v4
XAsset* x8_12 = *(x24_1 + 0x68)
XAsset* x0_8

if (x8_12 == 0)
    x0_8 = *(x25_1 + 0x88)
else
    x0_8 = x8_12

int32_t v0_2
int32_t v1_2
int32_t v2_1
int32_t v3_1
v0_2, v1_2, v2_1, v3_1 = UILayoutExtentsBG(x0_8)
int32_t var_90 = v0_2
int32_t var_8c = v1_2
int32_t var_88 = v2_1
int32_t var_84 = v3_1
UIScreenTransformRel(&var_80, &var_90)
UITransform var_f0
int64_t result = UIStateTransformItemCenter(x0_6, arg3, &var_f0, arg4)
int32_t* entry_x8
float v0_3 = *entry_x8
float v3_2 = entry_x8[1]
float v4_1 = entry_x8[2]
float v5_1 = entry_x8[3]
float v16 = entry_x8[4]
float v17 = entry_x8[5]
float v18 = *QI
float v19 = *(QI + 4)
float v20 = *(QI + 8)
float v21 = *(QI + 0xc)
float v22 = v16 * v16
float v23 = v3_2 * v3_2
float v25 = v3_2 * v4_1
float v26 = v16 * v5_1
float v27 = v16 * v4_1
float v28 = v3_2 * v5_1
float v30 = v4_1 * v5_1
float v31 = v16 * v3_2
float v24 = v4_1 * v4_1
float var_14c
float v7 = var_14c * fconvert.s(-2f)
float var_150
float v29 = var_150 + var_150
int64_t v8
v8.d = v22 + v23
int64_t v9
v9.d = v25 - v26
v25 = v25 + v26
v26 = v27 + v28
v22 = v22 - v23
v27 = v28 - v27
float v6 = 0f
v28 = v31 + v30
v26 = v7 * v26
v7 = v7 * (v30 - v31)
v8.d = v8.d f- v24
v25 = v29 * v25
v27 = v29 * v27
v29 = v22 + v24
v22 = v22 - v24
v30 = v21 * v16 - v18 * v3_2
v23 = v18 * v16 + v21 * v3_2
v24 = v19 * v16 + v21 * v4_1
v31 = v19 * v4_1
v16 = v20 * v16 + v21 * v5_1
v21 = v20 * v5_1
v27 = v27 + v28 * v6
v28 = v20 * v4_1
v20 = v20 * v3_2
v3_2 = v19 * v3_2
v19 = v19 * v5_1
v4_1 = v18 * v4_1
v18 = v18 * v5_1
v5_1 = v5_1 * v5_1
v8.d = v8.d f- v5_1
v18 = v18 + v24
v3_2 = v3_2 + v16
v16 = entry_x8[6]
v24 = entry_x8[7]
entry_x8[2] = v18 - v20
entry_x8[3] = v3_2 - v4_1
float var_144
*entry_x8 = var_144 * v0_3
entry_x8[1] = v23 + v28 - v19
entry_x8[4] = v30 - v31 - v21
entry_x8[5] = v17 + v0_3 * (v26 + var_150 f* v8.d + v9.d f* v6)
entry_x8[6] = v16 + v0_3 * (v7 + v25 + (v29 - v5_1) * v6)
entry_x8[7] = v24 + v0_3 * (v27 - var_14c * (v22 + v5_1))
return result
