// 函数: botan_pk_op_encrypt_create
// 地址: 0xd70178
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x20 + 0x28)
int32_t x19

if (arg1 == 0)
    x19 = -0x1f
    
    if (*(x20 + 0x28) != x8)
        __stack_chk_fail()
        noreturn
else if (arg4 u> 1)
    x19 = -0x1e
label_d70208:
    
    if (*(x20 + 0x28) != x8)
        __stack_chk_fail()
        noreturn
else
    int64_t var_50_1 = arg2
    int64_t var_48_1 = arg3
    struct std::__ndk1::__function::__base<int32_t ()>::std::__ndk1::__function::__func<botan_pk_op_encrypt_create::$_123, std::__ndk1::allocator<botan_pk_op_encrypt_create::$_123>, int32_t ()>::VTable
        * const var_60 = &_vtable_for_std::__ndk1::__function::__func<botan_pk_op_encrypt_create::$_123, std::__ndk1::allocator<botan_pk_op_encrypt_create::$_123>, int32_t ()>{for `std::__ndk1::__function::__base<int32_t ()>'}
    int64_t var_58_1 = arg1
    struct std::__ndk1::__function::__base<int32_t ()>::std::__ndk1::__function::__func<botan_pk_op_encrypt_create::$_123, std::__ndk1::allocator<botan_pk_op_encrypt_create::$_123>, int32_t ()>::VTable
        * const* var_40_1 = &var_60
    x19 = Botan_FFI::ffi_guard_thunk("botan_pk_op_encrypt_create", &var_60)
    int64_t (* const x8_2)(void* arg1)
    
    if (&var_60 != var_40_1)
        if (var_40_1 == 0)
            goto label_d70208
        
        x8_2 = (*var_40_1)->j_operator delete
        goto label_d7022c
    
    x8_2 = (*var_40_1)->vFunc_4
label_d7022c:
    x8_2()
    
    if (*(x20 + 0x28) != x8)
        __stack_chk_fail()
        noreturn

return zx.q(x19)
