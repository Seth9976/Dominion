// 函数: _Z7Coronetv
// 地址: 0xa5d030
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

GetPlayableFromHand(4, 0)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Coronet()::$_15, std::__ndk1::allocator<Coronet()::$_15>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Coronet()::$_15, std::__ndk1::allocator<Coronet()::$_15>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Coronet()::$_15, std::__ndk1::allocator<Coronet()::$_15>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

int128_t var_d20
__builtin_memset(&var_d20, 0, 0x30)
var_d20.d = 0x56
int128_t var_d10
var_d10:0xc.d = 0
int128_t var_d00
var_d00:8.q = 0
int64_t var_cf0 = 0
int32_t x0_3 = MayChooseCard(&var_ca8, 1, &var_d20, 0x35)

if (x0_3 != 0)
    PlayCard(zx.q(x0_3), 2, zx.q(ThisCard(false, nullptr)), 0)

GetPlayableFromHand(2, 0)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Coronet()::$_16, std::__ndk1::allocator<Coronet()::$_16>, bool (CardID)>::VTable
    * const var_d50 = &_vtable_for_std::__ndk1::__function::__func<Coronet()::$_16, std::__ndk1::allocator<Coronet()::$_16>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Coronet()::$_16, std::__ndk1::allocator<Coronet()::$_16>, bool (CardID)>::VTable
    * const* var_d30 = &var_d50
FilterCards(&var_d50, &var_ca8, nullptr)

if (&var_d50 == var_d30)
    (*var_d30)->vFunc_4()
else if (var_d30 != 0)
    (*var_d30)->j_operator delete()

__builtin_memset(&var_d20, 0, 0x30)
var_d20.d = 0x57
int128_t var_d10_1
var_d10_1:0xc.d = 0
int128_t var_d00_1
var_d00_1:8.q = 0
int64_t var_cf0_1 = 0
int64_t result = MayChooseCard(&var_ca8, 1, &var_d20, 0x35)

if (result.d == 0)
    return result

return PlayCard(zx.q(result.d), 2, zx.q(ThisCard(false, nullptr)), 0)
