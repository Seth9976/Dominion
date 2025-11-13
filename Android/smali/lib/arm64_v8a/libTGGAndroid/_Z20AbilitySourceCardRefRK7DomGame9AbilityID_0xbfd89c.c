// 函数: _Z20AbilitySourceCardRefRK7DomGame9AbilityID
// 地址: 0xbfd89c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = arg2
int32_t x8_1

switch (x20.d u>> 4 & 3)
    case 0
        void* x0_1 = AbilityGetRegistered(arg1, x20 & 0xffffffff)
        x20 = zx.q(*(x0_1 + 0x1c))
        x8_1 = *(x0_1 + 0x20)
    case 1
        if (x20.d u>> 0x17 u>= 0x19)
            void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_5 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
            *(*(x8_5 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_6 = *(x8_5 - 0x90)
            *(x8_6 + 0x1a2c) = *(x8_6 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        x20 = x20 u>> 0x12 & 0x3fff
        x8_1 = *(arg1 + x20 * 0x68 + 0x1a78)
    case 2
        uint64_t x8_8 = zx.q(*(arg1 + 0x1528))
        
        if (x8_8.d s< 1)
        label_bfd984:
            x20 = 0
            x8_1 = 0
        else
            int64_t x21_1 = 0
            void* __offset(DomGame, 0x1a70) x10_1 = arg1 + 0x1a70
            
            while (*x10_1 != x20.d u>> 0x12)
                x21_1 += 1
                x10_1 += 0x68
                
                if (x8_8 == x21_1)
                    goto label_bfd984
            
            int32_t x20_1 = x21_1.d & 0xffff
            
            if (x20_1 u>= 0x320)
                void* x0_10 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_17 = x0_10 + sx.q(*(x0_10 + 0x13000)) * 0x98
                *(*(x8_17 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_18 = *(x8_17 - 0x90)
                *(x8_18 + 0x1a2c) = *(x8_18 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            x8_1 = *(arg1 + mulu.dp.d(x20_1, 0x68) + 0x1a78)
            x20 = zx.q(x21_1.d)
    case 3
        int32_t x0_5 = TokenCardSource(arg1, zx.q(x20.d u>> 0x12))
        uint64_t x9_4 = zx.q(*(arg1 + 0x1528))
        
        if (x9_4.d s< 1)
        label_bfda40:
            pthread_kill(pthread_self(), 6)
            XNoReturn()
        else
            x20 = 0
            int64_t x8_9 = sx.q(x9_4.d)
            void* __offset(DomGame, 0x1a70) x10_2 = arg1 + 0x1a70
            
            do
                if (*x10_2 == x0_5)
                    goto label_bfda48
                
                x20 += 1
                x10_2 += 0x68
            while (x9_4 != x20)
            
            if (x9_4.d s< 1)
                goto label_bfda40
            
            x20 = 0
            void* __offset(DomGame, 0x1a70) x9_5 = arg1 + 0x1a70
            
            do
                if (*x9_5 == 0xb38)
                    goto label_bfda48
                
                x20 += 1
                x9_5 += 0x68
            while (x20 s< x8_9)
            
            if (x8_9.d s< 1)
                goto label_bfda40
            
            x20 = 0
            void* __offset(DomGame, 0x1a70) x9_6 = arg1 + 0x1a70
            
            while (*x9_6 != 0x1222)
                x20 += 1
                x9_6 += 0x68
                
                if (x20 s>= x8_9)
                    goto label_bfda40
        
    label_bfda48:
        int32_t x21_2 = x20.d & 0xffff
        
        if (x21_2 u>= 0x320)
            void* x0_8 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_12 = x0_8 + sx.q(*(x0_8 + 0x13000)) * 0x98
            *(*(x8_12 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_13 = *(x8_12 - 0x90)
            *(x8_13 + 0x1a2c) = *(x8_13 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        x8_1 = *(arg1 + mulu.dp.d(x21_2, 0x68) + 0x1a78)

return zx.q(x20.d) | zx.q(x8_1) << 0x20
