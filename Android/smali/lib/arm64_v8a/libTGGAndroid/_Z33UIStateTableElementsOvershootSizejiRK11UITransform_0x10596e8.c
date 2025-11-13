// 函数: _Z33UIStateTableElementsOvershootSizejiRK11UITransform
// 地址: 0x10596e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

UIState* x20 = *(gUISystem + 0x28) + mulu.dp.d(arg1 & 0xffff, 0x458)
int32_t* result
int128_t v0
int128_t v1
int128_t v2
int128_t v3
result, v0, v1, v2, v3 = UIStateElementGet(x20, arg2, &data_793a18)
int64_t* x22 = *(x20 + 8)
int32_t* result_1 = result
int64_t* x8_1 = *x22

if (x8_1 == 0)
    if (x22[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    result, v0, v1, v2, v3 = AssetCatalogLoadAsset(x22, false, true)
    x8_1 = *x22

int64_t x23 = sx.q(arg2)
int64_t x22_1 = **x8_1
int64_t x8_5

if (result_1[0x52] s<= *result_1)
    uint64_t x9_3 = zx.q(*(x22_1 + x23 * 0x178 + 0xac))
    x8_5 = zx.q(*(x9_3 + 0xb0)) | (0xffffffff & x9_3) << 0x20
else
    result, v0, v1, v2, v3 = XString::operator char const*()
    x8_5 = *(result_1 + 0x154)

XAsset* x21_1 = *(x22_1 + x23 * 0x178 + 0xc8)
v1.q = float.d(x8_5)
int64_t* x9_5 = *x21_1
v0.q = *V2I1
int128_t v8 = v0 + v1

if (x9_5 == 0)
    if (*(x21_1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    result, v0, v1, v2, v3 = AssetCatalogLoadAsset(x21_1, false, true)
    x9_5 = *x21_1
    v0.q = *V2I1

void* x8_8 = *x9_5
int32_t x9_6 = result_1[0x26]
void* x10_1 = x22_1 + x23 * 0x178
v2.q = *(x8_8 + 0xc)
v3.q = *(x8_8 + 0x14)
void* x8_10

if (x9_6 == 0)
    x8_10 = x10_1 + 0xb8
else
    x8_10 = &result_1[0x27]

int128_t v2_1 = vsub_f32(v3, v2)
v3.d = *x8_10
void* x8_12

if (x9_6 == 0)
    x8_12 = x10_1 + 0xb4
else
    x8_12 = &result_1[0x28]

v1.d = *(arg3 + 0xc)
v3:4.d = *x8_12
int128_t v4 = vcvt_f32_s32(v8)
v2_1.d = v2_1.d f* v1.d
v2_1:4.d = v2_1:4.d f* v1.d
v1.d = v3.d f* v1.d
v1:4.d = v3:4.d f* v1.d
int128_t v0_2 = vcvt_f32_s32(v8 - v0)
v1.d = vadd_f32(vmul_f32(v2_1, v4, 0), vmul_f32(v1, v0_2, 0)):4.d
return result
