// 函数: _Z12UI2GetHandle9UI2HandlePKci
// 地址: 0x10420c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result = UI2GetHandle(arg1, arg2)

if (result.d != 0)
    uint64_t x10_1 = zx.q(result.d) & 0xffff
    int64_t x8_1 = *gUI2
    uint64_t x9_2 = zx.q(*(x8_1 + mulu.dp.d(x10_1.d, 0x19a8) + 0x1970))
    
    if (x9_2.d == 0)
        return 0
    
    if (x9_2.d s> arg3)
        result = zx.q(*(x8_1 + x10_1 * 0x19a8 + (sx.q(arg3) << 2) + 0x1870))
    
    if (x9_2.d s<= arg3 || *(x8_1 + (result & 0xffff) * 0x19a8 + 0x1658) != arg3)
        if (x9_2.d s< 1)
            return 0
        
        int32_t* x10_3 = x8_1 + x10_1 * 0x19a8 + 0x1870
        
        while (true)
            result = zx.q(*x10_3)
            
            if (*(x8_1 + (result & 0xffff) * 0x19a8 + 0x1658) == arg3)
                return result
            
            uint64_t temp0_1 = x9_2
            x9_2 -= 1
            x10_3 = &x10_3[1]
            
            if (temp0_1 == 1)
                return 0

return result
