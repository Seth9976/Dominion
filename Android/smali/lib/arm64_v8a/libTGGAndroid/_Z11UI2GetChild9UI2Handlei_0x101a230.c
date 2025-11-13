// 函数: _Z11UI2GetChild9UI2Handlei
// 地址: 0x101a230
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x10 = zx.q(arg1)
int64_t x8 = *gUI2
uint64_t x9_1 = zx.q(*(x8 + mulu.dp.d(x10.d, 0x19a8) + 0x1970))

if (x9_1.d != 0)
    uint64_t result
    
    if (x9_1.d s> arg2)
        result = zx.q(*(x8 + x10 * 0x19a8 + (sx.q(arg2) << 2) + 0x1870))
        
        if (*(x8 + (result & 0xffff) * 0x19a8 + 0x1658) == arg2)
            return result
    
    if (x9_1.d s>= 1)
        int32_t* x10_2 = x8 + x10 * 0x19a8 + 0x1870
        
        while (true)
            result = zx.q(*x10_2)
            
            if (*(x8 + (result & 0xffff) * 0x19a8 + 0x1658) == arg2)
                return result
            
            uint64_t temp0_1 = x9_1
            x9_1 -= 1
            x10_2 = &x10_2[1]
            
            if (temp0_1 == 1)
                return 0

return 0
