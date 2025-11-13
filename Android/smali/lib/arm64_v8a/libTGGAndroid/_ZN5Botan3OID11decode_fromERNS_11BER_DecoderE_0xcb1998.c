// 函数: _ZN5Botan3OID11decode_fromERNS_11BER_DecoderE
// 地址: 0xcb1998
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::BER_Decoder::get_next_object()
int32_t var_a0
int32_t var_9c
int128_t var_80

if ((var_9c | var_a0) != 6)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_18 = __cxa_allocate_exception(0x20)
    int64_t x0_19
    int128_t v0
    x0_19, v0 = operator new(0x20)
    int64_t var_70_1 = x0_19
    var_80 = data_71b7d0
    __builtin_strncpy(x0_19, "Error decoding OID, unknown tag", 0x20)
    Botan::BER_Bad_Tag::BER_Bad_Tag(x0_18, &var_80)
    __cxa_throw(x0_18, _typeinfo_for_Botan::BER_Bad_Tag, Botan::Exception::~Exception)
    noreturn

char* result
int64_t var_90
void* x25 = var_90 - result

if (x25 u<= 1 && (x25 != 1 || zx.d(*result) != 0))
    void** x0_22 = __cxa_allocate_exception(0x20)
    int64_t x0_23
    int128_t v0_1
    x0_23, v0_1 = operator new(0x20)
    int64_t var_b0 = x0_23
    int128_t var_c0 = data_71aa40
    __builtin_strncpy(x0_23, "OID encoding is too short", 0x1a)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "BER: ", &var_c0)
    *x0_22 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_22[1])
    *x0_22 = _vtable_for_Botan::Decoding_Error + 0x10
    void* var_70
    
    if ((zx.d(var_80.b) & 1) != 0)
        operator delete(var_70)
    *x0_22 = _vtable_for_Botan::BER_Decoding_Error + 0x10
    __cxa_throw(x0_22, _typeinfo_for_Botan::BER_Decoding_Error, Botan::Exception::~Exception)
    noreturn

uint32_t* x21 = *(arg1 + 8)
*(arg1 + 0x10) = x21
int64_t x8_4 = *(arg1 + 0x18)
uint32_t x22 = zx.d(*result u/ 0x28)
void* x21_1

if (x21 u>= x8_4)
    void* x8_5 = x8_4 - x21
    int64_t x10_2
    
    if (x8_4 != x21)
        x10_2 = x8_5 s>> 1
    else
        x10_2 = 1
    
    int64_t x23_1
    
    if (0x1fffffffffffffff u> x8_5 s>> 2)
        x23_1 = x10_2
    else
        x23_1 = 0x3fffffffffffffff
    
    if (x23_1 u>> 0x3e != 0)
        sub_ef2a0c()
        noreturn
    
    uint32_t* x0_2 = operator new(x23_1 << 2)
    *x0_2 = x22
    *(arg1 + 8) = x0_2
    *(arg1 + 0x10) = &x0_2[1]
    *(arg1 + 0x18) = &x0_2[x23_1]
    
    if (x21 == 0)
        x21_1 = &x0_2[1]
    else
        operator delete(x21)
        x21_1 = *(arg1 + 0x10)
else
    *x21 = x22
    x21_1 = &x21[1]
    *(arg1 + 0x10) = x21_1

int64_t x8_8 = *(arg1 + 0x18)
int32_t x26 = zx.d(*result) u% 0x28

