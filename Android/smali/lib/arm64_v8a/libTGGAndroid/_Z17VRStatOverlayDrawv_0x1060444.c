// 函数: _Z17VRStatOverlayDrawv
// 地址: 0x1060444
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v11
int64_t var_30 = v11
int64_t v10
int64_t var_28 = v10
int64_t v9
int64_t var_20 = v9
int64_t v8
int64_t var_18 = v8

if ((GameIsDebugDrawFlagSet(0x40) & 1) == 0 && (GameIsDebugDrawFlagSet(0x80) & 1) == 0)
    int64_t result = GameIsDebugDrawFlagSet(0x20)
    
    if ((result.d & 1) == 0)
        return result

v9.d = *QI
v8.d = *(QI + 4)
v10.d = *(QI + 8)
v11.d = *(QI + 0xc)
Draw3DGetEyePose(3)
float var_50
float v16_1 = var_50 * var_50
float var_44
float v7_1 = var_44 * var_44
float var_4c
float v17_1 = var_50 * var_4c
float var_48
float v18_1 = var_48 * var_44
float v19_1 = var_4c * var_44
float v20_1 = var_50 * var_48
float v21_1 = var_4c * var_48
float v22_1 = var_50 * var_44
float v26_1 = v17_1 - v18_1
v17_1 = v17_1 + v18_1
v18_1 = v16_1 + v7_1
v7_1 = v7_1 - v16_1
v16_1 = v20_1 + v19_1
v19_1 = v20_1 - v19_1
float v27_1 = fconvert.s(4f)
float v25_1 = fconvert.s(16f)
v16_1 = v16_1 * v27_1
v17_1 = v17_1 * v27_1
v20_1 = (v21_1 - v22_1) * v27_1
v19_1 = v19_1 * v27_1
v27_1 = var_4c * var_4c
float v4_1 = var_48 * var_48
float v6_1 = v18_1 - v27_1 - v4_1
v18_1 = v27_1 + v7_1 - v4_1
v4_1 = v4_1 + v7_1 - v27_1
float var_64_1 = v8.d f* var_50 + v11.d f* var_48 + v10.d f* var_44 - v9.d f* var_4c
float var_60_1 = v11.d f* var_44 - v9.d f* var_50 - v8.d f* var_4c - v10.d f* var_48
float var_6c_1 = v10.d f* var_4c + v11.d f* var_50 + v9.d f* var_44 - v8.d f* var_48
float var_68_1 = v9.d f* var_48 + v11.d f* var_4c + v8.d f* var_44 - v10.d f* var_50
float var_3c
float var_58_1 = var_3c + v20_1 + v18_1 * fconvert.s(8f) - v17_1
float var_38
float var_54_1 = var_38 + (v21_1 + v22_1) * v25_1 - v19_1 + v4_1 + v4_1
float var_40
float var_5c_1 = var_40 + v16_1 + v26_1 * v25_1 - (v6_1 + v6_1)
int32_t var_70 = 0x3ccccccd
UIProjectInto3DTransform(&var_70)

if ((zx.d(data_24b8b70) & 1) == 0 && __cxa_guard_acquire(&data_24b8b70) != 0)
    data_24b8b68 = AssetPtrFromPath("sys/sprite_3d_no_zread.material", 5)
    __cxa_guard_release(&data_24b8b70)

SpriteSetDefault3dMaterial(data_24b8b68)
Draw3DSetDrawEyeMask(3)
RendererDrawStatOverlay()
Draw3DSetDrawEyeMask(7)
SpriteSetDefault3dMaterial(nullptr)
return UIProjectiveMatrixRestore()
