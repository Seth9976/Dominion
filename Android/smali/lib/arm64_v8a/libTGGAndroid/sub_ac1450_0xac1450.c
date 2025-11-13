// 函数: sub_ac1450
// 地址: 0xac1450
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsWhereType(0x3e9, 4)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Scepter()::$_14::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Scepter()::$_14::operator()() const::'lambda'(CardID)>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Scepter()::$_14::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Scepter()::$_14::operator()() const::'lambda'(CardID)>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Scepter()::$_14::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Scepter()::$_14::operator()() const::'lambda'(CardID)>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

if (GameVersion() s>= 0x16)
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Scepter()::$_14::operator()() const::'lambda0'(CardID), std::__ndk1::allocator<Scepter()::$_14::operator()() const::'lambda0'(CardID)>, bool (CardID)>::VTable
        * const var_d10 = &_vtable_for_std::__ndk1::__function::__func<Scepter()::$_14::operator()() const::'lambda0'(CardID), std::__ndk1::allocator<Scepter()::$_14::operator()() const::'lambda0'(CardID)>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Scepter()::$_14::operator()() const::'lambda0'(CardID), std::__ndk1::allocator<Scepter()::$_14::operator()() const::'lambda0'(CardID)>, bool (CardID)>::VTable
        * const* var_cf0_1 = &var_d10
    FilterCards(&var_d10, &var_ca8, nullptr)
    
    if (&var_d10 == var_cf0_1)
        (*var_cf0_1)->vFunc_4()
    else if (var_cf0_1 != 0)
        (*var_cf0_1)->j_operator delete()

int128_t var_d50
__builtin_memset(&var_d50, 0, 0x30)
var_d50.d = 0x97
int128_t var_d40
var_d40:0xc.d = 0
int128_t var_d30
var_d30:8.q = 0
int64_t var_d20 = 0
int32_t result = ChooseCard(&var_ca8, 1, &var_d50, 0xb, 1)

if (result == 0)
    return result

return ReplayCard(zx.q(result), zx.q(ThisCard(false, nullptr)), 0)
