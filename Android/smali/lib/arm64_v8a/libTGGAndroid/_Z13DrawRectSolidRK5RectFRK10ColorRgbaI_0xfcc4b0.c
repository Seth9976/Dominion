// 函数: _Z13DrawRectSolidRK5RectFRK10ColorRgbaI
// 地址: 0xfcc4b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0

if ((zx.d(data_2422618) & 1) == 0)
    int32_t x0_2
    x0_2, v0 = __cxa_guard_acquire(&data_2422618)
    
    if (x0_2 != 0)
        data_2422610 = AssetPtrFromPath("sys\white_pixel.texture", 3)
        __cxa_guard_release(&data_2422618)

int32_t x9 = *arg2
v0.d = 0x3f000000
v0:4.d = 0x3f000000
v0:8.d = 0x3f000000
v0:0xc.d = 0x3f000000
int128_t var_50 = v0
int32_t var_18 = x9
int32_t var_14 = 0
void* x8_1 = *gpSpriteAppData
XAsset* x20_1 = data_2422610
XAsset* x0_1
RectF* x1_1
RectF* x2_1
SpriteColor* x3_1

if (*(x8_1 + 0x38) == 0)
    x2_1 = &var_50
    x3_1 = &var_18
    x0_1 = x20_1
    x1_1 = arg1
else
    RectF var_40
    RectF var_30
    int64_t result = GetClippedUVs(arg1, &var_50, x8_1 + 0x28, &var_30, &var_40)
    
    if ((result.d & 1) == 0)
        return result
    
    x1_1 = &var_30
    x2_1 = &var_40
    x3_1 = &var_18
    x0_1 = x20_1

return DrawImageParamsBase(x0_1, x1_1, x2_1, x3_1, nullptr)
