// 函数: _Z17UIElementDrawTextP6XAssetiRK11UITransformPKcfb
// 地址: 0x1051ef4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DlgShowTransform(arg1, arg2, arg3, arg5)
int64_t* x8 = *arg1

if (x8 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg1, false, true)
    x8 = *arg1

float v2 = fconvert.s(0.5f)
float v3 = fconvert.s(-0.5f)
UIElement* x0_3 = **x8 + muls.dp.d(arg2, 0x178)
float v1
v1.b = *(x0_3 + 0xf3)
float var_88
v1 = var_88 * float.s(v1)
float v4

v4 = v1 < 0f ? v3 : v2

int32_t var_24 = (0xffffff & ((0xff00ffff & zx.d(*(x0_3 + 0xf0))) | zx.d(*(x0_3 + 0xf2)) << 0x10))
    | zx.d(vcvts_s32_f32(v1 + v4)) << 0x18
v1.b = *(x0_3 + 0xf7)
float v0 = var_88 * float.s(v1)

v1 = v0 < 0f ? v3 : v2

v0 = v0 + v1
int32_t var_28 = (0xffffff & ((0xff00ffff & zx.d(*(x0_3 + 0xf4))) | zx.d(*(x0_3 + 0xf6)) << 0x10))
    | zx.d(vcvts_s32_f32(v0)) << 0x18
UITransform var_90
return UIElementDrawText(x0_3, &var_90, arg4, &var_24, &var_28, arg6 & 1, v0)
