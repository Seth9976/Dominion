// 函数: _Z24UIProjectScreenTransformv
// 地址: 0xfcec20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(data_2422680) & 1) == 0)
    int32_t x0_1
    int128_t v0_3
    x0_1, v0_3 = __cxa_guard_acquire(&data_2422680)
    
    if (x0_1 != 0)
        v0_3.q = *VY
        float v1_2 = *(VY + 8)
        double var_70 = vneg_f32(v0_3)
        float var_68_1 = fneg(v1_2)
        int32_t v0_5
        int32_t v1_3
        int32_t v2_2
        int32_t v3_2
        v0_5, v1_3, v2_2, v3_2 = QuatFromBasisChange(VX, &var_70, VRIGHT, VUP)
        data_2422718 = v0_5
        data_242271c = v1_3
        data_2422720 = v2_2
        data_2422724 = v3_2
        __cxa_guard_release(&data_2422680)

if ((zx.d(data_2422688) & 1) == 0 && __cxa_guard_acquire(&data_2422688) != 0)
    int32_t v0_6
    int32_t v1_4
    int32_t v2_3
    int32_t v3_3
    v0_6, v1_4, v2_3, v3_3 = QuatFromBasisChange(VY, VX, VRIGHT, VUP)
    data_2422728 = v0_6
    data_242272c = v1_4
    data_2422730 = v2_3
    data_2422734 = v3_3
    __cxa_guard_release(&data_2422688)

if ((zx.d(data_2422690) & 1) == 0)
    int32_t x0_5
    int128_t v0_7
    x0_5, v0_7 = __cxa_guard_acquire(&data_2422690)
    
    if (x0_5 != 0)
        int32_t* x8_9
        
        if (zx.d(*(*gAppInterface + 0x45)) == 0)
            x8_9 = &data_2422718
        else
            x8_9 = &data_2422728
        
        v0_7 = *x8_9
        data_2422738 = v0_7
        __cxa_guard_release(&data_2422690, v0_7)

if ((zx.d(data_2422698) & 1) == 0 && __cxa_guard_acquire(&data_2422698) != 0)
    data_24225f8 = 0xffffffff
    __cxa_guard_release(&data_2422698)

if ((zx.d(data_24226a0) & 1) == 0 && __cxa_guard_acquire(&data_24226a0) != 0)
    int32_t x8_12
    
    if (zx.d(*(*gAppInterface + 0x45)) != 0)
        x8_12 = -1
    else
        x8_12 = 1
    
    data_24225fc = x8_12
    __cxa_guard_release(&data_24226a0)

int64_t result
int128_t v0_1
int128_t v1_1
result, v0_1, v1_1 = InVRMode()
double var_80
int64_t (* x9_1)()
int64_t (* x10)()
int64_t (* x11)()
int64_t (* x12)()
int64_t (* x13)()
int64_t (* x14)()
int64_t (* x15)()

if ((result.d & 1) == 0)
    x10 = gDraw3DData + 0xa0
    x11 = gDraw3DData + 0x9c
    x13 = gDraw3DData + 0x94
    x9_1 = gDraw3DData + 0xa4
    x14 = gDraw3DData + 0x90
    x15 = gDraw3DData + 0x8c
    v0_1.q = *(*gAppInterface + 0x28)
    x12 = gDraw3DData + 0x98
    var_80 = vcvt_f32_s32(v0_1)
else
    v0_1.d = fconvert.s(0.25f)
    v0_1:4.d = fconvert.s(0.25f)
    x9_1 = gDraw3DData + 0xc0
    x10 = gDraw3DData + 0xbc
    v1_1.q = *(gVR + 0xb8)
    x11 = gDraw3DData + 0xb8
    x12 = gDraw3DData + 0xb4
    x13 = gDraw3DData + 0xb0
    x14 = gDraw3DData + 0xac
    var_80 = vmul_f32(vcvt_f32_s32(v1_1), v0_1, 0)
    x15 = gDraw3DData + 0xa8

