// 函数: _Z13IsInActiveSetRK3UI2
// 地址: 0x103141c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*(gUI2Editor + 0x704c))

if (x9.d s< 1)
    return 0

int32_t i = *(arg1 + 0x1690)

if (i == *(gUI2Editor + 0x604c))
    return 1

int64_t x14 = 0
int64_t x13_1

do
    x13_1 = x14
    
    if (x9 - 1 == x14)
        break
    
    x14 = x13_1 + 1
while (i != *(gUI2Editor + (x13_1 << 2) + 0x6050))

return zx.q(x13_1 + 1 u< x9 ? 1 : 0)
