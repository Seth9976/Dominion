// 函数: _Z10UI2GetRootRK3UI2
// 地址: 0x101e330
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

UI2 const& x9_2

do
    x9_2 = arg1
    arg1 = *(arg1 + 0x17d0)
while (arg1 != 0)

uint64_t x11 = zx.q(*(x9_2 + 0x1970))

if (x11.d s<= 0)
    return *gUI2

uint64_t i = zx.q(*(x9_2 + 0x1870))
int64_t x8 = *gUI2

if (*(x8 + i * 0x19a8 + 0x1658) != 0 && *(x8 + mulu.dp.d(i.d, 0x19a8) + 0x1658) != 0)
    i = x11 - 1
    void* __offset(UI2, 0x1874) x9_1 = x9_2 + 0x1874
    
    while (i != 0)
        uint64_t x12_3 = zx.q(*x9_1)
        x9_1 += 4
        i -= 1
        
        if (*(x8 + x12_3 * 0x19a8 + 0x1658) == 0)
            i = zx.q(x12_3.d)
            break

return x8 + mulu.dp.d(i.d, 0x19a8)
