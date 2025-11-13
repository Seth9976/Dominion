// 函数: _Z26Theme_DeckChangesB_5Cursesv
// 地址: 0xa43d94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Theme_DeckChangesB_RandomA()
CampaignAddExtra(0xdb5, 0x100, 0xffffffff, 0, 0)
CampaignAddExtra(0xdb5, 0x100, 0xffffffff, 0, 0)
CampaignAddExtra(0xdb5, 0x100, 0xffffffff, 0, 0)
CampaignAddExtra(0xdb5, 0x100, 0xffffffff, 0, 0)
CampaignAddExtra(0xdb5, 0x100, 0xffffffff, 0, 0)
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Theme_DeckChangesB_5Curses()::$_128, std::__ndk1::allocator<Theme_DeckChangesB_5Curses()::$_128>, bool (DomCardEnum)>::VTable
    * const var_40 = &_vtable_for_std::__ndk1::__function::__func<Theme_DeckChangesB_5Curses()::$_128, std::__ndk1::allocator<Theme_DeckChangesB_5Curses()::$_128>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Theme_DeckChangesB_5Curses()::$_128, std::__ndk1::allocator<Theme_DeckChangesB_5Curses()::$_128>, bool (DomCardEnum)>::VTable
    * const* var_20 = &var_40
int32_t x0_1
char* x1_1
x0_1, x1_1 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_40, 0)

if (&var_40 == var_20)
    x1_1 = (*var_20)->vFunc_4(var_20)
else if (var_20 != 0)
    x1_1 = (*var_20)->j_operator delete(var_20)

return CampaignKingdomAdd(zx.q(x0_1), x1_1, 2, 0)
