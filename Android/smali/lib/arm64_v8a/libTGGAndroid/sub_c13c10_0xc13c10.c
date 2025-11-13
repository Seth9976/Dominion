// 函数: sub_c13c10
// 地址: 0xc13c10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0 = arg1[1]
float v1 = arg2[1]
v0 - v1
bool cond:0 = v0 < v1

if (not(v0 != v1))
    cond:0 = *arg1 < *arg2

if (not(cond:0))
    return 1

return 0xffffffff
