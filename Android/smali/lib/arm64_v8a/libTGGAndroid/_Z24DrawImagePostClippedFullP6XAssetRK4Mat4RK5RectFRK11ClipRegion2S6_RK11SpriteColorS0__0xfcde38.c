// 函数: _Z24DrawImagePostClippedFullP6XAssetRK4Mat4RK5RectFRK11ClipRegion2S6_RK11SpriteColorS0_
// 地址: 0xfcde38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* x21 = arg7
Mat4Multiply(*gpRenderAppData + 0x124, arg2)
float v1 = *arg3
float v2 = *(arg3 + 4)
float v5 = 0f
float var_b0
float v23 = v1 * var_b0
float var_ac
float v24 = v2 * var_ac
float var_a0
float v25 = v1 * var_a0
float var_9c
float v26 = v2 * var_9c
float var_a8
float v6 = var_a8 * v5
float var_98
float v17 = var_98 * v5
float var_88
v5 = var_88 * v5
float var_a4
float var_70 = var_a4 + v23 + v24 + v6
float var_94
float var_6c = var_94 + v25 + v26 + v17
float v21 = *(arg3 + 8)
float var_90
v1 = v1 * var_90
float var_8c
v2 = v2 * var_8c
float v3 = var_b0 * v21
float v7 = var_a0 * v21
float v19 = var_90 * v21
float var_84
float var_68 = var_84 + v1 + v2 + v5
float var_64 = var_a4 + v6 + v24 + v3
float var_60 = var_94 + v17 + v26 + v7
float var_5c = var_84 + v5 + v2 + v19
v2 = *(arg3 + 0xc)
float v4 = var_ac * v2
float v16 = var_9c * v2
v2 = var_8c * v2
float var_58 = var_a4 + v6 + v23 + v4
float var_54 = var_94 + v17 + v25 + v16
float var_50 = var_84 + v5 + v1 + v2
float var_4c = var_a4 + v6 + v3 + v4
float var_48 = var_94 + v17 + v7 + v16
float var_44 = var_84 + v5 + v19 + v2
float v0 = *arg5
v1 = *(arg5 + 4)
float var_d0 = v0
float var_cc = v1
v2 = *(arg5 + 8)
float var_c4 = v1
float var_c0 = v0
float var_c8 = v2
v0 = *(arg5 + 0xc)
float var_bc = v0
float var_b8 = v2
float var_b4 = v0

if (x21 == 0)
    x21 = *(*gpRenderAppData + 0x3b8)
    
    if (x21 == 0)
        if ((zx.d(data_2422658) & 1) == 0 && __cxa_guard_acquire(&data_2422658) != 0)
            data_2422650 = AssetPtrFromPath("sys/sprite_3d.material", 5)
            __cxa_guard_release(&data_2422658)
        
        x21 = data_2422650

return Draw3DQuadParams(&var_70, &var_d0, arg6, arg1, x21)
