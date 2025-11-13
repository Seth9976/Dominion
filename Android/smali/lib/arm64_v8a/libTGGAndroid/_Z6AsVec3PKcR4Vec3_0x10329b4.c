// 函数: _Z6AsVec3PKcR4Vec3
// 地址: 0x10329b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(V0 + 8)
*arg2 = *V0
*(arg2 + 8) = x8
int64_t result = sscanf(arg1, " %f %f %f", arg2, arg2 + 4)

if (result.d == 3)
    return 1

if (result.d != 1)
    return 0

float v0 = *arg2
int64_t v1
v1.d = (*V1).d f* v0
v1:4.d = v1:4.d f* v0
v0 = v0 * *(V1 + 8)
*arg2 = v1
*(arg2 + 8) = v0
return result
