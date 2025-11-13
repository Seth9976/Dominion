// 函数: _ZN5Botan10polyn_gf2mC1ERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEENS1_10shared_ptrINS_10GF2m_FieldEEE
// 地址: 0xdaa3a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, 0x8) x20_1 =
    arg1 + 8
__builtin_memset(x20_1, 0, 0x18)
int64_t* x21 = arg2
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > const& x19 = arg1
int64_t* entry_x2
*(x20_1 + 0x18) = *entry_x2
int64_t x8_1 = entry_x2[1]
*(x20_1 + 0x20) = x8_1

if (x8_1 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_1 + 8) + 1, x8_1 + 8)
    while (i != 0)

void* x8_3 = *x21
int64_t x9_3 = x21[1]

if (((x9_3.d - x8_3.d) & 1) == 0)
    if (x9_3 == x8_3)
    label_daa4fc:
        int64_t x10_6 = *(x19 + 8)
        int64_t x8_11 = *(x19 + 0x10) - x10_6
        uint32_t x11_2 = (x8_11 u>> 1).d
        int64_t x9_8 = (x8_11 & 0x1fffffffe) << 0x1f s>> 0x20
        int32_t x8_13 = (x11_2 & x11_2 s>> 0x1f) - 1
        
        while (true)
            int64_t x11_3 = x9_8 - 1
            
            if (x9_8 s< 1)
                break
            
            uint32_t x12_2 = zx.d(*(x10_6 - 2 + (x9_8 << 1)))
            x9_8 = x11_3
            
            if (x12_2 != 0)
                x8_13 = x11_3.d
                break
        
        *x19 = x8_13
        return 
    
    uint64_t x9_4 = 0
    int32_t x26_1 = 2
    
    while (true)
        int16_t* x9_6 = *(x19 + 0x10)
        int16_t fp_2 = zx.w(*(x8_3 + zx.q(x26_1 - 1))) | ((0xffffff & zx.d(*(x8_3 + x9_4))) << 8).w
        
        if (x9_6 != *(x19 + 0x18))
            *x9_6 = fp_2
            *(x19 + 0x10) = &x9_6[1]
        else
            void* x22_1 = *x20_1
            size_t x2 = x9_6 - x22_1
            
            if (x2 s<= -3)
                std::__ndk1::__vector_base_common<true>::__throw_length_error()
                break
            
            int64_t x25_1 = x2 s>> 1
            size_t x8_5
            
            if (x2 u< x25_1 + 1)
                x8_5 = x25_1 + 1
            else
                x8_5 = x2
            
            size_t x23_1
            
            x23_1 = x25_1 u< 0x3fffffffffffffff ? x8_5 : 0x7fffffffffffffff
            
            int64_t x8_7
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > const& x24_1
            
            if (x23_1 == 0)
                x24_1 = nullptr
                x8_7 = x25_1
            else
                arg1 = Botan::allocate_memory(x23_1, 2)
                x22_1 = *(x19 + 8)
                x24_1 = arg1
                x2 = *(x19 + 0x10) - x22_1
                x8_7 = x2 s>> 1
            
            int16_t* x27_1 = x24_1 + (x25_1 << 1)
            void* x25_2 = x27_1 - (x8_7 << 1)
            *x27_1 = fp_2
            
            if (x2 s>= 1)
                memcpy(x25_2, x22_1, x2)
            
            int64_t x8_8 = *(x19 + 0x18)
            *(x19 + 8) = x25_2
            *(x19 + 0x10) = &x27_1[1]
            *(x19 + 0x18) = x24_1 + (x23_1 << 1)
            
            if (x22_1 != 0)
                Botan::deallocate_memory(x22_1, (x8_8 - x22_1) s>> 1, 2)
        
        x8_3 = *x21
        x9_4 = zx.q(x26_1)
        x26_1 += 2
        
        if (x21[1] - x8_3 u<= x9_4)
            goto label_daa4fc

void** x0_4 = __cxa_allocate_exception(0x20)
int64_t x0_5
int128_t v0
x0_5, v0 = operator new(0x30)
v0 = data_71c510
int64_t var_70 = x0_5
__builtin_strncpy(x0_5, "encoded polynomial has odd length", 0x22)
int128_t var_80 = v0
*x0_4 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_4[1])
*x0_4 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_4, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
