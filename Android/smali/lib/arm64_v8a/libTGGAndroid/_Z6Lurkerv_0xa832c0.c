// 函数: _Z6Lurkerv
// 地址: 0xa832c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Action(1, 0)
CardsSupplyTops(8, 0xffffffff)
CardsTrash()
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Lurker()::$_0, std::__ndk1::allocator<Lurker()::$_0>, bool (CardID)>::VTable
    * const var_1960 = &_vtable_for_std::__ndk1::__function::__func<Lurker()::$_0, std::__ndk1::allocator<Lurker()::$_0>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Lurker()::$_0, std::__ndk1::allocator<Lurker()::$_0>, bool (CardID)>::VTable
    * const* var_1940 = &var_1960
CardIDs var_1930
FilterCards(&var_1960, &var_1930, nullptr)

if (&var_1960 == var_1940)
    (*var_1940)->vFunc_4()
else if (var_1940 != 0)
    (*var_1940)->j_operator delete()

struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Lurker()::$_1, std::__ndk1::allocator<Lurker()::$_1>, bool (CardID)>::VTable
    * const var_1990 = &_vtable_for_std::__ndk1::__function::__func<Lurker()::$_1, std::__ndk1::allocator<Lurker()::$_1>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Lurker()::$_1, std::__ndk1::allocator<Lurker()::$_1>, bool (CardID)>::VTable
    * const* var_1970 = &var_1990
CardIDs var_ca8
FilterCards(&var_1990, &var_ca8, nullptr)

if (&var_1990 == var_1970)
    (*var_1970)->vFunc_4()
else if (var_1970 != 0)
    (*var_1970)->j_operator delete()

operator+(&var_ca8, &var_1930)
int128_t var_2650

if ((HaveElderPower() & 1) == 0)
    int32_t var_cb0
    int32_t x9_1
    
    x9_1 = var_cb0 == 0 ? 0x2d : 0x2c
    
    void var_2618
    var_2650:8.q = &var_2618
    int128_t var_2640
    var_2640.q = 0
    var_2650.d = x9_1
    var_2650:4.d = 0
    int32_t var_1998
    var_2640:8.d = var_1998
    __builtin_memset(&var_2640:0xc, 0, 0x1c)
else
    __builtin_memset(&var_2650, 0, 0x38)

struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Lurker()::$_2, std::__ndk1::allocator<Lurker()::$_2>, void ()>::VTable
    * const var_26d0 = &_vtable_for_std::__ndk1::__function::__func<Lurker()::$_2, std::__ndk1::allocator<Lurker()::$_2>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Lurker()::$_2, std::__ndk1::allocator<Lurker()::$_2>, void ()>::VTable
    * const* result = &var_26d0
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Lurker()::$_3, std::__ndk1::allocator<Lurker()::$_3>, void ()>::VTable
    * const var_2690 = &_vtable_for_std::__ndk1::__function::__func<Lurker()::$_3, std::__ndk1::allocator<Lurker()::$_3>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Lurker()::$_3, std::__ndk1::allocator<Lurker()::$_3>, void ()>::VTable
    * const* var_2670 = &var_2690
int64_t var_26a0 = 0x1a
int64_t var_2660 = 0x1b
ChooseOne(&var_26d0, 2, &var_2650)

if (&var_2690 == var_2670)
    (*var_2670)->vFunc_4()
else if (var_2670 != 0)
    (*var_2670)->j_operator delete()

int64_t (* const x8_11)(void* arg1)

if (&var_26d0 == result)
    x8_11 = (*result)->vFunc_4
else
    if (result == 0)
        return result
    
    x8_11 = (*result)->j_operator delete

return x8_11()
