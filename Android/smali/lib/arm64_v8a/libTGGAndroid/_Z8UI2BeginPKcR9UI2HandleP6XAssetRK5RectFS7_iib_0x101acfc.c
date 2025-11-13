// 函数: _Z8UI2BeginPKcR9UI2HandleP6XAssetRK5RectFS7_iib
// 地址: 0x101acfc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg2
int32_t x22
uint64_t x28_1
int64_t fp_1
int128_t v0
int128_t v1
int64_t v2

if (x8 == 0)
label_101ad80:
    void* x0
    x0, v0, v1, v2 = UI2Alloc(nullptr)
    int32_t x8_1 = *(x0 + 0x19a0)
    *(x0 + 8) = arg1
    x22 = 1
    *arg2 = x8_1
    fp_1 = *gUI2
    x28_1 = zx.q(x8_1.w)
else
    x28_1 = zx.q(x8.w)
    
    if (x28_1.d u>= *(gUI2 + 8))
        goto label_101ad80
    
    fp_1 = *gUI2
    
    if (*(fp_1 + x28_1 * 0x19a8 + 0x19a0) != x8)
        goto label_101ad80
    
    x22 = 0

void* x9_4 = fp_1 + x28_1 * 0x19a8
int64_t x8_2 = *(x9_4 + 0x1688)

if (x8_2 != 0 && x8_2 != arg3)
    UI2Free(arg2)
    void* x0_2
    x0_2, v0, v1, v2 = UI2Alloc(nullptr)
    int32_t x8_3 = *(x0_2 + 0x19a0)
    x22 = 1
    *(x0_2 + 8) = arg1
    *arg2 = x8_3

*(x9_4 + 0x1688) = arg3
*(fp_1 + x28_1 * 0x19a8 + 0x1690) = 0xffffffff
int64_t* x8_5 = *arg3

