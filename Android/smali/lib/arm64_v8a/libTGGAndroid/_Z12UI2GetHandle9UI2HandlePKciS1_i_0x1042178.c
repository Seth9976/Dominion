// 函数: _Z12UI2GetHandle9UI2HandlePKciS1_i
// 地址: 0x1042178
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x0 = UI2GetHandle(arg1, arg2)

if (x0.d != 0)
    uint64_t x10_1 = zx.q(x0.d) & 0xffff
    int64_t x8_1 = *gUI2
    uint64_t x9_2 = zx.q(*(x8_1 + mulu.dp.d(x10_1.d, 0x19a8) + 0x1970))
    
    if (x9_2.d == 0)
        return 0
    
    if (x9_2.d s> arg3)
        x0 = zx.q(*(x8_1 + x10_1 * 0x19a8 + (sx.q(arg3) << 2) + 0x1870))
    
    if (x9_2.d s<= arg3 || *(x8_1 + (x0 & 0xffff) * 0x19a8 + 0x1658) != arg3)
        if (x9_2.d s< 1)
            return 0
        
        int32_t* x10_3 = x8_1 + x10_1 * 0x19a8 + 0x1870
        
        while (true)
            x0 = zx.q(*x10_3)
            
            if (*(x8_1 + (x0 & 0xffff) * 0x19a8 + 0x1658) == arg3)
                break
            
            uint64_t temp0_1 = x9_2
            x9_2 -= 1
            x10_3 = &x10_3[1]
            
            if (temp0_1 == 1)
                return 0
    
    if (x0.d != 0)
        x0 = UI2GetHandle(x0, arg4)
        
        if (x0.d != 0)
            int64_t x8_2 = *gUI2
            uint64_t x10_4 = zx.q(x0.d) & 0xffff
            uint64_t i_1 = zx.q(*(x8_2 + mulu.dp.d(x10_4.d, 0x19a8) + 0x1970))
            
            if (i_1.d == 0)
                return 0
            
            if (i_1.d s> arg5)
                x0 = zx.q(*(x8_2 + x10_4 * 0x19a8 + (sx.q(arg5) << 2) + 0x1870))
            
            if (i_1.d s<= arg5 || *(x8_2 + (x0 & 0xffff) * 0x19a8 + 0x1658) != arg5)
                if (i_1.d s< 1)
                    return 0
                
                int32_t* x10_6 = x8_2 + x10_4 * 0x19a8 + 0x1870
                uint64_t i
                
                do
                    uint64_t x0_1 = zx.q(*x10_6)
                    
                    if (*(x8_2 + (x0_1 & 0xffff) * 0x19a8 + 0x1658) == arg5)
                        return x0_1
                    
                    x0 = 0
                    i = i_1
                    i_1 -= 1
                    x10_6 = &x10_6[1]
                while (i != 1)

return x0
