// 函数: _Z34KingdomSelectImbalancedTwoSameCostP11DomCardEnum
// 地址: 0xa35770
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_88
int32_t x0_1 = CampaignKingdomCardsForImbalancedStart(&var_88)
int32_t x20

if (x0_1 == 0)
label_a3590c:
    int32_t x0_14
    char* x1_5
    x0_14, x1_5 = RollPairOfSameCostCards(gCampaignSetup + 0x19b8, arg1, j_AllowedImbalanced)
    x20 = x0_14
    char* x1_6 = CampaignKingdomAdd(zx.q(*arg1), x1_5, 4, 0)
    CampaignKingdomAdd(zx.q(*(arg1 + 4)), x1_6, 4, 0)
else
    ShuffleIntsN(gCampaignSetup, &var_88, x0_1, x0_1)
    
    if (x0_1 s< 1)
    label_a35854:
        struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<KingdomSelectImbalancedTwoSameCost(DomCardEnum*)::$_37, std::__ndk1::allocator<KingdomSelectImbalancedTwoSameCost(DomCardEnum*)::$_37>, bool (DomCardEnum)>::VTable
            ** x0_7
        int128_t v0_1
        int128_t v1_1
        x0_7, v0_1, v1_1 = operator new(0x38)
        v1_1 = var_88
        x0_7[1].d = x0_1
        struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<KingdomSelectImbalancedTwoSameCost(DomCardEnum*)::$_37, std::__ndk1::allocator<KingdomSelectImbalancedTwoSameCost(DomCardEnum*)::$_37>, bool (DomCardEnum)>::VTable
            ** var_a0_1 = x0_7
        *x0_7 = &_vtable_for_std::__ndk1::__function::__func<KingdomSelectImbalancedTwoSameCost(DomCardEnum*)::$_37, std::__ndk1::allocator<KingdomSelectImbalancedTwoSameCost(DomCardEnum*)::$_37>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
        *(x0_7 + 0xc) = v1_1
        int128_t var_78
        *(x0_7 + 0x1c) = var_78
        int64_t var_68
        *(x0_7 + 0x2c) = var_68
        void var_c0
        int32_t x0_9 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_c0, 0)
        char* x1_3 = (*x0_7)->j_operator delete(x0_7)
        
        if (x0_9 == 0)
            if (*(*(gCampaignSetup + 0x19a0) + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0x2c)
                    == 0)
                goto label_a3590c
            
            x20 = 0
        else
            CampaignKingdomAdd(zx.q(x0_9), x1_3, 4, 0)
            KingdomSelectImbalancedTwoSameCost(arg1)
            x20 = 1
    else
        int64_t x26_1 = 0
        uint64_t x25_1 = zx.q(x0_1)
        int64_t x27_1 = 1
        
        while (true)
            int64_t fp_1 = x27_1
            
            if (x26_1 + 1 u< x25_1)
                while (true)
                    int32_t x22_1 = *(&var_88 + (fp_1 << 2))
                    void* x0_4 = DomDefGet(zx.q(*(&var_88 + (x26_1 << 2))), 0x17)
                    void* x0_6 = DomDefGet(zx.q(x22_1), 0x17)
                    
                    if (*(x0_4 + 0xc4) == *(x0_6 + 0xc4))
                        int32_t x8_2 = *(&var_88 + (zx.q(fp_1.d) << 2))
                        x20 = 1
                        *arg1 = *(&var_88 + (zx.q(x26_1.d) << 2))
                        *(arg1 + 4) = x8_2
                        break
                    
                    fp_1 += 1
                    
                    if (x25_1 == fp_1)
                        goto label_a357d8
                
                break
            
        label_a357d8:
            bool cond:1_1 = x26_1 + 1 == x25_1
            x27_1 += 1
            x26_1 += 1
            
            if (cond:1_1)
                goto label_a35854

return zx.q(x20) & 1
