// 函数: _Z19CampaignAddExpStamp12DomExpansion
// 地址: 0xa3f690
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *(muls.dp.d(arg1, 0xa8) + &data_1135088:4)
int32_t x1

x1 = x19 != 0 ? 2 : 1

int32_t var_24
int32_t x21

if (RandomStampTargetPiles(muls.dp.d(arg1, 0xa8) + &data_1135088, x1, &var_24, 1, nullptr) == 0)
    struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignAddExpStamp(DomExpansion)::$_112, std::__ndk1::allocator<CampaignAddExpStamp(DomExpansion)::$_112>, bool (DomCardEnum)>::VTable
        * const var_60 = &_vtable_for_std::__ndk1::__function::__func<CampaignAddExpStamp(DomExpansion)::$_112, std::__ndk1::allocator<CampaignAddExpStamp(DomExpansion)::$_112>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
    void* var_58_1 = muls.dp.d(arg1, 0xa8) + &data_1135088
    struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignAddExpStamp(DomExpansion)::$_112, std::__ndk1::allocator<CampaignAddExpStamp(DomExpansion)::$_112>, bool (DomCardEnum)>::VTable
        * const* var_40_1 = &var_60
    int32_t x0_5
    char* x1_4
    x0_5, x1_4 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_60, 0)
    x21 = x0_5
    
    if (&var_60 == var_40_1)
        x1_4 = (*var_40_1)->vFunc_4(var_40_1)
    else if (var_40_1 != 0)
        x1_4 = (*var_40_1)->j_operator delete(var_40_1)
    
    if (x21 == 0)
        return XTrace("couldn't add expansion stamp (nothing meets criteria)")
    
    if ((CampaignKingdomAdd(zx.q(x21), x1_4, 0, 0) & 1) == 0)
        return XTrace("couldn't add expansion stamp (no space for new card)")
else
    x21 = var_24

int64_t result =
    CampaignAddExtra(zx.q(*(muls.dp.d(arg1, 0xa8) + &data_1135088)), zx.q(x21), 0xffffffff, 0, 0)

if (x19 == 0)
    return result

return CampaignAddExtra(zx.q(x19), zx.q(x21), 0xffffffff, 0, 0)
