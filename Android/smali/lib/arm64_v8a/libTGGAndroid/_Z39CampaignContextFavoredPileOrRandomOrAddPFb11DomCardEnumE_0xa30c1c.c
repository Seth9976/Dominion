// 函数: _Z39CampaignContextFavoredPileOrRandomOrAddPFb11DomCardEnumE
// 地址: 0xa30c1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(gCampaignSetup + 0x19ac)

if (x8 == 0)
    int64_t x23_1 = *(gCampaignSetup + 0x19a0)
    int64_t x24_1 = sx.q(*(gCampaignSetup + 0x19a8))
    int32_t x20_1 = *(x23_1 + (x24_1 << 0xb) + 0xc)
    int32_t var_68[0xa]
    int32_t x8_22
    
    if (x20_1 == 0)
    label_a30df8:
        x8_22 = x20_1 s< 1 ? 1 : 0
        
        if (x20_1 s<= 0)
            struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignContextFavoredPileOrRandomOrAdd(bool (*)(DomCardEnum))::$_10, std::__ndk1::allocator<CampaignContextFavoredPileOrRandomOrAdd(bool (*)(DomCardEnum))::$_10>, bool (DomCardEnum)>::VTable
                * const var_a0 = &_vtable_for_std::__ndk1::__function::__func<CampaignContextFavoredPileOrRandomOrAdd(bool (*)(DomCardEnum))::$_10, std::__ndk1::allocator<CampaignContextFavoredPileOrRandomOrAdd(bool (*)(DomCardEnum))::$_10>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
            bool (* var_98_1)(DomCardEnum) = arg1
            struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignContextFavoredPileOrRandomOrAdd(bool (*)(DomCardEnum))::$_10, std::__ndk1::allocator<CampaignContextFavoredPileOrRandomOrAdd(bool (*)(DomCardEnum))::$_10>, bool (DomCardEnum)>::VTable
                * const* var_80_1 = &var_a0
            int32_t x0_21
            char* x1_2
            x0_21, x1_2 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_a0, 0)
            
            if (&var_a0 == var_80_1)
                x1_2 = (*var_80_1)->vFunc_4(var_80_1)
            else if (var_80_1 != 0)
                x1_2 = (*var_80_1)->j_operator delete(var_80_1)
            
            CampaignKingdomAdd(zx.q(x0_21), x1_2, 4, 0)
            x8_22 = 0
            x20_1 = 1
            var_68[0] = x0_21
    else
        int32_t x21_1
        
        if ((arg1(zx.q(x20_1)) & 1) != 0)
            var_68[0] = x20_1
            x20_1 = 1
            x21_1 = *(x23_1 + (x24_1 << 0xb) + 0x10)
            
            if (x21_1 != 0)
                goto label_a30c90
            
            goto label_a30df8
        
        x20_1 = 0
        x21_1 = *(x23_1 + (x24_1 << 0xb) + 0x10)
        
        if (x21_1 == 0)
            goto label_a30df8
        
    label_a30c90:
        
        if ((arg1(zx.q(x21_1)) & 1) != 0)
            var_68[zx.q(x20_1)] = x21_1
            x20_1 += 1
        
        int32_t x21_2 = *(x23_1 + (x24_1 << 0xb) + 0x14)
        
        if (x21_2 == 0)
            goto label_a30df8
        
        if ((arg1(zx.q(x21_2)) & 1) != 0)
            var_68[zx.q(x20_1)] = x21_2
            x20_1 += 1
        
        int32_t x21_3 = *(x23_1 + (x24_1 << 0xb) + 0x18)
        
        if (x21_3 == 0)
            goto label_a30df8
        
        if ((arg1(zx.q(x21_3)) & 1) != 0)
            var_68[zx.q(x20_1)] = x21_3
            x20_1 += 1
        
        int32_t x21_4 = *(x23_1 + (x24_1 << 0xb) + 0x1c)
        
        if (x21_4 == 0)
            goto label_a30df8
        
        if ((arg1(zx.q(x21_4)) & 1) != 0)
            var_68[zx.q(x20_1)] = x21_4
            x20_1 += 1
        
        int32_t x21_5 = *(x23_1 + (x24_1 << 0xb) + 0x20)
        
        if (x21_5 == 0)
            goto label_a30df8
        
        if ((arg1(zx.q(x21_5)) & 1) != 0)
            var_68[zx.q(x20_1)] = x21_5
            x20_1 += 1
        
        int32_t x21_6 = *(x23_1 + (x24_1 << 0xb) + 0x24)
        
        if (x21_6 == 0)
            goto label_a30df8
        
        if ((arg1(zx.q(x21_6)) & 1) != 0)
            var_68[zx.q(x20_1)] = x21_6
            x20_1 += 1
        
        int32_t x21_7 = *(x23_1 + (x24_1 << 0xb) + 0x28)
        
        if (x21_7 == 0)
            goto label_a30df8
        
        if ((arg1(zx.q(x21_7)) & 1) != 0)
            var_68[zx.q(x20_1)] = x21_7
            x20_1 += 1
        
        int32_t x21_8 = *(x23_1 + (x24_1 << 0xb) + 0x2c)
        
        if (x21_8 == 0)
            goto label_a30df8
        
        if ((arg1(zx.q(x21_8)) & 1) != 0)
            var_68[zx.q(x20_1)] = x21_8
            x20_1 += 1
        
        int32_t x21_9 = *(x23_1 + (x24_1 << 0xb) + 0x30)
        
        if (x21_9 == 0)
            goto label_a30df8
        
        if ((arg1(zx.q(x21_9)) & 1) != 0)
            var_68[zx.q(x20_1)] = x21_9
            x20_1 += 1
        
        x8_22 = x20_1 s< 1 ? 1 : 0
    
    uint64_t x19_3
    
    if (x8_22 != 0)
        x19_3 = zx.q(x20_1)
    else
        x19_3 = 1
    
    ShuffleIntsN(gCampaignSetup, &var_68, x20_1, x19_3.d)
    int32_t var_34
    memcpy(&var_34, &var_68, x19_3 << 2)
    x8 = var_34

return zx.q(x8)
