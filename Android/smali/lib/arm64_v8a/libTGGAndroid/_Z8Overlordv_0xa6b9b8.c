// 函数: _Z8Overlordv
// 地址: 0xa6b9b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsSupplyTops(1, 0xffffffff)
CardIDs var_ca8
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Overlord()::$_0, std::__ndk1::allocator<Overlord()::$_0>, bool (CardID)>::VTable
    * const* x0_2

if (GameVersion() s< 0x17)
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Overlord()::$_0, std::__ndk1::allocator<Overlord()::$_0>, bool (CardID)>::VTable
        * var_d10 = &_vtable_for_std::__ndk1::__function::__func<Overlord()::$_1, std::__ndk1::allocator<Overlord()::$_1>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Overlord()::$_0, std::__ndk1::allocator<Overlord()::$_0>, bool (CardID)>::VTable
        ** var_cf0_1 = &var_d10
    FilterCards(&var_d10, &var_ca8, nullptr)
    x0_2 = var_cf0_1
    
    if (&var_d10 == x0_2)
        (*x0_2)->vFunc_4(x0_2)
    else
    label_a6ba4c:
        
        if (x0_2 != 0)
            (*x0_2)->j_operator delete(x0_2)
else
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Overlord()::$_0, std::__ndk1::allocator<Overlord()::$_0>, bool (CardID)>::VTable
        * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Overlord()::$_0, std::__ndk1::allocator<Overlord()::$_0>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Overlord()::$_0, std::__ndk1::allocator<Overlord()::$_0>, bool (CardID)>::VTable
        * const* var_cc0_1 = &var_ce0
    FilterCards(&var_ce0, &var_ca8, nullptr)
    x0_2 = var_cc0_1
    
    if (&var_ce0 != x0_2)
        goto label_a6ba4c
    
    (*x0_2)->vFunc_4(x0_2)
int128_t var_d50
__builtin_memset(&var_d50, 0, 0x30)
var_d50.d = 0x8f
int128_t var_d40
var_d40:0xc.d = 0
int128_t var_d30
var_d30:8.q = 0
int64_t var_d20 = 0
int64_t result = ChooseCard(&var_ca8, 1, &var_d50, 0x33, 0)

if (result.d == 0)
    return result

return PlayCardLeavingItThere(result, 0)
