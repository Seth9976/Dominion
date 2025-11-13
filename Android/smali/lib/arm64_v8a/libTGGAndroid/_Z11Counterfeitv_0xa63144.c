// 函数: _Z11Counterfeitv
// 地址: 0xa63144
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

MoneyTreasure(1, 0)
Buy(1, 0)
GetPlayableFromHand(2, 0)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Counterfeit()::$_20, std::__ndk1::allocator<Counterfeit()::$_20>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Counterfeit()::$_20, std::__ndk1::allocator<Counterfeit()::$_20>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Counterfeit()::$_20, std::__ndk1::allocator<Counterfeit()::$_20>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

int128_t var_d20
__builtin_memset(&var_d20, 0, 0x30)
var_d20.d = 0x75
int128_t var_d10
var_d10:0xc.d = 0
int128_t var_d00
var_d00:8.q = 0
int64_t var_cf0 = 0
int64_t result = MayChooseCard(&var_ca8, 1, &var_d20, 0x37)

if (result.d == 0)
    return result

int32_t x19_1 = result.d
PlayCard(zx.q(x19_1), 2, zx.q(ThisCard(false, nullptr)), 0)
return Trash(zx.q(x19_1), 0x3e9, 0)