if (x21_1 u>= x8_8)
    void* x22_1 = *(arg1 + 8)
    void* x21_3 = x21_1 - x22_1
    int64_t x27_1 = x21_3 s>> 2
    
    if ((x27_1 + 1) u>> 0x3e != 0)
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
        sub_ef2a0c()
        noreturn
    
    void* x8_9 = x8_8 - x22_1
    int64_t x11_1 = x8_9 s>> 1
    int64_t x9_6
    
    if (x11_1 u< x27_1 + 1)
        x9_6 = x27_1 + 1
    else
        x9_6 = x11_1
    
    int64_t x28_1
    
    if (0x1fffffffffffffff u> x8_9 s>> 2)
        x28_1 = x9_6
    else
        x28_1 = 0x3fffffffffffffff
    
    int64_t x23_2
    
    if (x28_1 == 0)
        x23_2 = 0
    else
        if (x28_1 u>> 0x3e != 0)
            sub_ef2a0c()
            noreturn
        
        x23_2 = operator new(x28_1 << 2)
    
    int32_t* fp_1 = x23_2 + (x27_1 << 2)
    *fp_1 = x26
    
    if (x21_3 s>= 1)
        memcpy(x23_2, x22_1, x21_3)
    
    *(arg1 + 8) = x23_2
    *(arg1 + 0x10) = &fp_1[1]
    *(arg1 + 0x18) = x23_2 + (x28_1 << 2)
    
    if (x22_1 != 0)
        operator delete(x22_1)
else
    *x21_1 = x26
    *(arg1 + 0x10) = x21_1 + 4

if (x25 != 1)
    int32_t fp_3 = 0
    void* x26_1 = nullptr
    
    while (true)
        if (x26_1 != x25 - 1)
            if (fp_3 u>> 0x19 != 0)
                void** x0_13 = __cxa_allocate_exception(0x20)
                __builtin_strncpy(&var_80, ",OID component overflow", 0x18)
                *x0_13 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_13[1])
                *x0_13 = _vtable_for_Botan::Decoding_Error + 0x10
                __cxa_throw(x0_13, _typeinfo_for_Botan::Decoding_Error, 
                    Botan::Exception::~Exception)
                noreturn
            
            x26_1 += 1
            uint32_t x8_13 = zx.d(*(result + x26_1))
            fp_3 = (0x7f & x8_13) | (0x1ffffff & fp_3) << 7
            
            if ((x8_13 & 0x80) != 0)
                continue
        else
            x26_1 = x25 - 1
        
        int32_t* x8_14 = *(arg1 + 0x10)
        
        if (x8_14 != *(arg1 + 0x18))
            *x8_14 = fp_3
            *(arg1 + 0x10) = &x8_14[1]
        else
            void* x21_4 = *(arg1 + 8)
            size_t x22_2 = x8_14 - x21_4
            int64_t x28_2 = x22_2 s>> 2
            
            if ((x28_2 + 1) u>> 0x3e != 0)
                std::__ndk1::__vector_base_common<true>::__throw_length_error()
                sub_ef2a0c()
                noreturn
            
            int64_t x9_11 = x22_2 s>> 1
            int64_t x8_16
            
            if (x9_11 u< x28_2 + 1)
                x8_16 = x28_2 + 1
            else
                x8_16 = x9_11
            
            int64_t x27_3
            
            x27_3 = x28_2 u< 0x1fffffffffffffff ? x8_16 : 0x3fffffffffffffff
            
            int64_t x23_3
            void* x28_4
            
            if (x27_3 == 0)
                x23_3 = 0
                *(x28_2 << 2) = fp_3
                x28_4 = (x28_2 << 2) + 4
                
                if (x22_2 s>= 1)
                    memcpy(x23_3, x21_4, x22_2)
            else
                if (x27_3 u>> 0x3e != 0)
                    sub_ef2a0c()
                    noreturn
                
                x23_3 = operator new(x27_3 << 2)
                int32_t* x28_3 = x23_3 + (x28_2 << 2)
                *x28_3 = fp_3
                x28_4 = &x28_3[1]
                
                if (x22_2 s>= 1)
                    memcpy(x23_3, x21_4, x22_2)
            
            *(arg1 + 8) = x23_3
            *(arg1 + 0x10) = x28_4
            *(arg1 + 0x18) = x23_3 + (x27_3 << 2)
            
            if (x21_4 != 0)
                operator delete(x21_4)
        
        fp_3 = 0
        
        if (x26_1 == x25 - 1)
            break

if (result == 0)
    return result

char* result_1 = result
int64_t var_88
return Botan::deallocate_memory(result, var_88 - result, 1)
