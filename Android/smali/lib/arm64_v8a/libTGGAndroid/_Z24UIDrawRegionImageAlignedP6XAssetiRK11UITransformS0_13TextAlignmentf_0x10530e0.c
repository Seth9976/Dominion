// 函数: _Z24UIDrawRegionImageAlignedP6XAssetiRK11UITransformS0_13TextAlignmentf
// 地址: 0x10530e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg1

if (x8 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg1, false, true)
    x8 = *arg1

void* x8_4 = **x8 + muls.dp.d(arg2, 0x178)
int128_t v1 = *(x8_4 + 0x30)
float128 var_60 = (*(x8_4 + 0x20)).d.o
int128_t var_50 = v1
float128 v0
int128_t v1_1
int128_t v2
float128 v3
float128 v6
v0, v1_1, v2, v3, v6 = UIRectAligned(x8_4 + 0x10, &var_60, arg3 + 0x4c, arg3 + 0x2c, arg3 + 0x3c)
float v4 = *(arg3 + 0xc)
v0:4.d = v1_1.d
v6.q = *arg3
v0:8.d = v2.d
v0:0xc.d = v3.d
v2.q = *(arg3 + 0x10)
v3.q = *(arg3 + 0x18)
float temp0 = vmax_f32(v4, 0f)
v1_1.d = fconvert.s(1f)
v1_1:4.d = fconvert.s(1f)
v6:8.q = v6.q
v0.d = v0.d f* temp0
v0:4.d = v0:4.d f* temp0
v0:8.d = v0:8.d f* temp0
v0:0xc.d = v0:0xc.d f* temp0
v3:8.q = v3.q
float128 v1_2
v1_2:8.q = vadd_f32(v2, v1_1).q
var_60 = vaddq_f32(v3, vmulq_f32(v1_2, vsubq_f32(vaddq_f32(v6, v0), v3), 0))
float128 v0_4
v0_4.d = v4 * arg6
return DrawImageAlignedScale(arg4, &var_60, zx.q(arg5), v0_4.d)
