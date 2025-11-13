// 函数: spBone_worldToLocal
// 地址: 0xfb4ed0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v2 = *(arg1 + 0x64)
float v7 = *(arg1 + 0x68)
float v3 = *(arg1 + 0x70)
float v5 = *(arg1 + 0x74)
arg4 = arg4 - *(arg1 + 0x6c)
arg5 = arg5 - *(arg1 + 0x78)
float v4 = v2 * v5 - v7 * v3
v5 = v5 * arg4
v7 = v7 * arg5
arg5 = v2 * arg5
v2 = fconvert.s(1f) / v4
arg4 = v2 * arg5 - v3 * arg4 * v2
*arg2 = v5 * v2 - v2 * v7
*arg3 = arg4
return arg4
