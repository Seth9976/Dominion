// 函数: _Z7Courierv
// 地址: 0xa18a78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

MoneyPlus(1, 0, false)
int64_t x0 = TopDeckCard()

if (x0.d != 0)
    DiscardCard(x0, 0x3eb, 0xb, 7, 0)

LookThroughDiscard()
CardsWhere(0x3ec)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Courier()::$_10, std::__ndk1::allocator<Courier()::$_10>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Courier()::$_10, std::__ndk1::allocator<Courier()::$_10>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Courier()::$_10, std::__ndk1::allocator<Courier()::$_10>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

int128_t var_d20
__builtin_memset(&var_d20, 0, 0x30)
var_d20.d = 0xd6
int128_t var_d10
var_d10:0xc.d = 0
int128_t var_d00
var_d00:8.q = 0
int64_t var_cf0 = 0
int64_t result = MayChooseCard(&var_ca8, 1, &var_d20, 0xb)

if (result.d == 0)
    return result

return PlayCard(result, 0)
