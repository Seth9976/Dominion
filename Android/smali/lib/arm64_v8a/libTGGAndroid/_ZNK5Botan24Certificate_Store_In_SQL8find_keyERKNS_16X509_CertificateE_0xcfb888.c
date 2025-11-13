// 函数: _ZNK5Botan24Certificate_Store_In_SQL8find_keyERKNS_16X509_CertificateE
// 地址: 0xcfb888
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x22 = *(arg1 + 0x10)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "SELECT key FROM ", arg1 + 0x20)
char var_188[0x10]
int128_t* x0_1
int128_t v0
x0_1, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_188)
void* x8 = x0_1[1].q
int128_t var_170 = *x0_1
__builtin_memset(x0_1, 0, 0x18)
*(arg1 + 0x28)
void* __offset(Botan::X509_Certificate, 0x21) x1_2

if ((zx.d(*(arg1 + 0x20)) & 1) != 0)
    x1_2 = *(arg1 + 0x30)
else
    x1_2 = arg1 + 0x21

int128_t* x0_3
int128_t v0_1
x0_3, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_170, x1_2)
void* x8_2 = x0_3[1].q
int128_t var_150 = *x0_3
__builtin_memset(x0_3, 0, 0x18)
int128_t* x0_5
int128_t v0_2
x0_5, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_150)
void* x8_3 = x0_5[1].q
int128_t var_130 = *x0_5
__builtin_memset(x0_5, 0, 0x18)
*(arg1 + 0x28)
uint64_t x1_4

if ((zx.d(*(arg1 + 0x20)) & 1) == 0)
    x1_4 = arg1 + 0x21
else
    x1_4 = *(arg1 + 0x30)

int128_t* x0_7
int128_t v0_3
x0_7, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_130, x1_4)
void* x8_5 = x0_7[1].q
int128_t var_110 = *x0_7
__builtin_memset(x0_7, 0, 0x18)
int128_t* x0_9
int128_t v0_4
x0_9, v0_4 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_110)
void* x8_6 = x0_9[1].q
int128_t var_f0 = *x0_9
__builtin_memset(x0_9, 0, 0x18)
*(arg1 + 0x28)
uint64_t x1_6

if ((zx.d(*(arg1 + 0x20)) & 1) == 0)
    x1_6 = arg1 + 0x21
else
    x1_6 = *(arg1 + 0x30)

int128_t* x0_11
int128_t v0_5
x0_11, v0_5 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_f0, x1_6)
void* x8_8 = x0_11[1].q
int128_t var_d0 = *x0_11
__builtin_memset(x0_11, 0, 0x18)
int128_t* x0_13
int128_t v0_6
x0_13, v0_6 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_d0)
void* x8_9 = x0_13[1].q
int128_t var_b0 = *x0_13
__builtin_memset(x0_13, 0, 0x18)
*(arg1 + 0x28)
void* __offset(Botan::X509_Certificate, 0x21) x1_8

if ((zx.d(*(arg1 + 0x20)) & 1) == 0)
    x1_8 = arg1 + 0x21
else
    x1_8 = *(arg1 + 0x30)

int128_t* x0_15
int128_t v0_7
x0_15, v0_7 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_b0, x1_8)
void* x8_11 = x0_15[1].q
int128_t var_90 = *x0_15
__builtin_memset(x0_15, 0, 0x18)
int128_t* x0_17
int128_t v0_8
x0_17, v0_8 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_90)
void* x8_12 = x0_17[1].q
int128_t var_1b0 = *x0_17
__builtin_memset(x0_17, 0, 0x18)
(**x22)(x22, &var_1b0)

if ((zx.d(var_1b0.b) & 1) == 0)
    if ((zx.d(var_90.b) & 1) != 0)
        goto label_cfbcfc
    
    goto label_cfbaa4

operator delete(x8_12)

if ((zx.d(var_90.b) & 1) != 0)
label_cfbcfc:
    operator delete(x8_11)
    
    if ((zx.d(var_b0.b) & 1) == 0)
        goto label_cfbaac
    
    goto label_cfbd0c

label_cfbaa4:

if ((zx.d(var_b0.b) & 1) == 0)
label_cfbaac:
    
    if ((zx.d(var_d0.b) & 1) != 0)
        goto label_cfbd1c
    
    goto label_cfbab4

label_cfbd0c:
operator delete(x8_9)

if ((zx.d(var_d0.b) & 1) != 0)
label_cfbd1c:
    operator delete(x8_8)
    
    if ((zx.d(var_f0.b) & 1) == 0)
        goto label_cfbabc
    
    goto label_cfbd2c

label_cfbab4:

if ((zx.d(var_f0.b) & 1) == 0)
label_cfbabc:
    
    if ((zx.d(var_110.b) & 1) != 0)
        goto label_cfbd3c
    
    goto label_cfbac4

label_cfbd2c:
operator delete(x8_6)

if ((zx.d(var_110.b) & 1) != 0)
label_cfbd3c:
    operator delete(x8_5)
    
    if ((zx.d(var_130.b) & 1) == 0)
        goto label_cfbacc
    
    goto label_cfbd4c

