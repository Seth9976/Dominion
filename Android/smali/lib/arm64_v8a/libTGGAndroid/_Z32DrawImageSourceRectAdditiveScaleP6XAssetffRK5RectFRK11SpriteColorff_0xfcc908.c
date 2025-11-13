// 函数: _Z32DrawImageSourceRectAdditiveScaleP6XAssetffRK5RectFRK11SpriteColorff
// 地址: 0xfcc908
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_70 = arg6.q
int64_t var_90 = arg2.q
int128_t v5
int128_t v7

if ((zx.d(data_2422648) & 1) == 0)
    int32_t x0_5
    x0_5, v5, v7 = __cxa_guard_acquire(&data_2422648)
    
    if (x0_5 != 0)
        data_2422640 = AssetPtrFromPath("sys\SpriteAdditive.material", 5)
        v5, v7 = __cxa_guard_release(&data_2422648)

int64_t* x8_2 = *arg1

if (x8_2 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    v5, v7 = AssetCatalogLoadAsset(arg1, false, true)
    x8_2 = *arg1

arg2 = (*arg4).d
int64_t* x9 = **x8_2
v5:4.d = arg7
void* x8_4 = *gpSpriteAppData
arg7 = *(x9 + 0xc) f* x9[1].d
float128 v2
v2.d = vcvt_f32_u32((*x9).d).d f* arg7
v2:4.d = v2:4.d f* arg7
int128_t v1
v1:4.d = arg3
int128_t v3 = vmul_f32(v2, v5, 0)
v2:8.q = v2.q
double v1_1 = vadd_f32(v3, v1)
float128 v0 = vdivq_f32(arg2, v2)
int32_t var_60 = var_90.o.d
float var_5c = arg3
double var_58 = v1_1
float128 var_50 = v0
XAsset* x21_1 = data_2422640
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

return DrawImageParamsBase(arg1, x1_2, x2_1, arg5, x21_1)
