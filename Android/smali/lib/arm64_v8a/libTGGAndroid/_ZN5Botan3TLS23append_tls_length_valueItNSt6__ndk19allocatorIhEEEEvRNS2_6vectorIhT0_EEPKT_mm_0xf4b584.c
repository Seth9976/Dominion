// 函数: _ZN5Botan3TLS23append_tls_length_valueItNSt6__ndk19allocatorIhEEEEvRNS2_6vectorIhT0_EEPKT_mm
// 地址: 0xf4b584
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg4 - 1 u>= 2)
    void** x0_15 = __cxa_allocate_exception(0x20)
    int64_t x0_16
    int128_t v0_1
    x0_16, v0_1 = operator new(0x30)
    (*"invalid tag size")[0].o
    int64_t var_70_1 = x0_16
    v0_1 = data_71cbb0
    __builtin_strncpy(x0_16, "append_tls_length_value: invalid tag size", 0x2a)
    int128_t var_80_1 = v0_1
    *x0_15 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_15[1])
    *x0_15 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_15, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

uint64_t x22 = arg4
uint64_t x19 = arg3
uint16_t const* x21 = arg2
uint64_t x25 = arg3 << 1

if ((arg4 != 1 || x25 u<= 0xff) && (x22 != 2 || x25 u>> 0x10 == 0))
    int64_t x28_1 = neg.q(x22 << 3)
    uint64_t var_88_1 = x25
    
    while (true)
        uint8_t* x8_3 = *(arg1 + 8)
        int64_t x9_1 = *(arg1 + 0x10)
        uint8_t fp_1 = (x25 u>> (zx.q(not.d(x28_1.d)) & 0x38)).b
        
        if (x8_3 u< x9_1)
            *x8_3 = fp_1
            *(arg1 + 8) = &x8_3[1]
        else
            void* x23_1 = *arg1
            size_t x24_1 = x8_3 - x23_1
            
            if (x24_1 + 1 s< 0)
                break
            
            void* x9_2 = x9_1 - x23_1
            int64_t x10_3 = x9_2 << 1
            int64_t x8_5
            
            if (x10_3 u< x24_1 + 1)
                x8_5 = x24_1 + 1
            else
                x8_5 = x10_3
            
            int64_t x25_1
            
            x25_1 = x9_2 u< 0x3fffffffffffffff ? x8_5 : 0x7fffffffffffffff
            
            std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >& x26_1
            void* x27_2
            
            if (x25_1 == 0)
                x26_1 = nullptr
                *x24_1 = fp_1
                x27_2 = x24_1 + 1
                
                if (x24_1 s>= 1)
                    memcpy(x26_1, x23_1, x24_1)
            else
                x26_1 = operator new(x25_1)
                uint8_t* x27_1 = x26_1 + x24_1
                *x27_1 = fp_1
                x27_2 = &x27_1[1]
                
                if (x24_1 s>= 1)
                    memcpy(x26_1, x23_1, x24_1)
            
            x25 = var_88_1
            *arg1 = x26_1
            *(arg1 + 8) = x27_2
            *(arg1 + 0x10) = x26_1 + x25_1
            
            if (x23_1 != 0)
                operator delete(x23_1)
        
        uint64_t temp0_1 = x22
        x22 -= 1
        x28_1 += 8
        
        if (temp0_1 == 1)
            if (x19 == 0)
                return 
            
            while (true)
                uint8_t* x28_3 = *(arg1 + 8)
                int64_t x8_7 = *(arg1 + 0x10)
                uint32_t fp_2 = zx.d(*x21)
                uint8_t* x28_4
                
                if (x28_3 u>= x8_7)
                    void* x22_1 = *arg1
                    size_t x23_2 = x28_3 - x22_1
                    
                    if (x23_2 + 1 s< 0)
                        break
                    
                    void* x8_9 = x8_7 - x22_1
                    int64_t x10_4 = x8_9 << 1
                    int64_t x9_4
                    
                    if (x10_4 u< x23_2 + 1)
                        x9_4 = x23_2 + 1
                    else
                        x9_4 = x10_4
                    
                    int64_t x24_2
                    
                    x24_2 = x8_9 u< 0x3fffffffffffffff ? x9_4 : 0x7fffffffffffffff
                    
                    std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >& x25_2
                    
                    if (x24_2 == 0)
                        x25_2 = nullptr
                    else
                        x25_2 = operator new(x24_2)
                    
                    char* x28_5 = x25_2 + x23_2
                    *x28_5 = (fp_2 u>> 8).b
                    x28_4 = &x28_5[1]
                    
                    if (x23_2 s>= 1)
                        memcpy(x25_2, x22_1, x23_2)
                    
                    *arg1 = x25_2
                    *(arg1 + 8) = x28_4
                    *(arg1 + 0x10) = x25_2 + x24_2
                    
                    if (x22_1 != 0)
                        operator delete(x22_1)
                        x28_4 = *(arg1 + 8)
                else
                    *x28_3 = (fp_2 u>> 8).b
                    x28_4 = &x28_3[1]
                    *(arg1 + 8) = x28_4
                
                int64_t x8_12 = *(arg1 + 0x10)
                uint8_t fp_3 = (*x21).b
                
                if (x28_4 u< x8_12)
                    *x28_4 = fp_3
                    *(arg1 + 8) = &x28_4[1]
                else
                    void* x22_2 = *arg1
                    size_t x23_3 = x28_4 - x22_2
                    
                    if (x23_3 + 1 s< 0)
                        break
                    
                    void* x8_13 = x8_12 - x22_2
                    int64_t x10_5 = x8_13 << 1
                    int64_t x9_6
                    
                    if (x10_5 u< x23_3 + 1)
                        x9_6 = x23_3 + 1
                    else
                        x9_6 = x10_5
                    
                    int64_t x24_3
                    
                    x24_3 = x8_13 u< 0x3fffffffffffffff ? x9_6 : 0x7fffffffffffffff
                    
                    std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >& x25_3
                    void* x28_7
                    
                    if (x24_3 == 0)
                        x25_3 = nullptr
                        *x23_3 = fp_3
                        x28_7 = x23_3 + 1
                        
                        if (x23_3 s>= 1)
                            memcpy(x25_3, x22_2, x23_3)
                    else
                        x25_3 = operator new(x24_3)
                        uint8_t* x28_6 = x25_3 + x23_3
                        *x28_6 = fp_3
                        x28_7 = &x28_6[1]
                        
                        if (x23_3 s>= 1)
                            memcpy(x25_3, x22_2, x23_3)
                    
                    *arg1 = x25_3
                    *(arg1 + 8) = x28_7
                    *(arg1 + 0x10) = x25_3 + x24_3
                    
                    if (x22_2 != 0)
                        operator delete(x22_2)
                
                uint64_t temp1_1 = x19
                x19 -= 1
                x21 = &x21[1]
                
                if (temp1_1 == 1)
                    return 
            
            break
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()

void** x0_10 = __cxa_allocate_exception(0x20)
int64_t x0_11
int128_t v0
x0_11, v0 = operator new(0x30)
v0 = data_71aa70
int64_t var_70 = x0_11
__builtin_strncpy(x0_11, "append_tls_length_value: value too large", 0x29)
int128_t var_80 = v0
*x0_10 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_10[1])
*x0_10 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_10, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
