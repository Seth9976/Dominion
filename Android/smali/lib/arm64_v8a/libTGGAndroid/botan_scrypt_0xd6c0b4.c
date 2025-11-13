// 函数: botan_scrypt
// 地址: 0xd6c0b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x28 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x28 + 0x28)
int32_t x19_1

if (arg3 == 0)
    x19_1 = -0x1f
else
    size_t x0_1 = strlen(arg3)
    struct std::__ndk1::__function::__base<int32_t ()>::std::__ndk1::__function::__func<botan_pwdhash::$_68, std::__ndk1::allocator<botan_pwdhash::$_68>, int32_t ()>::VTable
        ** x0_2 = operator new(0x58)
    x0_2[2] = arg6
    x0_2[3] = arg7
    x0_2[4] = arg8
    x0_2[5] = arg1
    x0_2[6] = arg2
    x0_2[7] = arg3
    x0_2[8] = x0_1
    x0_2[9] = arg4
    x0_2[0xa] = arg5
    *x0_2 = &_vtable_for_std::__ndk1::__function::__func<botan_pwdhash::$_68, std::__ndk1::allocator<botan_pwdhash::$_68>, int32_t ()>{for `std::__ndk1::__function::__base<int32_t ()>'}
    x0_2[1] = "Scrypt"
    int64_t* var_80_1 = x0_2
    void var_a0
    x19_1 = Botan_FFI::ffi_guard_thunk("botan_pwdhash", &var_a0)
    
    if (&var_a0 == var_80_1)
        (*(*var_80_1 + 0x20))()
    else if (var_80_1 != 0)
        (*(*var_80_1 + 0x28))()

if (*(x28 + 0x28) == x8)
    return zx.q(x19_1)

__stack_chk_fail()
noreturn
