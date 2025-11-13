// 函数: _Z19DrawImageColorScaleP6XAssetffRK11SpriteColorff
// 地址: 0xfcbc54
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg1
int128_t v5

if (x8 == 0)
    float var_70_1 = arg5
    
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    int128_t v6
    v5, v6 = AssetCatalogLoadAsset(arg1, false, true)
    x8 = *arg1

arg5 = arg6
int64_t* x8_3 = **x8
v5.q = *x8_3
arg6 = x8_3[1].d
float v4 = *(x8_3 + 0xc)
int128_t var_50 = data_71ae80
double v5_1 = vcvt_f32_u32(v5)
void* x8_4 = *gpSpriteAppData
int128_t v6_1
v6_1:4.d = arg3
double v2_1 = vadd_f32(vmul_f32(v5_1:4.d f* v5_1.d f* v4 * arg6, arg5, 0), v6_1)
float var_60 = arg2
float var_5c = arg3
double var_58 = v2_1
RectF* x1_2
RectF* x2_1

if (*(x8_4 + 0x38) == 0)
    x1_2 = &var_60
    x2_1 = &var_50
else
    RectF var_40
    RectF var_30
    int64_t result = GetClippedUVs(&var_60, &var_50, x8_4 + 0x28, &var_30, &var_40)
    
    if ((result.d & 1) == 0)
        return result
    
    x1_2 = &var_30
    x2_1 = &var_40

return DrawImageParamsBase(arg1, x1_2, x2_1, arg4, nullptr)
