// 函数: _Z20UIProjectScreenEnterv
// 地址: 0xfcf118
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

UIProjectScreenTransform()
float var_1c
float v6 = var_1c
float var_28
float v18 = var_28 + var_28
float var_2c
float v20 = var_2c + var_2c
void* x10 = *gpRenderAppData
float var_20
float v5 = var_20 + var_20
float v1 = fconvert.s(1f)
int128_t v17 = data_71cfa0
float v21 = var_28 * v18
float v22 = var_28 * v20
float var_24
float v23 = var_24 * v5
float v24 = var_24 * v20
float v2 = var_28 * v5
float v19 = var_24 * (var_24 + var_24)
float v3 = v18 * var_24
float v4 = var_2c * v5
float var_14
*(x10 + 0xa0) = var_14
*(x10 + 0x130) = v6
float var_18
*(x10 + 0x140) = var_18
*(x10 + 0x150) = var_14
v5 = v1 - v21
v1 = v1 - var_2c * v20
float var_30
*(x10 + 0x128) = var_30 * (v22 - v23)
*(x10 + 0x12c) = var_30 * (v24 + v2)
*(x10 + 0x134) = var_30 * (v22 + v23)
*(x10 + 0x13c) = var_30 * (v3 - v4)
*(x10 + 0x144) = var_30 * (v24 - v2)
*(x10 + 0x148) = var_30 * (v3 + v4)
*(x10 + 0x124) = var_30 * (v5 - v19)
*(x10 + 0x138) = var_30 * (v1 - v19)
*(x10 + 0x14c) = var_30 * (v1 - v21)
*(x10 + 0x154) = v17
*(x10 + 0x164) = 1
int64_t result = Draw3DQuadGroupStart(&var_1c)

if ((zx.d(data_24226d0) & 1) == 0)
    result = __cxa_guard_acquire(&data_24226d0)
    
    if (result.d != 0)
        data_24226c8 = AssetPtrFromPath("sys/sprite_3d_no_zread.material", 5)
        result = __cxa_guard_release(&data_24226d0)

if ((zx.d(data_24226e0) & 1) == 0)
    result = __cxa_guard_acquire(&data_24226e0)
    
    if (result.d != 0)
        data_24226d8 = AssetPtrFromPath("sys/SpineTint.material", 5)
        result = __cxa_guard_release(&data_24226e0)

*(*gpRenderAppData + 0x3b8) = data_24226d8
return result
