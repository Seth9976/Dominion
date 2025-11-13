// 函数: _Z23RollPairOfSameCostCardsR14RandomizerDeckP11DomCardEnumPFbS1_E
// 地址: 0xa35458
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22_2

if (*(arg1 + 0xc80) s< 1)
    x22_2 = 1
else
    int64_t i = 0
    int32_t i_8 = 0
    void var_1d8
    int128_t v0_1
    int128_t v1_1
    int128_t v2_1
    int128_t v3_1
    int128_t v4_1
    int128_t v5_1
    
    do
        int32_t x22_1 = *(arg1 + (i << 2))
        int32_t x0_1
        x0_1, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1 = arg3(zx.q(x22_1))
        
        if ((x0_1 & 1) != 0)
            void* x0_3
            x0_3, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1 = DomDefGet(zx.q(x22_1), 0x17)
            int32_t j = *(x0_3 + 0xc4) & 0xffff01ff
            void var_1e0
            int64_t i_9
            int32_t x10_1
            
            if (i_8 s< 1)
            label_a354a4:
                void* x11_1 = &var_1e0 + muls.dp.d(i_8, 0xc)
                x10_1 = 0
                i_9 = sx.q(i_8)
                *(x11_1 + 4) = 0
                *(x11_1 + 8) = 0
                *x11_1 = j
                i_8 += 1
            else
                i_9 = 0
                void* x11_2 = &var_1d8
                
                while (*(x11_2 - 8) != j)
                    i_9 += 1
                    x11_2 += 0xc
                    
                    if (zx.q(i_8) == i_9)
                        goto label_a354a4
                
                x10_1 = *x11_2
            
            *(&var_1e0 + i_9 * 0xc + 8) = x10_1 + 1
        
        i += 1
    while (i s< sx.q(*(arg1 + 0xc80)))
    
    if (i_8 s< 1)
        x22_2 = 1
    else
        int32_t x8_4 = 0
        uint64_t i_5 = zx.q(i_8)
        void* x10_3 = &var_1d8
        int32_t var_2e0[0x8]
        uint64_t i_1
        
        do
            int32_t x12_3 = *x10_3
            
            if (x12_3 s>= 2)
                int32_t x14_1 = *(x10_3 - 8)
                void* x13_1 = &var_2e0[sx.q(x8_4) * 2]
                x8_4 += 1
                *x13_1 = (x12_3 - 1) * x12_3
                *(x13_1 + 4) = x14_1
            
            i_1 = i_5
            i_5 -= 1
            x10_3 += 0xc
        while (i_1 != 1)
        x22_2 = x8_4 == 0 ? 1 : 0
        
        if (x8_4 == 0)
            x22_2 = 1
        else
            if (x8_4 s<= 0)
                RandomInt(gCampaignSetup, 0)
                pthread_kill(pthread_self(), 6)
                return KingdomSelectImbalancedTwoSameCost(XNoReturn()) __tailcall
            
            uint64_t x23_1 = zx.q(x8_4)
            int32_t x1
            int64_t i_7
            
            if (x8_4 u> 8)
                int64_t x8_6
                
                if ((x23_1 & 7) == 0)
                    x8_6 = 8
                else
                    x8_6 = x23_1 & 7
                
                i_7 = x23_1 - x8_6
                v0_1.q = 0
                v0_1:8.q = 0
                void var_2c0
                void* x9_2 = &var_2c0
                int64_t i_6 = i_7
                v1_1.q = 0
                v1_1:8.q = 0
                int64_t i_2
                
                do
                    v2_1.d = *x9_2
                    v3_1.d = *(x9_2 + 4)
                    v2_1:4.d = *(x9_2 + 8)
                    v3_1:4.d = *(x9_2 + 0xc)
                    v2_1:8.d = *(x9_2 + 0x10)
                    v3_1:8.d = *(x9_2 + 0x14)
                    v2_1:0xc.d = *(x9_2 + 0x18)
                    v3_1:0xc.d = *(x9_2 + 0x1c)
                    v4_1.d = *(x9_2 - 0x20)
                    v5_1.d = *(x9_2 - 0x1c)
                    v4_1:4.d = *(x9_2 - 0x18)
                    v5_1:4.d = *(x9_2 - 0x14)
                    v4_1:8.d = *(x9_2 - 0x10)
                    v5_1:8.d = *(x9_2 - 0xc)
                    v4_1:0xc.d = *(x9_2 - 8)
                    v5_1:0xc.d = *(x9_2 - 4)
                    i_2 = i_6
                    i_6 -= 8
                    x9_2 += 0x40
                    v1_1 += v2_1
                    v0_1 += v4_1
                while (i_2 != 8)
                uint128_t v0_2
                v0_2.d = vaddvq_u32(v1_1 + v0_1)
                x1 = v0_2.d
            else
                i_7 = 0
                x1 = 0
            
            void* x9_3 = &var_2e0[i_7 * 2]
            int64_t i_4 = x23_1 - i_7
            int64_t i_3
            
            do
                int32_t x10_4 = *x9_3
                x9_3 += 8
                i_3 = i_4
                i_4 -= 1
                x1 += x10_4
            while (i_3 != 1)
            int32_t x0_6 = RandomInt(gCampaignSetup, x1)
            int64_t x8_7 = 0
            int32_t x9_4 = 0
            int32_t (* x10_5)[0x8] = &var_2e0
            
            while (true)
                x9_4 += *x10_5
                
                if (x0_6 s< x9_4)
                    break
                
                x8_7 += 1
                x10_5 = &(*x10_5)[2]
                
                if (x23_1 == x8_7)
                    pthread_kill(pthread_self(), 6)
                    x8_7 = XNoReturn()
                    break
            
            uint64_t x23_2 = zx.q(var_2e0[zx.q(x8_7.d) * 2 + 1])
            struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<RollPairOfSameCostCards(RandomizerDeck&, DomCardEnum*, bool (*)(DomCardEnum))::$_35, std::__ndk1::allocator<RollPairOfSameCostCards(RandomizerDeck&, DomCardEnum*, bool (*)(DomCardEnum))::$_35>, bool (DomCardEnum)>::VTable
                * const var_310 = &_vtable_for_std::__ndk1::__function::__func<RollPairOfSameCostCards(RandomizerDeck&, DomCardEnum*, bool (*)(DomCardEnum))::$_35, std::__ndk1::allocator<RollPairOfSameCostCards(RandomizerDeck&, DomCardEnum*, bool (*)(DomCardEnum))::$_35>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
            bool (* var_308_1)(DomCardEnum) = arg3
            uint64_t var_300_1 = x23_2
            struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<RollPairOfSameCostCards(RandomizerDeck&, DomCardEnum*, bool (*)(DomCardEnum))::$_35, std::__ndk1::allocator<RollPairOfSameCostCards(RandomizerDeck&, DomCardEnum*, bool (*)(DomCardEnum))::$_35>, bool (DomCardEnum)>::VTable
                * const* var_2f0_1 = &var_310
            *arg2 = RandomizerDeck_DrawOneFilter(arg1, &var_310, 0)
            
            if (&var_310 == var_2f0_1)
                (*var_2f0_1)->vFunc_4()
            else if (var_2f0_1 != 0)
                (*var_2f0_1)->j_operator delete()
            
            var_310 = &_vtable_for_std::__ndk1::__function::__func<RollPairOfSameCostCards(RandomizerDeck&, DomCardEnum*, bool (*)(DomCardEnum))::$_35, std::__ndk1::allocator<RollPairOfSameCostCards(RandomizerDeck&, DomCardEnum*, bool (*)(DomCardEnum))::$_35>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
            bool (* var_308_2)(DomCardEnum) = arg3
            uint64_t var_300_2 = x23_2
            struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<RollPairOfSameCostCards(RandomizerDeck&, DomCardEnum*, bool (*)(DomCardEnum))::$_35, std::__ndk1::allocator<RollPairOfSameCostCards(RandomizerDeck&, DomCardEnum*, bool (*)(DomCardEnum))::$_35>, bool (DomCardEnum)>::VTable
                * const* var_2f0_2 = &var_310
            *(arg2 + 4) = RandomizerDeck_DrawOneFilter(arg1, &var_310, 0)
            
            if (&var_310 == var_2f0_2)
                (*var_2f0_2)->vFunc_4()
            else if (var_2f0_2 != 0)
                (*var_2f0_2)->j_operator delete()

return zx.q(x22_2) ^ 1
