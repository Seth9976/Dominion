// 函数: _Z5Miserv
// 地址: 0xa0b400
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = CountWhereWhat(0x461, 0x104, 0xffffffff)
int128_t var_d0
__builtin_memset(&var_d0, 0, 0x38)
int64_t var_60 = 0x5e
int32_t var_48 = x0
int128_t var_c0
var_c0:0xc.d = x0
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Miser()::$_6, std::__ndk1::allocator<Miser()::$_6>, void ()>::VTable
    * const var_90 = &_vtable_for_std::__ndk1::__function::__func<Miser()::$_6, std::__ndk1::allocator<Miser()::$_6>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Miser()::$_6, std::__ndk1::allocator<Miser()::$_6>, void ()>::VTable
    * const* result = &var_90
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Miser()::$_7, std::__ndk1::allocator<Miser()::$_7>, void ()>::VTable
    * const var_50 = &_vtable_for_std::__ndk1::__function::__func<Miser()::$_7, std::__ndk1::allocator<Miser()::$_7>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Miser()::$_7, std::__ndk1::allocator<Miser()::$_7>, void ()>::VTable
    * const* var_30 = &var_50
int64_t var_20 = 0x5f
ChooseOne(&var_90, 2, &var_d0)

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
