// 函数: _Z21DrawImageMatrixParamsP6XAssetRK4Mat3RK5RectFRK11SpriteColorS0_
// 地址: 0xfc96b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg1

if (x8 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg1, false, true)
    x8 = *arg1

float v0 = *(arg3 + 8)
float v1 = *(arg3 + 0xc)
float v2 = *arg3
float v3 = *(arg3 + 4)
int32_t* x8_3 = **x8
float v5 = *arg2
float v6 = *(arg2 + 4)
float v7 = *(arg2 + 8)
float v16 = *(arg2 + 0xc)
uint64_t x9 = *gpSpriteAppData
float v22 = *x8_3
float v23 = x8_3[1]
float v25 = x8_3[2]
float v24 = x8_3[3]
float v17 = *(arg2 + 0x10)
float v18 = *(arg2 + 0x14)
float v19 = v0 - v2
float v20 = *(x9 + 0x20)
float v21 = *(x9 + 0x24)
float var_70 = v2
float var_6c = v3
float var_60 = v2
float var_5c = v1
v2 = float.s(v22)
v22 = float.s(v23)
v23 = v24 * v25
float var_68 = v0
float var_64 = v3
float v4 = fconvert.s(0.5f)
v2 = v23 * v2 * v19 * v4
v3 = v23 * v22 * (v1 - v3) * v4
v4 = v20 - v2
v19 = v21 - v3
v2 = v2 + v20
v3 = v3 + v21
v20 = v5 * v4
v21 = v6 * v19
v4 = v4 * v16
v19 = v19 * v17
v5 = v5 * v2
v2 = v16 * v2
v6 = v6 * v3
v3 = v17 * v3
float var_50 = v7 + v20 + v21
float var_4c = v18 + v4 + v19
float var_48 = v7 + v5 + v21
float var_44 = v18 + v2 + v19
float var_40 = v7 + v20 + v6
float var_3c = v18 + v4 + v3
float var_38 = v7 + v5 + v6
float var_34 = v18 + v2 + v3
float var_58 = v0
float var_54 = v1
return SpriteDrawVertsInt<DefVertPosXY>(&var_50, &var_70, arg4, false, arg1, arg5)
