// 函数: botan_privkey_create_dsa
// 地址: 0xd73638
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x24 + 0x28)
int32_t x19 = -0x1f

if (arg1 != 0 && arg2 != 0)
    if ((arg3 & 0x3f) == 0)
        x19 = -0x20
        
        if (arg4 - 0xa0 u<= 0x60 && arg3 - 0x400 u<= 0x800 && (arg4 & 7) == 0)
            struct std::__ndk1::__function::__base<int32_t ()>::std::__ndk1::__function::__func<botan_privkey_create_dsa::$_161, std::__ndk1::allocator<botan_privkey_create_dsa::$_161>, int32_t ()>::VTable
                ** x0_1 = operator new(0x28)
            x0_1[2] = arg3
            x0_1[3] = arg4
            x0_1[4] = arg1
            *x0_1 = &_vtable_for_std::__ndk1::__function::__func<botan_privkey_create_dsa::$_161, std::__ndk1::allocator<botan_privkey_create_dsa::$_161>, int32_t ()>{for `std::__ndk1::__function::__base<int32_t ()>'}
            x0_1[1] = arg2
            void var_80
            x19 = Botan_FFI::ffi_guard_thunk("botan_privkey_create_dsa", &var_80)
            int64_t* x0_3 = x0_1
            
            if (&var_80 == x0_3)
                (*(*x0_3 + 0x20))()
            else if (x0_3 != 0)
                (*(*x0_3 + 0x28))()
    else
        x19 = -0x20

if (*(x24 + 0x28) == x8)
    return zx.q(x19)

__stack_chk_fail()
noreturn
