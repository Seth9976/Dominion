// 函数: _Z9MakeImageR8TTFontRTi6TTFKeyP8TTFGlyphR9TTFontDefS0_i
// 地址: 0x1003f70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_50 = arg3
TTFGlyph* var_48 = arg4
int64_t x0_1
int64_t x1
x0_1, x1 = RegionAllocator::AllocRegion(arg1.d + 0xa0, arg2)
int64_t var_60 = x0_1
int64_t var_58 = x1
int64_t var_78 = RectTopLeft(&var_60)
int64_t x0_5 = RectTopLeft(&var_60)
int64_t x0_7 = RectISize(arg5 + 0x20)
int64_t var_90 = (((x0_7 & 0xffffffff00000000) + x0_5) & 0xffffffff00000000) | zx.q(x0_7.d + x0_5.d)
int64_t x0_9
int64_t x1_2
uint128_t v0
int128_t v1
x0_9, x1_2, v0, v1 = RectISet(&var_78, &var_90)
int64_t* x25 = *(arg6 + 0x20)
int64_t* x8_4 = *x25

if (x8_4 == 0)
    if (x25[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    v0, v1 = AssetCatalogLoadAsset(x25, false, true)
    x8_4 = *x25

v0.d = float.s(x0_9.d)
v0:4.d = (x0_9 u>> 0x20).d
v0:8.d = x1_2.d
v0:0xc.d = (x1_2 u>> 0x20).d
v1.q = ***x8_4
float128 v0_1 = vcvtq_f32_s32(v0)
float128 v1_1
v1_1:8.q = vcvt_f32_s32(v1).q
*(arg5 + 0x10) = vdivq_f32(v0_1, v1_1)

if (data_2423790 == 0)
    data_2423790 = malloc(0x28800)
    data_2423798 = malloc(0x28800)

int32_t var_64 = 0xa
int32_t x0_16 = RectIWidth(&var_60)
int32_t var_70 = x0_16
int32_t x0_18 = RectIHeight(&var_60)
int32_t var_6c = x0_18
int32_t x0_20
int128_t v0_3
x0_20, v0_3 = TextureFormatPitch(x0_16, 0xa)
int64_t x1_4 = data_2423790
int32_t var_68 = x0_20
var_78 = x1_4
v0_3.d = *(arg5 + 0xc)
int32_t entry_x7
stbtt_MakeCodepointBitmap(arg7, x1_4, zx.q(x0_16), zx.q(x0_18), zx.q(x0_20), zx.q(entry_x7), v0_3, 
    v0_3)
int32_t var_7c = 1
int32_t x0_23 = RectIWidth(&var_60)
int32_t var_88 = x0_23
int32_t var_84 = RectIHeight(&var_60)
int32_t var_80 = TextureFormatPitch(x0_23, 1)
var_90 = data_2423798
ImageBufferCopyToNewFormat(&var_78, &var_90)
GraphicsUpdateTextureRegion(*(arg6 + 0x20), &var_60, &var_90)
return arg5
