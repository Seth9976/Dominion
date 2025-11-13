// 函数: _Z13UI2CurPtCoordv
// 地址: 0x102b0cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_8
int64_t result
int128_t v0
int128_t v2
result, v0, v2 = GetCursorPosition(&var_8)
int64_t v1 = var_8
v0.d = *(gUI2Editor + 0x603c)
v2.q = *(gUI2Editor + 0x6040)
v0.d = fconvert.s(1f) f/ v0.d
v0.d = v1.d f* v0.d
v0:4.d = v1:4.d f* v0.d
v1.d = vadd_f32(v2, v0):4.d
return result
