// 函数: _Z30StructureGetRealHardPointPlaceP9Structure5Crc32R9Transform
// 地址: 0xfd3758
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v10
int64_t var_40 = v10
int64_t v9
int64_t var_38 = v9
int64_t v8
int64_t var_30 = v8
int64_t* x20 = *(arg1 + 8)
Structure* x21 = arg1
int64_t* x8
int128_t v0
int128_t v1
int128_t v18

if (x20 == 0)
    arg1, v0, v1, v18 = AssetPtrGetNull(2)
    x20 = arg1
    x8 = *x20
    
    if (x8 == 0)
        arg1, v0, v1, v18 = AssetCatalogLoadAsset(x20, false, true)
        x8 = *x20
else
    x8 = *x20
    
    if (x8 == 0)
        arg1, v0, v1, v18 = AssetCatalogLoadAsset(x20, false, true)
        x8 = *x20

*(x20 + 0x24) += 1
void* x9_2 = **x8

if (x9_2 == 0)
label_fd3828:
    v0 = *(TI + 0x10)
    *arg3 = *TI
    *(arg3 + 0x10) = v0
    
    if (x20 != 0)
        *(x20 + 0x24) -= 1
    
    return 

uint64_t x12_1 = zx.q(*(x9_2 + 0x20))

if (x12_1.d s< 1)
    goto label_fd3828

void* x10_1 = *(x9_2 + 0x28)
int64_t x11_1 = 0
int64_t x8_2 = 0
int32_t* x13_1 = x10_1 + 0x2c

while (*x13_1 != arg2)
    x11_1 -= 1
    x8_2 += 0x100000000
    x13_1 = &x13_1[0x10]
    
    if (neg.q(x12_1) == x11_1)
        goto label_fd3828

if (x11_1.d == 1)
    goto label_fd3828

void* x13_2 = *(x21 + 0x38)
int64_t x12_3 = x8_2 s>> 0x20
void* x11_2 = x10_1 + (x8_2 s>> 0x1a)
uint64_t x8_6

if (x13_2 != 0)
    x8_6 = zx.q(*(x10_1 + (x12_3 << 6) + 0x38))

float v2
float v3
float v4
float v5
float v6
float v7
float v16
float v17
float v19
float v20
float v21
float v22
float v23
float v24
float v25

if (x13_2 == 0 || (x8_6.d & 0x80000000) != 0 || x8_6.d s>= *(x9_2 + 0x10))
    void* x8_7 = x10_1 + (x12_3 << 6)
    v0.d = *x11_2
    v4 = *(x8_7 + 0x14)
    v5 = *(x8_7 + 0x18)
    v1.d = *(x8_7 + 4)
    v2 = *(x8_7 + 8)
    v3 = *(x8_7 + 0xc)
    v6 = *(x8_7 + 0x10)
