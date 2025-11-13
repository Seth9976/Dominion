// 函数: _Z3Impv
// 地址: 0xa971d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(2, 0, 0, nullptr)
GetPlayableFromHand(4, 0)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Imp()::$_25, std::__ndk1::allocator<Imp()::$_25>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Imp()::$_25, std::__ndk1::allocator<Imp()::$_25>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Imp()::$_25, std::__ndk1::allocator<Imp()::$_25>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

int128_t var_d20
__builtin_memset(&var_d20, 0, 0x30)
var_d20.d = 0xae
int128_t var_d10
var_d10:0xc.d = 0
int128_t var_d00
var_d00:8.q = 0
int64_t var_cf0 = 0
int64_t result = MayChooseCard(&var_ca8, 1, &var_d20, 0xb)

if (result.d == 0)
    return result

return PlayCard(result, 0)
