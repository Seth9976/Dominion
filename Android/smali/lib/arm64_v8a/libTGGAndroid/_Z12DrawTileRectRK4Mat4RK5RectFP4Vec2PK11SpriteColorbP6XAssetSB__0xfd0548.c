// 函数: _Z12DrawTileRectRK4Mat4RK5RectFP4Vec2PK11SpriteColorbP6XAssetSB_
// 地址: 0xfd0548
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v4 = *arg2
float v6 = *(arg2 + 4)
float v5 = *(arg2 + 8)
float v3 = *(arg2 + 0xc)
float v7 = *arg1
float v16 = *(arg1 + 4)
float v0 = *(arg1 + 0xc)
float v17 = *(arg1 + 0x10)
float v18 = *(arg1 + 0x14)
float v1 = *(arg1 + 0x1c)
float v19 = *(arg1 + 0x20)
float v20 = *(arg1 + 0x24)
float v2 = *(arg1 + 0x2c)
float v21 = v7 * v4
float v22 = v16 * v6
float v23 = v4 * v17
int64_t x11 = *VZ
int32_t x10 = *(VZ + 8)
float v24 = v6 * v18
v4 = v4 * v19
v6 = v6 * v20
v7 = v7 * v5
v17 = v5 * v17
v5 = v5 * v19
v16 = v16 * v3
v18 = v3 * v18
v3 = v3 * v20
float var_40 = v0 + v21 + v22
float var_3c = v1 + v23 + v24
float var_34 = v0 + v7 + v22
int64_t var_50 = x11
int32_t var_48 = x10
XAsset* var_70 = arg7
float var_30 = v1 + v17 + v24
float var_2c = v2 + v5 + v6
float var_28 = v0 + v21 + v16
float var_24 = v1 + v23 + v18
float var_20 = v2 + v4 + v3
float var_1c = v0 + v7 + v16
float var_18 = v1 + v17 + v18
float var_14 = v2 + v5 + v3
int64_t var_68 = 0
int64_t var_60 = var_40.q
float var_58 = v2 + v4 + v6
return Draw3DQuadFull(&var_40, arg3, arg4, zx.q(arg5.d) & 1, &var_60, &var_50, arg6, nullptr)
