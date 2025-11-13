// 函数: sub_acd828
// 地址: 0xacd828
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

RevealDeck(2, 0x3ee, 0x7eb61c)
CardIDs var_1940
void var_cb8
memcpy(&var_1940, &var_cb8, 0xc84)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<PirateShip_Attack()::$_11::operator()() const::'lambda'(CardID), std::__ndk1::allocator<PirateShip_Attack()::$_11::operator()() const::'lambda'(CardID)>, bool (CardID)>::VTable
    * const var_1970 = &_vtable_for_std::__ndk1::__function::__func<PirateShip_Attack()::$_11::operator()() const::'lambda'(CardID), std::__ndk1::allocator<PirateShip_Attack()::$_11::operator()() const::'lambda'(CardID)>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<PirateShip_Attack()::$_11::operator()() const::'lambda'(CardID), std::__ndk1::allocator<PirateShip_Attack()::$_11::operator()() const::'lambda'(CardID)>, bool (CardID)>::VTable
    * const* var_1950 = &var_1970
FilterCards(&var_1970, &var_1940, nullptr)

if (&var_1970 == var_1950)
    (*var_1950)->vFunc_4()
else if (var_1950 != 0)
    (*var_1950)->j_operator delete()

int32_t var_cc0

if (var_cc0 == 0)
    NotifyResult(0)
else
    NotifyResult(1)
    int32_t x0_3 = CurrentWho()
    uint64_t x2_1 = zx.q(**(arg1 + 8))
    int128_t var_19b0
    __builtin_memset(&var_19b0, 0, 0x30)
    int128_t var_19a0
    var_19a0:0xc.d = x0_3
    var_19b0.d = 0x3e
    int128_t var_1990
    var_1990:8.q = 0
    int64_t var_1980_1 = 0
    int64_t x0_5 = ChooseCardPlayer(&var_1940, 9, x2_1, &var_19b0, 8, 0)
    
    if (x0_5.d != 0)
        **(arg1 + 0x10) = 1
        TrashDisplay(x0_5, 0x3ee, 0)
        operator-=(&var_cb8, zx.q(x0_5.d))

return DiscardCards(&var_cb8, 0x3ee, 0xb, 7, 0)
