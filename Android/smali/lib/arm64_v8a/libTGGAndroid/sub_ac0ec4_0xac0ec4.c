// 函数: sub_ac0ec4
// 地址: 0xac0ec4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsWhereType(0x3e9, 4)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Improve()::$_8::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Improve()::$_8::operator()() const::'lambda'(CardID)>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Improve()::$_8::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Improve()::$_8::operator()() const::'lambda'(CardID)>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Improve()::$_8::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Improve()::$_8::operator()() const::'lambda'(CardID)>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

int64_t x0_3 = MayTrashOneOf(&var_ca8, 0x3e9, 0x14, 9)

if (x0_3.d != 0)
    int32_t var_18 = Cost(x0_3)
    GainExactly(zx.q(operator+(&var_18, 1)), 0)
