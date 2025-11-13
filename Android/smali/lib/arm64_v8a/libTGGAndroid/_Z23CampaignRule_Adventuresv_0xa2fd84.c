// 函数: _Z23CampaignRule_Adventuresv
// 地址: 0xa2fd84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignRule_Adventures()::$_1, std::__ndk1::allocator<CampaignRule_Adventures()::$_1>, bool (DomCardEnum)>::VTable
    * const var_40 = &_vtable_for_std::__ndk1::__function::__func<CampaignRule_Adventures()::$_1, std::__ndk1::allocator<CampaignRule_Adventures()::$_1>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignRule_Adventures()::$_1, std::__ndk1::allocator<CampaignRule_Adventures()::$_1>, bool (DomCardEnum)>::VTable
    * const* var_20 = &var_40
int32_t x0_1
char* x1_1
x0_1, x1_1 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_40, 0)

if (&var_40 == var_20)
    x1_1 = (*var_20)->vFunc_4(var_20)
else if (var_20 != 0)
    x1_1 = (*var_20)->j_operator delete(var_20)

return CampaignKingdomAdd(zx.q(x0_1), x1_1, 4, 1)
