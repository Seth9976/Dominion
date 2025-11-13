// 函数: _Z11Necromancerv
// 地址: 0xa96164
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsWhere(2)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Necromancer()::$_9, std::__ndk1::allocator<Necromancer()::$_9>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Necromancer()::$_9, std::__ndk1::allocator<Necromancer()::$_9>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Necromancer()::$_9, std::__ndk1::allocator<Necromancer()::$_9>, bool (CardID)>::VTable
    * const* result_1 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Necromancer()::$_9, std::__ndk1::allocator<Necromancer()::$_9>, bool (CardID)>::VTable
    * const* result = result_1

if (&var_ce0 == result)
    result = (*result)->vFunc_4()
else if (result != 0)
    result = (*result)->j_operator delete()

int32_t var_28

if (var_28 == 0)
    return result

int128_t var_1970
__builtin_memset(&var_1970, 0, 0x30)
var_1970.d = 0xa6
int128_t var_1960
var_1960:0xc.d = 0
int128_t var_1950
var_1950:8.q = 0
int64_t var_1940_1 = 0
int64_t x0_2 = ChooseCard(&var_ca8, 1, &var_1970, 0x33, 0)
int32_t x19_1 = x0_2.d
TurnCardFacedown(x0_2)
PlayCardLeavingItThere(zx.q(x19_1), 0)
FromSingle(zx.q(x19_1))
return EndOfTurn(sub_a9fd2c, &var_1970, 1, 0)
