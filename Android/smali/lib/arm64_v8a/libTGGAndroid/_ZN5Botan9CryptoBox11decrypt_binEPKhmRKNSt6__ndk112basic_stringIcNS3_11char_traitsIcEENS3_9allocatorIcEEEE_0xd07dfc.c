// 函数: _ZN5Botan9CryptoBox11decrypt_binEPKhmRKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE
// 地址: 0xd07dfc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(vtable_for_Botan::DataSource_Memory, 0x10) var_68 =
    _vtable_for_Botan::DataSource_Memory + 0x10
void* result_1
__builtin_memset(&result_1, 0, 0x18)
char var_c0
void* var_b0
int64_t* var_a0
void* var_98
void* var_88
int128_t var_80
void* var_50
uint64_t var_38
int64_t* entry_x8

if (arg2 != 0)
    if ((arg2 & 0xffffffff80000000) != 0)
        int64_t* x0_37 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        
        if ((zx.d(var_c0) & 1) != 0)
            operator delete(var_b0)
        
        void* x0_40 = var_98
        
        if (x0_40 != 0)
            void* var_90_2 = x0_40
            Botan::deallocate_memory(x0_40, var_88 - x0_40, 1)
        
        if (var_a0 != 0)
            (*(*var_a0 + 0x10))(var_a0)
        
        void* x0_42 = var_80.q
        
        if (x0_42 != 0)
            var_80:8.q = x0_42
            int64_t var_70
            Botan::deallocate_memory(x0_42, var_70 - x0_42, 1)
        
        if (var_38 != 0)
            (*(*var_38 + 0x18))(var_38)
        
        void* x0_44 = *entry_x8
        
        if (x0_44 != 0)
            int64_t x8_53 = entry_x8[2]
            entry_x8[1] = x0_44
            Botan::deallocate_memory(x0_44, x8_53 - x0_44, 1)
        
        void* result_4 = result_1
        var_68 = _vtable_for_Botan::DataSource_Memory + 0x10
        
        if (result_4 != 0)
            void* result_5 = result_4
            Botan::deallocate_memory(result_4, var_50 - result_4, 1)
        
        sub_1101e04(x0_37)
        noreturn
    
    void* result_3 = Botan::allocate_memory(arg2, 1)
    void* x24_1 = result_3 + arg2
    result_1 = result_3
    var_50 = x24_1
    memcpy(result_3, arg1, arg2)
    void* var_58_1 = x24_1

int64_t var_48 = 0
void* x0_1
int128_t v1
x0_1, v1 = operator new(0x20)
v1 = data_71c520
var_80 = v1
__builtin_strncpy(x0_1, "BOTAN CRYPTOBOX MESSAGE", 0x18)
Botan::PEM_Code::decode_check_label(&var_68, &var_80)

if ((zx.d(var_80.b) & 1) != 0)
    operator delete(x0_1)

char* x24_2 = *entry_x8

if (entry_x8[1] - x24_2 u< 0x22)
    void** x0_29 = __cxa_allocate_exception(0x20)
    int64_t x0_30
    int128_t v0
    x0_30, v0 = operator new(0x20)
    int64_t var_70_2 = x0_30
    var_80 = v1
    __builtin_strncpy(x0_30, "Invalid CryptoBox input", 0x18)
    *x0_29 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_29[1])
    *x0_29 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_29, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

if (zx.d(*x24_2) != 0xef || zx.d(x24_2[1]) != 0xc2 || zx.d(x24_2[2]) != 0x24 || zx.d(x24_2[3]) != 0)
    void** x0_26 = __cxa_allocate_exception(0x20)
    __builtin_strncpy(&var_80, "*Bad CryptoBox version", 0x17)
    *x0_26 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_26[1])
    *x0_26 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_26, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

__builtin_strncpy(&var_80, "*PBKDF2(HMAC(SHA-512))", 0x17)
var_98.w = 0
Botan::PBKDF::create_or_throw(&var_80, &var_98)

if ((zx.d(var_98.b) & 1) != 0)
    operator delete(var_88)

if ((zx.d(var_80.b) & 1) != 0)
    operator delete(x0_1)

Botan::PBKDF::derive_key(var_38, 0x50, arg3, &x24_2[4], 0xa)
uint64_t x20_1 = var_80.q
var_98.b = 0x1a
__builtin_strncpy(&var_98:1, "HMAC(SHA-512)", 0xe)
var_c0.w = 0
Botan::MessageAuthenticationCode::create_or_throw(&var_98, &var_c0)

if ((zx.d(var_c0) & 1) != 0)
    operator delete(var_b0)

