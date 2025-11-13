// 函数: _Z22ConvertForeignRotationRK4Vec4RK4Vec3S4_S4_
// 地址: 0xc83054
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result
float v0
float v1
float v2
float v3
result, v0, v1, v2, v3 = QuatFromBasisChange(VFWD, VUP, arg2, arg3)
*arg1
v3 * *(arg1 + 8) - v2 * *(arg1 + 0xc) - v0 * *(arg1 + 4)
return result
