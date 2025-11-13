// 函数: botan_privkey_create_ecdh
// 地址: 0xd74248
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x25 + 0x28)
int32_t x19_1

if (arg3 == 0)
    x19_1 = -0x1f
label_d743f8:
    
    if (*(x25 + 0x28) == x8)
        return zx.q(x19_1)
else
    size_t x0_1 = strlen(arg3)
    
    if (x0_1 u< -0x10)
        int64_t var_98
        size_t var_90
        void* var_88
        void* x23_1
        
        if (x0_1 u>= 0x17)
            uint64_t x24_1 = (x0_1 + 0x10) & 0xfffffffffffffff0
            void* x0_3 = operator new(x24_1)
            x23_1 = x0_3
            var_90 = x0_1
            var_88 = x0_3
            var_98 = x24_1 | 1
            memcpy(x23_1, arg3, x0_1)
        else
            x23_1 = &var_98 | 1
            var_98.b = (x0_1.d << 1).b
            
            if (x0_1 != 0)
                memcpy(x23_1, arg3, x0_1)
        
        *(x23_1 + x0_1) = 0
        uint64_t x8_4 = zx.q(var_98.b)
        size_t x8_5
        
        if ((x8_4.d & 1) == 0)
            x8_5 = x8_4 u>> 1
        else
            x8_5 = var_90
        
        int32_t x0_6
        
        if (x8_5 == 0xa)
            x0_6 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &var_98, 0, -ffffffffffffffff, "curve25519")
        
        void var_80
        int64_t* x0_9
        
        if (x8_5 == 0xa && x0_6 == 0)
            int64_t* x0_10 = operator new(0x28)
            *x0_10 = &_vtable_for_std::__ndk1::__function::__func<botan_privkey_create::$_140, std::__ndk1::allocator<botan_privkey_create::$_140>, int32_t ()>{for `std::__ndk1::__function::__base<int32_t ()>'}
            x0_10[1] = arg1
            x0_10[2] = arg2
            x0_10[3] = "Curve25519"
            x0_10[4] = &data_793a18
            x19_1 = Botan_FFI::ffi_guard_thunk("botan_privkey_create", &var_80)
            x0_9 = x0_10
            
            if (&var_80 != x0_9)
                goto label_d74370
            
            (*(*x0_9 + 0x20))(x0_9)
        else
            int64_t* x0_7 = operator new(0x28)
            x0_7[3] = "ECDH"
            x0_7[4] = arg3
            *x0_7 = &_vtable_for_std::__ndk1::__function::__func<botan_privkey_create::$_140, std::__ndk1::allocator<botan_privkey_create::$_140>, int32_t ()>{for `std::__ndk1::__function::__base<int32_t ()>'}
            x0_7[1] = arg1
            x0_7[2] = arg2
            x19_1 = Botan_FFI::ffi_guard_thunk("botan_privkey_create", &var_80)
            x0_9 = x0_7
            
            if (&var_80 == x0_9)
                (*(*x0_9 + 0x20))(x0_9)
            else
            label_d74370:
                
                if (x0_9 != 0)
                    (*(*x0_9 + 0x28))(x0_9)
        
        if ((zx.d(var_98.b) & 1) != 0)
            operator delete(var_88)
        
        goto label_d743f8
    
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
__stack_chk_fail()
noreturn
