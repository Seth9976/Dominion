// 函数: _Z24DrawImageSourceRectScaleP6XAssetffRK5RectFff
// 地址: 0xfcbe74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg1

if (x8 == 0)
    float var_80_1 = arg5
    
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg1, false, true)
    x8 = *arg1

uint128_t v6 = *arg4
int64_t* x9_1 = **x8
int128_t v3
v3:4.d = arg3
double v5 = vadd_f32(vmul_f32(vsub_f32(vextq_s8(v6, v6, 8), v6), arg6, 0), v3)
int128_t v2
v2.q = *x9_1
int128_t v4_1
v4_1.d = x9_1[1].d
v3.d = *(x9_1 + 0xc)
void* x8_2 = *gpSpriteAppData
float var_60 = arg2
float var_5c = arg3
v3.d = v3.d f* v4_1.d
float128 v2_1
v2_1.d = vcvt_f32_u32(v2).d f* v3.d
v2_1:4.d = v2_1:4.d f* v3.d
v2_1:8.q = v2_1.q
float128 var_50 = vdivq_f32(v6, v2_1)
double var_58 = v5
RectF* x1_2
RectF* x2_1
SpriteColor* x3_1

if (*(x8_2 + 0x38) == 0)
    x3_1 = gSpriteWhite
    x1_2 = &var_60
    x2_1 = &var_50
else
    RectF var_40
    RectF var_30
    int64_t result = GetClippedUVs(&var_60, &var_50, x8_2 + 0x28, &var_30, &var_40)
    
    if ((result.d & 1) == 0)
        return result
    
    x3_1 = gSpriteWhite
    x1_2 = &var_30
    x2_1 = &var_40

return DrawImageParamsBase(arg1, x1_2, x2_1, x3_1, nullptr)
