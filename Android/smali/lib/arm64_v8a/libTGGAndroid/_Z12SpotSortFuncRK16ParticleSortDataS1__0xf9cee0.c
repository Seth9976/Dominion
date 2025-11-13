// 函数: _Z12SpotSortFuncRK16ParticleSortDataS1_
// 地址: 0xf9cee0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0 = *(arg1 + 8)
float v1 = *(arg2 + 8)
v0 - v1

if (not(v0 >= v1))
    return 0

if (v0 <= v1)
    return zx.q(*arg1 u> *arg2 ? 1 : 0)

return 1
