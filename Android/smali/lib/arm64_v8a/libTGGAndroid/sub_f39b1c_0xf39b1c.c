// 函数: sub_f39b1c
// 地址: 0xf39b1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x25 + 0x28)
int64_t x21 = *(arg1 + 8)
uint64_t x20 = *(arg1 + 0x10)
void* __offset(vtable_for_Botan::DataSource_Memory, 0x10) var_a8 =
    _vtable_for_Botan::DataSource_Memory + 0x10
void* var_a0_1
__builtin_memset(&var_a0_1, 0, 0x18)

if (x20 == 0)
    goto label_f39b88

if ((x20 & 0xffffffff80000000) != 0)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
else
    void* x0_1 = Botan::allocate_memory(x20, 1)
    void* x22_1 = x0_1 + x20
    var_a0_1 = x0_1
    void* var_90_1 = x22_1
    memcpy(x0_1, x21, x20)
    void* var_98_1 = x22_1
label_f39b88:
    int64_t var_88_1 = 0
    char* x20_1 = *(arg1 + 0x18)
    int64_t var_b0
    struct std::__ndk1::__function::__base<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>::std::__ndk1::__function::__func<Botan::PKCS8::load_key(Botan::DataSource&)::$_198, std::__ndk1::allocator<Botan::PKCS8::load_key(Botan::DataSource&)::$_198>, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>::VTable
        * const var_80
    int64_t x21_2
    
    if (x20_1 == 0)
        var_80 = &_vtable_for_std::__ndk1::__function::__func<Botan::PKCS8::load_key(Botan::DataSource&)::$_198, std::__ndk1::allocator<Botan::PKCS8::load_key(Botan::DataSource&)::$_198>, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>{for `std::__ndk1::__function::__base<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>'}
        struct std::__ndk1::__function::__base<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>::std::__ndk1::__function::__func<Botan::PKCS8::load_key(Botan::DataSource&)::$_198, std::__ndk1::allocator<Botan::PKCS8::load_key(Botan::DataSource&)::$_198>, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>::VTable
            * const* var_60_1 = &var_80
        sub_dfb2d0(&var_b0, &var_a8, &var_80, 0)
        
        if (&var_80 == var_60_1)
            (*var_60_1)->vFunc_4()
        else if (var_60_1 != 0)
            (*var_60_1)->j_operator delete()
        
        x21_2 = var_b0
        int32_t x20_2
        void* var_98_2
        void* x0_12
        
        if (x21_2 != 0)
        label_f39c6c:
            void** x0_11 = operator new(0x18)
            x0_11[2] = x21_2
            x0_11[1].d = 0x7f96385e
            *x0_11 = _vtable_for_botan_privkey_struct + 0x10
            x20_2 = 0
            **(arg1 + 0x20) = x0_11
            x0_12 = var_a0_1
            var_a8 = _vtable_for_Botan::DataSource_Memory + 0x10
            
            if (x0_12 != 0)
                var_98_2 = x0_12
                Botan::deallocate_memory(x0_12, var_90_1 - x0_12, 1)
        else
        label_f39cc4:
            x20_2 = -0x64
            x0_12 = var_a0_1
            var_a8 = _vtable_for_Botan::DataSource_Memory + 0x10
            
            if (x0_12 != 0)
                var_98_2 = x0_12
                Botan::deallocate_memory(x0_12, var_90_1 - x0_12, 1)
        
        if (*(x25 + 0x28) == x8)
            return zx.q(x20_2)
    else
        size_t x0_3 = strlen(x20_1)
        
        if (x0_3 u< -0x10)
            void* var_70
            void* x22_2
            
            if (x0_3 u>= 0x17)
                uint64_t x23_1 = (x0_3 + 0x10) & 0xfffffffffffffff0
                void* x0_7 = operator new(x23_1)
                x22_2 = x0_7
                size_t var_78_1 = x0_3
                var_70 = x0_7
                var_80 = x23_1 | 1
                memcpy(x22_2, x20_1, x0_3)
            else
                x22_2 = &var_80 | 1
                var_80.b = (x0_3.d << 1).b
                
                if (x0_3 != 0)
                    memcpy(x22_2, x20_1, x0_3)
            
            *(x22_2 + x0_3) = 0
            Botan::PKCS8::load_key(&var_a8, &var_80)
            x21_2 = var_b0
            
            if ((zx.d(var_80.b) & 1) != 0)
                operator delete(var_70)
            
            if (x21_2 == 0)
                goto label_f39cc4
            
            goto label_f39c6c
        
        std::__ndk1::__basic_string_common<true>::__throw_length_error()

__stack_chk_fail()
noreturn
