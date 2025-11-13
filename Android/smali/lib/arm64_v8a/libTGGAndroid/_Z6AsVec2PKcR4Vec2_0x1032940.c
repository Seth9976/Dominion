// 函数: _Z6AsVec2PKcR4Vec2
// 地址: 0x1032940
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg2 = *V20
int64_t result
int64_t v0
result, v0 = sscanf(arg1, " %f %f", arg2, arg2 + 4)

if (result.d == 2)
    return 1

if (result.d != 1)
    return 0

v0.d = *arg2
uint64_t v1 = *V21
v0.d = v1.d f* v0.d
v0:4.d = v1:4.d f* v0.d
*arg2 = v0
return result
