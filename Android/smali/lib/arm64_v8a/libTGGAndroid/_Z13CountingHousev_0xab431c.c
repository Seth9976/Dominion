// 函数: _Z13CountingHousev
// 地址: 0xab431c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

LookThroughDiscard()
CardsDiscard()
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CountingHouse()::$_4, std::__ndk1::allocator<CountingHouse()::$_4>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<CountingHouse()::$_4, std::__ndk1::allocator<CountingHouse()::$_4>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CountingHouse()::$_4, std::__ndk1::allocator<CountingHouse()::$_4>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

int32_t var_28

if (var_28 == 0)
    return NotifyResult(0)

int128_t var_19a0
__builtin_memset(&var_19a0, 0, 0x20)
var_19a0.d = 0x48
int128_t var_1990
__builtin_memset(&var_1990:0xc, 0, 0x1c)
ChooseCardsRange(&var_ca8, 0, var_28, 0x14, &var_19a0, 0xa, 0, 0)
void var_1968
return MoveCardsTo(&var_1968, 0x3ec, 0x3ea, 0, 0, 0, 0xb)
