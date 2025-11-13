// 函数: _Z33Theme_DeckChangesA_ReplaceDuchiesv
// 地址: 0xa43894
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CampaignAddExtra(0xdb2, 0x102, 0xffffffff, 2, 0)
CampaignAddExtra(0xdb2, 0x102, 0xffffffff, 2, 0)
CampaignAddExtra(0xdb2, 0x102, 0xffffffff, 2, 0)
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Theme_DeckChangesA_ReplaceDuchies()::$_125, std::__ndk1::allocator<Theme_DeckChangesA_ReplaceDuchies()::$_125>, bool (DomCardEnum)>::VTable
    * const var_40 = &_vtable_for_std::__ndk1::__function::__func<Theme_DeckChangesA_ReplaceDuchies()::$_125, std::__ndk1::allocator<Theme_DeckChangesA_ReplaceDuchies()::$_125>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Theme_DeckChangesA_ReplaceDuchies()::$_125, std::__ndk1::allocator<Theme_DeckChangesA_ReplaceDuchies()::$_125>, bool (DomCardEnum)>::VTable
    * const* var_20 = &var_40
int32_t x0_1
char* x1_1
x0_1, x1_1 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_40, 0)

if (&var_40 == var_20)
    x1_1 = (*var_20)->vFunc_4(var_20)
else if (var_20 != 0)
    x1_1 = (*var_20)->j_operator delete(var_20)

return CampaignKingdomAdd(zx.q(x0_1), x1_1, 0, 0)
