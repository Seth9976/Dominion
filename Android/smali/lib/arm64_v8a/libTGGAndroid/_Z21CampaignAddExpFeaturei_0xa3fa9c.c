// 函数: _Z21CampaignAddExpFeaturei
// 地址: 0xa3fa9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_3 = &data_1135278 + sx.q(*(*(gCampaignSetup + 0x19a0) + 4)) * 0xa8 + (sx.q(arg1) << 3)
uint64_t x0 = zx.q(*(x8_3 - 0x1e8))

if (x0.d != 0)
    int32_t x19_1 = *(x8_3 - 0x1e4)
    int64_t* x8_7 = *gCampaignData + ((zx.q(*(gCampaignData + 8)) & (zx.q(x0.d s>> 4) | x0)) << 3)
    int64_t* x10_3 = x8_7
    int32_t* x9_2
    
    do
        x9_2 = *x10_3
        x10_3 = &x9_2[4]
    while (*x9_2 != x0.d)
    
    void* x21_1 = *(x9_2 + 8)
    int32_t x9_3 = *(x21_1 + 0x10)
    
    if (x9_3 s<= 0x157b)
        if (x9_3 - 0xdad u<= 3 && x9_3 != 0xdaf)
            return CampaignAddExtra(x0, zx.q(x19_1), 0xffffffff, 0, 0) __tailcall
        
        if (x9_3 == 0x324 || x9_3 == 0x9cc)
            int32_t* x9_7
            
            do
                x9_7 = *x8_7
                x8_7 = &x9_7[4]
            while (*x9_7 != x0.d)
            
            void* x8_11 = *(x9_7 + 8)
            
            if (*(x8_11 + 0x18) == 1)
                jump(*(x8_11 + 0x20))
            
            if (*(x8_11 + 0x288) == 1)
                jump(*(x8_11 + 0x290))
            
            if (*(x8_11 + 0x4f8) == 1)
                jump(*(x8_11 + 2 * 0x270 + 0x20))
            
            if (*(x8_11 + 0x768) == 1)
                jump(*(x8_11 + 3 * 0x270 + 0x20))
        
        goto label_a3fd78
    
    if (x9_3 == 0x157c)
        char* entry_x1
        
        if ((CampaignKingdomAdd(zx.q(x19_1), entry_x1, 4, 0) & 1) == 0)
            XTrace("couldn't add exp feature trait")
        
        int64_t x8_13
        
        if (*(x21_1 + 0x18) == 1)
            x8_13 = 0
        label_a3fd40:
            int32_t x10_9 = *(gCampaignSetup + 0x19ac)
            int64_t x8_20 = *(x21_1 + x8_13 * 0x270 + 0x20)
            *(gCampaignSetup + 0x19ac) = x19_1
            *(gCampaignSetup + 0x19b0) = x10_9
            int64_t x0_10 = x8_20()
            int32_t x8_21 = *(gCampaignSetup + 0x19b0)
            *(gCampaignSetup + 0x19b0) = 0
            *(gCampaignSetup + 0x19ac) = x8_21
            return x0_10
        
        if (*(x21_1 + 0x288) == 1)
            x8_13 = 1
            goto label_a3fd40
        
        if (*(x21_1 + 0x4f8) == 1)
            x8_13 = 2
            goto label_a3fd40
        
        if (*(x21_1 + 0x768) != 1)
            goto label_a3fd78
        
        x8_13 = 3
        goto label_a3fd40
    
    if (x9_3 == 0x1770)
        return CampaignAddTwist(x0) __tailcall
    
    if (x9_3 != 0x1b58)
    label_a3fd78:
        pthread_kill(pthread_self(), 6)
        XNoReturn()
        return MissionPiece_ExpFeature3() __tailcall
    
    int32_t var_54 = x0.d
    struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111, std::__ndk1::allocator<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111>, bool (DomCardEnum)>::VTable
        * const var_50 = &_vtable_for_std::__ndk1::__function::__func<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111, std::__ndk1::allocator<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
    int64_t var_48_1 = 1
    int32_t* var_40_1 = &var_54
    struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111, std::__ndk1::allocator<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111>, bool (DomCardEnum)>::VTable
        * const* var_30_1 = &var_50
    char* x1_3
    x0, x1_3 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_50, 0)
    int32_t x19_2 = x0.d
    
    if (&var_50 == var_30_1)
        x0, x1_3 = (*var_30_1)->vFunc_4(var_30_1)
    else if (var_30_1 != 0)
        x0, x1_3 = (*var_30_1)->j_operator delete(var_30_1)
    
    if (x19_2 != 0)
        CampaignKingdomAdd(zx.q(x19_2), x1_3, 0, 0)
        return CampaignAddExtra(zx.q(var_54), zx.q(x19_2), 0xffffffff, 0, 0)

return x0
