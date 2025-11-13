// 函数: _Z18LimitPlayableCards6CardID
// 地址: 0xad9298
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1

if ((*(CardGet(*(DomGetContext() + 8), zx.q(x19)) + 0xc) & 0xfffffffe) == 0x3ea)
    void* x0_3 = DomGetContext()
    DomGame* x20_1 = *(x0_3 + 8)
    int64_t x21_1 = sx.q(*(x0_3 + 0x18))
    void* x0_4 = DomGetContext()
    
    if ((HasOngoing(*(x0_4 + 8), zx.q(*(x0_4 + 0x18)), 0x19, 0, 0) & 1) != 0
            && *(x20_1 + x21_1 * 0x5a30 + 0x181d0) s> 2)
        return 1
    
    if ((HasOngoing(x20_1, zx.q(x21_1.d), 0x18, 0, 0) & 1) == 0)
        return 0
    
    if ((CardIs(*(DomGetContext() + 8), zx.q(x19), 4) & 1) != 0)
        int32_t var_1930[0x240]
        int32_t var_cb0[0xe0]
        int32_t x0_14 = CountCardTypesWhere(x20_1, zx.q(x21_1.d), 0x3e9, &var_cb0, &var_1930)
        int32_t x0_16 = CardWhat(x20_1, zx.q(x19))
        
        if (x0_14 s>= 1)
            int64_t x8_6 = 0
            int64_t i = 0
            
            do
                if (var_cb0[i] == x0_16)
                    if (i.d != 0xffffffff)
                        return zx.q(*(&var_1930 + (x8_6 s>> 0x1e)) s> 1 ? 1 : 0)
                    
                    break
                
                i += 1
                x8_6 += 0x100000000
            while (zx.q(x0_14) != i)

return 0
