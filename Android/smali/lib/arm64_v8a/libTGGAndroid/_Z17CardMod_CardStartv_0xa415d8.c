// 函数: _Z17CardMod_CardStartv
// 地址: 0xa415d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x1 = zx.q(*(gCampaignSetup + 0x19ac))

if (x1.d == 0)
    int64_t x22_1 = *(gCampaignSetup + 0x19a0)
    int64_t x23_1 = sx.q(*(gCampaignSetup + 0x19a8))
    int32_t x19_1 = *(x22_1 + (x23_1 << 0xb) + 0xc)
    int32_t var_5c[0xa]
    int32_t x19_2
    int32_t x20_10
    
    if (x19_1 == 0)
    label_a417cc:
        struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignContextFavoredPileOrRandomOrAdd(bool (*)(DomCardEnum))::$_10, std::__ndk1::allocator<CampaignContextFavoredPileOrRandomOrAdd(bool (*)(DomCardEnum))::$_10>, bool (DomCardEnum)>::VTable
            * const var_90 = &_vtable_for_std::__ndk1::__function::__func<CampaignContextFavoredPileOrRandomOrAdd(bool (*)(DomCardEnum))::$_10, std::__ndk1::allocator<CampaignContextFavoredPileOrRandomOrAdd(bool (*)(DomCardEnum))::$_10>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
        uint64_t (* var_88_1)(int64_t arg1) = sub_a58a84
        struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignContextFavoredPileOrRandomOrAdd(bool (*)(DomCardEnum))::$_10, std::__ndk1::allocator<CampaignContextFavoredPileOrRandomOrAdd(bool (*)(DomCardEnum))::$_10>, bool (DomCardEnum)>::VTable
            * const* var_70_1 = &var_90
        int32_t x0_22
        char* x1_2
        x0_22, x1_2 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_90, 0)
        
        if (&var_90 == var_70_1)
            x1_2 = (*var_70_1)->vFunc_4(var_70_1)
        else if (var_70_1 != 0)
            x1_2 = (*var_70_1)->j_operator delete(var_70_1)
        
        CampaignKingdomAdd(zx.q(x0_22), x1_2, 4, 0)
        var_5c[0] = x0_22
        x19_2 = 1
        x20_10 = 1
    else
        int32_t x20_1
        
        if ((IsLandscape(zx.q(x19_1)) & 1) != 0)
            x19_2 = 0
            x20_1 = *(x22_1 + (x23_1 << 0xb) + 0x10)
            
            if (x20_1 != 0)
                goto label_a41644
            
            goto label_a417a0
        
        var_5c[0] = x19_1
        x19_2 = 1
        x20_1 = *(x22_1 + (x23_1 << 0xb) + 0x10)
        
        if (x20_1 == 0)
        label_a417a0:
            
            if (x19_2 s<= 0)
                goto label_a417cc
            
            x20_10 = 1
        else
        label_a41644:
            
            if ((IsLandscape(zx.q(x20_1)) & 1) == 0)
                var_5c[zx.q(x19_2)] = x20_1
                x19_2 += 1
            
            int32_t x20_2 = *(x22_1 + (x23_1 << 0xb) + 0x14)
            
            if (x20_2 == 0)
                goto label_a417a0
            
            if ((IsLandscape(zx.q(x20_2)) & 1) == 0)
                var_5c[zx.q(x19_2)] = x20_2
                x19_2 += 1
            
            int32_t x20_3 = *(x22_1 + (x23_1 << 0xb) + 0x18)
            
            if (x20_3 == 0)
                goto label_a417a0
            
            if ((IsLandscape(zx.q(x20_3)) & 1) == 0)
                var_5c[zx.q(x19_2)] = x20_3
                x19_2 += 1
            
            int32_t x20_4 = *(x22_1 + (x23_1 << 0xb) + 0x1c)
            
            if (x20_4 == 0)
                goto label_a417a0
            
            if ((IsLandscape(zx.q(x20_4)) & 1) == 0)
                var_5c[zx.q(x19_2)] = x20_4
                x19_2 += 1
            
            int32_t x20_5 = *(x22_1 + (x23_1 << 0xb) + 0x20)
            
            if (x20_5 == 0)
                goto label_a417a0
            
            if ((IsLandscape(zx.q(x20_5)) & 1) == 0)
                var_5c[zx.q(x19_2)] = x20_5
                x19_2 += 1
            
            int32_t x20_6 = *(x22_1 + (x23_1 << 0xb) + 0x24)
            
            if (x20_6 == 0)
                goto label_a417a0
            
            if ((IsLandscape(zx.q(x20_6)) & 1) == 0)
                var_5c[zx.q(x19_2)] = x20_6
                x19_2 += 1
            
            int32_t x20_7 = *(x22_1 + (x23_1 << 0xb) + 0x28)
            
            if (x20_7 == 0)
                goto label_a417a0
            
            if ((IsLandscape(zx.q(x20_7)) & 1) == 0)
                var_5c[zx.q(x19_2)] = x20_7
                x19_2 += 1
            
            int32_t x20_8 = *(x22_1 + (x23_1 << 0xb) + 0x2c)
            
            if (x20_8 == 0)
                goto label_a417a0
            
            if ((IsLandscape(zx.q(x20_8)) & 1) == 0)
                var_5c[zx.q(x19_2)] = x20_8
                x19_2 += 1
            
            int32_t x20_9 = *(x22_1 + (x23_1 << 0xb) + 0x30)
            
            if (x20_9 == 0)
                goto label_a417a0
            
            if ((IsLandscape(zx.q(x20_9)) & 1) == 0)
                var_5c[zx.q(x19_2)] = x20_9
                x19_2 += 1
                x20_10 = 1
            else
                x20_10 = x19_2 s> 0 ? 1 : 0
                
                if (x19_2 s< 1)
                    x19_2 = 0
    
    ShuffleIntsN(gCampaignSetup, &var_5c, x19_2, x20_10)
    int32_t var_34
    memcpy(&var_34, &var_5c, zx.q(x20_10 << 2))
    x1 = zx.q(var_34)

int64_t x0_28 = RandomPileToRandomCard(gCampaignSetup, x1)
int64_t x0_30

if ((*(DomDefGet(x0_28, 0x17) + 0xc8) & 2) == 0)
    x0_30 = 0xdb2
else
    x0_30 = 0xdb1

return CampaignAddExtra(x0_30, zx.q(x0_28.d), 0xffffffff, 0, 0)
