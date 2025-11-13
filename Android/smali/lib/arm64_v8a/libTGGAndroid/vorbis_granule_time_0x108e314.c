// 函数: vorbis_granule_time
// 地址: 0x108e314
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 == -1)
    return fconvert.d(-1.0)

double v1 = float.d(arg2)
double v0

if (arg2 s>= 0)
    v0 = v1
else
    v0 = v1 + 1.8446744073709552e+19

return v0 / float.d(*(*(arg1 + 8) + 8))
