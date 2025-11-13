// 函数: _Z5Thiefv
// 地址: 0xa265ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_4b40 = 0
int32_t var_14 = CurrentWho()
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Thief()::$_7, std::__ndk1::allocator<Thief()::$_7>, void ()>::VTable
    * const var_57f0 = &_vtable_for_std::__ndk1::__function::__func<Thief()::$_7, std::__ndk1::allocator<Thief()::$_7>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
void var_4b38
void* var_57e8 = &var_4b38
int32_t* var_57e0 = &var_14
void var_57c0
void* var_57d8 = &var_57c0
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Thief()::$_7, std::__ndk1::allocator<Thief()::$_7>, void ()>::VTable
    * const* var_57d0 = &var_57f0
OtherPlayers(&var_57f0)

if (&var_57f0 == var_57d0)
    (*var_57d0)->vFunc_4()
else if (var_57d0 != 0)
    (*var_57d0)->j_operator delete()

int128_t var_64b0
__builtin_memset(&var_64b0, 0, 0x20)
var_64b0.d = 0x2b
int128_t var_64a0
__builtin_memset(&var_64a0:0xc, 0, 0x1c)
ChooseCardsRange(&var_57c0, 0, var_4b40, 7, &var_64b0, 0xc, 0, 0)
int32_t var_57f8
void var_6478

if (var_57f8 != 0)
    GainCards(&var_6478, 0x476, 2)
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Thief()::$_8, std::__ndk1::allocator<Thief()::$_8>, void ()>::VTable
    * const var_64e0 = &_vtable_for_std::__ndk1::__function::__func<Thief()::$_8, std::__ndk1::allocator<Thief()::$_8>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
void* var_64d8 = &var_4b38
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Thief()::$_8, std::__ndk1::allocator<Thief()::$_8>, void ()>::VTable
    * const* result = &var_64e0
OtherPlayers(&var_64e0)
int64_t (* const x8_6)(void* arg1)

if (&var_64e0 == result)
    x8_6 = (*result)->vFunc_4
else
    if (result == 0)
        return result
    
    x8_6 = (*result)->j_operator delete

return x8_6()
