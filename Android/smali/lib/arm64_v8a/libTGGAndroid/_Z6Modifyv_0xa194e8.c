// 函数: _Z6Modifyv
// 地址: 0xa194e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_60 = 0xb6
int32_t var_48 = TrashOne(7, 0)
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Modify()::$_25, std::__ndk1::allocator<Modify()::$_25>, void ()>::VTable
    * const var_90 = &_vtable_for_std::__ndk1::__function::__func<Modify()::$_25, std::__ndk1::allocator<Modify()::$_25>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Modify()::$_25, std::__ndk1::allocator<Modify()::$_25>, void ()>::VTable
    * const* result = &var_90
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Modify()::$_26, std::__ndk1::allocator<Modify()::$_26>, void ()>::VTable
    * const var_50 = &_vtable_for_std::__ndk1::__function::__func<Modify()::$_26, std::__ndk1::allocator<Modify()::$_26>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Modify()::$_26, std::__ndk1::allocator<Modify()::$_26>, void ()>::VTable
    * const* var_30 = &var_50
int64_t var_20 = 0xb7
ChooseOne(&var_90, 2, DOMCHOICEUI_DEFAULT)

if (&var_50 == var_30)
    (*var_30)->vFunc_4()
else if (var_30 != 0)
    (*var_30)->j_operator delete()

int64_t (* const x8_5)(void* arg1)

if (&var_90 == result)
    x8_5 = (*result)->vFunc_4
else
    if (result == 0)
        return result
    
    x8_5 = (*result)->j_operator delete

return x8_5()
