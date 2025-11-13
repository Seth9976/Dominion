// 函数: _Z23Corsair_ReplacementHint6CardID
// 地址: 0xacca24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = CardIs(arg1, 0x105)
int32_t x0_2

if ((x0 & 1) == 0)
    x0_2 = CardIs(zx.q(arg1.d), 0x106)

if ((x0 & 1) != 0 || (x0_2 & 1) != 0)
    void* x10_1 = *(DomGetContext() + 8)
    uint64_t i_1 = zx.q(*(x10_1 + 0x19c0))
    
    if (i_1.d s>= 1)
        void* x10_2 = x10_1 + 0x3c294
        uint64_t i
        
        do
            if (*(x10_2 - 0x74) == *(x10_1 + 0x19d4) && *x10_2 == 0xe)
                void* x0_4 = DomGetContext()
                int64_t x8_1 = sx.q(*(x0_4 + 0x18))
                DomGame* x19_1 = *(x0_4 + 8)
                
                if (*(x19_1 + x8_1 * 0x5a30 + 0x181cc) s< 1)
                    return 1
                
                int64_t x22_1 = 0
                
                while (true)
                    int32_t x20_1 = *(x19_1 + x8_1 * 0x5a30 + 0x19b18 + (x22_1 << 2))
                    
                    if ((CardIs(x19_1, zx.q(x20_1), 0x105) & 1) != 0)
                        return 0
                    
                    if ((CardIs(x19_1, zx.q(x20_1), 0x106) & 1) != 0)
                        return 0
                    
                    x22_1 += 1
                    
                    if (x22_1 s>= sx.q(*(x19_1 + x8_1 * 0x5a30 + 0x181cc)))
                        return 1
            
            i = i_1
            i_1 -= 1
            x10_2 += 0xb8
        while (i != 1)

return 0
