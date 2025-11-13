// 函数: _Z6Princev
// 地址: 0xab15ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsHand()
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Prince()::$_9, std::__ndk1::allocator<Prince()::$_9>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Prince()::$_9, std::__ndk1::allocator<Prince()::$_9>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Prince()::$_9, std::__ndk1::allocator<Prince()::$_9>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

int128_t var_1970
__builtin_memset(&var_1970, 0, 0x30)
var_1970.d = 0x103
int128_t var_1960
var_1960:0xc.d = 0
int128_t var_1950
var_1950:8.q = 0
int64_t var_1940 = 0
int64_t result = MayChooseCard(&var_ca8, 1, &var_1970, 0x19)

if (result.d == 0)
    return result

int32_t x19_1 = result.d
MoveCardToCard(zx.q(x19_1), 0x3ea, zx.q(ThisCard(true, nullptr)), 0, 0, 0)
FromSingle(zx.q(x19_1))
return Forever(1, sub_ab1d60, sub_ab1d74, 0, &var_1970, 1)
