// 函数: _Z11UI2GetChildRK3UI2i
// 地址: 0x101a2ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_1 = zx.q(*(arg1 + 0x1970))

if (i_1.d != 0)
    uint64_t x10_2
    
    if (i_1.d s> arg2)
        x10_2 = zx.q(*(arg1 + (sx.q(arg2) << 2) + 0x1870))
    
    if (i_1.d s> arg2 && *(*gUI2 + x10_2 * 0x19a8 + 0x1658) == arg2)
        return *gUI2 + mulu.dp.d(x10_2.d, 0x19a8)
    
    if (i_1.d s>= 1)
        void* __offset(UI2, 0x1870) x11_4 = arg1 + 0x1870
        uint64_t i
        
        do
            uint64_t x13_1 = zx.q(*x11_4)
            
            if (*(*gUI2 + x13_1 * 0x19a8 + 0x1658) == arg2)
                return *gUI2 + mulu.dp.d(x13_1.d, 0x19a8)
            
            i = i_1
            i_1 -= 1
            x11_4 += 4
        while (i != 1)
        return *gUI2 + mulu.dp.d(0.d, 0x19a8)

return *gUI2
