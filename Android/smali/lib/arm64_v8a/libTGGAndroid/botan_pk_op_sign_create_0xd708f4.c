// 函数: botan_pk_op_sign_create
// 地址: 0xd708f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
int32_t x19_1

if (arg1 == 0)
    x19_1 = -0x1f
    
    if (*(x23 + 0x28) != x8)
        __stack_chk_fail()
        noreturn
else if (arg4 u> 1)
    x19_1 = -0x1e
label_d709a4:
    
    if (*(x23 + 0x28) != x8)
        __stack_chk_fail()
        noreturn
else
    struct std::__ndk1::__function::__base<int32_t ()>::std::__ndk1::__function::__func<botan_pk_op_sign_create::$_129, std::__ndk1::allocator<botan_pk_op_sign_create::$_129>, int32_t ()>::VTable
        ** x0 = operator new(0x28)
    x0[2].d = arg4
    x0[3] = arg2
    x0[4] = arg3
    *x0 = &_vtable_for_std::__ndk1::__function::__func<botan_pk_op_sign_create::$_129, std::__ndk1::allocator<botan_pk_op_sign_create::$_129>, int32_t ()>{for `std::__ndk1::__function::__base<int32_t ()>'}
    x0[1] = arg1
    void var_70
    x19_1 = Botan_FFI::ffi_guard_thunk("botan_pk_op_sign_create", &var_70)
    int64_t (* const x8_2)(void* arg1)
    
    if (&var_70 != x0)
        if (x0 == 0)
            goto label_d709a4
        
        x8_2 = (*x0)->j_operator delete
        goto label_d709cc
    
    x8_2 = (*x0)->vFunc_4
label_d709cc:
    x8_2()
    
    if (*(x23 + 0x28) != x8)
        __stack_chk_fail()
        noreturn

return zx.q(x19_1)
