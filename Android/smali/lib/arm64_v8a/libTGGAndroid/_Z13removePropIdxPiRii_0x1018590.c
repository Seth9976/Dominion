// 函数: _Z13removePropIdxPiRii
// 地址: 0x1018590
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg2

if (x8 s< 1)
    return 

int32_t x9_1 = 0

do
    if (arg1[sx.q(x9_1)] == arg3)
        *arg2 = x8 - 1
        int64_t x10_2 = sx.q(x9_1)
        x9_1 -= 1
        arg1[x10_2] = arg1[sx.q(x8 - 1)]
        x8 = *arg2
    
    x9_1 += 1
while (x9_1 s< x8)
