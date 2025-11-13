// 函数: botan_pubkey_load_dsa
// 地址: 0xd73870
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x24 + 0x28)
*arg1 = 0
struct std::__ndk1::__function::__base<int32_t ()>::std::__ndk1::__function::__func<botan_pubkey_load_dsa::$_163, std::__ndk1::allocator<botan_pubkey_load_dsa::$_163>, int32_t ()>::VTable
    ** x0 = operator new(0x30)
x0[2] = arg3
x0[3] = arg4
x0[4] = arg1
x0[5] = arg5
*x0 = &_vtable_for_std::__ndk1::__function::__func<botan_pubkey_load_dsa::$_163, std::__ndk1::allocator<botan_pubkey_load_dsa::$_163>, int32_t ()>{for `std::__ndk1::__function::__base<int32_t ()>'}
x0[1] = arg2
void var_80
int32_t x0_1 = Botan_FFI::ffi_guard_thunk("botan_pubkey_load_dsa", &var_80)
int64_t* x0_2 = x0

if (&var_80 == x0_2)
    (*(*x0_2 + 0x20))()
else if (x0_2 != 0)
    (*(*x0_2 + 0x28))()

if (*(x24 + 0x28) == x8)
    return zx.q(x0_1)

__stack_chk_fail()
noreturn
