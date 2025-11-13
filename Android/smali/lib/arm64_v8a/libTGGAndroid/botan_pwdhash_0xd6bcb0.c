// 函数: botan_pwdhash
// 地址: 0xd6bcb0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x28 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x28 + 0x28)
int32_t x19 = -0x1f

if (arg1 != 0 && arg7 != 0)
    size_t x23_1 = arg8
    
    if (arg8 == 0)
        x23_1 = strlen(arg7)
    
    int64_t* x0_2 = operator new(0x58)
    x0_2[2] = arg2
    x0_2[3] = arg3
    x0_2[4] = arg4
    x0_2[5] = arg5
    x0_2[6] = arg6
    x0_2[7] = arg7
    x0_2[8] = x23_1
    x0_2[9] = arg9
    x0_2[0xa] = arg10
    *x0_2 = &_vtable_for_std::__ndk1::__function::__func<botan_pwdhash::$_68, std::__ndk1::allocator<botan_pwdhash::$_68>, int32_t ()>{for `std::__ndk1::__function::__base<int32_t ()>'}
    x0_2[1] = arg1
    void var_a0
    x19 = Botan_FFI::ffi_guard_thunk("botan_pwdhash", &var_a0)
    
    if (&var_a0 == x0_2)
        (*(*x0_2 + 0x20))()
    else if (x0_2 != 0)
        (*(*x0_2 + 0x28))()

if (*(x28 + 0x28) == x8)
    return zx.q(x19)

__stack_chk_fail()
noreturn
