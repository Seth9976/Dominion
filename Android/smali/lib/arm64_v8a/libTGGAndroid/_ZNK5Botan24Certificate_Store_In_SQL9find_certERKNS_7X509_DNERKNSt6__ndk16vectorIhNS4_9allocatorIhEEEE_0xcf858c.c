// 函数: _ZNK5Botan24Certificate_Store_In_SQL9find_certERKNS_7X509_DNERKNSt6__ndk16vectorIhNS4_9allocatorIhEEEE
// 地址: 0xcf858c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::ASN1_Object::BER_encode()
char var_98[0x10]
void* var_88
int128_t var_80
void* result_1
int64_t* entry_x2
int64_t* x19_1
int64_t* x22_1
int64_t* var_68
int64_t* var_60

if (*entry_x2 == entry_x2[1])
    int64_t* x19_2 = *(arg1 + 0x10)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "SELECT certificate FROM ", arg1 + 0x20)
    int128_t* x0_9
    int128_t v0_1
    x0_9, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_98)
    void* x8_9 = x0_9[1].q
    var_80 = *x0_9
    __builtin_memset(x0_9, 0, 0x18)
    (**x19_2)(x19_2, &var_80)
    x22_1 = var_68
    x19_1 = var_60
    int64_t var_68_2 = 0
    int64_t var_60_2 = 0
    
    if ((zx.d(var_80.b) & 1) != 0)
        operator delete(x8_9)
    
    if ((zx.d(var_98[0]) & 1) != 0)
        operator delete(var_88)
    
    (*(*x22_1 + 0x18))(x22_1, 1, &result_1)
else
    int64_t* x19 = *(arg1 + 0x10)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "SELECT certificate FROM ", arg1 + 0x20)
    int128_t* x0_2
    int128_t v0
    x0_2, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_98)
    void* x8_1 = x0_2[1].q
    var_80 = *x0_2
    __builtin_memset(x0_2, 0, 0x18)
    (**x19)(x19, &var_80)
    x22_1 = var_68
    x19_1 = var_60
    int64_t var_68_1 = 0
    int64_t var_60_1 = 0
    
    if ((zx.d(var_80.b) & 1) != 0)
        operator delete(x8_1)
    
    if ((zx.d(var_98[0]) & 1) != 0)
        operator delete(var_88)
    
    (*(*x22_1 + 0x18))(x22_1, 1, &result_1)
    (*(*x22_1 + 0x18))(x22_1, 2, entry_x2)
void** entry_x8

if (((*(*x22_1 + 0x48))(x22_1) & 1) == 0)
    *entry_x8 = nullptr
    entry_x8[1] = 0
else
    int64_t x0_17
    uint64_t x1_6
    x0_17, x1_6 = (*(*x22_1 + 0x28))(x22_1, 0)
    __builtin_memset(&var_80, 0, 0x18)
    
    if (x1_6 != 0)
        if ((x1_6 & 0xffffffff80000000) != 0)
            int64_t* x0_25 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
            void* var_70_2
            
            if ((zx.d(var_80.b) & 1) != 0)
                operator delete(var_70_2)
            
            if ((zx.d(var_98[0]) & 1) != 0)
                operator delete(var_88)
            
            void* result_3 = result_1
            
            if (result_3 != 0)
                void* result_4 = result_3
                operator delete(result_3)
            
            sub_1101e04(x0_25)
            noreturn
        
        int64_t x0_19 = operator new(x1_6)
        int64_t x24_1 = x0_19 + x1_6
        var_80.q = x0_19
        var_80:8.q = x0_19
        int64_t var_70_3 = x24_1
        memcpy(x0_19, x0_17, x1_6)
        var_80:8.q = x24_1
    
    void** x0_20 = operator new(0xa0)
    x0_20[2] = 0
    *x0_20 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> >
        + 0x10
    x0_20[1] = 0
    Botan::X509_Certificate::X509_Certificate(&x0_20[3])
    void* x0_22 = var_80.q
    *entry_x8 = &x0_20[3]
    entry_x8[1] = x0_20
    
    if (x0_22 != 0)
        var_80:8.q = x0_22
        operator delete(x0_22)
void* result = result_1

if (result != 0)
    void* result_2 = result
    result = operator delete(result)

if (x19_1 != 0)
    int64_t x9_3
    int32_t i
    
    do
        x9_3 = __ldaxr(&x19_1[1])
        i = __stlxr(x9_3 - 1, &x19_1[1])
    while (i != 0)
    
    if (x9_3 == 0)
        (*(*x19_1 + 0x10))(x19_1)
        return std::__ndk1::__shared_weak_count::__release_weak()

return result
