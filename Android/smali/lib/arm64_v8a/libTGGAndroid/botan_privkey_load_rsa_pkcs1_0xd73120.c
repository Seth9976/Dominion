// 函数: botan_privkey_load_rsa_pkcs1
// 地址: 0xd73120
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
*arg1 = 0
void* var_98_1
__builtin_memset(&var_98_1, 0, 0x18)
void* var_90_1
void* var_88_1
void* x22_1
void* x24_1

if (arg3 == 0)
    x22_1 = nullptr
    x24_1 = nullptr
label_d7319c:
    void* var_b0
    __builtin_memset(&var_b0, 0, 0x18)
    uint64_t x21_2 = x24_1 - x22_1
    void* x20_2
    void* x22_2
    void* x24_2
    
    if (x24_1 == x22_1)
        x22_2 = nullptr
        x24_2 = nullptr
        x20_2 = nullptr
    label_d73208:
        int64_t var_60_1 = 0
        int64_t* x0_5 = operator new(0x28)
        x0_5[2] = x20_2
        x0_5[3] = x24_2
        x0_5[4] = x22_2
        __builtin_memset(&var_b0, 0, 0x18)
        *x0_5 = &_vtable_for_std::__ndk1::__function::__func<botan_privkey_load_rsa_pkcs1::$_158, std::__ndk1::allocator<botan_privkey_load_rsa_pkcs1::$_158>, int32_t ()>{for `std::__ndk1::__function::__base<int32_t ()>'}
        x0_5[1] = arg1
        void var_80
        int32_t x0_6 = Botan_FFI::ffi_guard_thunk("botan_privkey_load_rsa_pkcs1", &var_80)
        
        if (&var_80 == x0_5)
            (*(*x0_5 + 0x20))()
        else if (x0_5 != 0)
            (*(*x0_5 + 0x28))()
        
        void* x0_8 = var_b0
        
        if (x0_8 != 0)
            void* var_a8_2 = x0_8
            int64_t var_a0_2
            Botan::deallocate_memory(x0_8, var_a0_2 - x0_8, 1)
        
        void* x0_9 = var_98_1
        
        if (x0_9 != 0)
            void* var_90_2 = x0_9
            Botan::deallocate_memory(x0_9, var_88_1 - x0_9, 1)
        
        if (*(x23 + 0x28) == x8)
            return zx.q(x0_6)
    else
        if ((x21_2 & 0xffffffff80000000) == 0)
            void* x0_3 = Botan::allocate_memory(x21_2, 1)
            void* x1_1 = var_98_1
            x22_2 = x0_3 + x21_2
            x20_2 = x0_3
            x24_2 = x0_3
            size_t x21_3 = var_90_1 - x1_1
            var_b0 = x0_3
            void* var_a0_1 = x22_2
            
            if (x21_3 s>= 1)
                memcpy(x20_2, x1_1, x21_3)
                x24_2 = x20_2 + x21_3
            
            void* var_a8_1 = x24_2
            goto label_d73208
        
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    if ((arg3 & 0xffffffff80000000) == 0)
        void* x0_1 = Botan::allocate_memory(arg3, 1)
        x24_1 = x0_1 + arg3
        x22_1 = x0_1
        var_98_1 = x0_1
        var_88_1 = x24_1
        memcpy(x0_1, arg2, arg3)
        var_90_1 = x24_1
        goto label_d7319c
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
__stack_chk_fail()
noreturn
