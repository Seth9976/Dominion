// 函数: _Z20FirstTimePlayingCardR7DomGame9PlayerWho11DomCardEnum
// 地址: 0xc01e58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + muls.dp.d(arg2, 0x5a30) + 0x181cc) s>= 1)
    int64_t i = 0
    int32_t x26_1 = 0
    
    do
        uint64_t x28_1 = zx.q(*(arg1 + sx.q(arg2) * 0x5a30 + 0x19b18 + (i << 2)))
        
        if (x28_1.d u>= 0x320)
            void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_8 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
            *(*(x8_8 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_9 = *(x8_8 - 0x90)
            *(x8_9 + 0x1a2c) = *(x8_9 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        if (*(arg1 + x28_1 * 0x68 + 0x1a70) == arg3)
            if (x26_1 s> 0)
                return 0
            
            x26_1 = 1
        
        i += 1
    while (i s< sx.q(*(arg1 + muls.dp.d(arg2, 0x5a30) + 0x181cc)))

return 1
