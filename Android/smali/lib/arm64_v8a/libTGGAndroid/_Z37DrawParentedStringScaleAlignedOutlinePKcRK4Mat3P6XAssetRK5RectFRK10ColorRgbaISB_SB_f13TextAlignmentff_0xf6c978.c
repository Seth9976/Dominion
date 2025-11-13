// 函数: _Z37DrawParentedStringScaleAlignedOutlinePKcRK4Mat3P6XAssetRK5RectFRK10ColorRgbaISB_SB_f13TextAlignmentff
// 地址: 0xf6c978
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(arg9 - 1)

if (x8.d u> 9)
    pthread_kill(pthread_self(), 6)
    return FontDebugDraw(XNoReturn()) __tailcall

int128_t v8 = arg11
int128_t v9 = arg10
arg10 = 0f
arg11 = 0f

switch (x8)
    case 1
        arg11 = 0f
        arg10 = fconvert.s(0.5f)
    case 2
        arg11 = 0f
        arg10 = fconvert.s(1f)
    case 3
        arg11 = fconvert.s(0.5f)
    case 4, 9
        arg10 = fconvert.s(0.5f)
        arg11 = fconvert.s(0.5f)
    case 5
        arg11 = fconvert.s(0.5f)
        arg10 = fconvert.s(1f)
    case 6
        arg11 = fconvert.s(1f)
    case 7
        arg11 = fconvert.s(1f)
        arg10 = fconvert.s(0.5f)
    case 8
        arg10 = fconvert.s(1f)
        arg11 = fconvert.s(1f)

int128_t v16
v16.q = *(arg2 + 8)
float v3 = *arg4
float v4 = *(arg4 + 4)
float v5 = *(arg4 + 8)
float v6 = *(arg4 + 0xc)
int32_t v17 = *(arg2 + 0x10)
int32_t v18 = *(arg2 + 0x14)
int64_t v19 = *(arg2 + 0x18)
int32_t v20 = *(arg2 + 0x20)
int64_t var_104 = v16.q
v16 = data_71a7f0
int64_t var_110 = *arg2
int32_t var_fc = v17
int32_t var_f4 = v18
int32_t var_108 = 0
int32_t var_f8 = 0
int32_t var_d8 = 0
int64_t var_e0 = v19
int32_t var_d4 = v20
float var_d0 = arg8
int128_t var_f0 = v16
uint64_t x22 = zx.q(*arg5)
uint64_t x23 = zx.q(*arg6)
uint64_t x24 = zx.q(*arg7)
int64_t var_cc = 0
int32_t var_c0 = 0
float var_bc = arg8
int32_t var_b8 = 0
int64_t var_b0 = 0
int32_t var_a8 = 0x3f800000
float var_c4 = v3 + arg10 * (v5 - v3)
float var_b4 = v4 + arg11 * (v6 - v4)
int64_t var_9c = 0
int64_t var_a4 = 0
int32_t var_94 = 0x3f800000
Mat4Multiply(&var_110, &var_d0)
int64_t var_120 = 0
Mat4 var_90
return DrawStringMatrix(arg1, &var_90, arg3, x22, x23, x24, zx.q(arg9), nullptr, v9, v8)
