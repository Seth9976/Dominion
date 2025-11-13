// 函数: _Z17Surprise_CardModsv
// 地址: 0xa3ad68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_90[0xa]
int32_t var_68[0xa]
int64_t result = CampaignKingdomCardmodSpecificPiles(&var_68, &var_90)

if (result.d == 0)
    struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Surprise_CardMods()::$_47, std::__ndk1::allocator<Surprise_CardMods()::$_47>, bool (DomCardEnum)>::VTable
        * const var_c0 = &_vtable_for_std::__ndk1::__function::__func<Surprise_CardMods()::$_47, std::__ndk1::allocator<Surprise_CardMods()::$_47>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
    struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Surprise_CardMods()::$_47, std::__ndk1::allocator<Surprise_CardMods()::$_47>, bool (DomCardEnum)>::VTable
        * const* var_a0_1 = &var_c0
    int32_t x0_2
    char* x1_2
    x0_2, x1_2 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_c0, 0)
    
    if (&var_c0 == var_a0_1)
        x1_2 = (*var_a0_1)->vFunc_4(var_a0_1)
    else if (var_a0_1 != 0)
        x1_2 = (*var_a0_1)->j_operator delete(var_a0_1)
    
    CampaignKingdomAdd(zx.q(x0_2), x1_2, 0, 0)
    int32_t i_4
    CardMod_HasSpecific(zx.q(x0_2), &i_4)
    int32_t x9_14 = *(gCampaignSetup + 0x19ac)
    *(gCampaignSetup + 0x19ac) = x0_2
    int32_t i = i_4
    *(gCampaignSetup + 0x19b0) = x9_14
    int64_t* x9_17 =
        *gCampaignData + ((zx.q(*(gCampaignData + 8)) & (zx.q(i) | zx.q(i s>> 4))) << 3)
    int32_t* x10_5
    
    do
        x10_5 = *x9_17
        x9_17 = &x10_5[4]
    while (*x10_5 != i)
    
    void* x8_6 = *(x10_5 + 8)
    int64_t x9_20
    
    if (*(x8_6 + 0x18) != 1)
        if (*(x8_6 + 0x288) == 1)
            x9_20 = 1
            goto label_a3af88
        
        if (*(x8_6 + 0x4f8) == 1)
            x9_20 = 2
            goto label_a3af88
        
        if (*(x8_6 + 0x768) == 1)
            x9_20 = 3
            goto label_a3af88
    else
        x9_20 = 0
    label_a3af88:
        (*(x8_6 + x9_20 * 0x270 + 0x20))()
        int32_t x8_9 = *(gCampaignSetup + 0x19b0)
        *(gCampaignSetup + 0x19b0) = 0
        var_c0 = &_vtable_for_std::__ndk1::__function::__func<Surprise_CardMods()::$_47, std::__ndk1::allocator<Surprise_CardMods()::$_47>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
        struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Surprise_CardMods()::$_47, std::__ndk1::allocator<Surprise_CardMods()::$_47>, bool (DomCardEnum)>::VTable
            * const* var_a0_2 = &var_c0
        *(gCampaignSetup + 0x19ac) = x8_9
        int32_t x0_7
        char* x1_5
        x0_7, x1_5 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_c0, 0)
        
        if (&var_c0 == var_a0_2)
            x1_5 = (*var_a0_2)->vFunc_4(var_a0_2)
        else if (var_a0_2 != 0)
            x1_5 = (*var_a0_2)->j_operator delete(var_a0_2)
        
        CampaignKingdomAdd(zx.q(x0_7), x1_5, 0, 0)
        CardMod_HasSpecific(zx.q(x0_7), &i_4)
        int32_t i_1 = i_4
        int32_t x9_27 = *(gCampaignSetup + 0x19ac)
        uint64_t x10_6 = zx.q(*(gCampaignData + 8))
        int64_t x11_5 = *gCampaignData
        *(gCampaignSetup + 0x19ac) = x0_7
        *(gCampaignSetup + 0x19b0) = x9_27
        int64_t* x9_30 = x11_5 + ((x10_6 & (zx.q(i_1) | zx.q(i_1 s>> 4))) << 3)
        int32_t* x10_7
        
        do
            x10_7 = *x9_30
            x9_30 = &x10_7[4]
        while (*x10_7 != i_1)
        
        void* x8_11 = *(x10_7 + 8)
        int64_t x9_33
        
        if (*(x8_11 + 0x18) != 1)
            if (*(x8_11 + 0x288) == 1)
                x9_33 = 1
                goto label_a3b098
            
            if (*(x8_11 + 0x4f8) == 1)
                x9_33 = 2
                goto label_a3b098
            
            if (*(x8_11 + 0x768) == 1)
                x9_33 = 3
                goto label_a3b098
        else
            x9_33 = 0
        label_a3b098:
            (*(x8_11 + x9_33 * 0x270 + 0x20))()
            int32_t x8_14 = *(gCampaignSetup + 0x19b0)
            *(gCampaignSetup + 0x19b0) = 0
            var_c0 = &_vtable_for_std::__ndk1::__function::__func<Surprise_CardMods()::$_47, std::__ndk1::allocator<Surprise_CardMods()::$_47>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
            struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Surprise_CardMods()::$_47, std::__ndk1::allocator<Surprise_CardMods()::$_47>, bool (DomCardEnum)>::VTable
                * const* var_a0_3 = &var_c0
            *(gCampaignSetup + 0x19ac) = x8_14
            int32_t x0_12
            char* x1_8
            x0_12, x1_8 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_c0, 0)
            
            if (&var_c0 == var_a0_3)
                x1_8 = (*var_a0_3)->vFunc_4(var_a0_3)
            else if (var_a0_3 != 0)
                x1_8 = (*var_a0_3)->j_operator delete(var_a0_3)
            
            CampaignKingdomAdd(zx.q(x0_12), x1_8, 0, 0)
            CardMod_HasSpecific(zx.q(x0_12), &i_4)
            int32_t i_2 = i_4
            int32_t x9_40 = *(gCampaignSetup + 0x19ac)
            uint64_t x10_8 = zx.q(*(gCampaignData + 8))
            int64_t x11_7 = *gCampaignData
            *(gCampaignSetup + 0x19ac) = x0_12
            *(gCampaignSetup + 0x19b0) = x9_40
            int64_t* x9_43 = x11_7 + ((x10_8 & (zx.q(i_2) | zx.q(i_2 s>> 4))) << 3)
            int32_t* x10_9
            
            do
                x10_9 = *x9_43
                x9_43 = &x10_9[4]
            while (*x10_9 != i_2)
            
            void* x8_16 = *(x10_9 + 8)
            int64_t x9_46
            
            if (*(x8_16 + 0x18) == 1)
                x9_46 = 0
            label_a3b1a8:
                result = (*(x8_16 + x9_46 * 0x270 + 0x20))()
                int32_t x8_19 = *(gCampaignSetup + 0x19b0)
                *(gCampaignSetup + 0x19b0) = 0
                *(gCampaignSetup + 0x19ac) = x8_19
                return result
            
            if (*(x8_16 + 0x288) == 1)
                x9_46 = 1
                goto label_a3b1a8
            
            if (*(x8_16 + 0x4f8) == 1)
                x9_46 = 2
                goto label_a3b1a8
            
            if (*(x8_16 + 0x768) == 1)
                x9_46 = 3
                goto label_a3b1a8
