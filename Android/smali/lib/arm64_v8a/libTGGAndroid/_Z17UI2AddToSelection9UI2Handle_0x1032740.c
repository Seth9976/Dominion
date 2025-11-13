// 函数: _Z17UI2AddToSelection9UI2Handle
// 地址: 0x1032740
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x11 = zx.q(arg1.d) & 0xffff
uint64_t i_2 = zx.q(*(gUI2Editor + 0x704c))
int64_t x10 = *gUI2

if (i_2.d s>= 1)
    int64_t (* x13_1)() = gUI2Editor + 0x604c
    uint64_t i_1 = i_2
    uint64_t i
    
    do
        if (*(gUI2Editor + sx.q(*x13_1) * 0x18) == x10 + mulu.dp.d(x11.d, 0x19a8))
            return 
        
        i = i_1
        i_1 -= 1
        x13_1 += 4
    while (i != 1)

int32_t x10_2 = *(x10 + x11 * 0x19a8 + 0x1690)
*(gUI2Editor + 0x704c) = i_2.d + 1
*(gUI2Editor + (sx.q(i_2.d) << 2) + 0x604c) = x10_2
