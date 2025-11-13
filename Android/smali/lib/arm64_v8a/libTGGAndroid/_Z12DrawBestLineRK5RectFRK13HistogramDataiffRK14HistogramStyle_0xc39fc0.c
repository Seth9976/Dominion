// 函数: _Z12DrawBestLineRK5RectFRK13HistogramDataiffRK14HistogramStyle
// 地址: 0xc39fc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = *(arg6 + 8)
float v8 = arg5
float*** x8 = *x19

if (x8 == 0)
    if (x19[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x19, false, true)
    x8 = *x19

arg5 = *(arg1 + 0xc)
float v4 = *arg1
float v3 = *(arg1 + 4)
float* x8_3 = **x8
float v19 = fconvert.s(0.5f)
float v5 = *x8_3
int32_t v17 = x8_3[1]
float v2 = v4 + (*(arg1 + 8) - v4) / float.s(*(arg2 + 0x400)) * (float.s(arg3 - *arg2) + v19)
float v18 = x8_3[2]
v4 = x8_3[3]
uint64_t v7 = *V21
int128_t var_90
__builtin_memset(&var_90, 0, 0x30)
v4 = v4 * v18
v7.d = v7.d f* arg4
v7:4.d = v7:4.d f* arg4
v5 = v4 * float.s(v5)
uint64_t var_38 = v7
int64_t var_98 = 0x3f800000
var_90:8.q = 0x3f80000000000000
int64_t var_58
__builtin_memset(&var_58, 0, 0x14)
int64_t var_60 = 0x3f80000000000000
int128_t var_70
var_70.d = 0x3f800000
var_90:4.d = v2 - v5 * arg4 * v19
float var_40 = (v5 + fconvert.s(-2f)) * arg4 + v8
float var_3c = arg5 - v3 + (v4 * float.s(v17) + fconvert.s(-16f)) * arg4 * v19
int128_t var_80
var_80:4.d = v3
char var_d0 = 0
int64_t (* const var_c8)() = RECT1
int64_t var_c0 = 0
int64_t* var_e0 = &var_98
uint64_t* const var_d8 = gSpriteWhite
return DrawImageNew(x19, nullptr, &var_38, &var_40, 2, RECT0, 0, &var_58)
