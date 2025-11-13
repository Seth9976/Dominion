// 函数: _ZN5Botan10Extensions7add_newEPNS_21Certificate_ExtensionEb
// 地址: 0xeae190
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x21 = arg2
(**arg2)(arg2)
void* i = *(arg1 + 0x28)
int32_t* var_80
int32_t* x0_1
int32_t x20
int32_t* var_88

if (i == 0)
    x0_1 = var_88
    x20 = 1
else
    x0_1 = var_80
    
    if (var_88 == x0_1)
        int64_t x9_2
        int64_t x10_2
        
        do
            x9_2 = *(i + 0x28)
            x10_2 = *(i + 0x30)
            
            if (x9_2 == x10_2)
                break
            
            i = *i
        while (i != 0)
        
        x20 = x9_2 != x10_2 ? 1 : 0
    else
    label_eae1dc:
        int32_t* x11_1 = *(i + 0x28)
        int64_t x12_1 = *(i + 0x30)
        int32_t* x13_1 = var_88
        int32_t* x14_1 = x11_1
        
        if (x11_1 == x12_1)
        label_eae220:
            int64_t x13_2 = 0
            
            while (true)
                if (x12_1 - x11_1 != x13_2)
                    int32_t x14_2 = *(x11_1 + x13_2)
                    int32_t x15_2 = *(var_88 + x13_2)
                    
                    if (x14_2 u>= x15_2)
                        if (x15_2 u>= x14_2)
                            x13_2 += 4
                            
                            if (x0_1 - var_88 != x13_2)
                                continue
                        
                        x20 = 0
                        break
                
                i += 8
                goto label_eae25c
        else
            while (true)
                if (x0_1 != x13_1)
                    int32_t x15_1 = *x13_1
                    int32_t x16_1 = *x14_1
                    
                    if (x15_1 u>= x16_1)
                        if (x16_1 u< x15_1)
                            goto label_eae220
                        
                        x14_1 = &x14_1[1]
                        x13_1 = &x13_1[1]
                        
                        if (x12_1 == x14_1)
                            goto label_eae220
                        
                        continue
                
            label_eae25c:
                i = *i
                
                if (i != 0)
                    goto label_eae1dc
                
                x20 = 1
                break
        
        x0_1 = var_88
void* __offset(vtable_for_Botan::OID, 0x10) var_90 = _vtable_for_Botan::OID + 0x10

if (x0_1 != 0)
    var_80 = x0_1
    operator delete(x0_1)

if ((x20 & 1) != 0)
    (**x21)(x21)
    int64_t* var_90_1 = x21
    int64_t* x0_3 = operator new(0x20)
    x0_3[2] = 0
    x0_3[3] = x21
    *x0_3 = _vtable_for_std::__ndk1::__shared_ptr_pointer<Botan::Certificate_Extension*, std::__ndk1::default_delete<Botan::Certificate_Extension>, std::__ndk1::allocator<Botan::Certificate_Extension> >
        + 0x10
    x0_3[1] = 0
    (*(*x21 + 0x40))(x21)
    char entry_x2
    char var_68_1 = entry_x2 & 1
    void** x25_1 = *(arg1 + 0x10)
    Botan::OID* var_60
    void* var_58
    
    if (x25_1 == *(arg1 + 0x18))
        std::__ndk1::vector<Botan::OID, std::__ndk1::allocator<Botan::OID> >::__push_back_slow_path<Botan::OID const&>(
            arg1 + 8)
    else
        x25_1[2] = 0
        x25_1[3] = 0
        *x25_1 = _vtable_for_Botan::OID + 0x10
        x25_1[1] = 0
        int64_t var_50
        uint64_t x23_1 = var_50 - var_58
        
        if (var_50 != var_58)
            if ((x23_1 & 0xffffffff80000000) != 0)
                int64_t* x0_17 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
                void* x8_19 = x25_1[1]
                
                if (x8_19 != 0)
                    x25_1[2] = x8_19
                    operator delete(x8_19)
                
                *(arg1 + 0x10) = x25_1
                
                if (var_80 != 0)
                    int32_t* var_78_2 = var_80
                    operator delete(var_80)
                
                if (x0_3 != 0)
                    int64_t x9_7
                    int32_t i_1
                    
                    do
                        x9_7 = __ldaxr(&x0_3[1])
                        i_1 = __stlxr(x9_7 - 1, &x0_3[1])
                    while (i_1 != 0)
                    
                    if (x9_7 == 0)
                        (*(*x0_3 + 0x10))(x0_3)
                        std::__ndk1::__shared_weak_count::__release_weak()
                
                var_60 = _vtable_for_Botan::OID + 0x10
                
                if (var_58 != 0)
                    void* var_50_2 = var_58
                    operator delete(var_58)
                
                sub_1101e04(x0_17)
                noreturn
            
            int64_t x0_6 = operator new(x23_1)
            x25_1[1] = x0_6
            x25_1[2] = x0_6
            x25_1[3] = x0_6 + (x23_1 s>> 2 << 2)
            int64_t x22_1 = x0_6
            size_t x21_3 = var_50 - var_58
            
            if (x21_3 s>= 1)
                memcpy(x22_1, var_58, x21_3)
                x22_1 += x21_3
            
            x25_1[2] = x22_1
        
        *(arg1 + 0x10) = &x25_1[4]
    
    std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info> > >::__emplace_unique_key_args<Botan::OID, Botan::OID const&, Botan::Extensions::Extensions_Info&>(
        arg1 + 0x20, &var_60)
    
    if (var_80 != 0)
        int32_t* var_78_1 = var_80
        operator delete(var_80)
    
    if (x0_3 != 0)
        int64_t x9_6
        int32_t i_2
        
        do
            x9_6 = __ldaxr(&x0_3[1])
            i_2 = __stlxr(x9_6 - 1, &x0_3[1])
        while (i_2 != 0)
        
        if (x9_6 == 0)
            (*(*x0_3 + 0x10))(x0_3)
            std::__ndk1::__shared_weak_count::__release_weak()
    
    var_60 = _vtable_for_Botan::OID + 0x10
    
    if (var_58 != 0)
        void* var_50_1 = var_58
        operator delete(var_58)
else if (x21 != 0)
    (*(*x21 + 0x30))(x21)

return zx.q(x20)
