// 函数: _Z14DrawImageScaleP6XAssetffff
// 地址: 0xfcba4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg1
int128_t v4

if (x8 == 0)
    float var_70_1 = arg4
    
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    int128_t v6
    v4, v6 = AssetCatalogLoadAsset(arg1, false, true)
    x8 = *arg1

arg4 = arg5
int64_t* x8_3 = **x8
v4.q = *x8_3
arg5 = x8_3[1].d
float v5 = *(x8_3 + 0xc)
int128_t var_40 = data_71ae80
double v4_1 = vcvt_f32_u32(v4)
void* x8_4 = *gpSpriteAppData
int128_t v6_1
v6_1:4.d = arg3
double v2_1 = vadd_f32(vmul_f32(v4_1:4.d f* v4_1.d f* v5 * arg5, arg4, 0), v6_1)
float var_50 = arg2
float var_4c = arg3
double var_48 = v2_1
RectF* x1_3
RectF* x2_1
SpriteColor* x3_1

if (*(x8_4 + 0x38) == 0)
    x3_1 = gSpriteWhite
    x1_3 = &var_50
    x2_1 = &var_40
else
    RectF var_30
    RectF var_20
    int64_t result = GetClippedUVs(&var_50, &var_40, x8_4 + 0x28, &var_20, &var_30)
    
    if ((result.d & 1) == 0)
        return result
    
    x3_1 = gSpriteWhite
    x1_3 = &var_20
    x2_1 = &var_30

return DrawImageParamsBase(arg1, x1_3, x2_1, x3_1, nullptr)
