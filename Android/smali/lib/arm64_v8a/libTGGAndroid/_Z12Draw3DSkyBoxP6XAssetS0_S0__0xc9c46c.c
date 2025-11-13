// 函数: _Z12Draw3DSkyBoxP6XAssetS0_S0_
// 地址: 0xc9c46c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_50 = v9
int64_t v8
int64_t var_48 = v8
XAsset* x20 = arg3
XAsset* x21 = arg2
int128_t v0
int128_t v17
int128_t v23

if (arg2 == 0)
    if ((zx.d(data_23e4fc8) & 1) == 0)
        int32_t x0_3
        x0_3, v0, v17, v23 = __cxa_guard_acquire(&data_23e4fc8)
        
        if (x0_3 != 0)
            data_23e4fc0 = AssetPtrFromPath("sys/skybox.material", 5)
            v0, v17, v23 = __cxa_guard_release(&data_23e4fc8)
    
    x21 = data_23e4fc0
    
    if (x20 == 0)
        goto label_c9c4c4
else if (x20 == 0)
label_c9c4c4:
    
    if ((zx.d(data_23e4fd8) & 1) == 0)
        int32_t x0_5
        x0_5, v0, v17, v23 = __cxa_guard_acquire(&data_23e4fd8)
        
        if (x0_5 != 0)
            data_23e4fd0 = AssetPtrFromPath("sys/skybox.structure", 2)
            v0, v17, v23 = __cxa_guard_release(&data_23e4fd8)
    
    x20 = data_23e4fd0

float var_90
int32_t v1
int32_t v2
float v3
float v4
float v5
float v6
float v7
float v16
float v18
float v19
float v20
float v21

if (zx.d(*(*gAppInterface + 0x3c)) != 0)
    v3 = *QI
    v4 = *(QI + 4)
    v5 = *(QI + 8)
    v6 = *(QI + 0xc)
    v1 = *(gDraw3DData + 0x64)
    v2 = *(gDraw3DData + 0x68)
    v0.d = *(gDraw3DData + 0x6c)
    v7 = v4 + v4
    v17.d = v3 + v3
    v9.d = fconvert.s(1f)
    v23 = data_71cfa0
    v6 = v6 + v6
    v18 = v4 * v7
    v19 = v4 f* v17.d
    v21 = v17.d f* v5
    v17.d = v3 f* v17.d
    v16 = v5 * (v5 + v5)
    v20 = v5 * v6
    v4 = v4 * v6
    v5 = v7 * v5
    v3 = v3 * v6
    v17.d = v9.d f- v17.d
    v8.d = fconvert.s(10f)
    v7 = v19 - v20
    v19 = v19 + v20
    v20 = v5 - v3
    v3 = v5 + v3
    v5 = v9.d f- v18 - v16
    v16 = v17.d f- v16
    v17.d = v17.d f- v18
    v17.d = v17.d f* v8.d
    *(gDraw3DData + 0x584) = 1
    float var_88_1 = (v21 + v4) f* v8.d
    int32_t var_84_1 = v1
    float var_78_1 = v20 f* v8.d
    int32_t var_74_1 = v2
    float var_70_1 = (v21 - v4) f* v8.d
    float var_6c_1 = v3 f* v8.d
    var_90 = v5 f* v8.d
    float var_8c_1 = v7 f* v8.d
    float var_80_1 = v19 f* v8.d
    float var_7c_1 = v16 f* v8.d
    int32_t var_68_1 = v17.d
    int32_t var_64_1 = v0.d
    int128_t var_a0_1 = v23
    int128_t var_60_1 = v23
    v0, v17, v23 = Draw3DStructureMatrix(x20, &var_90, x21, arg1, nullptr)
    
    if (zx.d(*(*gAppInterface + 0x3c)) != 0)
        v3 = *QI
        v4 = *(QI + 4)
        v5 = *(QI + 8)
        v6 = *(QI + 0xc)
        v0.d = *(gDraw3DData + 0x80)
        v1 = *(gDraw3DData + 0x84)
        v2 = *(gDraw3DData + 0x88)
        v7 = v4 + v4
        v17.d = v3 + v3
        v6 = v6 + v6
        v18 = v4 * v7
        v19 = v4 f* v17.d
        v20 = v5 * v6
        v21 = v17.d f* v5
        v4 = v4 * v6
        v16 = v5 * (v5 + v5)
        v17.d = v3 f* v17.d
        v5 = v7 * v5
        v3 = v3 * v6
        v7 = v19 - v20
        v19 = v19 + v20
        v20 = v5 - v3
        v3 = v5 + v3
        v5 = v9.d f- v18 - v16
        float var_88_2 = (v21 + v4) f* v8.d
        int32_t var_84_2 = v0.d
        v17.d = v9.d f- v17.d
        v16 = v17.d f- v16
        v17.d = v17.d f- v18
        v17.d = v17.d f* v8.d
        *(gDraw3DData + 0x584) = 2
        float var_78_2 = v20 f* v8.d
        int32_t var_74_2 = v1
        float var_70_2 = (v21 - v4) f* v8.d
        float var_6c_2 = v3 f* v8.d
        var_90 = v5 f* v8.d
        float var_8c_2 = v7 f* v8.d
        float var_80_2 = v19 f* v8.d
        float var_7c_2 = v16 f* v8.d
        int32_t var_68_2 = v17.d
        int32_t var_64_2 = v2
        int128_t var_60_2 = var_a0_1
        v0, v17, v23 = Draw3DStructureMatrix(x20, &var_90, x21, arg1, nullptr)

v3 = *QI
v4 = *(QI + 4)
v5 = *(QI + 8)
v6 = *(QI + 0xc)
v1 = *(gDraw3DData + 0x9c)
v2 = *(gDraw3DData + 0xa0)
v0.d = *(gDraw3DData + 0xa4)
v18 = v4 + v4
v20 = v3 + v3
v7 = fconvert.s(1f)
v17 = data_71cfa0
v6 = v6 + v6
v21 = v4 * v18
float v22 = v4 * v20
float v24 = v20 * v5
v20 = v3 * v20
v19 = v5 * (v5 + v5)
v23.d = v5 * v6
v4 = v4 * v6
v5 = v18 * v5
v3 = v3 * v6
v6 = v7 - v21
v7 = v7 - v20
v16 = fconvert.s(10f)
*(gDraw3DData + 0x584) = 4
float var_88_3 = (v24 + v4) * v16
int32_t var_84_3 = v1
float var_78_3 = (v5 - v3) * v16
int32_t var_74_3 = v2
float var_70_3 = (v24 - v4) * v16
float var_6c_3 = (v5 + v3) * v16
var_90 = (v6 - v19) * v16
float var_8c_3 = (v22 f- v23.d) * v16
float var_80_3 = (v22 f+ v23.d) * v16
float var_7c_3 = (v7 - v19) * v16
float var_68_3 = (v7 - v21) * v16
int32_t var_64_3 = v0.d
int128_t var_60_3 = v17
int64_t result = Draw3DStructureMatrix(x20, &var_90, x21, arg1, nullptr)
*(gDraw3DData + 0x584) = 7
return result
