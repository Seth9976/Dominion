// 函数: _Z17DrawImageAdditiveP6XAssetffRK11SpriteColor
// 地址: 0xfcc624
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(data_2422628) & 1) == 0)
    int32_t x0_5
    int128_t v5
    x0_5, v5 = __cxa_guard_acquire(&data_2422628)
    
    if (x0_5 != 0)
        data_2422620 = AssetPtrFromPath("sys\SpriteAdditive.material", 5)
        __cxa_guard_release(&data_2422628)

int64_t* x8_2 = *arg1

if (x8_2 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg1, false, true)
    x8_2 = *arg1

float v4 = arg3
int64_t* x8_4 = **x8_2
arg3 = (*x8_4).d
float v3 = x8_4[1].d
float v2 = *(x8_4 + 0xc)
int128_t var_50 = (data_71ae80).d.o
int128_t v1 = vcvt_f32_u32(arg3)
v2 = v2 * v3
void* x8_5 = *gpSpriteAppData
int128_t v0
v0:4.d = v4
v1.d = v1.d f* v2
v1:4.d = v1:4.d f* v2
double v0_1 = vadd_f32(v1, v0)
int32_t var_60 = arg2.q.o.d
float var_5c = v4
double var_58 = v0_1
XAsset* x21 = data_2422620
RectF* x1_2
RectF* x2_1

if (*(x8_5 + 0x38) == 0)
    x1_2 = &var_60
    x2_1 = &var_50
else
    RectF var_40
    RectF var_30
    int64_t result = GetClippedUVs(&var_60, &var_50, x8_5 + 0x28, &var_30, &var_40)
    
    if ((result.d & 1) == 0)
        return result
    
    x1_2 = &var_30
    x2_1 = &var_40

return DrawImageParamsBase(arg1, x1_2, x2_1, arg4, x21)
