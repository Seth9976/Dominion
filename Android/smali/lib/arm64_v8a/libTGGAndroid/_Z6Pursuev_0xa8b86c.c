// 函数: _Z6Pursuev
// 地址: 0xa8b86c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Buy(1, 0)
int32_t x0 = NameCardInDeckDiscard(0x20)
RevealDeck(4, 0x3ee, 0x7e6594)
int32_t var_1958 = x0
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Pursue()::$_20, std::__ndk1::allocator<Pursue()::$_20>, bool (CardID)>::VTable
    * const var_1960 = &_vtable_for_std::__ndk1::__function::__func<Pursue()::$_20, std::__ndk1::allocator<Pursue()::$_20>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Pursue()::$_20, std::__ndk1::allocator<Pursue()::$_20>, bool (CardID)>::VTable
    * const* var_1940 = &var_1960
CardIDs var_1930
CardIDs var_ca8
FilterCards(&var_1960, &var_ca8, &var_1930)

if (&var_1960 == var_1940)
    (*var_1940)->vFunc_4()
else if (var_1940 != 0)
    (*var_1940)->j_operator delete()

int32_t var_28

if (var_28 s>= 1)
    NotifyResult(1)

ReturnToDeckAnyOrder(&var_ca8, 0x3ee, 0x18)
return DiscardCards(&var_1930, 0x3ee, 0xb, 7, 0)
