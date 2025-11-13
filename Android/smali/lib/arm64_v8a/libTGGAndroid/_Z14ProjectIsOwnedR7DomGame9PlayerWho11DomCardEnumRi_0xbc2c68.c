// 函数: _Z14ProjectIsOwnedR7DomGame9PlayerWho11DomCardEnumRi
// 地址: 0xbc2c68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg4 = 0

if (*(arg1 + 0x19ac) s>= 1)
    int32_t x21_1 = arg2
    
    if (arg3 != 0xe26)
        int64_t i = 0
        void* __offset(DomGame, 0x15f68) x28_1 = arg1 + 0x15f68
        
        do
            if (*(x28_1 + 4) == x21_1 && *x28_1 == 0xe01)
                uint64_t x1_1 = zx.q(*(x28_1 + 8))
                
                if (x1_1.d != 0x3f1)
                    uint32_t x23_1 = zx.d(BoardPileTop(arg1, x1_1))
                    
                    if (x23_1 u>= 0x320)
                        void* x0_7 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_17 = x0_7 + sx.q(*(x0_7 + 0x13000)) * 0x98
                        *(*(x8_17 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_18 = *(x8_17 - 0x90)
                        *(x8_18 + 0x1a2c) = *(x8_18 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        XTrace("game thread resume (error)")
                    
                    if (*(arg1 + mulu.dp.d(x23_1, 0x68) + 0x1a70) == arg3)
                        *arg4 += *(x28_1 + 0x14)
            
            i += 1
            x28_1 += 0x20
        while (i s< sx.q(*(arg1 + 0x19ac)))
    else
        int64_t i_1 = 0
        void* __offset(DomGame, 0x15f6c) fp_1 = arg1 + 0x15f6c
        
        do
            if (*fp_1 == x21_1 && *(fp_1 - 4) == 0xe01)
                uint64_t x1 = zx.q(*(fp_1 + 4))
                
                if (x1.d != 0x3f1)
                    uint32_t x27_1 = zx.d(BoardPileTop(arg1, x1))
                    
                    if (x27_1 u>= 0x320)
                        void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_6 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
                        *(*(x8_6 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_7 = *(x8_6 - 0x90)
                        *(x8_7 + 0x1a2c) = *(x8_7 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        XTrace("game thread resume (error)")
                    
                    if (*(arg1 + mulu.dp.d(x27_1, 0x68) + 0x1a70) == 0xe26)
                        *arg4 += 1
            
            i_1 += 1
            fp_1 += 0x20
        while (i_1 s< sx.q(*(arg1 + 0x19ac)))

return zx.q(*arg4 != 0 ? 1 : 0)
