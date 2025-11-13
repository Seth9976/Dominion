// 函数: _ZN5Botan10Extensions7replaceEPNS_21Certificate_ExtensionEb
// 地址: 0xeae730
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x21 = arg2
(**arg2)(arg2)
Botan::Extensions::remove(arg1)
void* __offset(vtable_for_Botan::OID, 0x10) var_90 = _vtable_for_Botan::OID + 0x10
void* var_88
void* var_80

if (var_88 != 0)
    var_80 = var_88
    operator delete(var_88)

(**x21)(x21)
int64_t* var_90_1 = x21
int64_t* x0_4 = operator new(0x20)
x0_4[2] = 0
x0_4[3] = x21
*x0_4 = _vtable_for_std::__ndk1::__shared_ptr_pointer<Botan::Certificate_Extension*, std::__ndk1::default_delete<Botan::Certificate_Extension>, std::__ndk1::allocator<Botan::Certificate_Extension> >
    + 0x10
x0_4[1] = 0
(*(*x21 + 0x40))(x21)
char entry_x2
char var_68 = entry_x2 & 1
void** x24 = *(arg1 + 0x10)
Botan::OID* var_60
void* result

if (x24 == *(arg1 + 0x18))
    std::__ndk1::vector<Botan::OID, std::__ndk1::allocator<Botan::OID> >::__push_back_slow_path<Botan::OID const&>(
        arg1 + 8)
else
    x24[2] = 0
    x24[3] = 0
    *x24 = _vtable_for_Botan::OID + 0x10
    x24[1] = 0
    int64_t var_50
    uint64_t x22_1 = var_50 - result
    
    if (var_50 != result)
        if ((x22_1 & 0xffffffff80000000) != 0)
            int64_t* x0_16 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
            void* x8_17 = x24[1]
            
            if (x8_17 != 0)
                x24[2] = x8_17
                operator delete(x8_17)
            
            *(arg1 + 0x10) = x24
            
            if (var_80 != 0)
                void* var_78_2 = var_80
                operator delete(var_80)
            
            if (x0_4 != 0)
                int64_t x9_5
                int32_t i
                
                do
                    x9_5 = __ldaxr(&x0_4[1])
                    i = __stlxr(x9_5 - 1, &x0_4[1])
                while (i != 0)
                
                if (x9_5 == 0)
                    (*(*x0_4 + 0x10))(x0_4)
                    std::__ndk1::__shared_weak_count::__release_weak()
            
            var_60 = _vtable_for_Botan::OID + 0x10
            
            if (result != 0)
                void* result_2 = result
                operator delete(result)
            
            sub_1101e04(x0_16)
            noreturn
        
        int64_t x0_7 = operator new(x22_1)
        x24[1] = x0_7
        x24[2] = x0_7
        x24[3] = x0_7 + (x22_1 s>> 2 << 2)
        int64_t x21_1 = x0_7
        size_t x20_3 = var_50 - result
        
        if (x20_3 s>= 1)
            memcpy(x21_1, result, x20_3)
            x21_1 += x20_3
        
        x24[2] = x21_1
    
    *(arg1 + 0x10) = &x24[4]

std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info> > >::__emplace_unique_key_args<Botan::OID, Botan::OID const&, Botan::Extensions::Extensions_Info&>(
    arg1 + 0x20, &var_60)

if (var_80 != 0)
    void* var_78_1 = var_80
    operator delete(var_80)

if (x0_4 != 0)
    int64_t x9_4
    int32_t i_1
    
    do
        x9_4 = __ldaxr(&x0_4[1])
        i_1 = __stlxr(x9_4 - 1, &x0_4[1])
    while (i_1 != 0)
    
    if (x9_4 == 0)
        (*(*x0_4 + 0x10))(x0_4)
        std::__ndk1::__shared_weak_count::__release_weak()

var_60 = _vtable_for_Botan::OID + 0x10

if (result == 0)
    return result

void* result_1 = result
return operator delete(result)
