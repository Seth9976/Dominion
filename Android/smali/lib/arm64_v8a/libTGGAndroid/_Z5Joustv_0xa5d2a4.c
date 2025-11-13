// 函数: _Z5Joustv
// 地址: 0xa5d2a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(1, 0, 0, nullptr)
Action(1, 0)
MoneyPlus(1, 0, false)
CardsHand()
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Joust()::$_18, std::__ndk1::allocator<Joust()::$_18>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Joust()::$_18, std::__ndk1::allocator<Joust()::$_18>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Joust()::$_18, std::__ndk1::allocator<Joust()::$_18>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

int128_t var_25f0
__builtin_memset(&var_25f0, 0, 0x20)
var_25f0.d = 0x54
int128_t var_25e0
__builtin_memset(&var_25e0:0xc, 0, 0x1c)
int64_t result = ChooseCardsRange(&var_ca8, 0, 1, 0x17, &var_25f0, 5, 0, 0)
int32_t var_ce8

if (var_ce8 != 0)
    GameAssert((var_ce8 == 1 ? 1 : 0).b)
    void var_1968
    MoveCardsTo(&var_1968, 0x3ea, 0x46e, 0, 0, 0, 7)
    FromList(&var_1968)
    ThisTurnOnce(0x13, sub_a5d7ec, nullptr, 0, &var_25f0, 0, nullptr, 0xffffffff)
    CardsWhere(GetBoardPile(0x718, false))
    int128_t var_2630
    __builtin_memset(&var_2630, 0, 0x30)
    var_2630.d = 0x55
    int128_t var_2620
    var_2620:0xc.d = 0
    int128_t var_2610
    var_2610:8.q = 0
    int64_t var_2600_1 = 0
    result = GainOneOf(&var_25f0, &var_2630, 0x3ea, 0)
    
    if (result.d != 0)
        return NotifyResult(1)

return result
