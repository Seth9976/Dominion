// 函数: _Z19Twist_Typhoon_Setupv
// 地址: 0xa304f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t i = 0x55
int64_t x27 = *(gCampaignSetup + 0x19a0)
int64_t x28 = sx.q(*(gCampaignSetup + 0x19a8))
int64_t result

do
    struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Twist_Typhoon_Setup()::$_73, std::__ndk1::allocator<Twist_Typhoon_Setup()::$_73>, bool (DomCardEnum)>::VTable
        * const var_90 = &_vtable_for_std::__ndk1::__function::__func<Twist_Typhoon_Setup()::$_73, std::__ndk1::allocator<Twist_Typhoon_Setup()::$_73>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
    struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Twist_Typhoon_Setup()::$_73, std::__ndk1::allocator<Twist_Typhoon_Setup()::$_73>, bool (DomCardEnum)>::VTable
        * const* var_70_1 = &var_90
    int32_t x0_2 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_90, 0)
    
    if (&var_90 == var_70_1)
        (*var_70_1)->vFunc_4(var_70_1)
    else if (var_70_1 != 0)
        (*var_70_1)->j_operator delete(var_70_1)
    
    *(x27 + (x28 << 0xb) + (i << 2) + 0x124) = x0_2
    AbilityFlag var_a4
    bool (* var_a0)(DomCardEnum)
    int32_t var_94
    result = HasRandomExtraPileSetup(DomDefGet(zx.q(x0_2), 0x17), &var_94, &var_a4, &var_a0)
    
    if (result.d s>= 1)
        int32_t x20_2 = result.d
        int32_t x19_1 = 0
        
        do
            struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Twist_Typhoon_Setup()::$_74, std::__ndk1::allocator<Twist_Typhoon_Setup()::$_74>, bool (DomCardEnum)>::VTable
                * const var_e0 = &_vtable_for_std::__ndk1::__function::__func<Twist_Typhoon_Setup()::$_74, std::__ndk1::allocator<Twist_Typhoon_Setup()::$_74>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
            bool (** var_d8_1)(DomCardEnum) = &var_a0
            struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Twist_Typhoon_Setup()::$_74, std::__ndk1::allocator<Twist_Typhoon_Setup()::$_74>, bool (DomCardEnum)>::VTable
                * const* var_c0_1 = &var_e0
            result = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_e0, 0)
            int32_t x21_1 = result.d
            
            if (&var_e0 == var_c0_1)
                result = (*var_c0_1)->vFunc_4(var_c0_1)
            else if (var_c0_1 != 0)
                result = (*var_c0_1)->j_operator delete(var_c0_1)
            
            int32_t x8_5 = x19_1 + var_94
            x19_1 += 1
            *(x27 + (x28 << 0xb) + (sx.q(x8_5) << 2) + 0x124) = x21_1
        while (x20_2 != x19_1)
    
    i += 1
while (i != 0x69)

return result
