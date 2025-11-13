// 函数: _Z11UI2IsHidden9UI2Handle
// 地址: 0x1043468
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 != 0)
    int32_t x10_1 = arg1 & 0xffff
    
    if (x10_1 u< *(gUI2 + 8))
        int64_t x9_1 = *gUI2
        
        if (x9_1 == 0 || *(x9_1 + mulu.dp.d(x10_1, 0x19a8) + 0x19a0) != arg1)
            return 1
        
        uint64_t x8_2 = zx.q(x10_1)
        
        if (*(x9_1 + x8_2 * 0x19a8 + 0x1710) f!= 0f)
            uint64_t x8_4
            
            if (*(x9_1 + x8_2 * 0x19a8 + 0x1970) == 1)
                x8_4 = zx.q(*(x9_1 + x8_2 * 0x19a8 + 0x1870))
                
                if (*(x9_1 + x8_4 * 0x19a8 + 0x1658) != 0)
                    if (*(x9_1 + mulu.dp.d(x8_4.d, 0x19a8) + 0x1658) == 0)
                        x8_4 = zx.q(x8_4.d)
                    else
                        x8_4 = 0
            
            if (*(x9_1 + x8_2 * 0x19a8 + 0x1970) != 1
                    || not(*(x9_1 + x8_4 * 0x19a8 + 0x1710) f== 0f))
                return 0

return 1
