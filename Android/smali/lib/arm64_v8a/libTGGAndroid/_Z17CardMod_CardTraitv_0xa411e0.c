// 函数: _Z17CardMod_CardTraitv
// 地址: 0xa411e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = *(gCampaignSetup + 0x19ac)

if (x20 == 0)
    int64_t x22_1 = *(gCampaignSetup + 0x19a0)
    int64_t x23_1 = sx.q(*(gCampaignSetup + 0x19a8))
    int32_t x19_1 = *(x22_1 + (x23_1 << 0xb) + 0xc)
    int32_t var_5c[0xa]
    int32_t x19_2
    int32_t x20_10
    
    if (x19_1 == 0)
    label_a4144c:
        struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignContextFavoredPileOrRandomOrAdd(bool (*)(DomCardEnum))::$_10, std::__ndk1::allocator<CampaignContextFavoredPileOrRandomOrAdd(bool (*)(DomCardEnum))::$_10>, bool (DomCardEnum)>::VTable
            * const var_90 = &_vtable_for_std::__ndk1::__function::__func<CampaignContextFavoredPileOrRandomOrAdd(bool (*)(DomCardEnum))::$_10, std::__ndk1::allocator<CampaignContextFavoredPileOrRandomOrAdd(bool (*)(DomCardEnum))::$_10>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
        void* const var_88_1 = &data_a58a4c
        struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignContextFavoredPileOrRandomOrAdd(bool (*)(DomCardEnum))::$_10, std::__ndk1::allocator<CampaignContextFavoredPileOrRandomOrAdd(bool (*)(DomCardEnum))::$_10>, bool (DomCardEnum)>::VTable
            * const* var_70_1 = &var_90
        int32_t x0_42
        char* x1_2
        x0_42, x1_2 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_90, 0)
        
        if (&var_90 == var_70_1)
            x1_2 = (*var_70_1)->vFunc_4(var_70_1)
        else if (var_70_1 != 0)
            x1_2 = (*var_70_1)->j_operator delete(var_70_1)
        
        CampaignKingdomAdd(zx.q(x0_42), x1_2, 4, 0)
        var_5c[0] = x0_42
        x19_2 = 1
        x20_10 = 1
    else
        int32_t x0_2 = IsLandscape(zx.q(x19_1))
        int32_t x0_4
        
        if ((x0_2 & 1) == 0)
            x0_4 = HasTrait(zx.q(x19_1))
        
        int32_t x20_1
        
        if ((x0_2 & 1) == 0 && (x0_4 & 1) == 0)
            var_5c[0] = x19_1
            x19_2 = 1
            x20_1 = *(x22_1 + (x23_1 << 0xb) + 0x10)
            
            if (x20_1 == 0)
                goto label_a41420
            
            goto label_a41258
        
        x19_2 = 0
        x20_1 = *(x22_1 + (x23_1 << 0xb) + 0x10)
        
        if (x20_1 != 0)
        label_a41258:
            
            if ((IsLandscape(zx.q(x20_1)) & 1) == 0 && (HasTrait(zx.q(x20_1)) & 1) == 0)
                var_5c[zx.q(x19_2)] = x20_1
                x19_2 += 1
            
            int32_t x20_2 = *(x22_1 + (x23_1 << 0xb) + 0x14)
            
            if (x20_2 == 0)
                goto label_a41420
            
            if ((IsLandscape(zx.q(x20_2)) & 1) == 0 && (HasTrait(zx.q(x20_2)) & 1) == 0)
                var_5c[zx.q(x19_2)] = x20_2
                x19_2 += 1
            
            int32_t x20_3 = *(x22_1 + (x23_1 << 0xb) + 0x18)
            
            if (x20_3 == 0)
                goto label_a41420
            
            if ((IsLandscape(zx.q(x20_3)) & 1) == 0 && (HasTrait(zx.q(x20_3)) & 1) == 0)
                var_5c[zx.q(x19_2)] = x20_3
                x19_2 += 1
            
            int32_t x20_4 = *(x22_1 + (x23_1 << 0xb) + 0x1c)
            
            if (x20_4 == 0)
                goto label_a41420
            
            if ((IsLandscape(zx.q(x20_4)) & 1) == 0 && (HasTrait(zx.q(x20_4)) & 1) == 0)
                var_5c[zx.q(x19_2)] = x20_4
                x19_2 += 1
            
            int32_t x20_5 = *(x22_1 + (x23_1 << 0xb) + 0x20)
            
            if (x20_5 == 0)
                goto label_a41420
            
            if ((IsLandscape(zx.q(x20_5)) & 1) == 0 && (HasTrait(zx.q(x20_5)) & 1) == 0)
                var_5c[zx.q(x19_2)] = x20_5
                x19_2 += 1
            
            int32_t x20_6 = *(x22_1 + (x23_1 << 0xb) + 0x24)
            
            if (x20_6 == 0)
                goto label_a41420
            
            if ((IsLandscape(zx.q(x20_6)) & 1) == 0 && (HasTrait(zx.q(x20_6)) & 1) == 0)
                var_5c[zx.q(x19_2)] = x20_6
                x19_2 += 1
            
            int32_t x20_7 = *(x22_1 + (x23_1 << 0xb) + 0x28)
            
            if (x20_7 == 0)
                goto label_a41420
            
            if ((IsLandscape(zx.q(x20_7)) & 1) == 0 && (HasTrait(zx.q(x20_7)) & 1) == 0)
                var_5c[zx.q(x19_2)] = x20_7
                x19_2 += 1
            
            int32_t x20_8 = *(x22_1 + (x23_1 << 0xb) + 0x2c)
            
            if (x20_8 == 0)
                goto label_a41420
            
            if ((IsLandscape(zx.q(x20_8)) & 1) == 0 && (HasTrait(zx.q(x20_8)) & 1) == 0)
                var_5c[zx.q(x19_2)] = x20_8
                x19_2 += 1
            
            int32_t x20_9 = *(x22_1 + (x23_1 << 0xb) + 0x30)
            
            if (x20_9 == 0)
                goto label_a41420
            
            int32_t x0_38 = IsLandscape(zx.q(x20_9))
            int32_t x0_40
            
            if ((x0_38 & 1) == 0)
                x0_40 = HasTrait(zx.q(x20_9))
            
            if ((x0_38 & 1) == 0 && (x0_40 & 1) == 0)
                var_5c[zx.q(x19_2)] = x20_9
                x19_2 += 1
                x20_10 = 1
            else
                x20_10 = x19_2 s> 0 ? 1 : 0
                
                if (x19_2 s< 1)
                    x19_2 = 0
        else
        label_a41420:
            
            if (x19_2 s<= 0)
                goto label_a4144c
            
            x20_10 = 1
    
    ShuffleIntsN(gCampaignSetup, &var_5c, x19_2, x20_10)
    int32_t var_34
    memcpy(&var_34, &var_5c, zx.q(x20_10 << 2))
    x20 = var_34

struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CardMod_CardTrait()::$_119, std::__ndk1::allocator<CardMod_CardTrait()::$_119>, bool (DomCardEnum)>::VTable
    * const var_c0 = &_vtable_for_std::__ndk1::__function::__func<CardMod_CardTrait()::$_119, std::__ndk1::allocator<CardMod_CardTrait()::$_119>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CardMod_CardTrait()::$_119, std::__ndk1::allocator<CardMod_CardTrait()::$_119>, bool (DomCardEnum)>::VTable
    * const* var_a0 = &var_c0
int32_t x0_48
char* x1_6
x0_48, x1_6 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_c0, 0)

if (&var_c0 == var_a0)
    x1_6 = (*var_a0)->vFunc_4(var_a0)
else if (var_a0 != 0)
    x1_6 = (*var_a0)->j_operator delete(var_a0)

int64_t result = CampaignKingdomAdd(zx.q(x0_48), x1_6, 4, 1)

if ((result.d & 1) != 0)
    int64_t x9_7 = *(gCampaignSetup + 0x19a0)
    int64_t x10_1 = sx.q(*(gCampaignSetup + 0x19a8))
    void* x8_22 = x9_7 + (x10_1 << 0xb)
    int64_t x9_8
    
    if (*(x8_22 + 0x34) == x0_48)
        x9_8 = 0
    else if (*(x8_22 + 0x70) != x0_48)
        void* x9_9 = x9_7 + (x10_1 << 0xb)
        
        if (*(x9_9 + 0xac) != x0_48)
            if (*(x9_9 + 0xe8) != x0_48)
                pthread_kill(pthread_self(), 6)
                XNoReturn()
                return CardMod_CardStart() __tailcall
            
            x9_8 = 3
        else
            x9_8 = 2
    else
        x9_8 = 1
    
    *(x8_22 + x9_8 * 0x3c + 0x38) = x20

return result
