// 函数: _ZN5Botan14RSA_PrivateKeyC1ERNS_21RandomNumberGeneratorEmm
// 地址: 0xdf6ce8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 8) = _vtable_for_Botan::RSA_PrivateKey + 0x1c0
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*arg1 = _vtable_for_Botan::RSA_PrivateKey + 0x88
*(arg1 + 0x20) = 0
*(arg1 + 0x28) = 0
char var_130
char var_100
int128_t var_d0
char var_a0
int128_t var_70

if (arg3 u<= 0x3ff)
    void** x0_43 = __cxa_allocate_exception(0x20)
    var_100 = 6
    int32_t var_ff = 0x415352
    int128_t* x0_45
    int128_t v0_9
    x0_45, v0_9 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_100)
    int64_t var_c0_2 = x0_45[1].q
    var_d0 = *x0_45
    __builtin_memset(x0_45, 0, 0x18)
    std::__ndk1::to_string(arg3)
    uint64_t x1_35
    uint64_t var_120
    
    if ((zx.d(var_130) & 1) == 0)
        x1_35 = &var_130 | 1
    else
        x1_35 = var_120
    int128_t* x0_48
    int128_t v0_10
    x0_48, v0_10 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_d0, x1_35)
    int64_t var_90_2 = x0_48[1].q
    var_a0.o = *x0_48
    __builtin_memset(x0_48, 0, 0x18)
    int128_t* x0_50
    int128_t v0_11
    x0_50, v0_11 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_a0)
    int64_t var_60_2 = x0_50[1].q
    var_70 = *x0_50
    __builtin_memset(x0_50, 0, 0x18)
    *x0_43 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_43[1])
    *x0_43 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_43, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

int64_t entry_x3

if (entry_x3 u< 3 || (entry_x3.d & 1) == 0)
    void** x0_53 = __cxa_allocate_exception(0x20)
    var_a0 = 6
    int32_t var_9f = 0x415352
    int128_t* x0_55
    int128_t v0_12
    x0_55, v0_12 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_a0)
    int64_t var_60_3 = x0_55[1].q
    var_70 = *x0_55
    __builtin_memset(x0_55, 0, 0x18)
    *x0_53 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_53[1])
    *x0_53 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_53, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

__builtin_memset(&var_70, 0, 0x18)
var_a0.q = 0
int64_t var_98 = 0
__builtin_memset(&var_d0, 0, 0x18)
var_100.q = 0
int64_t var_f8 = 0
__builtin_memset(&var_130, 0, 0x18)
void* var_160
__builtin_memset(&var_160, 0, 0x18)
void* var_190
__builtin_memset(&var_190, 0, 0x18)
void* var_1c0
__builtin_memset(&var_1c0, 0, 0x18)
int64_t var_58 = -1
int32_t var_50 = 1
void* var_90 = nullptr
int64_t var_88 = -1
int32_t var_80 = 1
int64_t var_b8 = -1
int32_t var_b0 = 1
void* var_f0 = nullptr
int64_t var_e8 = -1
int32_t var_e0 = 1
int64_t var_118 = -1
int32_t var_110 = 1
int64_t var_148 = -1
int32_t var_140 = 1
int64_t var_178 = -1
int32_t var_170 = 1
int64_t var_1a8 = -1
int32_t var_1a0 = 1
int128_t var_1f0
Botan::BigInt::BigInt(&var_1f0)
void* x0_1 = var_a0.q
int64_t var_1d8
int64_t var_88_1 = var_1d8
void* var_1e0_1 = var_90
int64_t var_1d8_1 = var_88
var_a0.o = var_1f0
var_1f0.q = x0_1
int32_t var_1d0
int32_t var_80_1 = var_1d0
int32_t var_1d0_1 = var_80

if (x0_1 != 0)
    var_1f0:8.q = x0_1
    Botan::deallocate_memory(x0_1, (var_90 - x0_1) s>> 2, 4)

uint64_t x23 = (arg3 + 1) u>> 1
int128_t var_220
void* var_120_1
void* var_60_1
int64_t x0_2

