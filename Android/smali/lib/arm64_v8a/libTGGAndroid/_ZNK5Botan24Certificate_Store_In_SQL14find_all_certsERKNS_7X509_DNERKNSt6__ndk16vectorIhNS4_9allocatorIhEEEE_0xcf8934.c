// 函数: _ZNK5Botan24Certificate_Store_In_SQL14find_all_certsERKNS_7X509_DNERKNSt6__ndk16vectorIhNS4_9allocatorIhEEEE
// 地址: 0xcf8934
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
Botan::ASN1_Object::BER_encode()
char var_98
void* var_88
int128_t var_80
void* result_1
int64_t* entry_x2
int64_t* x20_1
int64_t* x21_1
int64_t* var_68
int64_t* var_60

if (*entry_x2 == entry_x2[1])
    int64_t* x20_2 = *(arg1 + 0x10)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "SELECT certificate FROM ", arg1 + 0x20)
    int128_t* x0_9
    int128_t v0_1
    x0_9, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_98)
    void* x8_9 = x0_9[1].q
    var_80 = *x0_9
    __builtin_memset(x0_9, 0, 0x18)
    (**x20_2)(x20_2, &var_80)
    x21_1 = var_68
    x20_1 = var_60
    int64_t var_68_2 = 0
    int64_t var_60_2 = 0
    
    if ((zx.d(var_80.b) & 1) != 0)
        operator delete(x8_9)
    
    if ((zx.d(var_98) & 1) != 0)
        operator delete(var_88)
    
    (*(*x21_1 + 0x18))(x21_1, 1, &result_1)
else
    int64_t* x20 = *(arg1 + 0x10)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "SELECT certificate FROM ", arg1 + 0x20)
    int128_t* x0_2
    int128_t v0
    x0_2, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_98)
    void* x8_1 = x0_2[1].q
    var_80 = *x0_2
    __builtin_memset(x0_2, 0, 0x18)
    (**x20)(x20, &var_80)
    x21_1 = var_68
    x20_1 = var_60
    int64_t var_68_1 = 0
    int64_t var_60_1 = 0
    
    if ((zx.d(var_80.b) & 1) != 0)
        operator delete(x8_1)
    
    if ((zx.d(var_98) & 1) != 0)
        operator delete(var_88)
    
    (*(*x21_1 + 0x18))(x21_1, 1, &result_1)
    (*(*x21_1 + 0x18))(x21_1, 2, entry_x2)

while (((*(*x21_1 + 0x48))(x21_1) & 1) != 0)
    int64_t x0_18
    uint64_t x1_6
    x0_18, x1_6 = (*(*x21_1 + 0x28))(x21_1, 0)
    __builtin_memset(&var_80, 0, 0x18)
    
    if (x1_6 != 0)
        if ((x1_6 & 0xffffffff80000000) != 0)
            int64_t* x0_28 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
            void* var_70_2
            
            if ((zx.d(var_80.b) & 1) != 0)
                operator delete(var_70_2)
            
            if ((zx.d(var_98) & 1) != 0)
                operator delete(var_88)
            
            void* result_3 = result_1
            
            if (result_3 != 0)
                void* result_4 = result_3
                operator delete(result_3)
            
            void* x22_4 = *entry_x8
            
            if (x22_4 != 0)
                void* x23_3 = entry_x8[1]
                void* x0_32 = x22_4
                
                if (x23_3 != x22_4)
                    do
                        int64_t* x20_3 = *(x23_3 - 8)
                        x23_3 -= 0x10
                        
                        if (x20_3 != 0)
                            int64_t x9_8
                            int32_t i
                            
                            do
                                x9_8 = __ldaxr(&x20_3[1])
                                i = __stlxr(x9_8 - 1, &x20_3[1])
                            while (i != 0)
                            
                            if (x9_8 == 0)
                                (*(*x20_3 + 0x10))(x20_3)
                                std::__ndk1::__shared_weak_count::__release_weak()
                    while (x23_3 != x22_4)
                    
                    x0_32 = *entry_x8
                
                entry_x8[1] = x22_4
                operator delete(x0_32)
            
            sub_1101e04(x0_28)
            noreturn
        
        int64_t x0_20 = operator new(x1_6)
        int64_t x25_1 = x0_20 + x1_6
        var_80.q = x0_20
        var_80:8.q = x0_20
        int64_t var_70_3 = x25_1
        memcpy(x0_20, x0_18, x1_6)
        var_80:8.q = x25_1
    
    void** x0_21 = operator new(0xa0)
    x0_21[1] = 0
    x0_21[2] = 0
    *x0_21 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> >
        + 0x10
    Botan::X509_Certificate::X509_Certificate(&x0_21[3])
    void** x8_19 = entry_x8[1]
    var_98.q = &x0_21[3]
    void* x0_14
    
    if (x8_19 u>= entry_x8[2])
        std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_Certificate const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_Certificate const> > >::__push_back_slow_path<std::__ndk1::shared_ptr<Botan::X509_Certificate const> >(
            entry_x8)
        int64_t x9_5
        
        if (x0_21 != 0)
            int32_t i_1
            
            do
                x9_5 = __ldaxr(&x0_21[1])
                i_1 = __stlxr(x9_5 - 1, &x0_21[1])
            while (i_1 != 0)
        
        if (x0_21 == 0 || x9_5 != 0)
            x0_14 = var_80.q
            
            if (x0_14 == 0)
                continue
        else
            (*(*x0_21 + 0x10))(x0_21)
            std::__ndk1::__shared_weak_count::__release_weak()
            x0_14 = var_80.q
            
            if (x0_14 == 0)
                continue
    else
        *x8_19 = &x0_21[3]
        x8_19[1] = x0_21
        var_98.q = 0
        int64_t var_90_2 = 0
        entry_x8[1] = &x8_19[2]
        x0_14 = var_80.q
        
        if (x0_14 == 0)
            continue
    
    var_80:8.q = x0_14
    operator delete(x0_14)

void* result = result_1

if (result != 0)
    void* result_2 = result
    result = operator delete(result)

if (x20_1 != 0)
    int64_t x9_6
    int32_t i_2
    
    do
        x9_6 = __ldaxr(&x20_1[1])
        i_2 = __stlxr(x9_6 - 1, &x20_1[1])
    while (i_2 != 0)
    
    if (x9_6 == 0)
        (*(*x20_1 + 0x10))(x20_1)
        return std::__ndk1::__shared_weak_count::__release_weak()

return result
