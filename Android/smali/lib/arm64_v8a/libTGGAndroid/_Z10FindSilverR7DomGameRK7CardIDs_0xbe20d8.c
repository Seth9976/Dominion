// 函数: _Z10FindSilverR7DomGameRK7CardIDs
// 地址: 0xbe20d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg2 + 0xc80) s>= 1)
    int64_t i = 0
    
    do
        uint64_t x28_1 = zx.q(*(arg2 + (i << 2)))
        
        if (x28_1.d u>= 0x320)
            void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_4 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
            *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_5 = *(x8_4 - 0x90)
            *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        if (*(arg1 + x28_1 * 0x68 + 0x1a70) == 0x105)
            return zx.q(*(arg2 + (i << 2)))
        
        i += 1
    while (i s< sx.q(*(arg2 + 0xc80)))

return 0
