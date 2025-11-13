// 函数: _ZN5Botan14mceies_encryptERKNS_18McEliece_PublicKeyEPKhmS4_mRNS_21RandomNumberGeneratorERKNSt6__ndk112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE
// 地址: 0xdaa768
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x1 = arg1 + *(*arg1 - 0x88)
char var_70 = 0x1a
int64_t var_6f
__builtin_strncpy(&var_6f, "KDF1(SHA-512)", 0xe)
int16_t var_88 = 0
int64_t* var_58
Botan::PK_KEM_Encryptor::PK_KEM_Encryptor(&var_58, x1, arg6, &var_70)
void* var_78

if ((zx.d(var_88.b) & 1) != 0)
    operator delete(var_78)
void* var_60

if ((zx.d(var_70) & 1) != 0)
    operator delete(var_60)
int64_t* x19 = var_58
__builtin_memset(&var_88, 0, 0x30)
(**x19)(x19, &var_70, &var_88, 0x40, arg6, 0, 0)

if (var_6f - var_70.q != (*(arg1 + 0x28) + 7) u>> 3)
    Botan::assertion_failure("mce_ciphertext.size() == mce_code_bytes", "Unexpected size", 
        "mceies_encrypt", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xc0d8)
label_daab04:
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
label_daab2c:
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
label_daab54:
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
    sub_c776cc(Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401))
    noreturn

char* var_a8
var_a8.w = 0
Botan::AEAD_Mode::create_or_throw(arg7, 0, &var_a8)
void* var_98

if ((zx.d(var_a8.b) & 1) != 0)
    operator delete(var_98)

int64_t* var_90
int64_t x0_7 = (*(*var_90 + 0x60))(var_90)
sub_daad20(&var_a8, &var_88, var_90)
Botan::SymmetricAlgorithm::set_key(var_90, var_a8)
void* x0_10 = var_a8

if (x0_10 != 0)
    void* var_a0_1 = x0_10
    Botan::deallocate_memory(x0_10, var_98 - x0_10, 1)

(*(*var_90 + 0x90))(var_90, arg4, arg5)
var_a8 = 0
int64_t var_a0_2 = 0
int64_t var_98_1 = 0
char* x1_7
int64_t x8_15

if (x0_7 == 0)
    x1_7 = nullptr
    x8_15 = 0
else
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&var_a8)
    x1_7 = var_a8
    x8_15 = var_a0_2

(*(*arg6 + 0x10))(arg6, x1_7, x8_15 - x1_7)
void* x1_8 = var_70.q
int64_t x8_16 = var_6f
char* x9_4 = var_a8
void** entry_x8
__builtin_memset(entry_x8, 0, 0x18)
void* x9_5 = x1_8 + x9_4
int64_t x10_2 = x8_16 + arg3 + var_a0_2
void* x25_1 = x10_2 - x9_5
void* const x24_1
size_t x27_2

if (x10_2 != x9_5)
    if ((x25_1 & 0xffffffff80000000) != 0)
        goto label_daab04
    
    void* x0_15 = Botan::allocate_memory(x25_1, 1)
    void* x26_1 = x0_15 + x25_1
    x24_1 = x0_15
    *entry_x8 = x0_15
    entry_x8[2] = x26_1
    memset(x0_15, 0, x25_1)
    x1_8 = var_70.q
    int64_t x8_17 = var_6f
    entry_x8[1] = x26_1
    x27_2 = x8_17 - x1_8
    
    if (x8_17 != x1_8)
        goto label_daa9b0
    
    goto label_daa98c

x24_1 = nullptr
x27_2 = x8_16 - x1_8
char* x25_2
size_t x26_2
void* x27_3

if (x8_16 != x1_8)
label_daa9b0:
    
    if (x24_1 == 0 || x1_8 == 0)
        goto label_daab2c
    
    memmove(x24_1, x1_8, x27_2)
    x25_2 = var_a8
    x27_3 = x24_1 + x27_2
    x26_2 = var_a0_2 - x25_2
    
    if (var_a0_2 == x25_2)
        goto label_daa99c
    
    goto label_daa9d4

label_daa98c:
x25_2 = var_a8
x27_3 = x24_1 + x27_2
x26_2 = var_a0_2 - x25_2

if (var_a0_2 != x25_2)
label_daa9d4:
    
    if (x24_1 == 0 || x25_2 == 0)
        goto label_daab54
    
    memmove(x27_3, x25_2, x26_2)
    
    if (arg3 != 0)
        goto label_daa9f0
else
label_daa99c:
    
    if (arg3 != 0)
    label_daa9f0:
        
        if (arg2 == 0 || x24_1 == 0)
            sub_c776cc(Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                "If n > 0 then args are not null", "copy_mem", 
                "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401))
            noreturn
        
        memmove(x27_3 + x26_2, arg2, arg3)

(*(*var_90 + 0x30))(var_90, x25_2, x26_2)
(*(*var_90 + 0x40))(var_90, entry_x8, var_6f + var_a0_2 - (var_70.q + var_a8))
char* x0_21 = var_a8

if (x0_21 != 0)
    char* var_a0_3 = x0_21
    Botan::deallocate_memory(x0_21, var_98_1 - x0_21, 1)

(*(*var_90 + 8))(var_90)
void* x0_23 = var_88.q

if (x0_23 != 0)
    void* var_80_1 = x0_23
    int64_t var_78_1
    Botan::deallocate_memory(x0_23, var_78_1 - x0_23, 1)

void* x0_24 = var_70.q

if (x0_24 != 0)
    var_6f = x0_24
    int64_t var_60_1
    Botan::deallocate_memory(x0_24, var_60_1 - x0_24, 1)

return (*(*x19 + 0x10))(x19)
