// 函数: _ZN5Botan14mceies_decryptERKNS_19McEliece_PrivateKeyEPKhmS4_mRKNSt6__ndk112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE
// 地址: 0xdaaf00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_80 = 0x1a
void* __offset(vtable_for_Botan::Null_RNG, 0x10) var_58 = _vtable_for_Botan::Null_RNG + 0x10
int64_t var_7f
__builtin_strncpy(&var_7f, "KDF1(SHA-512)", 0xe)
char* var_98
var_98.w = 0
int64_t* var_60
Botan::PK_KEM_Decryptor::PK_KEM_Decryptor(&var_60, arg1, &var_58, &var_80)
void* var_88

if ((zx.d(var_98.b) & 1) != 0)
    operator delete(var_88)

void* var_70

if ((zx.d(var_80) & 1) != 0)
    operator delete(var_70)

int64_t x25_1 = *(arg1 + 0xa0)
var_80.w = 0
Botan::AEAD_Mode::create_or_throw(arg6, 1, &var_80)

if ((zx.d(var_80) & 1) != 0)
    operator delete(var_70)

int64_t* var_a0
int64_t x0_6 = (*(*var_a0 + 0x60))(var_a0)
uint64_t x27 = (x25_1 + 7) u>> 3

if (x0_6 + x27 + (*(*var_a0 + 0x80))(var_a0) u> arg3)
    void** x0_22 = __cxa_allocate_exception(0x20)
    int64_t x0_23
    int128_t v2
    x0_23, v2 = operator new(0x30)
    v2 = data_71b820
    int64_t var_70_1 = x0_23
    __builtin_strncpy(x0_23, "Input message too small to be valid", 0x24)
    var_80.o = v2
    *x0_22 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_22[1])
    *x0_22 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_22, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

int64_t* x25_2 = var_60
(**x25_2)(x25_2, arg2, x27, 0x40, 0, 0)
sub_daad20(&var_98, &var_80, var_a0)
Botan::SymmetricAlgorithm::set_key(var_a0, var_98)
void* x0_12 = var_98

if (x0_12 != 0)
    void* var_90_1 = x0_12
    Botan::deallocate_memory(x0_12, var_88 - x0_12, 1)

(*(*var_a0 + 0x90))(var_a0, arg4, arg5)
void* x23_1 = &arg2[x27]
void* x8_16 = &arg2[arg3]
void* x21_1 = x23_1 + x0_6
void* x22_1 = x8_16 - x21_1
void** entry_x8
__builtin_memset(entry_x8, 0, 0x18)

if (x8_16 != x21_1)
    if ((x22_1 & 0xffffffff80000000) != 0)
        void* x0_28
        int32_t x1_11
        x0_28, x1_11 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        
        if ((zx.d(var_80) & 1) != 0)
            operator delete(var_70)
        
        (*(*var_a0 + 8))(var_a0)
        int64_t* x0_32 = var_60
        
        if (x0_32 != 0)
            (*(*x0_32 + 0x10))()
        
        if (x1_11 == 2)
            __cxa_begin_catch(x0_28)
            __cxa_rethrow()
            noreturn
        
        if (x1_11 != 1)
            sub_1101e04(x0_28)
            noreturn
        
        int64_t* x0_35 = __cxa_begin_catch(x0_28)
        void** x0_36 = __cxa_allocate_exception(0x20)
        char* x0_38 = (*(*x0_35 + 0x10))(x0_35)
        size_t x0_39 = strlen(x0_38)
        
        if (x0_39 u>= -0x10)
            x0_39 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
        
        int64_t x22_3
        
        if (x0_39 u>= 0x17)
            uint64_t x23_2 = (x0_39 + 0x10) & 0xfffffffffffffff0
            int64_t x0_41 = operator new(x23_2)
            x22_3 = x0_41
            size_t var_90_2 = x0_39
            int64_t var_88_1 = x0_41
            var_98 = x23_2 | 1
            memcpy(x22_3, x0_38, x0_39)
        else
            x22_3 = &var_98 | 1
            var_98.b = (x0_39.d << 1).b
            
            if (x0_39 != 0)
                memcpy(x22_3, x0_38, x0_39)
        
        *(x22_3 + x0_39) = 0
        int128_t* x0_44
        int128_t v0
        x0_44, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
            &var_98, nullptr)
        int64_t var_70_2 = x0_44[1].q
        var_80.o = *x0_44
        __builtin_memset(x0_44, 0, 0x18)
        *x0_36 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_36[1])
        *x0_36 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_36, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    void* x0_15 = Botan::allocate_memory(x22_1, 1)
    void* x24_1 = x0_15 + x22_1
    *entry_x8 = x0_15
    entry_x8[2] = x24_1
    memcpy(x0_15, x21_1, x22_1)
    entry_x8[1] = x24_1

(*(*var_a0 + 0x30))(var_a0, x23_1, x0_6)
(*(*var_a0 + 0x40))(var_a0, entry_x8, 0)
void* x0_18 = var_80.q

if (x0_18 != 0)
    var_7f = x0_18
    Botan::deallocate_memory(x0_18, var_70 - x0_18, 1)

(*(*var_a0 + 8))(var_a0)
return (*(*x25_2 + 0x10))(x25_2)
