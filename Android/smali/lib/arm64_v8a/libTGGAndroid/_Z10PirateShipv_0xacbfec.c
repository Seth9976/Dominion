// 函数: _Z10PirateShipv
// 地址: 0xacbfec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = NumPirateTokens()
int128_t var_d0
__builtin_memset(&var_d0, 0, 0x38)
int64_t var_60 = 0x33
int128_t var_c0
var_c0:0xc.d = x0
void* __offset(
    vtable_for_std::__ndk1::__function::__func<void (*)(), std::__ndk1::allocator<void (*)()>, void ()>, 
    0x10) var_90
void* __offset(
    vtable_for_std::__ndk1::__function::__func<void (*)(), std::__ndk1::allocator<void (*)()>, void ()>, 
    0x10)* result = &var_90
var_90 = _vtable_for_std::__ndk1::__function::__func<void (*)(), std::__ndk1::allocator<void (*)()>, void ()>
    + 0x10
int64_t (* const var_88)() = PirateShip_Attack
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<PirateShip()::$_12, std::__ndk1::allocator<PirateShip()::$_12>, void ()>::VTable
    * const var_50 = &_vtable_for_std::__ndk1::__function::__func<PirateShip()::$_12, std::__ndk1::allocator<PirateShip()::$_12>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<PirateShip()::$_12, std::__ndk1::allocator<PirateShip()::$_12>, void ()>::VTable
    * const* var_30 = &var_50
int64_t var_20 = 0x32
ChooseOne(&var_90, 2, &var_d0)

if (&var_50 == var_30)
    (*var_30)->vFunc_4()
else if (var_30 != 0)
    (*var_30)->j_operator delete()

int64_t x8_5

if (&var_90 == result)
    x8_5 = *(*result + 0x20)
else
    if (result == 0)
        return result
    
    x8_5 = *(*result + 0x28)

return x8_5()
