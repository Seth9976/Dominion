// 函数: _Z6Doctorv
// 地址: 0xa79128
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = NameCardInDeckDiscard(0x1d)
RevealDeck(3, 0x3ee, 0x7e44bc)
PauseUI(true)
int32_t var_1958 = x0
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Doctor()::$_0, std::__ndk1::allocator<Doctor()::$_0>, bool (CardID)>::VTable
    * const var_1960 = &_vtable_for_std::__ndk1::__function::__func<Doctor()::$_0, std::__ndk1::allocator<Doctor()::$_0>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Doctor()::$_0, std::__ndk1::allocator<Doctor()::$_0>, bool (CardID)>::VTable
    * const* var_1940 = &var_1960
CardIDs var_1930
CardIDs var_ca8
FilterCards(&var_1960, &var_ca8, &var_1930)

if (&var_1960 == var_1940)
    (*var_1940)->vFunc_4()
else if (var_1940 != 0)
    (*var_1940)->j_operator delete()

int32_t var_28
NotifyResult(zx.q(var_28 != 0 ? 1 : 0))
Trash(&var_ca8, 0x3ee)
return ReturnToDeckAnyOrder(&var_1930, 0x3ee, 0x18)
