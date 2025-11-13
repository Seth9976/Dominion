// 函数: _Z16Farmhands_OnGainv
// 地址: 0xa5cd10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsHand()
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Farmhands_OnGain()::$_11, std::__ndk1::allocator<Farmhands_OnGain()::$_11>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Farmhands_OnGain()::$_11, std::__ndk1::allocator<Farmhands_OnGain()::$_11>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Farmhands_OnGain()::$_11, std::__ndk1::allocator<Farmhands_OnGain()::$_11>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

int128_t var_25f0
__builtin_memset(&var_25f0, 0, 0x20)
var_25f0.d = 0x58
int128_t var_25e0
__builtin_memset(&var_25e0:0xc, 0, 0x1c)
int64_t result = ChooseCardsRange(&var_ca8, 1, 1, 0x19, &var_25f0, 0x1a, 0, 0)
int32_t var_ce8

if (var_ce8 == 0)
    return result

void var_1968
MoveCardsTo(&var_1968, 0x3ea, 0x46d, 0, 0, 0, 0xb)
FromList(&var_1968)
return StartOfNextTurn(sub_a5d76c, nullptr, &var_25f0, 0x4a, 2)
