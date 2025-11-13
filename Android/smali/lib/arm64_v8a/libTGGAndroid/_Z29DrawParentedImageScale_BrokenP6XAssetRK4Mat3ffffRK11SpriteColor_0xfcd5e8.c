// 函数: _Z29DrawParentedImageScale_BrokenP6XAssetRK4Mat3ffffRK11SpriteColor
// 地址: 0xfcd5e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float*** x8 = *arg1
float v9 = arg6
float v11 = arg5
float v8 = arg4
float v10 = arg3

if (x8 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg1, false, true)
    x8 = *arg1

arg5 = 0f
float* x8_3 = **x8
arg4 = fconvert.s(0.5f)
arg6 = *x8_3
float v4 = x8_3[1]
float v6 = x8_3[2]
float v5 = x8_3[3]
int128_t var_80 = (data_71ae80).d.o
arg3 = *arg2
float v7 = *(arg2 + 4)
float v16 = *(arg2 + 8)
float v17 = *(arg2 + 0xc)
float v18 = *(arg2 + 0x10)
float v19 = *(arg2 + 0x14)
float v20 = *(arg2 + 0x18)
float v21 = *(arg2 + 0x1c)
v5 = v5 * v6
arg6 = v5 * float.s(arg6) * arg4
arg4 = v5 * float.s(v4) * arg4
v4 = v17 * v11 + v18 * arg5
v6 = v17 * arg5 + v18 * v9
float v23 = v20 * v11 + v21 * arg5
float v24 = v20 * arg5 + v21 * v9
float v25 = *(arg2 + 0x20)
float v26 = v16 * arg5
arg6 = arg6 + v10
arg4 = arg4 + v8
v5 = arg3 * v11 + v7 * arg5 + v26
float v22 = arg3 * arg5 + v7 * v9 + v26
v26 = v19 * arg5
arg5 = v25 * arg5
float var_50 = v23 + arg5
float var_4c = v24 + arg5
float var_68 = v5
float var_64 = v22
float var_60 = v16 + arg6 * arg3 + arg4 * v7
float var_5c = v4 + v26
float var_58 = v6 + v26
float var_54 = v19 + arg6 * v17 + arg4 * v18
float var_48 = v25 + arg6 * v20 + arg4 * v21
return DrawImageMatrixParams(arg1, &var_68, &var_80, arg7, nullptr)
