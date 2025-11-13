// 函数: _Z44CampaignContextFavoredLandscapeOrRandomOrAddPFb11DomCardEnumE
// 地址: 0xa30a54
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(gCampaignSetup + 0x19ac)

if (x8 != 0)
    IsLandscape(zx.q(x8))
    return zx.q(*(gCampaignSetup + 0x19ac))

int64_t x23_1 = *(gCampaignSetup + 0x19a0)
int64_t x24_1 = sx.q(*(gCampaignSetup + 0x19a8))
int32_t x19_1 = *(x23_1 + (x24_1 << 0xb) + 0x34)
int32_t var_50[0x4]
int32_t x8_10

if (x19_1 == 0)
label_a30b50:
    x8_10 = x19_1 s< 1 ? 1 : 0
    
    if (x19_1 s<= 0)
        struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignContextFavoredLandscapeOrRandomOrAdd(bool (*)(DomCardEnum))::$_9, std::__ndk1::allocator<CampaignContextFavoredLandscapeOrRandomOrAdd(bool (*)(DomCardEnum))::$_9>, bool (DomCardEnum)>::VTable
            * const var_80 = &_vtable_for_std::__ndk1::__function::__func<CampaignContextFavoredLandscapeOrRandomOrAdd(bool (*)(DomCardEnum))::$_9, std::__ndk1::allocator<CampaignContextFavoredLandscapeOrRandomOrAdd(bool (*)(DomCardEnum))::$_9>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
        bool (* var_78_1)(DomCardEnum) = arg1
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
        x8_10 = 0
        var_50[0] = x0_11
        x19_1 = 1
else
    int32_t x21_1
    
    if ((arg1(zx.q(x19_1)) & 1) != 0)
        var_50[0] = x19_1
        x19_1 = 1
        x21_1 = *(x23_1 + (x24_1 << 0xb) + 0x70)
        
        if (x21_1 != 0)
            goto label_a30ad8
        
        goto label_a30b50
    
    x19_1 = 0
    x21_1 = *(x23_1 + (x24_1 << 0xb) + 0x70)
    
    if (x21_1 == 0)
        goto label_a30b50
    
label_a30ad8:
    
    if ((arg1(zx.q(x21_1)) & 1) != 0)
        var_50[zx.q(x19_1)] = x21_1
        x19_1 += 1
    
    int32_t x21_2 = *(x23_1 + (x24_1 << 0xb) + 0xac)
    
    if (x21_2 == 0)
        goto label_a30b50
    
    if ((arg1(zx.q(x21_2)) & 1) != 0)
        var_50[zx.q(x19_1)] = x21_2
        x19_1 += 1
    
    int32_t x21_3 = *(x23_1 + (x24_1 << 0xb) + 0xe8)
    
    if (x21_3 == 0)
        goto label_a30b50
    
    if ((arg1(zx.q(x21_3)) & 1) != 0)
        var_50[zx.q(x19_1)] = x21_3
        x19_1 += 1
    
    x8_10 = x19_1 s< 1 ? 1 : 0

uint64_t x20_2

if (x8_10 != 0)
    x20_2 = zx.q(x19_1)
else
    x20_2 = 1

ShuffleIntsN(gCampaignSetup, &var_50, x19_1, x20_2.d)
int32_t var_34
memcpy(&var_34, &var_50, x20_2 << 2)
return zx.q(var_34)
