// 函数: _Z24DrawParentedImageAlignedP6XAssetRK4Mat3RK5RectF13TextAlignment
// 地址: 0xfcdc40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg1

if (x8 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg1, false, true)
    x8 = *arg1

int64_t* x8_3 = **x8
int128_t v0
v0.q = *x8_3
float v1 = *(x8_3 + 0xc) f* x8_3[1].d
double v0_1
v0_1.d = vcvt_f32_u32(v0).d f* v1
v0_1:4.d = v0_1:4.d f* v1
double var_28 = v0_1
float v0_2
float v1_1
v0_2, v1_1 = RectAlignedWithinRect(arg3, &var_28, zx.q(arg4))
return DrawParentedImage(arg1, arg2, gSpriteWhite, v0_2, v1_1)
