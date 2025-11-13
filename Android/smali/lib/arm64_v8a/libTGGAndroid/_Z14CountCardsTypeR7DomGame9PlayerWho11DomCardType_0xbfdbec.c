// 函数: _Z14CountCardsTypeR7DomGame9PlayerWho11DomCardType
// 地址: 0xbfdbec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21

if (*(arg1 + 0x1528) s< 2)
    x21 = 0
else
    x21 = 0
    int32_t i = 1
    
    do
        int32_t x28_1 = i & 0xffff
        
        if (x28_1 u>= 0x320)
            void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_4 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
            *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_5 = *(x8_4 - 0x90)
            *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        if (*(arg1 + mulu.dp.d(x28_1, 0x68) + 0x1a94) == arg2)
            uint64_t x1 = zx.q(*(arg1 + zx.q(x28_1) * 0x68 + 0x1a70))
            
            if (x1.d != 0)
                x21 += CardIsFast(arg1, x1, arg3) & 1
        
        i += 1
    while (i s< *(arg1 + 0x1528))

return zx.q(x21)
