// 函数: _Z22ArchitectsGuild_OnGainv
// 地址: 0xa1a9c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SpendFavor(2, 1)
int32_t x0 = Trigger_GainCard()
CardsSupplyTops(4, 0xffffffff)
int32_t x0_2 = Cost(zx.q(x0))
int32_t var_cd8 = x0_2
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<ArchitectsGuild_OnGain()::$_55, std::__ndk1::allocator<ArchitectsGuild_OnGain()::$_55>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<ArchitectsGuild_OnGain()::$_55, std::__ndk1::allocator<ArchitectsGuild_OnGain()::$_55>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<ArchitectsGuild_OnGain()::$_55, std::__ndk1::allocator<ArchitectsGuild_OnGain()::$_55>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

int128_t var_d20
__builtin_memset(&var_d20, 0, 0x30)
var_d20.d = 0xf4
int128_t var_d10
var_d10:0xc.d = x0_2
int128_t var_d00
var_d00:8.q = 0
int64_t var_cf0 = 0
return GainOneOf(&var_ca8, &var_d20, 0x476, 0)
