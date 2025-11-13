// 函数: _Z8Courtierv
// 地址: 0xa83f7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_120
__builtin_memset(&var_120, 0, 0x28)
var_120.d = 0x35
int128_t var_110
var_110:0xc.d = 0
int128_t* result_1 = 0
int64_t var_f0 = 0
int128_t* result = ChooseOneFromHand(0x20, &var_120, 0x11, 0)

if (result.d != 0)
    RevealTemp(result, 0x3ea, 0)
    int32_t x0_1 = NumCardTypes(zx.q(result.d))
    int64_t var_f0_1 = 0x20
    var_120.q = &_vtable_for_std::__ndk1::__function::__func<Courtier()::$_16, std::__ndk1::allocator<Courtier()::$_16>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
    int64_t var_b0_1 = 0x21
    int64_t var_70_1 = 0x22
    result_1 = &var_120
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Courtier()::$_17, std::__ndk1::allocator<Courtier()::$_17>, void ()>::VTable
        * const var_e0 = &_vtable_for_std::__ndk1::__function::__func<Courtier()::$_17, std::__ndk1::allocator<Courtier()::$_17>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Courtier()::$_17, std::__ndk1::allocator<Courtier()::$_17>, void ()>::VTable
        * const* var_c0_1 = &var_e0
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Courtier()::$_18, std::__ndk1::allocator<Courtier()::$_18>, void ()>::VTable
        * const var_a0 = &_vtable_for_std::__ndk1::__function::__func<Courtier()::$_18, std::__ndk1::allocator<Courtier()::$_18>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Courtier()::$_18, std::__ndk1::allocator<Courtier()::$_18>, void ()>::VTable
        * const* var_80_1 = &var_a0
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Courtier()::$_19, std::__ndk1::allocator<Courtier()::$_19>, void ()>::VTable
        * const var_60 = &_vtable_for_std::__ndk1::__function::__func<Courtier()::$_19, std::__ndk1::allocator<Courtier()::$_19>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Courtier()::$_19, std::__ndk1::allocator<Courtier()::$_19>, void ()>::VTable
        * const* var_40_1 = &var_60
    int64_t var_30_1 = 0x23
    ChooseN(x0_1, &var_120, 4, DOMCHOICEUI_DEFAULT, 0)
    
    if (&var_60 == var_40_1)
        (*var_40_1)->vFunc_4()
    else if (var_40_1 != 0)
        (*var_40_1)->j_operator delete()
    
    if (&var_a0 == var_80_1)
        (*var_80_1)->vFunc_4()
    else if (var_80_1 != 0)
        (*var_80_1)->j_operator delete()
    
    if (&var_e0 == var_c0_1)
        (*var_c0_1)->vFunc_4()
    else if (var_c0_1 != 0)
        (*var_c0_1)->j_operator delete()
    
    result = result_1
    
    if (&var_120 == result)
        return (*(*result + 0x20))()
    
    if (result != 0)
        return (*(*result + 0x28))()

return result
