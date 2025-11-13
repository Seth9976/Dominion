// 函数: _Z13UI2AllocChildR3UI2
// 地址: 0x1011c4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = UI2Alloc(arg1)
int64_t x8 = zx.q(*(arg1 + 0x1970))
int32_t x23 = *(result + 0x19a0)

if (x8.d s>= 0x40)
    int64_t x21_1 = 0
    
    do
        *(*gUI2 + zx.q(*(arg1 + 0x1870 + (x21_1 << 2))) * 0x19a8 + 0x1658)
        XTrace("child i %d idx %d")
        x8 = sx.q(*(arg1 + 0x1970))
        x21_1 += 1
    while (x21_1 s< x8)

*(arg1 + 0x1970) = x8.d + 1
*(arg1 + (sx.q(x8.d) << 2) + 0x1870) = x23
return result
