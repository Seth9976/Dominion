// 函数: _Z10CamelTrainv
// 地址: 0xa8a5ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsSupplyTops(0x10, 0xffffffff)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CamelTrain()::$_0, std::__ndk1::allocator<CamelTrain()::$_0>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<CamelTrain()::$_0, std::__ndk1::allocator<CamelTrain()::$_0>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CamelTrain()::$_0, std::__ndk1::allocator<CamelTrain()::$_0>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

int128_t var_d20
__builtin_memset(&var_d20, 0, 0x30)
var_d20.d = 0xc3
int128_t var_d10
var_d10:0xc.d = 0
int128_t var_d00
var_d00:8.q = 0
int64_t var_cf0 = 0
int64_t x0_3 = ChooseCard(&var_ca8, 0x1d, &var_d20, 0x17, 0)
int32_t x19 = x0_3.d
int64_t result = MoveCardToPlayer(zx.q(x19), zx.q(CardWhere(x0_3)), 
    zx.q(*(DomGetContext() + 0x18)), 0x462, 0, 0, &var_d20, 0xc)

if (zx.d(var_d20.b) == 0)
    return result

return TriggerEvent(0x13, zx.q(x19), 0)
