// 函数: _Z22CampaignAddStampedCard13CampaignPiece
// 地址: 0xa3f944
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_44 = arg1
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111, std::__ndk1::allocator<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111>, bool (DomCardEnum)>::VTable
    * const var_40 = &_vtable_for_std::__ndk1::__function::__func<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111, std::__ndk1::allocator<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
int64_t var_38 = 1
int32_t* var_30 = &var_44
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111, std::__ndk1::allocator<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111>, bool (DomCardEnum)>::VTable
    * const* var_20 = &var_40
int64_t result
char* x1_1
result, x1_1 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_40, 0)
int32_t x19 = result.d

if (&var_40 == var_20)
    result, x1_1 = (*var_20)->vFunc_4(var_20)
else if (var_20 != 0)
    result, x1_1 = (*var_20)->j_operator delete(var_20)

if (x19 == 0)
    return result

CampaignKingdomAdd(zx.q(x19), x1_1, 0, 0)
return CampaignAddExtra(zx.q(var_44), zx.q(x19), 0xffffffff, 0, 0)
