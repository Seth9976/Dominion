// 函数: _Z17TTFontDrawTextureP6XAssetRK5RectF
// 地址: 0x1004358
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg1

if (x8 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg1, false, true)
    x8 = *arg1

int64_t* x19_2 = *(*x8 + 0x20)

if (x19_2 == 0)
    return 

void*** x8_3 = *x19_2

if (x8_3 == 0)
    if (x19_2[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x19_2, false, true)
    x8_3 = *x19_2

void** x20_1 = *x8_3
int64_t x0_6
int64_t x1_2
int128_t v0_1
x0_6, x1_2, v0_1 = RectISet(0, 0, 0x400, 0x400)
int64_t var_30 = x0_6
int64_t var_28_1 = x1_2
void* x8_5 = *x20_1
int64_t* x20_2 = *(x8_5 + 0x28)

if (x20_2 != 0)
    int64_t x0_8
    int64_t x1_4
    x0_8, x1_4, v0_1 = RectIOffset(&var_30, x8_5 + 0x34)
    x19_2 = x20_2
    var_30 = x0_8
    int64_t var_28_2 = x1_4

v0_1 = data_71c770
uint32_t x9_1 = *gRgbaIBlack
uint32_t x10_1 = *gRgbaINone
int128_t var_40 = v0_1
uint32_t var_50 = x9_1
uint32_t var_4c_1 = x10_1
uint128_t v0_2
float128 v1_1
int128_t v2_1
v0_2, v1_1, v2_1 = DrawImageParams(data_2423778, &var_40, RECT1, &var_50, nullptr)
v1_1.d = 0x39800000
v1_1:4.d = 0x39800000
v1_1:8.d = 0x39800000
v1_1:0xc.d = 0x39800000
var_50.o = vmulq_f32(vcvtq_f32_s32(var_30.o), v1_1, 0)
var_40 = v0_1
DrawImageParams(x19_2, &var_40, &var_50, gSpriteWhite, nullptr)
