// 函数: _ZN5Botan3TLS23append_tls_length_valueIhNS_16secure_allocatorIhEEEEvRNSt6__ndk16vectorIhT0_EEPKT_mm
// 地址: 0xf4bbe4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg4 - 1 u>= 2)
    void** x0_12 = __cxa_allocate_exception(0x20)
    int64_t x0_13
    int128_t v0_1
    x0_13, v0_1 = operator new(0x30)
    (*"invalid tag size")[0].o
    int64_t var_70_1 = x0_13
    v0_1 = data_71cbb0
    __builtin_strncpy(x0_13, "append_tls_length_value: invalid tag size", 0x2a)
    int128_t var_80_1 = v0_1
    *x0_12 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_12[1])
    *x0_12 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_12, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

uint64_t x22 = arg4
uint64_t x19 = arg3
uint8_t const* x21 = arg2
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >& x20 = arg1

if ((arg3 u< 0x100 || x22 != 1) && (x19 u< 0x10000 || x22 != 2))
    int64_t x27_1 = neg.q(x22 << 3)
    
    while (true)
        uint8_t* x8_2 = *(x20 + 8)
        int64_t x9_1 = *(x20 + 0x10)
        uint8_t x28_1 = (x19 u>> (zx.q(not.d(x27_1.d)) & 0x38)).b
        
        if (x8_2 u< x9_1)
            *x8_2 = x28_1
            *(x20 + 8) = &x8_2[1]
        else
            void* x23_1 = *x20
            size_t x26_1 = x8_2 - x23_1
            
            if (x26_1 + 1 s< 0)
                break
            
            void* x9_2 = x9_1 - x23_1
            int64_t x10_3 = x9_2 << 1
            int64_t x8_4
            
            if (x10_3 u< x26_1 + 1)
                x8_4 = x26_1 + 1
            else
                x8_4 = x10_3
            
            int64_t x24_1
            
            x24_1 = x9_2 u< 0x3fffffffffffffff ? x8_4 : 0x7fffffffffffffff
            
            size_t x2
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >& x25_1
            
            if (x24_1 == 0)
                x25_1 = nullptr
                x2 = x26_1
            else
                arg1 = Botan::allocate_memory(x24_1, 1)
                x23_1 = *x20
                x25_1 = arg1
                x2 = *(x20 + 8) - x23_1
            
            uint8_t* fp_1 = x25_1 + x26_1
            void* x26_2 = fp_1 - x2
            *fp_1 = x28_1
            
            if (x2 s>= 1)
                memcpy(x26_2, x23_1, x2)
            
            int64_t x8_6 = *(x20 + 0x10)
            *x20 = x26_2
            *(x20 + 8) = &fp_1[1]
            *(x20 + 0x10) = x25_1 + x24_1
            
            if (x23_1 != 0)
                Botan::deallocate_memory(x23_1, x8_6 - x23_1, 1)
        
        uint64_t temp0_1 = x22
        x22 -= 1
        x27_1 += 8
        
        if (temp0_1 == 1)
            if (x19 == 0)
                return 
            
            while (true)
                uint8_t* x8_8 = *(x20 + 8)
                int64_t x9_4 = *(x20 + 0x10)
                uint8_t const x28_2 = *x21
                
                if (x8_8 u< x9_4)
                    *x8_8 = x28_2
                    *(x20 + 8) = &x8_8[1]
                else
                    void* x22_1 = *x20
                    size_t x25_2 = x8_8 - x22_1
                    
                    if (x25_2 + 1 s< 0)
                        break
                    
                    void* x9_5 = x9_4 - x22_1
                    int64_t x10_4 = x9_5 << 1
                    int64_t x8_10
                    
                    if (x10_4 u< x25_2 + 1)
                        x8_10 = x25_2 + 1
                    else
                        x8_10 = x10_4
                    
                    int64_t x23_2
                    
                    x23_2 = x9_5 u< 0x3fffffffffffffff ? x8_10 : 0x7fffffffffffffff
                    
                    size_t x2_1
                    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >& x24_2
                    
                    if (x23_2 == 0)
                        x24_2 = nullptr
                        x2_1 = x25_2
                    else
                        arg1 = Botan::allocate_memory(x23_2, 1)
                        x22_1 = *x20
                        x24_2 = arg1
                        x2_1 = *(x20 + 8) - x22_1
                    
                    uint8_t* fp_3 = x24_2 + x25_2
                    void* x25_3 = fp_3 - x2_1
                    *fp_3 = x28_2
                    
                    if (x2_1 s>= 1)
                        memcpy(x25_3, x22_1, x2_1)
                    
                    int64_t x8_12 = *(x20 + 0x10)
                    *x20 = x25_3
                    *(x20 + 8) = &fp_3[1]
                    *(x20 + 0x10) = x24_2 + x23_2
                    
                    if (x22_1 != 0)
                        Botan::deallocate_memory(x22_1, x8_12 - x22_1, 1)
                
                uint64_t temp1_1 = x19
                x19 -= 1
                x21 = &x21[1]
                
                if (temp1_1 == 1)
                    return 
            
            break
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()

void** x0_7 = __cxa_allocate_exception(0x20)
int64_t x0_8
int128_t v0
x0_8, v0 = operator new(0x30)
v0 = data_71aa70
int64_t var_70 = x0_8
__builtin_strncpy(x0_8, "append_tls_length_value: value too large", 0x29)
int128_t var_80 = v0
*x0_7 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_7[1])
*x0_7 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_7, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
