// 函数: _Z13EndingIsOneOfRK7XStringPPKciRS_
// 地址: 0xf782c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 s< 1)
    return 0

if ((EndingIs(arg1, *arg2, arg4) & 1) != 0)
    return 1

uint64_t x22_1 = zx.q(arg3)
int64_t x8 = 1
int64_t x23_1
int32_t x0_4

do
    x23_1 = x8
    
    if (x22_1 == x8)
        break
    
    x0_4 = EndingIs(arg1, arg2[x23_1], arg4)
    x8 = x23_1 + 1
while ((x0_4 & 1) == 0)
return zx.q(x23_1 u< x22_1 ? 1 : 0)