do
    Botan::generate_rsa_prime(arg2, arg2, x23, &var_a0, 0x80)
    void* x0_4 = var_100.q
    void* x8_4 = var_f0
    int64_t x11_1 = var_e8
    var_f0 = var_1e0_1
    var_e8 = var_1d8_1
    int32_t x9_4 = var_e0
    var_100.o = var_1f0
    var_1f0.q = x0_4
    var_e0 = var_1d0_1
    
    if (x0_4 != 0)
        var_1f0:8.q = x0_4
        Botan::deallocate_memory(x0_4, (x8_4 - x0_4) s>> 2, 4)
    
    Botan::generate_rsa_prime(arg2, arg2, arg3 - x23, &var_a0, 0x80)
    void* x0_6 = var_130.q
    void* x8_6 = var_120_1
    int64_t x11_2 = var_118
    var_120_1 = x8_4
    var_118 = x11_1
    int32_t x9_6 = var_110
    var_130.o = var_1f0
    var_1f0.q = x0_6
    var_110 = x9_4
    
    if (x0_6 != 0)
        var_1f0:8.q = x0_6
        Botan::deallocate_memory(x0_6, (x8_6 - x0_6) s>> 2, 4)
    
    if ((Botan::BigInt::is_equal(&var_100) & 1) != 0)
        void** x0_37 = __cxa_allocate_exception(0x20)
        int64_t x0_38
        int128_t v0_8
        x0_38, v0_8 = operator new(0x30)
        int64_t var_210_1 = x0_38
        var_220 = data_71b5a0
        __builtin_strncpy(x0_38, "RNG failure during RSA key generation", 0x26)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "Internal error: ", &var_220)
        *x0_37 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_37[1])
        
        if ((zx.d(var_1f0.b) & 1) != 0)
            operator delete(x8_6)
        
        *x0_37 = _vtable_for_Botan::Internal_Error + 0x10
        __cxa_throw(x0_37, _typeinfo_for_Botan::Internal_Error, Botan::Exception::~Exception)
        noreturn
    
    Botan::operator*(&var_100, &var_130)
    void* x0_10 = var_70.q
    void* x8_8 = var_60_1
    int64_t x11_3 = var_58
    var_60_1 = x8_6
    var_58 = x11_2
    int32_t x9_8 = var_50
    var_1e0_1 = x8_8
    var_1d8_1 = x11_3
    var_70 = var_1f0
    var_1f0.q = x0_10
    var_50 = x9_6
    var_1d0_1 = x9_8
    
    if (x0_10 != 0)
        var_1f0:8.q = x0_10
        Botan::deallocate_memory(x0_10, (x8_8 - x0_10) s>> 2, 4)
    
    x0_2 = Botan::BigInt::bits()
while (x0_2 != arg3)
var_220.d = 1
Botan::BigInt::add2(&var_100, &var_220, 1, 0)
uint32_t var_248 = 1
Botan::BigInt::add2(&var_130, &var_248, 1, 0)
Botan::lcm(&var_1f0, &var_220)
int128_t v0_4
int128_t v1
v0_4, v1 = Botan::inverse_mod(&var_a0, &var_248)
v1 = var_d0
uint64_t x0_15 = v1.q
int128_t var_270
var_d0 = var_270
int64_t var_258
int64_t var_b8_1 = var_258
int32_t var_250
int32_t var_b0_1 = var_250
int64_t var_c0

if (x0_15 != 0)
    Botan::deallocate_memory(x0_15, (var_c0 - x0_15) s>> 2, 4)

Botan::ct_modulo(&var_d0, &var_1f0)
void* x0_17 = var_160
int64_t var_148_1 = var_b8
var_160.o = v1
int128_t var_270_1
var_270_1.q = x0_17
int32_t var_140_1 = var_250
int64_t var_150

if (x0_17 != 0)
    var_270_1:8.q = x0_17
    Botan::deallocate_memory(x0_17, (var_150 - x0_17) s>> 2, 4)

Botan::ct_modulo(&var_d0, &var_220)
void* x0_19 = var_190
int64_t var_178_1 = var_148
var_190.o = var_270_1
var_270_1.q = x0_19
int32_t var_170_1 = var_140
int64_t var_180

if (x0_19 != 0)
    var_270_1:8.q = x0_19
    Botan::deallocate_memory(x0_19, (var_180 - x0_19) s>> 2, 4)

