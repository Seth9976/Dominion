// 函数: botan_pubkey_sm2_compute_za
// 地址: 0xd74648
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x25 + 0x28)
int32_t x19 = -0x1f

if (arg1 != 0 && arg2 != 0)
    x19 = -0x1f
    
    if (arg3 != 0 && arg4 != 0 && arg5 != 0)
        struct std::__ndk1::__function::__base<int32_t ()>::std::__ndk1::__function::__func<botan_pubkey_sm2_compute_za::$_173, std::__ndk1::allocator<botan_pubkey_sm2_compute_za::$_173>, int32_t ()>::VTable
            ** x0 = operator new(0x30)
        x0[2] = arg3
        x0[3] = arg4
        x0[4] = arg1
        x0[5] = arg2
        *x0 = &_vtable_for_std::__ndk1::__function::__func<botan_pubkey_sm2_compute_za::$_173, std::__ndk1::allocator<botan_pubkey_sm2_compute_za::$_173>, int32_t ()>{for `std::__ndk1::__function::__base<int32_t ()>'}
        x0[1] = arg5
        void var_80
        x19 = Botan_FFI::ffi_guard_thunk("botan_pubkey_sm2_compute_za", &var_80)
        int64_t* x0_2 = x0
        
        if (&var_80 == x0_2)
            (*(*x0_2 + 0x20))()
        else if (x0_2 != 0)
            (*(*x0_2 + 0x28))()

if (*(x25 + 0x28) == x8)
    return zx.q(x19)

__stack_chk_fail()
noreturn