label_cfbac4:

if ((zx.d(var_130.b) & 1) == 0)
label_cfbacc:
    
    if ((zx.d(var_150.b) & 1) != 0)
        goto label_cfbd5c
    
    goto label_cfbad4

label_cfbd4c:
operator delete(x8_3)

if ((zx.d(var_150.b) & 1) != 0)
label_cfbd5c:
    operator delete(x8_2)
    
    if ((zx.d(var_170.b) & 1) == 0)
        goto label_cfbadc
    
    goto label_cfbd6c

label_cfbad4:
void* var_178

if ((zx.d(var_170.b) & 1) != 0)
label_cfbd6c:
    operator delete(x8)
    
    if ((zx.d(var_188[0]) & 1) != 0)
        operator delete(var_178)
else
label_cfbadc:
    
    if ((zx.d(var_188[0]) & 1) != 0)
        operator delete(var_178)
var_90.b = 0xe
__builtin_strncpy(&var_90:1, "SHA-256", 8)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x1
Botan::X509_Certificate::fingerprint(entry_x1)
int64_t* var_70
(**var_70)(var_70, 1, &var_1b0)

if ((zx.d(var_1b0.b) & 1) != 0)
    operator delete(x8_12)

if ((zx.d(var_90.b) & 1) != 0)
    operator delete(x8_11)

int64_t* entry_x8
*entry_x8 = 0
entry_x8[1] = 0
int64_t* var_68
int64_t result

while (true)
    result = (*(*var_70 + 0x48))()
    
    if ((result.d & 1) == 0)
        break
    
    int64_t x0_26
    uint64_t x1_11
    x0_26, x1_11 = (*(*var_70 + 0x28))(var_70, 0)
    var_1b0.q = _vtable_for_Botan::DataSource_Memory + 0x10
    __builtin_memset(&var_1b0:8, 0, 0x18)
    int64_t var_198_1
    
    if (x1_11 != 0)
        if ((x1_11 & 0xffffffff80000000) != 0)
            int64_t* x0_45 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
            void* var_1a0_1
            
            if ((zx.d(var_1b0.b) & 1) != 0)
                operator delete(var_1a0_1)
            
            if ((zx.d(var_90.b) & 1) != 0)
                operator delete(x8_11)
            
            if (var_68 != 0)
                int64_t x9_7
                int32_t i
                
                do
                    x9_7 = __ldaxr(&var_68[1])
                    i = __stlxr(x9_7 - 1, &var_68[1])
                while (i != 0)
                
                if (x9_7 == 0)
                    (*(*var_68 + 0x10))(var_68)
                    std::__ndk1::__shared_weak_count::__release_weak()
            
            sub_1101e04(x0_45)
            noreturn
        
        int64_t x0_28 = Botan::allocate_memory(x1_11, 1)
        int64_t x27_1 = x0_28 + x1_11
        var_1b0:8.q = x0_28
        int64_t var_1a0_2 = x0_28
        var_198_1 = x27_1
        memcpy(x0_28, x0_26, x1_11)
        int64_t var_1a0_3 = x27_1
    
    int64_t var_190_1 = 0
    Botan::PKCS8::load_key(&var_1b0, arg1 + 0x38)
    int64_t x22_3 = var_90.q
    void** x0_30 = operator new(0x20)
    int64_t* x23_3 = entry_x8[1]
    *x0_30 = _vtable_for_std::__ndk1::__shared_ptr_pointer<Botan::Private_Key*, std::__ndk1::default_delete<Botan::Private_Key>, std::__ndk1::allocator<Botan::Private_Key> >
        + 0x10
    x0_30[1] = 0
    x0_30[2] = 0
    x0_30[3] = x22_3
    *entry_x8 = x22_3
    entry_x8[1] = x0_30
    int64_t x9_5
    
    if (x23_3 != 0)
        int32_t i_1
        
        do
            x9_5 = __ldaxr(&x23_3[1])
            i_1 = __stlxr(x9_5 - 1, &x23_3[1])
        while (i_1 != 0)
    
    void* x0_31
    
    if (x23_3 != 0 && x9_5 == 0)
        (*(*x23_3 + 0x10))(x23_3)
        std::__ndk1::__shared_weak_count::__release_weak()
        x0_31 = var_1b0:8.q
        var_1b0.q = _vtable_for_Botan::DataSource_Memory + 0x10
        
        if (x0_31 == 0)
            continue
    else
        x0_31 = var_1b0:8.q
        var_1b0.q = _vtable_for_Botan::DataSource_Memory + 0x10
        
        if (x0_31 == 0)
            continue
    
    void* var_1a0_4 = x0_31
    Botan::deallocate_memory(x0_31, var_198_1 - x0_31, 1)

if (var_68 != 0)
    int64_t x9_6
    int32_t i_2
    
    do
        x9_6 = __ldaxr(&var_68[1])
        i_2 = __stlxr(x9_6 - 1, &var_68[1])
    while (i_2 != 0)
    
    if (x9_6 == 0)
        (*(*var_68 + 0x10))(var_68)
        return std::__ndk1::__shared_weak_count::__release_weak()

return result