v1_1.d = *x9_1
double v0_2
v0_2.d = *x10
int64_t v15
v15.d = *gDraw3DData
int64_t v14
v14.d = *x11
float var_18 = v0_2.d
float var_14 = v1_1.d
int64_t v9
v9.d = *x12
int64_t v10
v10.d = *x13
int64_t v8
v8.d = *x14
int64_t v11
v11.d = *x15
int64_t v13
v13.d = data_24225f8
int64_t v12
v12.d = data_24225fc

if ((zx.d(data_24226b0) & 1) == 0)
    result, v0_2, v1_1 = __cxa_guard_acquire(&data_24226b0)
    
    if (result.d != 0)
        data_24226a8 = AssetPtrFromPath("sys/sprite_3d_no_zread.material", 5)
        result, v0_2, v1_1 = __cxa_guard_release(&data_24226b0)

if ((zx.d(data_24226c0) & 1) == 0)
    result, v0_2, v1_1 = __cxa_guard_acquire(&data_24226c0)
    
    if (result.d != 0)
        data_24226b8 = AssetPtrFromPath("sys/SpineTint.material", 5)
        result, v0_2, v1_1 = __cxa_guard_release(&data_24226c0)

v0_2.d = fconvert.s(0.5f)
v1_1.d = float.s(v13.d)
float v3_1 = v9.d f* v9.d
float v4 = v11.d f* v11.d
float v7 = v8.d f* v11.d
float v16 = v9.d f* v10.d
float v19 = v10.d f* v8.d
float v20 = v9.d f* v11.d
v1_1.d = v1_1.d f* var_80.d
float v5 = v8.d f* v8.d
float v17 = v9.d f* v8.d
float v18 = v10.d f* v11.d
double v22
v22.d = v3_1 - v4
float v24 = v19 + v20
v19 = v19 - v20
v20 = v16 + v7
v3_1 = v3_1 + v4
v4 = v7 - v16
v16 = v15.d f/ (v0_2.d f* var_80:4.d)
v1_1.d = v1_1.d f* v0_2.d
float v6 = v10.d f* v10.d
float v23 = v18 - v17
v7 = v17 + v18
v0_2.d = float.s(v12.d) f* var_80:4.d f* v0_2.d
v3_1 = v3_1 - v5
v1_1.d = v16 f* v1_1.d
v0_2.d = v16 f* v0_2.d
float v2_1 = v6 + v22.d f- v5
v5 = v5 f+ v22.d - v6
v3_1 = v3_1 - v6
v18 = v1_1.d f+ v1_1.d
v6 = v0_2.d f+ v0_2.d
v0_2.d = v2_1 f* v0_2.d
v1_1.d = v3_1 f* v1_1.d
v0_2.d = v0_2.d f+ v24 + v24 + v23 * v18
v2_1 = v5 + v20 * v18 + v19 * v6
v1_1.d = v4 + v4 f+ v1_1.d
*(*gpRenderAppData + 0x3b8) = data_24226b8
v1_1.d = v1_1.d f+ v7 * v6
v4 = data_2422738.d
v5 = data_2422738:4.d
v7 = data_2422738:8.d
v6 = data_2422738:0xc.d
v0_2.d = var_14 f+ v0_2.d
v22.d = v8.d f* v7
v1_1.d = v14.d f+ v1_1.d
float* entry_x8
*entry_x8 = v16
entry_x8[1] = v11.d f* v6 + v9.d f* v4 f+ v22.d - v10.d f* v5
entry_x8[2] = v10.d f* v4 + v8.d f* v6 + v9.d f* v5 - v11.d f* v7
entry_x8[3] = v11.d f* v5 + v10.d f* v6 + v9.d f* v7 - v8.d f* v4
entry_x8[4] = v9.d f* v6 - v11.d f* v4 - v8.d f* v5 - v10.d f* v7
entry_x8[5] = v1_1.d
entry_x8[6] = var_18 + v2_1
entry_x8[7] = v0_2.d
return result
