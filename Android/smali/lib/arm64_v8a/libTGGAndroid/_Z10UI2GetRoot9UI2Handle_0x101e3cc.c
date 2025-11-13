// 函数: _Z10UI2GetRoot9UI2Handle
// 地址: 0x101e3cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *gUI2
void* i = x8 + mulu.dp.d(zx.d(arg1), 0x19a8)
void* i_2

do
    i_2 = i
    i = *(i + 0x17d0)
while (i != 0)

uint64_t x11 = zx.q(*(i_2 + 0x1970))

if (x11.d s< 1)
    return zx.q(*(x8 + 0x19a0))

uint64_t i_1 = zx.q(*(i_2 + 0x1870))

if (*(x8 + i_1 * 0x19a8 + 0x1658) != 0)
    i_1 = x11 - 1
    void* x10_1 = i_2 + 0x1874
    
    while (i_1 != 0)
        uint64_t x12_2 = zx.q(*x10_1)
        x10_1 += 4
        i_1 -= 1
        
        if (*(x8 + x12_2 * 0x19a8 + 0x1658) == 0)
            i_1 = zx.q(x12_2.d)
            break

return zx.q(*(x8 + mulu.dp.d(i_1.d, 0x19a8) + 0x19a0))