if (x8_5 == 0)
    if (*(arg3 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    v0, v1, v2 = AssetCatalogLoadAsset(arg3, false, true)
    x8_5 = *arg3

void* x8_7 = *x8_5
v1.d = *V20
v2.d = *(V20 + 4)
int32_t v3 = *(x8_7 + 0x10)
int32_t v4 = *(x8_7 + 0x14)
void* x9_5 = fp_1 + x28_1 * 0x19a8
v0.q = 0
v0:8.q = 0
__builtin_memset(x9_5 + 0x58, 0, 0x2c)
*(x9_5 + 0x8c) = 0
*(x9_5 + 0xf8) = zx.o(0)
*(x9_5 + 0x54) = v1.d
*(x9_5 + 0x84) = -0xffffffff
*(x9_5 + 0x104) = zx.o(0)
*(x9_5 + 0xe8) = zx.o(0)
*(x9_5 + 0xe4) = v2.d
*(x9_5 + 0x114) = -0xffffffff
*(x9_5 + 0x11c) = 0
__builtin_memset(x9_5 + 0x178, 0, 0x2c)
v1.d = v3 f- v1.d
*(x9_5 + 0x174) = v1.d
*(x9_5 + 0x1a4) = -0xffffffff
*(x9_5 + 0x1ac) = 0
v1.d = v4 f- v2.d
__builtin_memset(x9_5 + 0x208, 0, 0x2c)
*(x9_5 + 0x204) = v1.d
*(x9_5 + 0x234) = -0xffffffff
*(x9_5 + 0x23c) = 0
__builtin_memset(x9_5 + 0x16b0, 0, 0xe8)
v0 = *TI
*(x9_5 + 0x16c0) = *(TI + 0x10)
*(x9_5 + 0x16b0) = v0
*(x9_5 + 0x173c) = 0
*(x9_5 + 0x1704) = *gRgbaWhite
*(x9_5 + 0x1724) = 0
uint64_t x8_14 = *V20
*(x9_5 + 0x1744) = x8_14
*(x9_5 + 0x1754) = x8_14
int64_t* x8_15 = *arg3

if (x8_15 == 0)
    if (*(arg3 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    v0, v1 = AssetCatalogLoadAsset(arg3, false, true)
    x8_15 = *arg3

v0.q = *V20
v1.q = *(*x8_15 + 0x10)
*(fp_1 + x28_1 * 0x19a8 + 0x174c) = vsub_f32(v1, v0).q
int64_t* x8_19 = *arg3
int128_t v0_1

if (x8_19 == 0)
    if (*(arg3 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    v0_1, v1 = AssetCatalogLoadAsset(arg3, false, true)
    x8_19 = *arg3

v0_1.q = *V20
v1.q = *(*x8_19 + 0x10)
*(fp_1 + x28_1 * 0x19a8 + 0x175c) = vsub_f32(v1, v0_1)
int64_t* x8_23 = *arg3
double v0_2

if (x8_23 == 0)
    if (*(arg3 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    v0_2, v1 = AssetCatalogLoadAsset(arg3, false, true)
    x8_23 = *arg3

v0_2.d = *V20
v1.d = *(V20 + 4)
v2 = *(*x8_23 + 0x10)
int32_t var_b8 = v0_2.d
int32_t var_b4 = v1.d
int64_t var_b0 = v2
void* x8_25 = *x8_23
v2.d = *(x8_25 + 0x18)
v3 = *(x8_25 + 0x1c)
RectF const& x0_15
RectF const& x1_4

if (v2.d f!= v0_2.d)
    x1_4 = arg5
    x0_15 = arg4
else
    x1_4 = arg5
    x0_15 = arg4
    
    if (not(v3 f!= v1.d))
        v2.d = *(x8_25 + 0x10)
        v3 = *(x8_25 + 0x14)

void* x25_1 = fp_1 + x28_1 * 0x19a8
int32_t var_c8 = v0_2.d
int32_t var_c4 = v1.d
int32_t var_c0 = v2.d
int32_t var_bc = v3
int128_t v0_3
int128_t v1_1
int128_t v2_1
v0_3, v1_1, v2_1 = UISquishCalc(x0_15, x1_4, &var_b8, &var_c8)
int128_t var_a8
v2_1 = var_a8
int32_t var_78
*(x25_1 + 0x1700) = var_78
int128_t var_88
*(x25_1 + 0x16f0) = var_88
int128_t var_98
*(x25_1 + 0x16e0) = var_98
*(x25_1 + 0x16d0) = v2_1
v0_3 = *(TI + 0x10)
v2_1.d = float.s(0x80000000)
*(x9_5 + 0x16b0) = *TI
*(x9_5 + 0x16c0) = v0_3
v0_3.q = *(x25_1 + 0x16e4)
v1_1.d = *(x25_1 + 0x16d0)
v2_1.d = v1_1.d f* v2_1.d
double v0_4
v0_4.d = vneg_f32(v0_3).d f* v1_1.d
v0_4:4.d = v0_4:4.d f* v1_1.d
*(x25_1 + 0x16c4) = v0_4
*(x25_1 + 0x16cc) = v2_1.d
*(x9_5 + 0x16b0) = v1_1.d
XString::operator=(x25_1 + 0x1650)
*(x25_1 + 0x1788) = x25_1
*(x9_5 + 0x1724) = arg6
*(x25_1 + 0x1728) = arg7
*(x25_1 + 0x1790) = 0
*(x25_1 + 0x1450) = arg8.d & 1
*(x25_1 + 0xd44) = *RECT1
int128_t v0_5
v0_5.d = 0f
*(x25_1 + 0xdbc) = -0xffffffff
__builtin_memset(x25_1 + 0xd54, 0, 0x68)
*(x25_1 + 0xdc4) = 0
var_a8.q = 0
var_a8:8.d = 0
PropDynamicSet<RectF>(x25_1 + 0x558, x25_1 + 0xd44, &var_a8, v0_5.d)
*(x25_1 + 4) = 0
return zx.q(x22)
