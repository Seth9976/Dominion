// 函数: _ZN5Botan10Extensions3addEPNS_21Certificate_ExtensionEb
// 地址: 0xe97a44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = arg2
(**arg2)(arg2)
void* i = *(arg1 + 0x28)
int32_t* var_a0
int32_t* x0_1
int32_t x22
int32_t* var_a8

if (i == 0)
    x0_1 = var_a8
    x22 = 1
else
    x0_1 = var_a0
    
    if (var_a8 == x0_1)
        int64_t x9_2
        int64_t x10_2
        
        do
            x9_2 = *(i + 0x28)
            x10_2 = *(i + 0x30)
            
            if (x9_2 == x10_2)
                break
            
            i = *i
        while (i != 0)
        
        x22 = x9_2 != x10_2 ? 1 : 0
    else
    label_e97a90:
        int32_t* x11_1 = *(i + 0x28)
        int64_t x12_1 = *(i + 0x30)
        int32_t* x13_1 = var_a8
        int32_t* x14_1 = x11_1
        
        if (x11_1 == x12_1)
        label_e97ad4:
            int64_t x13_2 = 0
            
            while (true)
                if (x12_1 - x11_1 != x13_2)
                    int32_t x14_2 = *(x11_1 + x13_2)
                    int32_t x15_2 = *(var_a8 + x13_2)
                    
                    if (x14_2 u>= x15_2)
                        if (x15_2 u>= x14_2)
                            x13_2 += 4
                            
                            if (x0_1 - var_a8 != x13_2)
                                continue
                        
                        x22 = 0
                        break
                
                i += 8
                goto label_e97b10
        else
            while (true)
                if (x0_1 != x13_1)
                    int32_t x15_1 = *x13_1
                    int32_t x16_1 = *x14_1
                    
                    if (x15_1 u>= x16_1)
                        if (x16_1 u< x15_1)
                            goto label_e97ad4
                        
                        x14_1 = &x14_1[1]
                        x13_1 = &x13_1[1]
                        
                        if (x12_1 == x14_1)
                            goto label_e97ad4
                        
                        continue
                
            label_e97b10:
                i = *i
                
                if (i != 0)
                    goto label_e97a90
                
                x22 = 1
                break
        
        x0_1 = var_a8
void* __offset(vtable_for_Botan::OID, 0x10) var_b0 = _vtable_for_Botan::OID + 0x10

if (x0_1 != 0)
    var_a0 = x0_1
    operator delete(x0_1)

int128_t var_80
char var_58[0x10]

if ((x22 & 1) == 0)
    (*(*x20 + 8))(x20)
    (*(*x20 + 0x30))(x20)
    void** x0_15 = __cxa_allocate_exception(0x20)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Extension ", &var_b0)
    int128_t* x0_17
    int128_t v0
    x0_17, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_58)
    int64_t var_70_1 = x0_17[1].q
    var_80 = *x0_17
    __builtin_memset(x0_17, 0, 0x18)
    *x0_15 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_15[1])
    *x0_15 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_15, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

(**x20)(x20)
var_b0 = x20
int64_t* x0_3 = operator new(0x20)
x0_3[2] = 0
x0_3[3] = x20
*x0_3 = _vtable_for_std::__ndk1::__shared_ptr_pointer<Botan::Certificate_Extension*, std::__ndk1::default_delete<Botan::Certificate_Extension>, std::__ndk1::allocator<Botan::Certificate_Extension> >
    + 0x10
x0_3[1] = 0
(*(*x20 + 0x40))(x20)
char entry_x2
char var_88 = entry_x2 & 1
void** x24 = *(arg1 + 0x10)

if (x24 == *(arg1 + 0x18))
    std::__ndk1::vector<Botan::OID, std::__ndk1::allocator<Botan::OID> >::__push_back_slow_path<Botan::OID const&>(
        arg1 + 8)
else
    x24[2] = 0
    x24[3] = 0
    *x24 = _vtable_for_Botan::OID + 0x10
    x24[1] = 0
    int64_t x9_5 = var_80:8.q
    void* var_70
    uint64_t x22_1 = var_70 - x9_5
    
    if (var_70 != x9_5)
        if ((x22_1 & 0xffffffff80000000) != 0)
            int64_t* x0_21 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
            
            if ((zx.d(var_80.b) & 1) != 0)
                operator delete(var_70)
            
            void* var_48
            
            if ((zx.d(var_58[0]) & 1) != 0)
                operator delete(var_48)
            
            if ((zx.d(var_b0.b) & 1) != 0)
                operator delete(var_a0)
            
            sub_1101e04(x0_21)
            noreturn
        
        int64_t x0_6 = operator new(x22_1)
        x24[1] = x0_6
        x24[2] = x0_6
        x24[3] = x0_6 + (x22_1 s>> 2 << 2)
        int64_t x1 = var_80:8.q
        int64_t x21_1 = x0_6
        size_t x20_3 = var_70 - x1
        
        if (x20_3 s>= 1)
            memcpy(x21_1, x1, x20_3)
            x21_1 += x20_3
        
        x24[2] = x21_1
    
    *(arg1 + 0x10) = &x24[4]

std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info> > >::__emplace_unique_key_args<Botan::OID, Botan::OID const&, Botan::Extensions::Extensions_Info&>(
    arg1 + 0x20, &var_80)

if (var_a0 != 0)
    int32_t* var_98_1 = var_a0
    operator delete(var_a0)

if (x0_3 != 0)
    int64_t x9_6
    int32_t i_1
    
    do
        x9_6 = __ldaxr(&x0_3[1])
        i_1 = __stlxr(x9_6 - 1, &x0_3[1])
    while (i_1 != 0)
    
    if (x9_6 == 0)
        (*(*x0_3 + 0x10))(x0_3)
        std::__ndk1::__shared_weak_count::__release_weak()

void* result = var_80:8.q
var_80.q = _vtable_for_Botan::OID + 0x10

if (result == 0)
    return result

void* result_1 = result
return operator delete(result)
