// 函数: spRegionAttachment_computeWorldVertices
// 地址: 0xfc04dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float result = *(arg2 + 0x6c)
float v2 = *(arg1 + 0x98)
float v3 = *(arg1 + 0x9c)
float* x8 = arg3 + (sx.q(arg4) << 2)
float v1 = *(arg2 + 0x78)
*x8 = result + v2 * *(arg2 + 0x64) + v3 * *(arg2 + 0x68)
int64_t x9 = sx.q(arg5)
x8[1] = v1 + v2 * *(arg2 + 0x70) + v3 * *(arg2 + 0x74)
v2 = *(arg1 + 0x80)
v3 = *(arg1 + 0x84)
int64_t x8_1 = x9 + sx.q(arg4)
float* x10 = arg3 + (x8_1 << 2)
int64_t x8_2 = x9 + sx.q(x8_1.d)
*x10 = result + v2 * *(arg2 + 0x64) + v3 * *(arg2 + 0x68)
x10[1] = v1 + v2 * *(arg2 + 0x70) + v3 * *(arg2 + 0x74)
v2 = *(arg1 + 0x88)
v3 = *(arg1 + 0x8c)
float* x10_1 = arg3 + (x8_2 << 2)
float* x8_4 = arg3 + ((x9 + sx.q(x8_2.d)) << 2)
*x10_1 = result + v2 * *(arg2 + 0x64) + v3 * *(arg2 + 0x68)
x10_1[1] = v1 + v2 * *(arg2 + 0x70) + v3 * *(arg2 + 0x74)
v2 = *(arg1 + 0x90)
v3 = *(arg1 + 0x94)
*x8_4 = result + v2 * *(arg2 + 0x64) + v3 * *(arg2 + 0x68)
result = v1 + v2 * *(arg2 + 0x70) + v3 * *(arg2 + 0x74)
x8_4[1] = result
return result