else
    if (result.d s< 1)
        return result
    
    int64_t x19_1 = 0
    uint64_t x20_1 = zx.q(result.d)
    int32_t x8_1 = *(gCampaignSetup + 0x19ac)
    
    while (true)
        *(gCampaignSetup + 0x19b0) = x8_1
        int32_t i_3 = var_90[x19_1]
        uint64_t x9_3 = zx.q(*(gCampaignData + 8))
        int64_t x11_1 = *gCampaignData
        *(gCampaignSetup + 0x19ac) = var_68[x19_1]
        int64_t* x9_5 = x11_1 + ((x9_3 & (zx.q(i_3) | zx.q(i_3 s>> 4))) << 3)
        int32_t* x10_3
        
        do
            x10_3 = *x9_5
            x9_5 = &x10_3[4]
        while (*x10_3 != i_3)
        
        void* x8_4 = *(x10_3 + 8)
        int64_t x9_1
        
        if (*(x8_4 + 0x18) == 1)
            x9_1 = 0
        else if (*(x8_4 + 0x288) == 1)
            x9_1 = 1
        else if (*(x8_4 + 0x4f8) != 1)
            if (*(x8_4 + 0x768) != 1)
                break
            
            x9_1 = 3
        else
            x9_1 = 2
        
        result = (*(x8_4 + x9_1 * 0x270 + 0x20))()
        x8_1 = *(gCampaignSetup + 0x19b0)
        x19_1 += 1
        *(gCampaignSetup + 0x19b0) = 0
        *(gCampaignSetup + 0x19ac) = x8_1
        
        if (x19_1 == x20_1)
            return result

pthread_kill(pthread_self(), 6)
XNoReturn()
return Twist_BusyBusy() __tailcall
