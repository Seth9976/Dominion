// 函数: _Z19DrawImageRectsColorP6XAssetRK5RectFS3_RK11SpriteColor
// 地址: 0xfcc1ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg1
int128_t v0
float128 v3

if (x8 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    v0, v3 = AssetCatalogLoadAsset(arg1, false, true)
    x8 = *arg1

v3 = *arg3
int64_t* x8_3 = **x8
v0.q = *x8_3
float v1 = *(x8_3 + 0xc) f* x8_3[1].d
float128 v0_1
v0_1.d = vcvt_f32_u32(v0).d f* v1
v0_1:4.d = v0_1:4.d f* v1
void* x8_4 = *gpSpriteAppData
v0_1:8.q = v0_1.q
float128 var_60 = vdivq_f32(v3, v0_1)
XAsset* x0_4
RectF* x1_2
RectF* x2_1

if (*(x8_4 + 0x38) == 0)
    x2_1 = &var_60
    x0_4 = arg1
    x1_2 = arg2
else
    RectF var_50
    RectF var_40
    int64_t result = GetClippedUVs(arg2, &var_60, x8_4 + 0x28, &var_40, &var_50)
    
    if ((result.d & 1) == 0)
        return result
    
    x1_2 = &var_40
    x2_1 = &var_50
    x0_4 = arg1

return DrawImageParamsBase(x0_4, x1_2, x2_1, arg4, nullptr)
