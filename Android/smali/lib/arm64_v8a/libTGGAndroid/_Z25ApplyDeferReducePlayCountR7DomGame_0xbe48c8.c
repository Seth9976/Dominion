// 函数: _Z25ApplyDeferReducePlayCountR7DomGame
// 地址: 0xbe48c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x1a10) s>= 1)
    int64_t i = 0
    void* __offset(DomGame, 0x3a908) x27_1 = arg1 + 0x3a908
    
    do
        uint64_t x28_1 = zx.q(*x27_1)
        
        if (x28_1.d u>= 0x320)
            void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_4 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
            *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_5 = *(x8_4 - 0x90)
            *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        if (*(arg1 + x28_1 * 0x68 + 0x1a78) != *(x27_1 + 4))
            return 
        
        int32_t x8_8 = *(arg1 + 0x150c)
        
        if (x8_8 - 3 u>= 4)
            int64_t var_68_1 = 0
            int32_t var_70_1 = 0
            int32_t var_78_1 = 0
            int32_t var_80_1 = 0
            DomNotifyEffect(zx.q(x8_8 == 2 ? 1 : 0), 0x17, 0xffffffff, zx.q(*x27_1), 0, 0xffffffff, 
                0xffffffff, 0)
            int32_t x8_9 = *(arg1 + 0x150c)
            
            if (x8_9 - 3 u>= 4)
                int64_t var_68_2 = 0
                int32_t var_70_2 = 0
                int32_t var_78_2 = 0
                int32_t var_80_2 = 0
                DomNotifyEffect(zx.q(x8_9 == 2 ? 1 : 0), 0x16, 0xffffffff, zx.q(*x27_1), 3, 0, 0, 0)
        
        i += 1
        x27_1 += 8
    while (i s< sx.q(*(arg1 + 0x1a10)))

*(arg1 + 0x1a10) = 0
