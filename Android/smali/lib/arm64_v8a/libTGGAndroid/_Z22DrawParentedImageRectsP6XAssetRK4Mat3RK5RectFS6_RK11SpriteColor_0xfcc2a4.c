// 函数: _Z22DrawParentedImageRectsP6XAssetRK4Mat3RK5RectFS6_RK11SpriteColor
// 地址: 0xfcc2a4
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

v3 = *arg4
int64_t* x8_3 = **x8
v0.q = *x8_3
float v1 = *(x8_3 + 0xc) f* x8_3[1].d
float128 v0_1
v0_1.d = vcvt_f32_u32(v0).d f* v1
v0_1:4.d = v0_1:4.d f* v1
v0_1:8.q = v0_1.q
float128 var_40 = vdivq_f32(v3, v0_1)
return DrawParentedRectsParams(arg1, arg2, arg3, &var_40, arg5, nullptr)
