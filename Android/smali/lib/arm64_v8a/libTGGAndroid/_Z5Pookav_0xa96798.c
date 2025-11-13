// 函数: _Z5Pookav
// 地址: 0xa96798
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsWhereType(0x3ea, 2)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Pooka()::$_16, std::__ndk1::allocator<Pooka()::$_16>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Pooka()::$_16, std::__ndk1::allocator<Pooka()::$_16>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Pooka()::$_16, std::__ndk1::allocator<Pooka()::$_16>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

int64_t result = MayTrashOneOf(&var_ca8, 0x3ea, 0x14, 7)

if (result.d == 0)
    return result

return Card(4, 0, 0, nullptr)
