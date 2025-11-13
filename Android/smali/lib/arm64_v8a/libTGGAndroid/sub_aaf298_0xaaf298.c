// 函数: sub_aaf298
// 地址: 0xaaf298
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsWhere(2)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Scrounge()::$_68::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Scrounge()::$_68::operator()() const::'lambda'(CardID)>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Scrounge()::$_68::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Scrounge()::$_68::operator()() const::'lambda'(CardID)>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Scrounge()::$_68::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Scrounge()::$_68::operator()() const::'lambda'(CardID)>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

int128_t var_d20
__builtin_memset(&var_d20, 0, 0x38)
int32_t result = GainOneOf(&var_ca8, &var_d20, 0x476, 0)

if (result == 0)
    return result

return GainUpTo(5, 0x476, 0)
