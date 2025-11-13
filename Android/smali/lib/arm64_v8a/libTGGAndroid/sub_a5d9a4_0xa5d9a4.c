// 函数: sub_a5d9a4
// 地址: 0xa5d9a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Tournament()::$_2::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Tournament()::$_2::operator()() const::'lambda'(CardID)>, bool (CardID)>::VTable
    * const* result
int128_t var_cb0
int32_t* x8_4

if (CurrentWho() != **(arg1 + 8))
    __builtin_memset(&var_cb0, 0, 0x30)
    var_cb0.d = 0x50
    int128_t var_ca0
    var_ca0:0xc.d = 0
    int64_t var_c80_1 = 0
    int128_t var_c90
    var_c90:8.q = 0
    result = MayRevealOneTemp(0x103, &var_cb0)
    
    if (result.d != 0)
        x8_4 = *(arg1 + 0x10)
        *x8_4 &= 0xfffffffd
else
    CardsHand()
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Tournament()::$_2::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Tournament()::$_2::operator()() const::'lambda'(CardID)>, bool (CardID)>::VTable
        * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Tournament()::$_2::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Tournament()::$_2::operator()() const::'lambda'(CardID)>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Tournament()::$_2::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Tournament()::$_2::operator()() const::'lambda'(CardID)>, bool (CardID)>::VTable
        * const* result_1 = &var_ce0
    FilterCards(&var_ce0, &var_cb0, nullptr)
    result = result_1
    
    if (&var_ce0 == result)
        result = (*result)->vFunc_4()
    else if (result != 0)
        result = (*result)->j_operator delete()
    
    int32_t var_30
    
    if (var_30 != 0)
        int128_t var_19a0
        __builtin_memset(&var_19a0, 0, 0x20)
        var_19a0.d = 0x4f
        int128_t var_1990
        __builtin_memset(&var_1990:0xc, 0, 0x1c)
        result = ChooseCardsRange(&var_cb0, 0, 1, 0x17, &var_19a0, 5, 0, 0)
        int32_t var_ce8
        
        if (var_ce8 != 0)
            int32_t var_1968
            RevealTemp(zx.q(var_1968), 0x3ea, 0)
            result = DiscardCard(zx.q(var_1968), 0x3ea, 0xb, 7, 0)
            
            if ((result.d & 1) != 0)
                x8_4 = *(arg1 + 0x10)
                *x8_4 |= 1
return result
