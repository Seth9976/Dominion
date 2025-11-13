// 函数: _ZN5Botan3TLS16Supported_GroupsC1ERNS0_15TLS_Data_ReaderEt
// 地址: 0xe6cd40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = arg2
*arg1 = _vtable_for_Botan::TLS::Supported_Groups + 0x10
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
int64_t result = Botan::TLS::TLS_Data_Reader::assert_at_least(x21)
int64_t x10 = *(x21 + 0x10)
char* x8_3 = **(x21 + 8) + x10
uint64_t x9_2 = zx.q(x8_3[1])
char x11 = *x8_3
*(x21 + 0x10) = x10 + 2
int64_t x8_5 = (-0xff01 & x9_2) | zx.q(x11) << 8
int16_t entry_x2

if (x8_5.d + 2 != zx.d(entry_x2))
    void** x0_7 = __cxa_allocate_exception(0x20)
    int64_t x0_8
    int128_t v0
    x0_8, v0 = operator new(0x40)
    v0 = data_71ac10
    int64_t var_70 = x0_8
    __builtin_strncpy(x0_8, "Inconsistent length field in supported groups list", 0x33)
    int128_t var_80 = v0
    *x0_7 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_7[1])
    *x0_7 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_7, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

if ((x9_2.d & 1) != 0)
    void** x0_12 = __cxa_allocate_exception(0x20)
    int64_t x0_13
    int128_t v0_1
    x0_13, v0_1 = operator new(0x30)
    v0_1 = data_71b5a0
    int64_t var_70_1 = x0_13
    __builtin_strncpy(x0_13, "Supported groups list of strange size", 0x26)
    int128_t var_80_1 = v0_1
    *x0_12 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_12[1])
    *x0_12 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_12, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

uint64_t i_1 = x8_5 u>> 1

if (i_1.d != 0)
    uint64_t i
    
    do
        result = Botan::TLS::TLS_Data_Reader::assert_at_least(x21)
        int64_t x9_4 = *(x21 + 0x10)
        uint32_t x11_2 = zx.d(*(**(x21 + 8) + x9_4))
        *(x21 + 0x10) = x9_4 + 2
        uint16_t* x9_5 = *(arg1 + 0x10)
        int64_t x8_8 = *(arg1 + 0x18)
        uint16_t x28_1 = (_byteswap(x11_2) u>> 0x10).w
        
        if (x9_5 u< x8_8)
            *x9_5 = x28_1
            *(arg1 + 0x10) = &x9_5[1]
        else
            void* x22_1 = *(arg1 + 8)
            void* x23_1 = x9_5 - x22_1
            
            if (x23_1 s<= -3)
                std::__ndk1::__vector_base_common<true>::__throw_length_error()
                sub_ef2a0c()
                noreturn
            
            int64_t x20_1 = x23_1 s>> 1
            void* x8_9 = x8_8 - x22_1
            void* x9_7
            
            if (x8_9 u< x20_1 + 1)
                x9_7 = x20_1 + 1
            else
                x9_7 = x8_9
            
            void* fp_1
            
            if (0x3fffffffffffffff u> x8_9 s>> 1)
                fp_1 = x9_7
            else
                fp_1 = 0x7fffffffffffffff
            
            void* x20_3
            int64_t result_1
            
            if (fp_1 == 0)
                result_1 = 0
                *(x20_1 << 1) = x28_1
                x20_3 = (x20_1 << 1) + 2
                
                if (x23_1 s>= 1)
                    result = memcpy(result_1, x22_1, x23_1)
            else
                if ((fp_1 & 0xffffffff80000000) != 0)
                    sub_ef2a0c()
                    noreturn
                
                result = operator new(fp_1 << 1)
                result_1 = result
                uint16_t* x20_2 = result_1 + (x20_1 << 1)
                *x20_2 = x28_1
                x20_3 = &x20_2[1]
                
                if (x23_1 s>= 1)
                    result = memcpy(result_1, x22_1, x23_1)
            
            *(arg1 + 8) = result_1
            *(arg1 + 0x10) = x20_3
            *(arg1 + 0x18) = result_1 + (fp_1 << 1)
            
            if (x22_1 != 0)
                result = operator delete(x22_1)
        
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
