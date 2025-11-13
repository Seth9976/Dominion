// 函数: sub_a7e664
// 地址: 0xa7e664
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

RevealDeck(2, 0x3ee, 0x7e48d0)
CardIDs var_cb8
int32_t x0_1 = CountType(&var_cb8, 2)
CardIDs var_1940
memcpy(&var_1940, &var_cb8, 0xc84)
int32_t var_24 = 0
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<NobleBrigand_OnBuy()::$_7::operator()() const::'lambda'(CardID), std::__ndk1::allocator<NobleBrigand_OnBuy()::$_7::operator()() const::'lambda'(CardID)>, bool (CardID)>::VTable
    * const var_1970 = &_vtable_for_std::__ndk1::__function::__func<NobleBrigand_OnBuy()::$_7::operator()() const::'lambda'(CardID), std::__ndk1::allocator<NobleBrigand_OnBuy()::$_7::operator()() const::'lambda'(CardID)>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<NobleBrigand_OnBuy()::$_7::operator()() const::'lambda'(CardID), std::__ndk1::allocator<NobleBrigand_OnBuy()::$_7::operator()() const::'lambda'(CardID)>, bool (CardID)>::VTable
    * const* var_1950 = &var_1970
FilterCards(&var_1970, &var_1940, nullptr)

if (&var_1970 == var_1950)
    (*var_1950)->vFunc_4()
else if (var_1950 != 0)
    (*var_1950)->j_operator delete()

int32_t var_28 = CurrentWho()
int32_t var_cc0
uint64_t x0_8

if (var_cc0 == 0)
    NotifyResult(0)
label_a7e788:
    x0_8 = zx.q(var_24)
    
    if (x0_8.d != 0)
    label_a7e798:
        
        if ((TrashDisplay(x0_8, 0x3ee, 0) & 1) != 0)
            operator+=(*(arg1 + 0x10), zx.q(var_24))
            operator-=(&var_cb8, zx.q(var_24))
else
    NotifyResult(1)
    uint64_t x0_6 = zx.q(**(arg1 + 8))
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<NobleBrigand_OnBuy()::$_7::operator()() const::'lambda'(), std::__ndk1::allocator<NobleBrigand_OnBuy()::$_7::operator()() const::'lambda'()>, void ()>::VTable
        * const var_19a0 = &_vtable_for_std::__ndk1::__function::__func<NobleBrigand_OnBuy()::$_7::operator()() const::'lambda'(), std::__ndk1::allocator<NobleBrigand_OnBuy()::$_7::operator()() const::'lambda'()>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
    int32_t* var_1998_1 = &var_24
    CardIDs* var_1990_1 = &var_1940
    int32_t* var_1988_1 = &var_28
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<NobleBrigand_OnBuy()::$_7::operator()() const::'lambda'(), std::__ndk1::allocator<NobleBrigand_OnBuy()::$_7::operator()() const::'lambda'()>, void ()>::VTable
        * const* var_1980_1 = &var_19a0
    OtherPlayer(x0_6, &var_19a0)
    
    if (&var_19a0 == var_1980_1)
        (*var_1980_1)->vFunc_4()
        x0_8 = zx.q(var_24)
        
        if (x0_8.d != 0)
            goto label_a7e798
    else
        if (var_1980_1 == 0)
            goto label_a7e788
        
        (*var_1980_1)->j_operator delete()
        x0_8 = zx.q(var_24)
        
        if (x0_8.d != 0)
            goto label_a7e798
int64_t result = DiscardCards(&var_cb8, 0x3ee, 0xb, 7, 0)

if (x0_1 != 0)
    return result

return GainCard(0x104, 0x476, 0, 0, 4)
