// 函数: _Z20UI2ElementByIndexRecR3UI2P6XAsseti
// 地址: 0x102b6e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x1688) != 0 && *(arg1 + 0x1690) == arg3 && *(arg1 + 0x17d0) != 0)
    return arg1

int32_t x22_1 = *(arg1 + 0x1970)

if (x22_1 != 0)
    uint64_t x25_1 = 0
    int64_t x23_1 = *gUI2
    bool cond:0_1
    
    do
        uint64_t x8_6 = zx.q(*(arg1 + (x25_1 << 0x20 s>> 0x1e) + 0x1870))
        
        if (*(x23_1 + x8_6 * 0x19a8 + 0x1688) == arg2)
            UI2* x0_1 = UI2ElementByIndexRec(x23_1 + x8_6 * 0x19a8, arg2, arg3)
            
            if (x0_1 != 0)
                return x0_1
        
        cond:0_1 = x22_1 == x25_1.d + 1
        x25_1 = zx.q(x25_1.d + 1)
    while (not(cond:0_1))

return nullptr
