// 函数: _Z7Enhancev
// 地址: 0xa8ba9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsHand()
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Enhance()::$_22, std::__ndk1::allocator<Enhance()::$_22>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Enhance()::$_22, std::__ndk1::allocator<Enhance()::$_22>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Enhance()::$_22, std::__ndk1::allocator<Enhance()::$_22>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

int128_t var_d20
__builtin_memset(&var_d20, 0, 0x30)
var_d20.d = 0xbb
int128_t var_d10
var_d10:0xc.d = 0
int128_t var_d00
var_d00:8.q = 0
int64_t var_cf0 = 0
int64_t result = MayChooseCard(&var_ca8, 9, &var_d20, 9)

if (result.d == 0)
    return result

var_d20.d = Cost(result)
Trash(zx.q(result.d), 0x3ea, 0)
return GainUpTo(zx.q(operator+(&var_d20, 2)), 0x476, 0)
