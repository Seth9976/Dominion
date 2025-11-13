// 函数: _ZN5Botan3TLS7Session7decryptEPKhmRKNS_11OctetStringE
// 地址: 0xe19040
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_60

if (arg2 u<= 0x6b)
    void** x0_30 = __cxa_allocate_exception(0x20)
    int64_t x0_31
    int128_t v0
    x0_31, v0 = operator new(0x30)
    v0 = data_71c500
    int64_t var_50_2 = x0_31
    __builtin_strncpy(x0_31, "Encrypted session too short to be valid", 0x28)
    var_60 = v0
    *x0_30 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_30[1])
    *x0_30 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_30, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

if (*arg1 != 0x6c399d5a8b06)
    void** x0_35 = __cxa_allocate_exception(0x20)
    int64_t x0_36
    int128_t v0_1
    x0_36, v0_1 = operator new(0x20)
    int64_t var_50_3 = x0_36
    var_60 = data_71c370
    __builtin_strncpy(x0_36, "Missing expected magic numbers", 0x1f)
    *x0_35 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_35[1])
    *x0_35 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_35, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

__builtin_strcpy(&var_60, "\"HMAC(SHA-512-256)")
int16_t var_80 = 0
Botan::MessageAuthenticationCode::create_or_throw(&var_60, &var_80)
void* var_70

if ((zx.d(var_80.b) & 1) != 0)
    operator delete(var_70)

void* var_50

if ((zx.d(var_60.b) & 1) != 0)
    operator delete(var_50)
*(arg3 + 8)
int64_t* var_68
Botan::SymmetricAlgorithm::set_key(&var_68[1], *arg3)
uint64_t x0_5 = (**var_68)(var_68)
__builtin_memset(&var_60, 0, 0x18)

if (x0_5 == 0)
    goto label_e1913c

if ((x0_5 & 0xffffffff80000000) == 0)
    int64_t x0_7 = operator new(x0_5)
    int64_t x25_1 = x0_7 + x0_5
    var_60.q = x0_7
    int64_t var_50_1 = x25_1
    memset(x0_7, 0, x0_5)
    var_60:8.q = x25_1
label_e1913c:
    void* x0_8 = operator new(0x20)
    __builtin_strncpy(x0_8, "BOTAN TLS SESSION KEY NAME", 0x1b)
    (*(*var_68 + 0x18))(var_68, x0_8, 0x1a)
    operator delete(x0_8)
    (*(*var_68 + 0x20))(var_68, var_60.q)
    char* x8_10 = var_60.q
    var_80.b = 0
    var_80.b |= arg1[8] ^ *x8_10
    var_80.b |= arg1[9] ^ x8_10[1]
    var_80.b |= arg1[0xa] ^ x8_10[2]
    var_80.b |= arg1[0xb] ^ x8_10[3]
    
    if (zx.d(var_80.b) != 0)
        void** x0_39 = __cxa_allocate_exception(0x20)
        int64_t x0_40
        int128_t v0_2
        x0_40, v0_2 = operator new(0x30)
        v0_2 = data_71b7f0
        int64_t var_70_1 = x0_40
        __builtin_strncpy(x0_40, "Wrong key name for encrypted session", 0x25)
        var_80.o = v0_2
        *x0_39 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_39[1])
        *x0_39 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_39, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    (*(*var_68 + 0x18))(var_68, &arg1[0xc], 0x10)
    Botan::Buffered_Computation::final()
    char var_a0 = 0x16
    int64_t var_9f
    __builtin_strncpy(&var_9f, "AES-256/GCM", 0xc)
    int16_t var_b8 = 0
    Botan::AEAD_Mode::create_or_throw(&var_a0, 1, &var_b8)
    void* var_a8
    
    if ((zx.d(var_b8.b) & 1) != 0)
        operator delete(var_a8)
    void* var_90
    
    if ((zx.d(var_a0) & 1) != 0)
        operator delete(var_90)
    int64_t* var_88
    Botan::SymmetricAlgorithm::set_key(var_88, var_80.q)
    (*(*var_88 + 0x90))(var_88, arg1, 0x28)
    (*(*var_88 + 0x30))(var_88, &arg1[0x1c], 0xc)
    __builtin_memset(&var_a0, 0, 0x18)
    
    if (arg2 s> 0x27)
        int64_t x0_21 = Botan::allocate_memory(arg2 - 0x28, 1)
        int64_t x23_1 = x0_21 + arg2 - 0x28
        var_a0.q = x0_21
        memcpy(x0_21, &arg1[0x28], arg2 - 0x28)
        int32_t var_98
        var_98.q = x23_1
        (*(*var_88 + 0x40))(var_88, &var_a0, 0)
        uint8_t* entry_x8
        Botan::TLS::Session::Session(entry_x8, var_a0.q)
        void* x0_24 = var_a0.q
        
        if (x0_24 != 0)
            var_98.q = x0_24
            Botan::deallocate_memory(x0_24, x23_1 - x0_24, 1)
        
        (*(*var_88 + 8))(var_88)
        void* x0_26 = var_80.q
        
        if (x0_26 != 0)
            void* var_78_1 = x0_26
            Botan::deallocate_memory(x0_26, var_70 - x0_26, 1)
        
        void* x0_27 = var_60.q
        
        if (x0_27 != 0)
            var_60:8.q = x0_27
            operator delete(x0_27)
        
        return (*(*var_68 + 0x10))(var_68)
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()

void* x0_44
int32_t x1_16
x0_44, x1_16 = std::__ndk1::__vector_base_common<true>::__throw_length_error()

if ((zx.d(var_80.b) & 1) != 0)
    operator delete(var_70)

void* x0_47 = var_60.q

if (x0_47 != 0)
    var_60:8.q = x0_47
    operator delete(x0_47)

(*(*var_68 + 0x10))(var_68)

if (x1_16 != 1)
    sub_1101e04(x0_44)
    noreturn

int64_t* x0_50 = __cxa_begin_catch(x0_44)
void** x0_51 = __cxa_allocate_exception(0x20)
char* x0_53 = (*(*x0_50 + 0x10))(x0_50)
size_t x0_54 = strlen(x0_53)

if (x0_54 u>= -0x10)
    x0_54 = std::__ndk1::__basic_string_common<true>::__throw_length_error()

int64_t x22_3

if (x0_54 u>= 0x17)
    uint64_t x23_2 = (x0_54 + 0x10) & 0xfffffffffffffff0
    int64_t x0_56 = operator new(x23_2)
    x22_3 = x0_56
    size_t var_78_2 = x0_54
    int64_t var_70_2 = x0_56
    var_80.q = x23_2 | 1
    memcpy(x22_3, x0_53, x0_54)
else
    x22_3 = &var_80 | 1
    var_80.b = (x0_54.d << 1).b
    
    if (x0_54 != 0)
        memcpy(x22_3, x0_53, x0_54)

*(x22_3 + x0_54) = 0
int128_t* x0_59
int128_t v0_3
x0_59, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_80, nullptr)
int64_t var_50_4 = x0_59[1].q
var_60 = *x0_59
__builtin_memset(x0_59, 0, 0x18)
*x0_51 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_51[1])
*x0_51 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_51, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
