// 函数: botan_totp_init
// 地址: 0xd75ec4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x26 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x26 + 0x28)
int32_t x19 = -0x1f

if (arg1 != 0 && arg2 != 0 && arg4 != 0)
    *arg1 = 0
    struct std::__ndk1::__function::__base<int32_t ()>::std::__ndk1::__function::__func<botan_totp_init::$_192, std::__ndk1::allocator<botan_totp_init::$_192>, int32_t ()>::VTable
        ** x0 = operator new(0x38)
    x0[2] = arg2
    x0[3] = arg3
    x0[4] = arg4
    x0[5] = arg5
    x0[6] = arg6
    *x0 = &_vtable_for_std::__ndk1::__function::__func<botan_totp_init::$_192, std::__ndk1::allocator<botan_totp_init::$_192>, int32_t ()>{for `std::__ndk1::__function::__base<int32_t ()>'}
    x0[1] = arg1
    void var_90
    x19 = Botan_FFI::ffi_guard_thunk("botan_totp_init", &var_90)
    int64_t* x0_2 = x0
    
    if (&var_90 == x0_2)
        (*(*x0_2 + 0x20))()
    else if (x0_2 != 0)
        (*(*x0_2 + 0x28))()

if (*(x26 + 0x28) == x8)
    return zx.q(x19)

__stack_chk_fail()
noreturn
