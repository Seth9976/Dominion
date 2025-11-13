// 函数: _Z17Bell_LandscapeModv
// 地址: 0xa34120
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x0 = zx.q(*(gCampaignSetup + 0x19ac))
uint64_t x0_1

if (x0.d == 0)
    int64_t x22_1 = *(gCampaignSetup + 0x19a0)
    int64_t x23_1 = sx.q(*(gCampaignSetup + 0x19a8))
    int32_t x19_1 = *(x22_1 + (x23_1 << 0xb) + 0x34)
    int32_t var_44[0x4]
    int32_t x19_2
    int32_t x20_4
    
    if (x19_1 == 0)
    label_a3422c:
        struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignContextFavoredLandscapeOrRandomOrAdd(bool (*)(DomCardEnum))::$_9, std::__ndk1::allocator<CampaignContextFavoredLandscapeOrRandomOrAdd(bool (*)(DomCardEnum))::$_9>, bool (DomCardEnum)>::VTable
            * const var_80 = &_vtable_for_std::__ndk1::__function::__func<CampaignContextFavoredLandscapeOrRandomOrAdd(bool (*)(DomCardEnum))::$_9, std::__ndk1::allocator<CampaignContextFavoredLandscapeOrRandomOrAdd(bool (*)(DomCardEnum))::$_9>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
        int64_t (* var_78_1)(int64_t arg1) = j_IsLandscape
        struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignContextFavoredLandscapeOrRandomOrAdd(bool (*)(DomCardEnum))::$_9, std::__ndk1::allocator<CampaignContextFavoredLandscapeOrRandomOrAdd(bool (*)(DomCardEnum))::$_9>, bool (DomCardEnum)>::VTable
            * const* var_60_1 = &var_80
        int32_t x0_11
        char* x1_2
        x0_11, x1_2 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_80, 0)
        
        if (&var_80 == var_60_1)
            x1_2 = (*var_60_1)->vFunc_4(var_60_1)
        else if (var_60_1 != 0)
            x1_2 = (*var_60_1)->j_operator delete(var_60_1)
        
        CampaignKingdomAdd(zx.q(x0_11), x1_2, 4, 0)
        var_44[0] = x0_11
        x19_2 = 1
        x20_4 = 1
    else
        int32_t x20_1
        
        if ((IsLandscape(zx.q(x19_1)) & 1) != 0)
            var_44[0] = x19_1
            x19_2 = 1
            x20_1 = *(x22_1 + (x23_1 << 0xb) + 0x70)
            
            if (x20_1 != 0)
                goto label_a34198
            
            goto label_a34200
        
        x19_2 = 0
        x20_1 = *(x22_1 + (x23_1 << 0xb) + 0x70)
        
        if (x20_1 == 0)
        label_a34200:
            
            if (x19_2 s<= 0)
                goto label_a3422c
            
            x20_4 = 1
        else
        label_a34198:
            
            if ((IsLandscape(zx.q(x20_1)) & 1) != 0)
                var_44[zx.q(x19_2)] = x20_1
                x19_2 += 1
            
            int32_t x20_2 = *(x22_1 + (x23_1 << 0xb) + 0xac)
            
            if (x20_2 == 0)
                goto label_a34200
            
            if ((IsLandscape(zx.q(x20_2)) & 1) != 0)
                var_44[zx.q(x19_2)] = x20_2
                x19_2 += 1
            
            int32_t x20_3 = *(x22_1 + (x23_1 << 0xb) + 0xe8)
            
            if (x20_3 == 0)
                goto label_a34200
            
            if ((IsLandscape(zx.q(x20_3)) & 1) == 0)
                x20_4 = x19_2 s> 0 ? 1 : 0
                
                if (x19_2 s< 1)
                    x19_2 = 0
            else
                var_44[zx.q(x19_2)] = x20_3
                x19_2 += 1
                x20_4 = 1
    
    ShuffleIntsN(gCampaignSetup, &var_44, x19_2, x20_4)
    int32_t var_34
    memcpy(&var_34, &var_44, zx.q(x20_4 << 2))
    x0_1 = zx.q(var_34)
else
    IsLandscape(x0)
    x0_1 = zx.q(*(gCampaignSetup + 0x19ac))

return LandscapeMod(x0_1)
