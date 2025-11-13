// 函数: _ZNK5Botan24Certificate_Store_In_SQL18find_certs_for_keyERKNS_11Private_KeyE
// 地址: 0xcfc094
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_60 = 0xe
int32_t var_5f
__builtin_strncpy(&var_5f, "SHA-256", 8)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x1
Botan::Private_Key::fingerprint_private(entry_x1)
void* var_50

if ((zx.d(var_60) & 1) != 0)
    operator delete(var_50)
int64_t* x20 = *(arg1 + 0x10)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "SELECT certificate FROM ", arg1 + 0x20)
char var_88
int128_t* x0_3
int128_t v0
x0_3, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_88)
void* x8_1 = x0_3[1].q
var_60.o = *x0_3
__builtin_memset(x0_3, 0, 0x18)
(**x20)(x20, &var_60)

if ((zx.d(var_60) & 1) != 0)
    operator delete(x8_1)

void* var_78

if ((zx.d(var_88) & 1) != 0)
    operator delete(var_78)
int64_t* var_70
char var_48
(**var_70)(var_70, 1, &var_48)
std::__ndk1::shared_ptr<Botan::X509_Certificate const>* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int64_t* var_68
void* var_38
int64_t result

while (true)
    result = (*(*var_70 + 0x48))()
    
    if ((result.d & 1) == 0)
        break
    
    int64_t x0_10
    uint64_t x1_3
    x0_10, x1_3 = (*(*var_70 + 0x28))(var_70, 0)
    __builtin_memset(&var_60, 0, 0x18)
    char var_58_1
    
    if (x1_3 != 0)
        if ((x1_3 & 0xffffffff80000000) != 0)
            int64_t* x0_22 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
            
            if (var_68 != 0)
                int64_t x9_6
                int32_t i
                
                do
                    x9_6 = __ldaxr(&var_68[1])
                    i = __stlxr(x9_6 - 1, &var_68[1])
                while (i != 0)
                
                if (x9_6 == 0)
                    (*(*var_68 + 0x10))(var_68)
                    std::__ndk1::__shared_weak_count::__release_weak()
            
            if ((zx.d(var_48) & 1) != 0)
                operator delete(var_38)
            
            sub_1101e04(x0_22)
            noreturn
        
        int64_t x0_12 = operator new(x1_3)
        int64_t x23_1 = x0_12 + x1_3
        var_60.q = x0_12
        var_58_1.q = x0_12
        int64_t var_50_2 = x23_1
        memcpy(x0_12, x0_10, x1_3)
        var_58_1.q = x23_1
    
    void** x0_13 = operator new(0xa0)
    x0_13[1] = 0
    x0_13[2] = 0
    *x0_13 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> >
        + 0x10
    Botan::X509_Certificate::X509_Certificate(&x0_13[3])
    void** x8_11 = *(entry_x8 + 8)
    var_88.q = &x0_13[3]
    void* x0_15
    
    if (x8_11 u>= *(entry_x8 + 0x10))
        std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_Certificate const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_Certificate const> > >::__push_back_slow_path<std::__ndk1::shared_ptr<Botan::X509_Certificate const> >(
            entry_x8)
        int64_t x9_4
        
        if (x0_13 != 0)
            int32_t i_1
            
            do
                x9_4 = __ldaxr(&x0_13[1])
                i_1 = __stlxr(x9_4 - 1, &x0_13[1])
            while (i_1 != 0)
        
        if (x0_13 != 0 && x9_4 == 0)
            (*(*x0_13 + 0x10))(x0_13)
            std::__ndk1::__shared_weak_count::__release_weak()
            x0_15 = var_60.q
            
            if (x0_15 == 0)
                continue
        else
            x0_15 = var_60.q
            
            if (x0_15 == 0)
                continue
    else
        *x8_11 = &x0_13[3]
        x8_11[1] = x0_13
        var_88.q = 0
        int64_t var_80_2 = 0
        *(entry_x8 + 8) = &x8_11[2]
        x0_15 = var_60.q
        
        if (x0_15 == 0)
            continue
    
    var_58_1.q = x0_15
    operator delete(x0_15)

if (var_68 == 0)
label_cfc2dc:
    
    if ((zx.d(var_48) & 1) != 0)
        return operator delete(var_38)
else
    int64_t x9_5
    int32_t i_2
    
    do
        x9_5 = __ldaxr(&var_68[1])
        i_2 = __stlxr(x9_5 - 1, &var_68[1])
    while (i_2 != 0)
    
    if (x9_5 != 0)
        goto label_cfc2dc
    
    (*(*var_68 + 0x10))(var_68)
    result = std::__ndk1::__shared_weak_count::__release_weak()
    
    if ((zx.d(var_48) & 1) != 0)
        return operator delete(var_38)

return result
