// 函数: _Z28Bell_ImbalancedStart_5vsGoldv
// 地址: 0xa35ab8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(gCampaignSetup + 0x19a8)
int32_t x19
int32_t x20

if (x8 == 9 || x8 == 4)
    x19 = 0
    x20 = 1
else
    x20 = 0
    x19 = 1

int32_t var_58[0xa]
int32_t x0_1 = CampaignKingdomCardsForImbalancedStart(&var_58)
ShuffleIntsN(gCampaignSetup, &var_58, x0_1, x0_1)
int32_t i

if (x0_1 s< 1)
label_a35be8:
    struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Bell_ImbalancedStart_5vsGold()::$_38, std::__ndk1::allocator<Bell_ImbalancedStart_5vsGold()::$_38>, bool (DomCardEnum)>::VTable
        * const var_90 = &_vtable_for_std::__ndk1::__function::__func<Bell_ImbalancedStart_5vsGold()::$_38, std::__ndk1::allocator<Bell_ImbalancedStart_5vsGold()::$_38>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
    struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Bell_ImbalancedStart_5vsGold()::$_38, std::__ndk1::allocator<Bell_ImbalancedStart_5vsGold()::$_38>, bool (DomCardEnum)>::VTable
        * const* var_70_1 = &var_90
    int32_t i_2
    char* x1_2
    i_2, x1_2 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_90, 0)
    i = i_2
    
    if (&var_90 == var_70_1)
        x1_2 = (*var_70_1)->vFunc_4(var_70_1)
    else if (var_70_1 != 0)
        x1_2 = (*var_70_1)->j_operator delete(var_70_1)
    
    if (i == 0)
        return XTrace("Bell_ImbalancedStart_5vsGold failed w/ no 5cost")
    
    CampaignKingdomAdd(zx.q(i), x1_2, 4, 0)
else
    int64_t x8_1 = 0
    
    while (true)
        i = var_58[x8_1]
        int32_t* x13_1 = *(*(gCampaignData + 0x50)
            + (((zx.q(i) | zx.q(i s>> 4)) & zx.q(*(gCampaignData + 0x58))) << 3))
        
        if (x13_1 != 0)
            while (*x13_1 != i)
                x13_1 = *(x13_1 + 0x18)
                
                if (x13_1 == 0)
                    goto label_a35b48
            
            uint64_t x12_4 = zx.q(x13_1[4])
            
            if (x12_4.d s>= 1)
                int32_t* x14_1 = *(x13_1 + 8)
                
                if (*x14_1 == 0x4d)
                    break
                
                int64_t x13_3 = 0
                int32_t i_1
                
                do
                    if (x12_4 - 1 == x13_3)
                        goto label_a35b48
                    
                    i_1 = x14_1[1 + x13_3]
                    x13_3 += 1
                while (i_1 != 0x4d)
                
                if (x13_3 u< x12_4)
                    break
        
    label_a35b48:
        x8_1 += 1
        
        if (x8_1 == zx.q(x0_1))
            goto label_a35be8
    
    if (i == 0)
        goto label_a35be8

CampaignAddExtra(0xdb1, zx.q(i), zx.q(x20), 0, 0)
return CampaignAddExtra(0xdb1, 0x106, zx.q(x19), 0, 0)
