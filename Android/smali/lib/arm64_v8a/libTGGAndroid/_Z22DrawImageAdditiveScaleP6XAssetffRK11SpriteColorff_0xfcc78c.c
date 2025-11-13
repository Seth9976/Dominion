// 函数: _Z22DrawImageAdditiveScaleP6XAssetffRK11SpriteColorff
// 地址: 0xfcc78c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_70 = arg5.q
int128_t v4
int128_t v6

if ((zx.d(data_2422638) & 1) == 0)
    int32_t x0_5
    x0_5, v4, v6 = __cxa_guard_acquire(&data_2422638)
    
    if (x0_5 != 0)
        data_2422630 = AssetPtrFromPath("sys\SpriteAdditive.material", 5)
        v4, v6 = __cxa_guard_release(&data_2422638)

int64_t* x8_2 = *arg1

if (x8_2 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    v4, v6 = AssetCatalogLoadAsset(arg1, false, true)
    x8_2 = *arg1

float v5 = arg3
int64_t* x8_4 = **x8_2
v4:4.d = arg6
arg3 = (*x8_4).d
arg6 = x8_4[1].d
arg5 = *(x8_4 + 0xc)
int128_t var_50 = (data_71ae80).d.o
int128_t v1 = vcvt_f32_u32(arg3)
arg5 = arg5 * arg6
void* x8_5 = *gpSpriteAppData
v1.d = v1.d f* arg5
v1:4.d = v1:4.d f* arg5
int128_t v0
v0:4.d = v5
double v0_1 = vadd_f32(vmul_f32(v1, v4, 0), v0)
int32_t var_60 = arg2.q.o.d
float var_5c = v5
double var_58 = v0_1
XAsset* x21 = data_2422630
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
