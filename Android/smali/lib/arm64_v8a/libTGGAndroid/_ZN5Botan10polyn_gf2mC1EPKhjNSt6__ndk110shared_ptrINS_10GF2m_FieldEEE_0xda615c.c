// 函数: _ZN5Botan10polyn_gf2mC1EPKhjNSt6__ndk110shared_ptrINS_10GF2m_FieldEEE
// 地址: 0xda615c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0xffffffff
*(arg1 + 8) = 0
__builtin_memset(&arg1[0x10], 0, 0x10)
int16_t* x21 = arg2
int64_t* entry_x3
*(arg1 + 0x20) = *entry_x3
int64_t x8_1 = entry_x3[1]
*(arg1 + 0x28) = x8_1

if (x8_1 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_1 + 8) + 1, x8_1 + 8)
    while (i != 0)

if ((arg3 & 1) != 0)
    void** x0_6 = __cxa_allocate_exception(0x20)
    int64_t x0_7
    int128_t v2
    x0_7, v2 = operator new(0x30)
    v2 = data_71b820
    int64_t var_60_1 = x0_7
    __builtin_strncpy(x0_7, "illegal length of memory to decode ", 0x24)
    int128_t var_70_1 = v2
    *x0_6 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_6[1])
    *x0_6 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_6, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

uint64_t x23 = zx.q(arg3 u>> 1)
uint64_t x22 = x23 << 1
void* result
uint16_t* x24
void* x26

if (x23.d == 0)
    x24 = nullptr
    x26 = nullptr
    result = *(arg1 + 8)
    
    if (result != 0)
    label_da6208:
        int64_t x8_3 = *(arg1 + 0x18)
        *(arg1 + 0x10) = result
        result = Botan::deallocate_memory(result, (x8_3 - result) s>> 1, 2)
        __builtin_memset(&arg1[8], 0, 0x18)
else
    uint16_t* x0_1 = Botan::allocate_memory(x23, 2)
    x24 = x0_1
    x26 = &x0_1[x23]
    memset(x0_1, 0, x22)
    result = *(arg1 + 8)
    
    if (result != 0)
        goto label_da6208

*(arg1 + 8) = x24
*(arg1 + 0x10) = x26
*(arg1 + 0x18) = x26
*arg1 = 0xffffffff

if (x23.d != 0)
    *x24 = (_byteswap(zx.d(*x21)) u>> 0x10).w
    
    if (x23.d != 1)
        int64_t x8_8 = 1
        
        do
            x21 = &x21[1]
            *(*(arg1 + 8) + (x8_8 << 1)) = (_byteswap(zx.d(*x21)) u>> 0x10).w
            x8_8 += 1
        while (x23 != x8_8)

void* x8_10

if (x23.d == 0 || x23.d == 0)
    x8_10 = *(arg1 + 8)
else
    int64_t x9_6 = 0
    x8_10 = *(arg1 + 8)
    
    do
        if (1 << **entry_x3 s<= zx.d(*(x8_10 + x9_6)))
            void** x0_2 = __cxa_allocate_exception(0x20)
            int64_t x0_3
            int128_t v0
            x0_3, v0 = operator new(0x20)
            int64_t var_60 = x0_3
            int128_t var_70 = data_71aa40
            __builtin_strncpy(x0_3, "error decoding polynomial", 0x1a)
            *x0_2 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_2[1])
            *x0_2 = _vtable_for_Botan::Decoding_Error + 0x10
            __cxa_throw(x0_2, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
            noreturn
        
        x9_6 += 2
    while (x22 != x9_6)

void* x9_8 = *(arg1 + 0x10) - x8_10
uint32_t x11_2 = (x9_8 u>> 1).d
int64_t x10_5 = (x9_8 & 0x1fffffffe) << 0x1f s>> 0x20
int32_t x9_10 = (x11_2 & x11_2 s>> 0x1f) - 1

while (true)
    int64_t x11_3 = x10_5 - 1
    
    if (x10_5 s< 1)
        break
    
    uint32_t x12_1 = zx.d(*(x8_10 - 2 + (x10_5 << 1)))
    x10_5 = x11_3
    
    if (x12_1 != 0)
        x9_10 = x11_3.d
        break

*arg1 = x9_10
return result
