// 函数: _Z25IsNthActionTreasureGainedR7DomGame6CardIDRK10DomContext9PlayerWhoi
// 地址: 0xbfd2cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x8 = *(arg3 + 0x80)
int32_t x9 = *x8

if (x9 == 0)
    if (x8[0xc] == arg4)
    label_bfd338:
        uint32_t x22_1 = zx.d(arg2)
        
        if (x22_1 u>= 0x320)
            void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_9 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
            *(*(x8_9 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_10 = *(x8_9 - 0x90)
            *(x8_10 + 0x1a2c) = *(x8_10 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        void* x23_1 = arg1 + mulu.dp.d(x22_1, 0x68)
        int32_t x0_3 = CardIsFast(arg1, zx.q(*(x23_1 + 0x1a70)), 2)
        int32_t x0_7
        
        if ((x0_3 & 1) == 0)
            if (x22_1 u>= 0x320)
                void* x0_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_13 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
                *(*(x8_13 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_14 = *(x8_13 - 0x90)
                *(x8_14 + 0x1a2c) = *(x8_14 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            x0_7 = CardIsFast(arg1, zx.q(*(x23_1 + 0x1a70)), 4)
        
        if ((x0_3 & 1) != 0 || (x0_7 & 1) != 0)
            return zx.q(*(*(arg3 + 0x80) + 0x28) == arg5 - 1 ? 1 : 0)
else if (x9 != 2)
    if (x9 != 1)
        pthread_kill(pthread_self(), 6)
        DomGame* x0_11
        int64_t x1_2
        DomContext* x2
        int64_t x3
        int32_t x4
        x0_11, x1_2, x2, x3, x4 = XNoReturn()
        return IsNthTreasureGained(x0_11, x1_2, x2, x3, x4) __tailcall
    
    if (x8[2] == arg4)
        goto label_bfd338
else if (x8[4] == arg4)
    goto label_bfd338

return 0
