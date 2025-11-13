// 函数: _Z11UIStateRectjiRK11UITransform
// 地址: 0x1055c78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x21 = *(*(gUISystem + 0x28) + mulu.dp.d(arg1 & 0xffff, 0x458) + 8)
int64_t* x8_2 = *x21
int128_t v1

if (x8_2 == 0)
    if (x21[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    int128_t v0
    v0, v1 = AssetCatalogLoadAsset(x21, false, true)
    x8_2 = *x21

void* x8_6 = **x8_2 + muls.dp.d(arg2, 0x178)
v1 = *(x8_6 + 0x30)
int128_t var_40 = *(x8_6 + 0x20)
int128_t var_30 = v1
int64_t result
float128 v0_1
float128 v1_1
int128_t v2
float128 v3
int128_t v5
result, v0_1, v1_1, v2, v3, v5 =
    UIRectAligned(x8_6 + 0x10, &var_40, arg3 + 0x4c, arg3 + 0x2c, arg3 + 0x3c)
v0_1:4.d = v1_1.d
v1_1.q = *arg3
v0_1:8.d = v2.d
v0_1:0xc.d = v3.d
v2.q = *(arg3 + 0x10)
v3.q = *(arg3 + 0x18)
v5.d = 0f
float temp0 = vmax_f32(*(arg3 + 0xc), v5.d)
v5.d = fconvert.s(1f)
v5:4.d = fconvert.s(1f)
v1_1:8.q = v1_1.q
v0_1.d = v0_1.d f* temp0
v0_1:4.d = v0_1:4.d f* temp0
v0_1:8.d = v0_1:8.d f* temp0
v0_1:0xc.d = v0_1:0xc.d f* temp0
v3:8.q = v3.q
float128 v2_1
v2_1:8.q = vadd_f32(v2, v5).q
float128 v0_5 = vaddq_f32(v3, vmulq_f32(v2_1, vsubq_f32(vaddq_f32(v1_1, v0_1), v3), 0))
v1_1.d = v0_5:4.d
v2_1.d = v0_5:8.d
v3.d = v0_5:0xc.d
return result
