// 函数: _Z9Gladiatorv
// 地址: 0xa6c364
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

MoneyPlus(2, 0, false)
CardsHand()
int128_t var_ce0
__builtin_memset(&var_ce0, 0, 0x30)
var_ce0.d = 0x93
int128_t var_cd0
var_cd0:0xc.d = 0
int128_t var_cc0
var_cc0:8.q = 0
int64_t var_cb0 = 0
void var_ca8
uint64_t x0_1 = ChooseCard(&var_ca8, 0x20, &var_ce0, 0x11, 0)
int32_t var_ce4 = 0
var_ce0.d = x0_1.d

if (x0_1.d != 0)
    RevealCard(x0_1, 0x3ef, 1)
    int64_t x0_2 = PlayerLeft()
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Gladiator()::$_7, std::__ndk1::allocator<Gladiator()::$_7>, void ()>::VTable
        * const var_d20 = &_vtable_for_std::__ndk1::__function::__func<Gladiator()::$_7, std::__ndk1::allocator<Gladiator()::$_7>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
    int128_t* var_d18_1 = &var_ce0
    int32_t* var_d10_1 = &var_ce4
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Gladiator()::$_7, std::__ndk1::allocator<Gladiator()::$_7>, void ()>::VTable
        * const* var_d00_1 = &var_d20
    OtherPlayer(x0_2, &var_d20)
    
    if (&var_d20 == var_d00_1)
        (*var_d00_1)->vFunc_4()
    else if (var_d00_1 != 0)
        (*var_d00_1)->j_operator delete()
    
    PauseUI(true)
    x0_1 = zx.q(var_ce0.d)

UnrevealCard(x0_1, 0x3ea)
UnrevealCard(zx.q(var_ce4), 0x3ea)

if (var_ce4 != 0)
    return NotifyResult(0)

NotifyResult(1)
MoneyPlus(1, 0, false)
int64_t result = GetPileTop(0xc10)

if (result.d != 0)
    int32_t x19_1 = result.d
    result = CardWhat(result)
    
    if (result.d == 0xc10)
        return TrashDisplay(zx.q(x19_1), zx.q(CardWhere(zx.q(x19_1))), 0)

return result
