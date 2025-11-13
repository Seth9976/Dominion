// 函数: _Z30Theme_DeckChangesA_ReplaceCardv
// 地址: 0xa435f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Theme_DeckChangesA_ReplaceCard()::$_122, std::__ndk1::allocator<Theme_DeckChangesA_ReplaceCard()::$_122>, bool (DomCardEnum)>::VTable
    * const var_40 = &_vtable_for_std::__ndk1::__function::__func<Theme_DeckChangesA_ReplaceCard()::$_122, std::__ndk1::allocator<Theme_DeckChangesA_ReplaceCard()::$_122>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Theme_DeckChangesA_ReplaceCard()::$_122, std::__ndk1::allocator<Theme_DeckChangesA_ReplaceCard()::$_122>, bool (DomCardEnum)>::VTable
    * const* var_20 = &var_40
int32_t x0_1
char* x1_1
x0_1, x1_1 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_40, 0)

if (&var_40 == var_20)
    x1_1 = (*var_20)->vFunc_4(var_20)
else if (var_20 != 0)
    x1_1 = (*var_20)->j_operator delete(var_20)

CampaignKingdomAdd(zx.q(x0_1), x1_1, 0, 0)
int64_t x0_5 = RandomPileToRandomCard(gCampaignSetup, zx.q(x0_1))
int64_t x0_7

if ((*(DomDefGet(x0_5, 0x17) + 0xc8) & 2) == 0)
    x0_7 = 0xdb2
else
    x0_7 = 0xdb1

return CampaignAddExtra(x0_7, zx.q(x0_5.d), 0xffffffff, 0, 0)
