// 函数: sub_aae750
// 地址: 0xaae750
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Trigger_AssociatedCardsList()
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Prepare()::$_63::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Prepare()::$_63::operator()() const::'lambda'(CardID)>, bool (CardID)>::VTable
    * const var_1960 = &_vtable_for_std::__ndk1::__function::__func<Prepare()::$_63::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Prepare()::$_63::operator()() const::'lambda'(CardID)>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Prepare()::$_63::operator()() const::'lambda'(CardID), std::__ndk1::allocator<Prepare()::$_63::operator()() const::'lambda'(CardID)>, bool (CardID)>::VTable
    * const* var_1940 = &var_1960
CardIDs var_1930
CardIDs var_ca8
FilterCards(&var_1960, &var_ca8, &var_1930)

if (&var_1960 == var_1940)
    (*var_1940)->vFunc_4()
else if (var_1940 != 0)
    (*var_1940)->j_operator delete()

int32_t i

while (i != 0)
    int128_t var_19a0
    __builtin_memset(&var_19a0, 0, 0x30)
    var_19a0.d = 0x118
    int128_t var_1990_1
    var_1990_1:0xc.d = 0
    int128_t var_1980_1
    var_1980_1:8.q = 0
    int64_t var_1970_1 = 0
    int64_t x0_3 = ChooseCard(&var_ca8, 1, &var_19a0, 0xb, 0)
    PlayCard(x0_3, 0)
    operator-=(&var_ca8, zx.q(x0_3.d))

DiscardCards(&var_1930, 0x469, 0xb, 7, 0)
