// 函数: _Z11Graverobberv
// 地址: 0xa6331c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsTrash()
void var_ca8
FilterCost(&var_ca8, 3, 6)
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Graverobber()::$_22, std::__ndk1::allocator<Graverobber()::$_22>, void ()>::VTable
    * const* result = CardsWhereType(0x3ea, 4)
int32_t var_28
int32_t var_cb0
int32_t x9_1

if (var_28 != 0)
    x9_1 = 0x44
label_a63388:
    int32_t var_1980_1 = x9_1
    int32_t var_197c_1 = 0
    int32_t x9_2
    
    x9_2 = var_cb0 == 0 ? 0x6e : 0x6c
    
    int32_t x11_1
    
    x11_1 = var_cb0 == 0 ? 0x47 : 0x46
    
    int32_t x8_1
    
    x8_1 = var_28 == 0 ? 0x6d : x9_2
    
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Graverobber()::$_22, std::__ndk1::allocator<Graverobber()::$_22>, void ()>::VTable
        * const var_19b0 = &_vtable_for_std::__ndk1::__function::__func<Graverobber()::$_22, std::__ndk1::allocator<Graverobber()::$_22>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Graverobber()::$_22, std::__ndk1::allocator<Graverobber()::$_22>, void ()>::VTable
        * const* result_1 = &var_19b0
    int128_t var_19f0
    __builtin_memset(&var_19f0, 0, 0x38)
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Graverobber()::$_23, std::__ndk1::allocator<Graverobber()::$_23>, void ()>::VTable
        * const var_1970 = &_vtable_for_std::__ndk1::__function::__func<Graverobber()::$_23, std::__ndk1::allocator<Graverobber()::$_23>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Graverobber()::$_23, std::__ndk1::allocator<Graverobber()::$_23>, void ()>::VTable
        * const* var_1950_1 = &var_1970
    int32_t var_1940_1 = x11_1
    int32_t var_193c_1 = 0
    var_19f0.d = x8_1
    ChooseOne(&var_19b0, 2, &var_19f0)
    
    if (&var_1970 == var_1950_1)
        (*var_1950_1)->vFunc_4()
    else if (var_1950_1 != 0)
        (*var_1950_1)->j_operator delete()
    
    result = result_1
    
    if (&var_19b0 == result)
        return (*result)->vFunc_4()
    
    if (result != 0)
        return (*result)->j_operator delete()
else if (var_cb0 != 0)
    x9_1 = 0x45
    goto label_a63388
return result
