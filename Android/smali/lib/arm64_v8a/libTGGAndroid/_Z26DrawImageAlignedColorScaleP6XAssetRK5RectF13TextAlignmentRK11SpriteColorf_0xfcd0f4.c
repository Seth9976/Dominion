// 函数: _Z26DrawImageAlignedColorScaleP6XAssetRK5RectF13TextAlignmentRK11SpriteColorf
// 地址: 0xfcd0f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg1
float var_40 = arg5
int64_t v1
int128_t v3

if (x8 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    v1, v3 = AssetCatalogLoadAsset(arg1, false, true)
    x8 = *arg1
    arg5 = var_40

int64_t* x8_3 = **x8
v3.q = *x8_3
int32_t v2 = x8_3[1].d
v1.d = *(x8_3 + 0xc)
double v3_1 = vcvt_f32_u32(v3)
v1.d = v1.d f* v2
v1.d = v3_1.d f* v1.d
v1:4.d = v3_1:4.d f* v1.d
v1.d = v1.d f* arg5
v1:4.d = v1:4.d f* arg5
int64_t var_28 = v1
float v0
float v1_1
v0, v1_1 = RectAlignedWithinRect(arg2, &var_28, zx.q(arg3))
return DrawImageColorScale(arg1, arg4, v0, v1_1, var_40, var_40)
