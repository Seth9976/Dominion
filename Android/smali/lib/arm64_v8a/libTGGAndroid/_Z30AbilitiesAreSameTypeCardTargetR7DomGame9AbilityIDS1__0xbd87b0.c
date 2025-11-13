// 函数: _Z30AbilitiesAreSameTypeCardTargetR7DomGame9AbilityIDS1_
// 地址: 0xbd87b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((arg3 & 0x30) != 0)
    int64_t x21_1 = arg2
    
    if ((arg2 & 0x30) != 0)
        int64_t x20_1 = arg3
        int32_t x8_2 = x21_1.d u>> 4 & 3
        
        if (x8_2 == (x20_1.d u>> 4 & 3))
            int64_t x9_2 = x20_1 ^ x21_1
            
            if ((x9_2 & 0x3ffcf) == 0)
                if (x8_2 == 2)
                    return zx.q(x9_2.d u< 0x40000 ? 1 : 0)
                
                if (x21_1.d u>> 0x17 u>= 0x19)
                    void* x0_4 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_6 = x0_4 + sx.q(*(x0_4 + 0x13000)) * 0x98
                    *(*(x8_6 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_7 = *(x8_6 - 0x90)
                    *(x8_7 + 0x1a2c) = *(x8_7 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                
                int32_t x21_2 = *(arg1 + (x21_1 u>> 0x12 & 0x3fff) * 0x68 + 0x1a70)
                
                if (x20_1.d u>> 0x17 u>= 0x19)
                    void* x0_6 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_13 = x0_6 + sx.q(*(x0_6 + 0x13000)) * 0x98
                    *(*(x8_13 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_14 = *(x8_13 - 0x90)
                    *(x8_14 + 0x1a2c) = *(x8_14 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                
                return zx.q(x21_2 == *(arg1 + (x20_1 u>> 0x12 & 0x3fff) * 0x68 + 0x1a70) ? 1 : 0)

return 0
