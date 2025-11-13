// 函数: _Z8Governorv
// 地址: 0xab1354
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Action(1, 0)
int64_t var_a0 = 0x88
int64_t var_60 = 0x89
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Governor()::$_2, std::__ndk1::allocator<Governor()::$_2>, void ()>::VTable
    * const var_d0 = &_vtable_for_std::__ndk1::__function::__func<Governor()::$_2, std::__ndk1::allocator<Governor()::$_2>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Governor()::$_2, std::__ndk1::allocator<Governor()::$_2>, void ()>::VTable
    * const* result = &var_d0
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Governor()::$_3, std::__ndk1::allocator<Governor()::$_3>, void ()>::VTable
    * const var_90 = &_vtable_for_std::__ndk1::__function::__func<Governor()::$_3, std::__ndk1::allocator<Governor()::$_3>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Governor()::$_3, std::__ndk1::allocator<Governor()::$_3>, void ()>::VTable
    * const* var_70 = &var_90
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Governor()::$_4, std::__ndk1::allocator<Governor()::$_4>, void ()>::VTable
    * const var_50 = &_vtable_for_std::__ndk1::__function::__func<Governor()::$_4, std::__ndk1::allocator<Governor()::$_4>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Governor()::$_4, std::__ndk1::allocator<Governor()::$_4>, void ()>::VTable
    * const* var_30 = &var_50
int64_t var_20 = 0x8a
ChooseOne(&var_d0, 3, DOMCHOICEUI_DEFAULT)

if (&var_50 == var_30)
    (*var_30)->vFunc_4()
else if (var_30 != 0)
    (*var_30)->j_operator delete()

if (&var_90 == var_70)
    (*var_70)->vFunc_4()
else if (var_70 != 0)
    (*var_70)->j_operator delete()

int64_t (* const x8_8)(void* arg1)

if (&var_d0 == result)
    x8_8 = (*result)->vFunc_4
else
    if (result == 0)
        return result
    
    x8_8 = (*result)->j_operator delete

return x8_8()
