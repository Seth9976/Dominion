// 函数: _ZN6SoLoud7dopplerENS_4vec3ERKS0_S2_ff
// 地址: 0x1078bb0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v5
v5.d = arg4 * arg4
v5.d = v5.d f+ arg5 * arg5
float entry_v2
v5.d = entry_v2 * entry_v2 f+ v5.d
float v6 = sqrt(v5.d)
v5.d = fconvert.s(1f)

if (not(v6 != 0f))
    return 

v5.d = *arg2
v5.d = arg4 f* v5.d
v5.d = v5.d f+ arg5 * *(arg2 + 4)
arg4 = arg4 * *arg1 + arg5 * *(arg1 + 4) + entry_v2 * *(arg1 + 8)
float entry_v3
float entry_v4
arg5 = entry_v4 / entry_v3
v5.d = v5.d f+ entry_v2 * *(arg2 + 8)
arg4 = arg4 / v6
entry_v2 = v5.d f/ v6

if (not(arg4 < arg5))
    arg4 = arg5

if (entry_v2 < arg5)
    arg5 = entry_v2

v5.d = (entry_v4 - arg5 * entry_v3) / (entry_v4 - arg4 * entry_v3)
