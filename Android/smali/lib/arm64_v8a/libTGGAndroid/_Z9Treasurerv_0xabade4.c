// 函数: _Z9Treasurerv
// 地址: 0xabade4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

MoneyPlus(3, 0, false)
int32_t x0 = CountWhereType(0x3ea, 2)
int32_t x0_1 = CountWhereType(2, 2)
int32_t x0_2 = HasArtifact(0xe1b)
int32_t x10

x10 = x0 == 0 ? 0x77 : 0x74

struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Treasurer()::$_17, std::__ndk1::allocator<Treasurer()::$_17>, void ()>::VTable
    * const var_a0 = &_vtable_for_std::__ndk1::__function::__func<Treasurer()::$_17, std::__ndk1::allocator<Treasurer()::$_17>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
int32_t x13

x13 = x0_1 == 0 ? 0x78 : 0x75

struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Treasurer()::$_16, std::__ndk1::allocator<Treasurer()::$_16>, void ()>::VTable
    * const var_e0 = &_vtable_for_std::__ndk1::__function::__func<Treasurer()::$_16, std::__ndk1::allocator<Treasurer()::$_16>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
int32_t x8

if ((x0_2 & 1) != 0)
    x8 = 0x79
else
    x8 = 0x76

struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Treasurer()::$_17, std::__ndk1::allocator<Treasurer()::$_17>, void ()>::VTable
    * const* var_80 = &var_a0
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Treasurer()::$_16, std::__ndk1::allocator<Treasurer()::$_16>, void ()>::VTable
    * const* result = &var_e0
int32_t var_b0 = x10
int32_t var_ac = 0
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Treasurer()::$_18, std::__ndk1::allocator<Treasurer()::$_18>, void ()>::VTable
    * const var_60 = &_vtable_for_std::__ndk1::__function::__func<Treasurer()::$_18, std::__ndk1::allocator<Treasurer()::$_18>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Treasurer()::$_18, std::__ndk1::allocator<Treasurer()::$_18>, void ()>::VTable
    * const* var_40 = &var_60
int32_t var_70 = x13
int32_t var_6c = 0
int32_t var_30 = x8
int32_t var_2c = 0
ChooseOne(&var_e0, 3, DOMCHOICEUI_DEFAULT)

if (&var_60 == var_40)
    (*var_40)->vFunc_4()
else if (var_40 != 0)
    (*var_40)->j_operator delete()

if (&var_a0 == var_80)
    (*var_80)->vFunc_4()
else if (var_80 != 0)
    (*var_80)->j_operator delete()

int64_t (* const x8_8)(void* arg1)

if (&var_e0 == result)
    x8_8 = (*result)->vFunc_4
else
    if (result == 0)
        return result
    
    x8_8 = (*result)->j_operator delete

return x8_8()
