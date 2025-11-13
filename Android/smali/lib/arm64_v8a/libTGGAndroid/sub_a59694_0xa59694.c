// 函数: sub_a59694
// 地址: 0xa59694
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = *arg2

if ((AllowedImbalanced(zx.q(x20)) & 1) != 0)
    void* x0_3 = DomDefGet(zx.q(x20), 0x17)
    
    if (*(arg1 + 8) s>= 1)
        int32_t x21 = *(x0_3 + 0xc4)
        int64_t i = 0
        int32_t x8_4
        
        do
            x8_4 = (*(DomDefGet(zx.q(*(arg1 + 0xc + (i << 2))), 0x17) + 0xc4) ^ x21) & 0xffff01ff
            
            if (x8_4 == 0)
                break
            
            i += 1
        while (i s< sx.q(*(arg1 + 8)))
        
        return zx.q(x8_4 == 0 ? 1 : 0)

return 0
