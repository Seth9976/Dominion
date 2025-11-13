// 函数: _ZN5Botan10polyn_gf2mC1EiPKhmNSt6__ndk110shared_ptrINS_10GF2m_FieldEEE
// 地址: 0xda6588
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21
int64_t var_18 = x21
__builtin_memset(arg1 + 8, 0, 0x18)
int32_t* x19 = arg1
int64_t* entry_x4
*(arg1 + 0x20) = *entry_x4
int64_t x8_1 = entry_x4[1]
*(arg1 + 0x28) = x8_1

if (x8_1 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_1 + 8) + 1, x8_1 + 8)
    while (i != 0)

uint64_t x24 = zx.q(arg2.d + 1)

if (**entry_x4 * x24 u> arg4 << 3)
    void** x0_2 = __cxa_allocate_exception(0x20)
    int64_t x0_3
    int128_t v0
    x0_3, v0 = operator new(0x30)
    (*"l has wrong size")[0].o
    int64_t var_50_2 = x0_3
    v0 = data_71cfc0
    __builtin_strncpy(x0_3, "memory vector for polynomial has wrong size", 0x2c)
    int128_t var_60_1 = v0
    *x0_2 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_2[1])
    *x0_2 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_2, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

int128_t var_60
__builtin_memset(&var_60, 0, 0x18)
uint64_t result
int64_t x8_6
int64_t x21_1
int64_t x22_1
int64_t var_50_1

if (x24.d == 0)
    x22_1 = 0
    x21_1 = 0
    result = *(arg1 + 8)
    x8_6 = 0
    
    if (result != 0)
    label_da6658:
        int64_t x8_7 = *(x19 + 0x18)
        *(x19 + 0x10) = result
        result = Botan::deallocate_memory(result, (x8_7 - result) s>> 1, 2)
        __builtin_memset(arg1 + 8, 0, 0x18)
        x21_1 = var_60.q
        x8_6 = var_60:8.q
        x22_1 = var_50_1
else
    if (arg2.d s<= 0xfffffffe)
        int64_t* x0_7 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        int64_t* x21_4 = *(x19 + 0x28)
        
        if (x21_4 != 0)
            int64_t x9_4
            int32_t i_1
            
            do
                x9_4 = __ldaxr(&x21_4[1])
                i_1 = __stlxr(x9_4 - 1, &x21_4[1])
            while (i_1 != 0)
            
            if (x9_4 == 0)
                (*(*x21_4 + 0x10))(x21_4)
                std::__ndk1::__shared_weak_count::__release_weak()
        
        void* x0_10 = *(arg1 + 8)
        
        if (x0_10 != 0)
            int64_t x8_18 = *(x19 + 0x18)
            *(x19 + 0x10) = x0_10
            Botan::deallocate_memory(x0_10, (x8_18 - x0_10) s>> 1, 2)
        
        sub_1101e04(x0_7)
        noreturn
    
    int64_t x22 = sx.q(x24.d)
    int64_t x0_1 = Botan::allocate_memory(x22, 2)
    int64_t x2 = x22 << 1
    x22_1 = x0_1 + x2
    x21_1 = x0_1
    var_60.q = x0_1
    var_50_1 = x22_1
    memset(x0_1, 0, x2)
    var_60:8.q = x22_1
    result = *(arg1 + 8)
    x8_6 = x22_1
    
    if (result != 0)
        goto label_da6658
*(x19 + 8) = x21_1
*(x19 + 0x10) = x8_6
*(x19 + 0x18) = x22_1

if (x24.d != 0)
    int32_t x8_9 = 0
    int64_t i_2 = 0
    uint32_t x10_3 = zx.d(**(x19 + 0x20))
    
    do
        result = zx.q(x8_9) u>> 3
        int32_t x16_2 = x8_9 & 7
        int32_t x17_1 = x16_2 + x10_3
        uint32_t x15_1 = zx.d(*(arg3 + result)) u>> x16_2
        
        if (x17_1 u> 8)
            result = arg3 + zx.q(result.d)
            x15_1 ^= zx.d(*(result + 1)) << (8 - x16_2)
            
            if (x17_1 u>= 0x11)
                x15_1 ^= zx.d(*(result + 2)) << (0x10 - x16_2)
        
        x8_9 += x10_3
        *(*(x19 + 8) + i_2) = x15_1.w & (not.d(0xffffffff << x10_3)).w
        i_2 += 2
    while (x24 << 1 != i_2)
    
    x21_1 = *(x19 + 8)
    x8_6 = *(x19 + 0x10)

int64_t x8_10 = x8_6 - x21_1
uint32_t x10_4 = (x8_10 u>> 1).d
int64_t x9_3 = (x8_10 & 0x1fffffffe) << 0x1f s>> 0x20
int32_t x8_12 = (x10_4 & x10_4 s>> 0x1f) - 1

while (true)
    int64_t x11_2 = x9_3 - 1
    
    if (x9_3 s< 1)
        break
    
    uint32_t x12_1 = zx.d(*(x21_1 - 2 + (x9_3 << 1)))
    x9_3 = x11_2
    
    if (x12_1 != 0)
        x8_12 = x11_2.d
        break

*x19 = x8_12
return result
