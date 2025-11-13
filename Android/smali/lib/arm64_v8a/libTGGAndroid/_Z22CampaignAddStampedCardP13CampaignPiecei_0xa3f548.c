// 函数: _Z22CampaignAddStampedCardP13CampaignPiecei
// 地址: 0xa3f548
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CampaignPiece* x19 = arg1
uint64_t i_1 = zx.q(arg2)
CampaignPiece* var_50 = arg1
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111, std::__ndk1::allocator<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111>, bool (DomCardEnum)>::VTable
    * const var_60 = &_vtable_for_std::__ndk1::__function::__func<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111, std::__ndk1::allocator<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
uint64_t i_2 = i_1
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111, std::__ndk1::allocator<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111>, bool (DomCardEnum)>::VTable
    * const* var_40 = &var_60
int64_t result
char* x1_1
result, x1_1 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_60, 0)
int32_t x20 = result.d

if (&var_60 == var_40)
    result, x1_1 = (*var_40)->vFunc_4(var_40)
else if (var_40 != 0)
    result, x1_1 = (*var_40)->j_operator delete(var_40)

if (x20 != 0)
    result = CampaignKingdomAdd(zx.q(x20), x1_1, 0, 0)
    
    if (arg2 s>= 1)
        uint64_t i
        
        do
            uint64_t x0_3 = zx.q(*x19)
            x19 += 4
            result = CampaignAddExtra(x0_3, zx.q(x20), 0xffffffff, 0, 0)
            i = i_1
            i_1 -= 1
        while (i != 1)

return result
