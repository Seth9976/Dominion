// 函数: _Z19DrawImageSourceRectP6XAssetffRK5RectF
// 地址: 0xfcbd60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg1

if (x8 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg1, false, true)
    x8 = *arg1

uint128_t v6 = *arg4
int128_t v3
v3:4.d = arg3
int64_t* x8_3 = **x8
double v5 = vadd_f32(vsub_f32(vextq_s8(v6, v6, 8), v6), v3)
int128_t v2_1
v2_1.q = *x8_3
int32_t v4 = x8_3[1].d
v3.d = *(x8_3 + 0xc)
float var_60 = arg2
float var_5c = arg3
v3.d = v3.d f* v4
float128 v2_2
v2_2.d = vcvt_f32_u32(v2_1).d f* v3.d
v2_2:4.d = v2_2:4.d f* v3.d
void* x8_4 = *gpSpriteAppData
v2_2:8.q = v2_2.q
float128 var_50 = vdivq_f32(v6, v2_2)
double var_58 = v5
RectF* x1_2
RectF* x2_1
SpriteColor* x3_1

if (*(x8_4 + 0x38) == 0)
    x3_1 = gSpriteWhite
    x1_2 = &var_60
    x2_1 = &var_50
else
    RectF var_40
    RectF var_30
    int64_t result = GetClippedUVs(&var_60, &var_50, x8_4 + 0x28, &var_30, &var_40)
    
    if ((result.d & 1) == 0)
        return result
    
    x3_1 = gSpriteWhite
    x1_2 = &var_30
    x2_1 = &var_40

return DrawImageParamsBase(arg1, x1_2, x2_1, x3_1, nullptr)
