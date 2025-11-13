// 函数: _Z13Rot2FromAnglef
// 地址: 0xfa3994
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float cosp
float sinp
int64_t result
int128_t v0
int128_t v1
result, v0, v1 = sincosf(&sinp, &cosp, arg1)
v1.d = cosp
v0.d = sinp
return result
