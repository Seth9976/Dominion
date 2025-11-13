// 函数: _ZN5Botan3TLS20Signature_AlgorithmsC1ERNS0_15TLS_Data_ReaderEt
// 地址: 0xe6d294
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = arg2
*arg1 = _vtable_for_Botan::TLS::Signature_Algorithms + 0x10
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
Botan::TLS::TLS_Data_Reader::assert_at_least(x21)
int64_t x9_2 = *(x21 + 0x10)
int32_t x25 = _byteswap(zx.d(*(**(x21 + 8) + x9_2)) << 0x10)
*(x21 + 0x10) = x9_2 + 2
int16_t entry_x2

if (x25 == 0 || x25 + 2 != zx.d(entry_x2) || (x25 & 1) != 0)
    void** x0_7 = __cxa_allocate_exception(0x20)
    int64_t x0_8
    int128_t v0
    x0_8, v0 = operator new(0x30)
    (*"rithms extension")[0].o
    int64_t var_70 = x0_8
    v0 = data_71a900
    __builtin_strncpy(x0_8, "Bad encoding on signature algorithms extension", 0x2f)
    int128_t var_80 = v0
    *x0_7 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_7[1])
    *x0_7 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_7, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

int64_t result

do
    result = Botan::TLS::TLS_Data_Reader::assert_at_least(x21)
    int64_t x9_5 = *(x21 + 0x10)
    uint32_t x11_1 = zx.d(*(**(x21 + 8) + x9_5))
    *(x21 + 0x10) = x9_5 + 2
    uint16_t* x9_6 = *(arg1 + 0x10)
    int64_t x8_9 = *(arg1 + 0x18)
    uint16_t x28_1 = (_byteswap(x11_1) u>> 0x10).w
    
    if (x9_6 u< x8_9)
        *x9_6 = x28_1
        *(arg1 + 0x10) = &x9_6[1]
    else
        void* x22_1 = *(arg1 + 8)
        void* x23_1 = x9_6 - x22_1
        
        if (x23_1 s<= -3)
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
            sub_ef2a0c()
            noreturn
        
        int64_t x20_1 = x23_1 s>> 1
        void* x8_10 = x8_9 - x22_1
        void* x9_8
        
        if (x8_10 u< x20_1 + 1)
            x9_8 = x20_1 + 1
        else
            x9_8 = x8_10
        
        void* fp_1
        
        if (0x3fffffffffffffff u> x8_10 s>> 1)
            fp_1 = x9_8
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
    
    x25 -= 2
while ((x25 & 0xffff) != 0)

return result
