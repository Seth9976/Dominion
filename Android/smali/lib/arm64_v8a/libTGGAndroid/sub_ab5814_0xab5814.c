// 函数: sub_ab5814
// 地址: 0xab5814
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

RevealDeck(3, 0x3ee, 0x7e996c)
PauseUI(true)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Rabble()::$_6::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Rabble()::$_6::operator()() const::'lambda'(CardID)>, bool (CardID)>::VTable
    * const var_1960 = &_vtable_for_std::__ndk1::__function::__func<Rabble()::$_6::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Rabble()::$_6::operator()() const::'lambda'(CardID)>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Rabble()::$_6::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Rabble()::$_6::operator()() const::'lambda'(CardID)>, bool (CardID)>::VTable
    * const* var_1940 = &var_1960
CardIDs var_1930
CardIDs var_ca8
FilterCards(&var_1960, &var_ca8, &var_1930)

if (&var_1960 == var_1940)
    (*var_1940)->vFunc_4()
else if (var_1940 != 0)
    (*var_1940)->j_operator delete()

DiscardCards(&var_ca8, 0x3ee, 0xb, 7, 0)
return ReturnToDeckAnyOrder(&var_1930, 0x3ee, 0x18)
