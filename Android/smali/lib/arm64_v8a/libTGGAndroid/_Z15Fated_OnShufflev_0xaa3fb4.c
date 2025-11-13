// 函数: _Z15Fated_OnShufflev
// 地址: 0xaa3fb4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

LookThroughShuffling()
CardsWhere(0x44d)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Fated_OnShuffle()::$_73, std::__ndk1::allocator<Fated_OnShuffle()::$_73>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Fated_OnShuffle()::$_73, std::__ndk1::allocator<Fated_OnShuffle()::$_73>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Fated_OnShuffle()::$_73, std::__ndk1::allocator<Fated_OnShuffle()::$_73>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

int128_t var_19a0
__builtin_memset(&var_19a0, 0, 0x20)
var_19a0.d = 0x11c
int128_t var_1990
__builtin_memset(&var_1990:0xc, 0, 0x1c)
int32_t var_28
ChooseCardsRange(&var_ca8, 0, var_28, 0x10, &var_19a0, 0xe, 0, 0)
void var_1968
RevealTemp(&var_1968, 0x44d, 2)
MoveCardsTo(&var_1968, 0x44d, 0x44f, 4, 0, 0, 0xb)
CardsWhere(0x44d)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Fated_OnShuffle()::$_74, std::__ndk1::allocator<Fated_OnShuffle()::$_74>, bool (CardID)>::VTable
    * const var_19d0 = &_vtable_for_std::__ndk1::__function::__func<Fated_OnShuffle()::$_74, std::__ndk1::allocator<Fated_OnShuffle()::$_74>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Fated_OnShuffle()::$_74, std::__ndk1::allocator<Fated_OnShuffle()::$_74>, bool (CardID)>::VTable
    * const* var_19b0 = &var_19d0
FilterCards(&var_19d0, &var_ca8, nullptr)

if (&var_19d0 == var_19b0)
    (*var_19b0)->vFunc_4()
else if (var_19b0 != 0)
    (*var_19b0)->j_operator delete()

__builtin_memset(&var_19a0, 0, 0x20)
var_19a0.d = 0x11d
int128_t var_1990_1
__builtin_memset(&var_1990_1:0xc, 0, 0x1c)
ChooseCardsRange(&var_ca8, 0, var_28, 0x10, &var_19a0, 0x34, 0, 0)
RevealTemp(&var_1968, 0x44d, 2)
return MoveCardsTo(&var_1968, 0x44d, 0x450, 4, 0, 0, 0xb)