int128_t v0_7
int128_t v1_1
v0_7, v1_1 = Botan::inverse_mod(&var_130, &var_100)
v1_1 = var_1c0.o
uint64_t x0_21 = v1_1.q
var_1c0.o = var_270_1
int128_t var_270_2 = v1_1
int64_t var_1a8_1 = var_178
int64_t var_1b0
int64_t var_260_4 = var_1b0
int64_t var_258_4 = var_1a8
int32_t var_1a0_1 = var_170

if (x0_21 != 0)
    Botan::deallocate_memory(x0_21, (var_1b0 - x0_21) s>> 2, 4)

Botan::RSA_PublicKey::init(arg1 + 8, &var_70)
int64_t* x0_23 = operator new(0x1e8)
x0_23[2] = 0
*x0_23 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::RSA_Private_Data, std::__ndk1::allocator<Botan::RSA_Private_Data> >
    + 0x10
x0_23[1] = 0
Botan::RSA_Private_Data::RSA_Private_Data(&x0_23[3], &var_d0, &var_100, &var_130, &var_160, 
    &var_190)
int64_t* x20_2 = *(arg1 + 0x28)
*(arg1 + 0x20) = &x0_23[3]
*(arg1 + 0x28) = x0_23
int64_t x9_15

if (x20_2 != 0)
    int32_t i
    
    do
        x9_15 = __ldaxr(&x20_2[1])
        i = __stlxr(x9_15 - 1, &x20_2[1])
    while (i != 0)

void* var_240_1
int64_t var_238
void* x0_25

if (x20_2 != 0 && x9_15 == 0)
    (*(*x20_2 + 0x10))(x20_2)
    std::__ndk1::__shared_weak_count::__release_weak()
    x0_25 = var_248.q
    
    if (x0_25 != 0)
        var_240_1 = x0_25
        Botan::deallocate_memory(x0_25, (var_238 - x0_25) s>> 2, 4)
else
    x0_25 = var_248.q
    
    if (x0_25 != 0)
        var_240_1 = x0_25
        Botan::deallocate_memory(x0_25, (var_238 - x0_25) s>> 2, 4)
void* x0_26 = var_220.q

if (x0_26 != 0)
    var_220:8.q = x0_26
    int64_t var_210
    Botan::deallocate_memory(x0_26, (var_210 - x0_26) s>> 2, 4)

void* x0_27 = var_1f0.q

if (x0_27 != 0)
    var_1f0:8.q = x0_27
    Botan::deallocate_memory(x0_27, (var_1e0_1 - x0_27) s>> 2, 4)

void* x0_28 = var_1c0

if (x0_28 != 0)
    void* var_1b8_1 = x0_28
    Botan::deallocate_memory(x0_28, (var_180 - x0_28) s>> 2, 4)

void* x0_29 = var_190

if (x0_29 != 0)
    void* var_188_1 = x0_29
    Botan::deallocate_memory(x0_29, (var_150 - x0_29) s>> 2, 4)

void* x0_30 = var_160

if (x0_30 != 0)
    void* var_158_1 = x0_30
    Botan::deallocate_memory(x0_30, (var_c0 - x0_30) s>> 2, 4)

void* x0_31 = var_130.q

if (x0_31 != 0)
    void* var_128_1 = x0_31
    Botan::deallocate_memory(x0_31, (var_120_1 - x0_31) s>> 2, 4)

void* x0_32 = var_100.q

if (x0_32 != 0)
    void* var_f8_1 = x0_32
    Botan::deallocate_memory(x0_32, (var_f0 - x0_32) s>> 2, 4)

void* x0_33 = var_d0.q

if (x0_33 != 0)
    var_d0:8.q = x0_33
    int64_t var_260
    Botan::deallocate_memory(x0_33, (var_260 - x0_33) s>> 2, 4)

void* x0_34 = var_a0.q

if (x0_34 != 0)
    void* var_98_1 = x0_34
    int64_t var_1e0
    Botan::deallocate_memory(x0_34, (var_1e0 - x0_34) s>> 2, 4)

void* result = var_70.q

if (result == 0)
    return result

var_70:8.q = result
return Botan::deallocate_memory(result, (var_60_1 - result) s>> 2, 4)
