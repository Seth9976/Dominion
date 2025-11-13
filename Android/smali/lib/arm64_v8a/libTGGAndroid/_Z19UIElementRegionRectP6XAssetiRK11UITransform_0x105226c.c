// 函数: _Z19UIElementRegionRectP6XAssetiRK11UITransform
// 地址: 0x105226c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg1
int128_t v1

if (x8 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    int128_t v0
    v0, v1 = AssetCatalogLoadAsset(arg1, false, true)
    x8 = *arg1

void* x20_1 = **x8 + muls.dp.d(arg2, 0x178)
v1 = *(x20_1 + 0x30)
int128_t var_40 = *(x20_1 + 0x20)
int128_t var_30 = v1
int64_t result
int128_t v0_1
int128_t v1_1
int128_t v2
int128_t v3
float128 v4
int128_t v5
result, v0_1, v1_1, v2, v3, v4, v5 =
    UIRectAligned(x20_1 + 0x10, &var_40, arg3 + 0x4c, arg3 + 0x2c, arg3 + 0x3c)
v4.d = *(arg3 + 0xc)
v5.d = 0f
v0_1:4.d = v1_1.d
v4.d = vmax_f32(v4.d, v5.d)
v1_1.q = *(arg3 + 0x10)
v5.q = *(arg3 + 0x18)
v2:4.d = v3.d
v3.d = fconvert.s(1f)
v3:4.d = fconvert.s(1f)
v0_1.d = v0_1.d f* v4.d
v0_1:4.d = v0_1:4.d f* v4.d
int128_t v1_2 = vadd_f32(v1_1, v3)
v3.q = *arg3
v2.d = v2.d f* v4.d
v2:4.d = v2:4.d f* v4.d
v4 = *(x20_1 + 0x98)
int128_t v0_2 = vadd_f32(v3, v0_1)
int128_t v2_1 = vadd_f32(v3, v2)
int128_t v0_3 = vsub_f32(v0_2, v5)
int128_t v2_2 = vsub_f32(v2_1, v5)
int128_t v0_4 = vmul_f32(v1_2, v0_3, 0)
int128_t v1_3 = vmul_f32(v1_2, v2_2, 0)
float128 v0_5 = vadd_f32(v5, v0_4)
float128 v1_5
v1_5:8.q = vsub_f32(vadd_f32(v5, v1_3), v0_5).q
v0_5:8.q = v0_5.q
float128 v0_6 = vaddq_f32(v0_5, vmulq_f32(v4, v1_5, 0))
float128 v1_6
v1_6.d = v0_6:4.d
v2_2.d = v0_6:8.d
v3.d = v0_6:0xc.d
return result
