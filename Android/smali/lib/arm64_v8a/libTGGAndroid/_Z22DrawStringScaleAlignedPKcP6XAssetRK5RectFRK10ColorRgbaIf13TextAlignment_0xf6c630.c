// 函数: _Z22DrawStringScaleAlignedPKcP6XAssetRK5RectFRK10ColorRgbaIf13TextAlignment
// 地址: 0xf6c630
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(arg6 - 1)

if (x9.d u> 9)
    pthread_kill(pthread_self(), 6)
    char* x0_2
    XAsset* x1_1
    RectF* x2_1
    ColorRgbaI* x3_1
    ColorRgbaI* x4_1
    ColorRgbaI* x5_1
    int64_t x6_1
    float v0
    x0_2, x1_1, x2_1, x3_1, x4_1, x5_1, x6_1, v0 = XNoReturn()
    return DrawStringScaleAlignedOutline(x0_2, x1_1, x2_1, x3_1, x4_1, x5_1, v0, x6_1) __tailcall

int128_t v1
v1.d = 0f
float v2 = 0f

switch (x9)
    case 1
        v2 = 0f
        v1.d = fconvert.s(0.5f)
    case 2
        v2 = 0f
        v1.d = fconvert.s(1f)
    case 3
        v2 = fconvert.s(0.5f)
    case 4, 9
        v1.d = fconvert.s(0.5f)
        v2 = fconvert.s(0.5f)
    case 5
        v2 = fconvert.s(0.5f)
        v1.d = fconvert.s(1f)
    case 6
        v2 = fconvert.s(1f)
    case 7
        v2 = fconvert.s(1f)
        v1.d = fconvert.s(0.5f)
    case 8
        v1.d = fconvert.s(1f)
        v2 = fconvert.s(1f)

float v3 = *arg3
float v4 = *(arg3 + 4)
uint64_t x3 = zx.q(*arg4)
float v5 = 0f
float v16 = *M3I
float v17 = *(M3I + 4)
float v18 = *(M3I + 8)
float v19 = *(M3I + 0xc)
float v20 = *(M3I + 0x10)
float v21 = *(M3I + 0x14)
float v22 = *(M3I + 0x18)
float v23 = *(M3I + 0x1c)
v1.d = v1.d f* (*(arg3 + 8) - v3)
int128_t var_30 = data_71a7f0
int128_t v25
v25.d = v17 * arg5
float v24 = *(M3I + 0x20)
v1.d = v3 f+ v1.d
v2 = v4 + v2 * (*(arg3 + 0xc) - v4)
float v6 = v16 * arg5 + v17 * v5
v25.d = v16 * v5 f+ v25.d
int32_t var_48 = 0
int32_t var_38 = 0
int32_t var_18 = 0
v3 = v19 * arg5 + v20 * v5
float v7 = v19 * v5 + v20 * arg5
v4 = v22 * arg5 + v23 * v5
arg5 = v22 * v5 + v23 * arg5
float v26 = v18 * v5
v6 = v6 + v26
v25.d = v25.d f+ v26
v26 = v21 * v5
v5 = v24 * v5
v4 = v4 + v5
arg5 = arg5 + v5
v5 = v1.d f* v16
v16 = v1.d f* v19
v1.d = v1.d f* v22
uint64_t x4 = zx.q(*gRgbaIWhite)
uint64_t x5 = zx.q(*gRgbaINone)
v1.d = v1.d f+ v2 * v23
float var_20 = v4
float var_1c = arg5
v1.d = v24 f+ v1.d
float var_44 = v18 + v5 + v17 * v2
int32_t var_14 = v1.d
v1.d = 0f
float var_50 = v6
int32_t var_4c = v25.d
float var_40 = v3 + v26
float var_3c = v7 + v26
float var_34 = v21 + v16 + v2 * v20
int64_t var_60 = 0
return DrawStringMatrix(arg1, &var_50, arg2, x3, x4, x5, zx.q(arg6), nullptr, 0f, v1)
