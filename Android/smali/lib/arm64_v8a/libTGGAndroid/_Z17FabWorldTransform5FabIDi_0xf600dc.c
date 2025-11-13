// 函数: _Z17FabWorldTransform5FabIDi
// 地址: 0xf600dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = zx.q(arg1)
int64_t x22 = *gFabs
int64_t* x20 = *(x22 + mulu.dp.d(x23.d, 0x4e8))
int64_t* x9_1 = *x20
int128_t v0
int128_t v1

if (x9_1 == 0)
    if (x20[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    v0, v1 = AssetCatalogLoadAsset(x20, false, true)
    x9_1 = *x20

int64_t x25 = **x9_1
int32_t x9_3 = *(x22 + x23 * 0x4e8 + (sx.q(arg2) << 2) + 0x88)
void* x20_1
int32_t x8_2
uint64_t x27_1

if (x9_3 == 0)
    x8_2 = *(gFabs + 8)
    x27_1 = zx.q(*(gFabs + 0x10))
    uint64_t x8_3
    int64_t x9_4
    int32_t x10_3
    
    if (x27_1.d == x8_2)
    label_f601b8:
        x9_4 = *gFabs
        x10_3 = x8_2 + 1
        *(gFabs + 8) = x10_3
        x8_3 = zx.q(x8_2)
    else
    label_f601dc:
        x9_4 = *gFabs
        x10_3 = *(x9_4 + x27_1 * 0x4e8 + 0x4e0)
        x8_3 = x27_1
    
    *(gFabs + 0x10) = x10_3
    x20_1 = x9_4 + x8_3 * 0x4e8
    v0, v1 = memset(x20_1, 0, 0x4e0)
    *(x20_1 + 0x4e0) = x27_1.d | *(gFabs + 0x18) << 0x10
    int32_t x8_7 = *(gFabs + 0x18)
    int32_t x8_8
    
    if (x8_7 == 0xffff)
        x8_8 = 1
    else
        x8_8 = x8_7 + 1
    
    *(gFabs + 0x14) += 1
    *(gFabs + 0x18) = x8_8
    *(x22 + x23 * 0x4e8 + (sx.q(arg2) << 2) + 0x88) = *(x20_1 + 0x4e0)
else
    x8_2 = *(gFabs + 8)
    uint64_t x10_1 = zx.q(x9_3.w)
    
    if (x10_1.d u< x8_2)
        x20_1 = *gFabs + x10_1 * 0x4e8
    
    if (x10_1.d u>= x8_2 || *(x20_1 + 0x4e0) != x9_3)
        x27_1 = zx.q(*(gFabs + 0x10))
        
        if (x27_1.d != x8_2)
            goto label_f601dc
        
        goto label_f601b8
void* x8_10 = x22 + x23 * 0x4e8
v0 = *(x8_10 + 0x50)
bool cond:1 = *(x20_1 + 0x48c) s<= *(x20_1 + 0x60)
*(x20_1 + 0x40) = *(x8_10 + 0x40)
*(x20_1 + 0x50) = v0
void* x8_11
void* x9_8
void* x10_5
void* x11_3
void* x12
void* x13

if (cond:1)
    void* x13_1 = x25 + sx.q(arg2) * 0xe0
    x8_11 = x13_1 + 0x10
    x9_8 = x13_1 + 0x14
    x10_5 = x13_1 + 0x18
    x11_3 = x13_1 + 0x1c
    x12 = x13_1 + 0x20
    x13 = x13_1 + 0x24
else
    x8_11 = x20_1 + 0x490
    x9_8 = x20_1 + 0x494
    x10_5 = x20_1 + 0x498
    x11_3 = x20_1 + 0x49c
    x12 = x20_1 + 0x4a0
    x13 = x20_1 + 0x4a4

v0.d = *x13
v1.d = *x12
float var_ac = *x8_11
float v2 = *x11_3
int64_t v10
v10.d = *x10_5
int64_t v9
v9.d = *x9_8
v0.d = v0.d f+ v0.d
float v3 = *PI
v1.d = v1.d f+ v1.d
int64_t v13
v13.d = fconvert.s(0.5f)
v0.d = v0.d f* v3
v2 = (v2 + v2) * v3
v1.d = v1.d f* v3
v3 = float.s(0x3b360b61)
v0.d = v0.d f* v3
v0.d = v0.d f* v13.d
int64_t v11
v11.d = v2 * v3
int64_t v12
v12.d = v1.d f* v3
float cosp_2
float sinp_2
sincosf(&sinp_2, &cosp_2, v0.d)
int64_t v15
v15.d = cosp_2
int64_t v14
v14.d = sinp_2
float cosp
float sinp
sincosf(&sinp, &cosp, v11.d f* v13.d)
int64_t v8
v8.d = cosp
v11.d = sinp
float cosp_1
float sinp_1
int64_t result = sincosf(&sinp_1, &cosp_1, v12.d f* v13.d)
float cosp_3 = cosp_1
float sinp_3 = sinp_1
float v0_3 = *(x20_1 + 0x40)
float v2_1 = *(x20_1 + 0x44)
float v1_1 = *(x20_1 + 0x48)
float v3_1 = *(x20_1 + 0x4c)
float v21 = *(x20_1 + 0x50)
float v22 = *(x20_1 + 0x54)
float v18 = v9.d f+ v9.d
float v9_1 = v10.d
float v19 = v10.d f+ v10.d
v10.d = var_ac
float v6 = v15.d f* v8.d
float v7 = v14.d f* v11.d
float v16 = v15.d f* v11.d
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
float v28 = v2_1 * v1_1
float v29 = v21 * v3_1
float v30 = v21 * v1_1
float v31 = v2_1 * v3_1
v8.d = v1_1 * v3_1
v11.d = v21 * v2_1
float v20 = v10.d f+ v10.d
v23 = v23 + v24
v24 = v25 - v26
v6 = v6 + v7
sinp_3 = cosp_3 - sinp_3
cosp_3 = v16 + v17
v16 = v16 - v17
float v27 = v1_1 * v1_1
v7 = v18 * (v28 - v29)
v25 = v19 * (v30 + v31)
v17 = v19 * (v8.d f- v11.d)
v19 = v20 * (v31 - v30)
v18 = v18 * (v11.d f+ v8.d)
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
v11.d = v1_1 * sinp_3
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
v21 = v23 + v21
v23 = v9.d * v30
v27 = *(x20_1 + 0x58)
v30 = *(x20_1 + 0x5c)
float* entry_x8
entry_x8[2] = v24 + v19 f+ v12.d - sinp_3
entry_x8[3] = v2_1 + v21 - v1_1
entry_x8[6] = v27 + v0_3 * (v17 + v26 + v23)
entry_x8[7] = v30 + v0_3 * (v9_1 * v3_1 + v18)
entry_x8[4] = v16 - v28 - v29
entry_x8[5] = v22 + v0_3 * (v25 + v10.d f* cosp_3 + v7)
*entry_x8 = v0_3
entry_x8[1] = v11.d f+ v8.d f+ v31 - v6
return result
