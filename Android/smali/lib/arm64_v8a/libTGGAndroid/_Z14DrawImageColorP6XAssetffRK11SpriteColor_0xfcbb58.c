// 函数: _Z14DrawImageColorP6XAssetffRK11SpriteColor
// 地址: 0xfcbb58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg1
int128_t v3
int128_t v5

if (x8 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    v3, v5 = AssetCatalogLoadAsset(arg1, false, true)
    x8 = *arg1

int64_t* x8_3 = **x8
int32_t v2 = x8_3[1].d
int32_t v4 = *(x8_3 + 0xc)
v3.q = *x8_3
int128_t var_50 = data_71ae80
v5.d = v4 f* v2
int128_t v2_1 = vcvt_f32_u32(v3)
void* x8_4 = *gpSpriteAppData
int128_t v4_1
v4_1:4.d = arg3
v2_1.d = v2_1.d f* v5.d
v2_1:4.d = v2_1:4.d f* v5.d
double v2_2 = vadd_f32(v2_1, v4_1)
float var_60 = arg2
float var_5c = arg3
double var_58 = v2_2
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
