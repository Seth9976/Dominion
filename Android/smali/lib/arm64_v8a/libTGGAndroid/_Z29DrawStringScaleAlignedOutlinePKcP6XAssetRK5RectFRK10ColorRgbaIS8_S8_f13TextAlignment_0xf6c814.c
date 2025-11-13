// 函数: _Z29DrawStringScaleAlignedOutlinePKcP6XAssetRK5RectFRK10ColorRgbaIS8_S8_f13TextAlignment
// 地址: 0xf6c814
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(arg8 - 1)

if (x8.d u> 9)
    pthread_kill(pthread_self(), 6)
    char* x0_4
    Mat3* x1_2
    XAsset* x2_1
    RectF* x3_1
    ColorRgbaI* x4_1
    ColorRgbaI* x5_1
    ColorRgbaI* x6_1
    int64_t x7
    float v0_1
    float v1_2
    float v2_1
    x0_4, x1_2, x2_1, x3_1, x4_1, x5_1, x6_1, x7, v0_1, v1_2, v2_1 = XNoReturn()
    return DrawParentedStringScaleAlignedOutline(x0_4, x1_2, x2_1, x3_1, x4_1, x5_1, x6_1, v0_1, 
        x7, v1_2, v2_1) __tailcall

float v1 = 0f
float v2 = 0f

switch (x8)
    case 1
        v2 = 0f
        v1 = fconvert.s(0.5f)
    case 2
        v2 = 0f
        v1 = fconvert.s(1f)
    case 3
        v2 = fconvert.s(0.5f)
    case 4, 9
        v1 = fconvert.s(0.5f)
        v2 = fconvert.s(0.5f)
    case 5
        v2 = fconvert.s(0.5f)
        v1 = fconvert.s(1f)
    case 6
        v2 = fconvert.s(1f)
    case 7
        v2 = fconvert.s(1f)
        v1 = fconvert.s(0.5f)
    case 8
        v1 = fconvert.s(1f)
        v2 = fconvert.s(1f)

float v3 = *arg3
float v4 = *(arg3 + 4)
float v5 = *(arg3 + 8)
float v6 = *(arg3 + 0xc)
uint64_t x22 = zx.q(*arg4)
uint64_t x23 = zx.q(*arg5)
uint64_t x24 = zx.q(*arg6)
float var_c0 = arg7
float var_ac = arg7
int64_t var_bc = 0
int64_t var_a0 = 0
int32_t var_b0 = 0
int32_t var_a8 = 0
int64_t var_8c = 0
int64_t var_94 = 0
int32_t var_98 = 0x3f800000
float var_b4 = v3 + v1 * (v5 - v3)
float var_a4 = v4 + v2 * (v6 - v4)
int32_t var_84 = 0x3f800000
int128_t v0
int128_t v1_1
v0, v1_1 = Mat4Multiply(M4I, &var_c0)
v0.d = 0f
v1_1.d = 0f
int64_t var_d0 = 0
Mat4 var_80
return DrawStringMatrix(arg1, &var_80, arg2, x22, x23, x24, zx.q(arg8), nullptr, v0, v1_1)
