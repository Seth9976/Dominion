// 函数: botan_mac_init
// 地址: 0xd6c5d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x20 + 0x28)
struct std::__ndk1::__function::__base<int32_t ()>::std::__ndk1::__function::__func<botan_mac_init::$_75, std::__ndk1::allocator<botan_mac_init::$_75>, int32_t ()>::VTable
    * const var_60 = &_vtable_for_std::__ndk1::__function::__func<botan_mac_init::$_75, std::__ndk1::allocator<botan_mac_init::$_75>, int32_t ()>{for `std::__ndk1::__function::__base<int32_t ()>'}
int64_t x0
int64_t var_58 = x0
int64_t x1
int64_t var_50 = x1
int32_t x2
int32_t var_48 = x2
struct std::__ndk1::__function::__base<int32_t ()>::std::__ndk1::__function::__func<botan_mac_init::$_75, std::__ndk1::allocator<botan_mac_init::$_75>, int32_t ()>::VTable
    * const* var_40 = &var_60
int32_t x0_1 = Botan_FFI::ffi_guard_thunk("botan_mac_init", &var_60)

if (&var_60 == var_40)
    (*var_40)->vFunc_4()
else if (var_40 != 0)
    (*var_40)->j_operator delete()

if (*(x20 + 0x28) == x8)
    return zx.q(x0_1)

__stack_chk_fail()
noreturn