else
    void* x10_2 = x10_1 + (x12_3 << 6)
    v0.d = *x11_2
    v1.d = *(x10_2 + 4)
    v2 = *(x10_2 + 8)
    v6 = *(x10_2 + 0xc)
    v3 = *(x10_2 + 0x1c)
    v4 = *(x10_2 + 0x20)
    v5 = *(x10_2 + 0x24)
    v19 = v0.d f+ v0.d
    v20 = v1.d f+ v1.d
    v8.d = fconvert.s(1f)
    v18 = data_71cfa0
    v22 = v1.d f* v19
    v6 = v6 + v6
    v23 = v2 * v19
    v24 = v1.d f* v20
    v21 = v2 * (v2 + v2)
    v25 = v2 * v6
    v1.d = v1.d f* v6
    v19 = v8.d f- v0.d f* v19
    v2 = v20 * v2
    v0.d = v0.d f* v6
    v20 = v22 - v25
    v22 = v22 + v25
    v25 = v23 f+ v1.d
    v1.d = v23 f- v1.d
    v23 = v2 f- v0.d
    v0.d = v2 f+ v0.d
    Mat4* x0_1 = *(x13_2 + 0xb0) + (x8_6 << 6)
    v1.d = v3 f* v1.d
    v0.d = v4 f* v0.d
    float var_78_1 = v5 * v25
    float var_74_1 = *(x10_2 + 0x10)
    float var_70_1 = v3 * v22
    float var_6c_1 = v4 * (v19 - v21)
    float var_68_1 = v5 * v23
    float var_64_1 = *(x10_2 + 0x14)
    int32_t var_60_1 = v1.d
    int32_t var_5c_1 = v0.d
    float var_58_1 = v5 * (v19 - v24)
    float var_54_1 = *(x10_2 + 0x18)
    float var_80 = v3 * (v8.d f- v24 - v21)
    float var_7c_1 = v4 * v20
    int128_t var_50_1 = v18
    arg1, v0, v1, v18 = Mat4Multiply(x0_1, &var_80)
    int32_t var_bc
    v0.d = var_bc
    int32_t var_b0
    v1.d = var_b0
    float var_c0
    float var_ac
    v17 = var_c0 + var_ac
    float var_98
    v18.d = v17 + var_98
    float var_b8
    float var_a8
    float var_a0
    float var_9c
    
    if (not(v18.d f<= 0f))
        v7 = fconvert.s(0.5f)
        v4 = v1.d f- v0.d
        v0.d = sqrt(v18.d f+ v8.d)
        v6 = v7 f/ v0.d
        v3 = v0.d f* v7
        v0.d = (var_9c - var_a8) * v6
        v1.d = (var_b8 - var_a0) * v6
        v2 = v4 * v6
    else if (not(var_ac <= var_c0))
        if (var_98 > var_ac)
            goto label_fd3b8c
        
        v0.d = v0.d f+ v1.d
        v1.d = var_ac - (var_c0 + var_98)
        v1.d = v1.d f+ fconvert.s(1f)
        v4 = fconvert.s(0.5f)
        v3 = sqrt(v1.d)
        v1.d = v3 * v4
        
        if (v3 != 0f)
            v4 = v4 / v3
        else
            v4 = v3
        
        v3 = (var_b8 - var_a0) * v4
        v2 = (var_a8 + var_9c) * v4
        v0.d = v0.d f* v4
    else if (var_98 <= var_c0)
        v1.d = v0.d f+ v1.d
        v0.d = var_c0 - (var_ac + var_98)
        v0.d = v0.d f+ fconvert.s(1f)
        v5 = fconvert.s(0.5f)
        v4 = sqrt(v0.d)
        v0.d = v4 * v5
        
        if (v4 != 0f)
            v4 = v5 / v4
        
        v3 = (var_9c - var_a8) * v4
        v1.d = v1.d f* v4
        v2 = (var_b8 + var_a0) * v4
    else
    label_fd3b8c:
        v0.d = v1.d f- v0.d
        v1.d = var_b8 + var_a0
        v16 = fconvert.s(0.5f)
        v3 = sqrt(var_98 - v17 + fconvert.s(1f))
        
        if (v3 != 0f)
            v5 = v16 / v3
        else
            v5 = v3
        
        v2 = v3 * v16
        v3 = v0.d f* v5
        v0.d = v1.d f* v5
        v1.d = (var_a8 + var_9c) * v5
    float var_b4
    v6 = var_b4
    float var_a4
    v4 = var_a4
    float var_94
    v5 = var_94

v17 = *(x21 + 0x18)
v19 = *(x21 + 0x1c)
v20 = *(x21 + 0x24)
v22 = *(x21 + 0x28)
v21 = *(x21 + 0x20)
v18.d = *(x21 + 0x2c)
v24 = v19 * v19
v23 = v22 * v22
v25 = v19 * v21
float v26 = v20 * v22
float v27 = v21 * v22
float v28 = v19 * v20
float v29 = v21 * v20
float v30 = v19 * v22
v8.d = v0.d f* v19
v9.d = v0.d f* v22
v10.d = v25 - v26
v25 = v25 + v26
v26 = v24 + v23
v23 = v23 - v24
v24 = v28 + v27
v27 = v28 - v27
v28 = v29 - v30
v29 = v29 + v30
float v31 = v3 * v22 f- v8.d
v8.d = v1.d f* v22
v30 = v3 * v19 f+ v9.d
v9.d = v3 * v21
v3 = v3 * v20 + v2 * v22
v22 = v5 + v5
v24 = v22 * v24
v22 = v22 * v28
v28 = v6 + v6
v8.d = v9.d f+ v8.d
v9.d = v4 + v4
v25 = v28 * v25
v27 = v28 * v27
v28 = v21 * v21
v26 = v26 - v28
v10.d = v9.d f* v10.d
v29 = v9.d f* v29
v9.d = v28 + v23
v23 = v23 - v28
v28 = v31 - v1.d f* v21
v30 = v2 * v21 + v30
v31 = v2 * v20
v2 = v2 * v19
v19 = v1.d f* v19
v1.d = v1.d f* v20
v21 = v0.d f* v21
v0.d = v0.d f* v20
v20 = v20 * v20
v0.d = v0.d f+ v8.d
v7 = *(x21 + 0x10)
v16 = *(x21 + 0x14)
v0.d = v0.d f- v2
*(arg3 + 8) = v0.d
*(arg3 + 0xc) = v19 + v3 - v21
v0.d = v10.d f+ v6 * (v26 - v20)
v0.d = v24 f+ v0.d
v0.d = v18.d f* v0.d
v1.d = v30 f- v1.d
v0.d = v7 f+ v0.d
*(arg3 + 0x18) = v16 + v18.d f* (v22 + v25 + v4 * (v9.d f- v20))
*(arg3 + 0x1c) = v17 + v18.d f* (v27 + v29 + v5 * (v20 + v23))
*(arg3 + 0x10) = v28 - v31
*(arg3 + 0x14) = v0.d
*arg3 = v18.d
*(arg3 + 4) = v1.d

if (x20 != 0)
    *(x20 + 0x24) -= 1