if ((zx.d(var_98.b) & 1) != 0)
    operator delete(var_88)

Botan::SymmetricAlgorithm::set_key(&var_a0[1], x20_1 + 0x20)
int64_t x8_13 = *entry_x8
int64_t x9_1 = entry_x8[1] - x8_13

if (x9_1 u>= 0x23)
    (*(*var_a0 + 0x18))(var_a0, x8_13 + 0x22, x9_1 - 0x22)

Botan::Buffered_Computation::final()
void* x8_14 = var_98
var_c0 = 0
var_c0 |= x24_2[0xe] ^ *x8_14
var_c0 |= x24_2[0xf] ^ *(x8_14 + 1)
var_c0 |= x24_2[0x10] ^ *(x8_14 + 2)
var_c0 |= x24_2[0x11] ^ *(x8_14 + 3)
var_c0 |= x24_2[0x12] ^ *(x8_14 + 4)
var_c0 |= x24_2[0x13] ^ *(x8_14 + 5)
var_c0 |= x24_2[0x14] ^ *(x8_14 + 6)
var_c0 |= x24_2[0x15] ^ *(x8_14 + 7)
var_c0 |= x24_2[0x16] ^ *(x8_14 + 8)
var_c0 |= x24_2[0x17] ^ *(x8_14 + 9)
var_c0 |= x24_2[0x18] ^ *(x8_14 + 0xa)
var_c0 |= x24_2[0x19] ^ *(x8_14 + 0xb)
var_c0 |= x24_2[0x1a] ^ *(x8_14 + 0xc)
var_c0 |= x24_2[0x1b] ^ *(x8_14 + 0xd)
var_c0 |= x24_2[0x1c] ^ *(x8_14 + 0xe)
var_c0 |= x24_2[0x1d] ^ *(x8_14 + 0xf)
var_c0 |= x24_2[0x1e] ^ *(x8_14 + 0x10)
var_c0 |= x24_2[0x1f] ^ *(x8_14 + 0x11)
var_c0 |= x24_2[0x20] ^ *(x8_14 + 0x12)
var_c0 |= x24_2[0x21] ^ *(x8_14 + 0x13)
uint32_t x8_18 = zx.d(var_c0)

if (((x8_18 - 1) & not.d(x8_18) & 0x80) == 0)
    void** x0_33 = __cxa_allocate_exception(0x20)
    int64_t x0_34
    int128_t v0_1
    x0_34, v0_1 = operator new(0x20)
    int64_t var_b0_1 = x0_34
    var_c0.o = data_71abe0
    __builtin_strncpy(x0_34, "CryptoBox integrity failure", 0x1c)
    *x0_33 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_33[1])
    *x0_33 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_33, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

var_c0 = 0x1c
int64_t var_bf
__builtin_strncpy(&var_bf, "Serpent/CTR-BE", 0xf)
int16_t var_e0 = 0
Botan::Cipher_Mode::create_or_throw(&var_c0, 1, &var_e0)
void* var_d0

if ((zx.d(var_e0.b) & 1) != 0)
    operator delete(var_d0)

if ((zx.d(var_c0) & 1) != 0)
    operator delete(var_b0)

int64_t* var_c8
Botan::SymmetricAlgorithm::set_key(var_c8, x20_1)
(*(*var_c8 + 0x30))(var_c8, x20_1 + 0x40, 0x10)
(*(*var_c8 + 0x40))(var_c8, entry_x8, 0x22)
int64_t x20_2 = *entry_x8
int64_t x8_26 = entry_x8[1]
size_t x22_4 = x8_26 - (x20_2 + 0x22)

if (x8_26 != x20_2 + 0x22)
    memmove(x20_2, x20_2 + 0x22, x22_4)

entry_x8[1] = x20_2 + x22_4
(*(*var_c8 + 8))(var_c8)
void* x0_22 = var_98

if (x0_22 != 0)
    void* var_90_1 = x0_22
    Botan::deallocate_memory(x0_22, var_88 - x0_22, 1)

if (var_a0 != 0)
    (*(*var_a0 + 0x10))()

void* x0_24 = var_80.q

if (x0_24 != 0)
    var_80:8.q = x0_24
    Botan::deallocate_memory(x0_24, x0_1 - x0_24, 1)

if (var_38 != 0)
    (*(*var_38 + 0x18))()

void* result = result_1
var_68 = _vtable_for_Botan::DataSource_Memory + 0x10

if (result == 0)
    return result

void* result_2 = result
return Botan::deallocate_memory(result, var_50 - result, 1)
