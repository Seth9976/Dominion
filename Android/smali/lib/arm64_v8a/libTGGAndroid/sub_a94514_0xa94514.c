// 函数: sub_a94514
// 地址: 0xa94514
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

RevealDeck(2, 0x3ee, 0x7e6594)
CardIDs var_1930
void var_ca8
memcpy(&var_1930, &var_ca8, 0xc84)
PauseUI(true)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Cardinal()::$_7::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Cardinal()::$_7::operator()() const::'lambda'(CardID)>, bool (CardID)>::VTable
    * const var_1960 = &_vtable_for_std::__ndk1::__function::__func<Cardinal()::$_7::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Cardinal()::$_7::operator()() const::'lambda'(CardID)>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Cardinal()::$_7::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Cardinal()::$_7::operator()() const::'lambda'(CardID)>, bool (CardID)>::VTable
    * const* var_1940 = &var_1960
FilterCards(&var_1960, &var_1930, nullptr)

if (&var_1960 == var_1940)
    (*var_1940)->vFunc_4()
else if (var_1940 != 0)
    (*var_1940)->j_operator delete()

int128_t var_19a0
__builtin_memset(&var_19a0, 0, 0x30)
var_19a0.d = 0xbf
int128_t var_1990
var_1990:0xc.d = 0
int128_t var_1980
var_1980:8.q = 0
int64_t var_1970 = 0
int64_t x0_4 = ChooseCard(&var_1930, 0x1d, &var_19a0, 0x17, 0)

if (x0_4.d == 0)
    NotifyResult(x0_4)
else
    int32_t x19_1 = x0_4.d
    NotifyResult(1)
    MoveCardToPlayer(zx.q(x19_1), 0x3ee, zx.q(*(DomGetContext() + 0x18)), 0x462, 0, 0, &var_19a0, 
        0xc)
    
    if (zx.d(var_19a0.b) != 0)
        TriggerEvent(0x13, zx.q(x19_1), 0)
    
    operator-=(&var_ca8, zx.q(x19_1))

return DiscardCards(&var_ca8, 0x3ee, 0xb, 7, 0)
