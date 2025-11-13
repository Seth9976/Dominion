// 函数: _Z13RollThemeCardv
// 地址: 0xa450fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<RollThemeCard()::$_133, std::__ndk1::allocator<RollThemeCard()::$_133>, bool (DomCardEnum)>::VTable
    * const var_50 = &_vtable_for_std::__ndk1::__function::__func<RollThemeCard()::$_133, std::__ndk1::allocator<RollThemeCard()::$_133>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<RollThemeCard()::$_133, std::__ndk1::allocator<RollThemeCard()::$_133>, bool (DomCardEnum)>::VTable
    * const* var_30 = &var_50
int64_t result = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_50, 0)
int32_t x19 = result.d

if (&var_50 == var_30)
    result = (*var_30)->vFunc_4(var_30)
else if (var_30 != 0)
    result = (*var_30)->j_operator delete(var_30)

int64_t x8_1 = *(gCampaignSetup + 0x19a0)
uint64_t x10 = zx.q(*(gCampaignSetup + 0x19b4))
void* x8_4

if (x10.d == 2)
    x8_4 = x8_1 + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0x540
else
    x8_4 = x8_1 + (x10 << 3) + 0x5010

*(x8_4 + 4) = x19
return result
