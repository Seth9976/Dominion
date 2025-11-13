// 函数: botan_pwdhash_timed
// 地址: 0xd6be3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x28 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x28 + 0x28)
int32_t x20 = -0x1f

if (arg1 != 0 && arg8 != 0)
    size_t x20_1 = arg9
    
    if (x20_1 == 0)
        x20_1 = strlen(arg8)
    
    int64_t* x0_2 = operator new(0x60)
    x0_2[1] = arg1
    x0_2[2] = arg7
    x0_2[3].d = arg2
    x0_2[4] = arg3
    x0_2[5] = arg4
    x0_2[6] = arg5
    x0_2[7] = arg6
    x0_2[8] = arg8
    x0_2[9] = x20_1
    x0_2[0xa] = arg10
    x0_2[0xb] = arg11
    *x0_2 = &_vtable_for_std::__ndk1::__function::__func<botan_pwdhash_timed::$_69, std::__ndk1::allocator<botan_pwdhash_timed::$_69>, int32_t ()>{for `std::__ndk1::__function::__base<int32_t ()>'}
    void var_a0
    x20 = Botan_FFI::ffi_guard_thunk("botan_pwdhash_timed", &var_a0)
    
    if (&var_a0 == x0_2)
        (*(*x0_2 + 0x20))()
    else if (x0_2 != 0)
        (*(*x0_2 + 0x28))()

if (*(x28 + 0x28) == x8)
    return zx.q(x20)

__stack_chk_fail()
noreturn
