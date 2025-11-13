// 函数: _ZN5Botan14RSA_PrivateKeyC2ERNS_21RandomNumberGeneratorEmm
// 地址: 0xe0c92c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg2 + 8)
*arg1 = x8
*(arg1 + *(x8 - 0x88)) = *(arg2 + 0x10)
void* x8_2 = *(arg2 + 0x18)
*(arg1 + 8) = x8_2
*(arg1 + 8 + *(x8_2 - 0x88)) = *(arg2 + 0x20)
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
void* x8_4 = *arg2
*arg1 = x8_4
*(arg1 + *(x8_4 - 0x88)) = *(arg2 + 0x28)
*(arg1 + 8) = *(arg2 + 0x30)
*(arg1 + 0x20) = 0
*(arg1 + 0x28) = 0
char var_140
char var_110
int128_t var_e0
char var_b0
int128_t var_80
uint64_t entry_x3

if (entry_x3 u<= 0x3ff)
    void** x0_43 = __cxa_allocate_exception(0x20)
    var_110 = 6
    int32_t var_10f = 0x415352
    int128_t* x0_45
    int128_t v0_9
    x0_45, v0_9 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_110)
    int64_t var_d0_2 = x0_45[1].q
    var_e0 = *x0_45
    __builtin_memset(x0_45, 0, 0x18)
    std::__ndk1::to_string(entry_x3)
    uint64_t x1_35
    uint64_t var_130
    
    if ((zx.d(var_140) & 1) == 0)
        x1_35 = &var_140 | 1
    else
        x1_35 = var_130
    int128_t* x0_48
    int128_t v0_10
    x0_48, v0_10 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_e0, x1_35)
    int64_t var_a0_2 = x0_48[1].q
    var_b0.o = *x0_48
    __builtin_memset(x0_48, 0, 0x18)
    int128_t* x0_50
    int128_t v0_11
    x0_50, v0_11 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_b0)
    int64_t var_70_2 = x0_50[1].q
    var_80 = *x0_50
    __builtin_memset(x0_50, 0, 0x18)
    *x0_43 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_43[1])
    *x0_43 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_43, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

int64_t entry_x4

if (entry_x4 u< 3 || (entry_x4.d & 1) == 0)
    void** x0_53 = __cxa_allocate_exception(0x20)
    var_b0 = 6
    int32_t var_af = 0x415352
    int128_t* x0_55
    int128_t v0_12
    x0_55, v0_12 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_b0)
    int64_t var_70_3 = x0_55[1].q
    var_80 = *x0_55
    __builtin_memset(x0_55, 0, 0x18)
    *x0_53 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_53[1])
    *x0_53 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_53, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

__builtin_memset(&var_80, 0, 0x18)
var_b0.q = 0
int64_t var_a8 = 0
__builtin_memset(&var_e0, 0, 0x18)
var_110.q = 0
int64_t var_108 = 0
__builtin_memset(&var_140, 0, 0x18)
void* var_170
__builtin_memset(&var_170, 0, 0x18)
void* var_1a0
__builtin_memset(&var_1a0, 0, 0x18)
void* var_1d0
__builtin_memset(&var_1d0, 0, 0x18)
int64_t var_68 = -1
int32_t var_60 = 1
void* var_a0 = nullptr
int64_t var_98 = -1
int32_t var_90 = 1
int64_t var_c8 = -1
int32_t var_c0 = 1
void* var_100 = nullptr
int64_t var_f8 = -1
int32_t var_f0 = 1
int64_t var_128 = -1
int32_t var_120 = 1
int64_t var_158 = -1
int32_t var_150 = 1
int64_t var_188 = -1
int32_t var_180 = 1
int64_t var_1b8 = -1
int32_t var_1b0 = 1
int128_t var_200
Botan::BigInt::BigInt(&var_200)
void* x0_1 = var_b0.q
int64_t var_1e8
int64_t var_98_1 = var_1e8
void* var_1f0_1 = var_a0
int64_t var_1e8_1 = var_98
var_b0.o = var_200
var_200.q = x0_1
int32_t var_1e0
int32_t var_90_1 = var_1e0
int32_t var_1e0_1 = var_90

if (x0_1 != 0)
    var_200:8.q = x0_1
    Botan::deallocate_memory(x0_1, (var_a0 - x0_1) s>> 2, 4)

uint64_t x24 = (entry_x3 + 1) u>> 1
int128_t var_230
void* var_130_1
void* var_70_1
int64_t x0_2

do
    Botan::generate_rsa_prime(arg3, arg3, x24, &var_b0, 0x80)
    void* x0_4 = var_110.q
    void* x8_10 = var_100
    int64_t x11_1 = var_f8
    var_100 = var_1f0_1
    var_f8 = var_1e8_1
    int32_t x9_6 = var_f0
    var_110.o = var_200
    var_200.q = x0_4
    var_f0 = var_1e0_1
    
    if (x0_4 != 0)
        var_200:8.q = x0_4
        Botan::deallocate_memory(x0_4, (x8_10 - x0_4) s>> 2, 4)
    
    Botan::generate_rsa_prime(arg3, arg3, entry_x3 - x24, &var_b0, 0x80)
    void* x0_6 = var_140.q
    void* x8_12 = var_130_1
    int64_t x11_2 = var_128
    var_130_1 = x8_10
    var_128 = x11_1
    int32_t x9_8 = var_120
    var_140.o = var_200
    var_200.q = x0_6
    var_120 = x9_6
    
    if (x0_6 != 0)
        var_200:8.q = x0_6
        Botan::deallocate_memory(x0_6, (x8_12 - x0_6) s>> 2, 4)
    
    if ((Botan::BigInt::is_equal(&var_110) & 1) != 0)
        void** x0_37 = __cxa_allocate_exception(0x20)
        int64_t x0_38
        int128_t v0_8
        x0_38, v0_8 = operator new(0x30)
        int64_t var_220_1 = x0_38
        var_230 = data_71b5a0
        __builtin_strncpy(x0_38, "RNG failure during RSA key generation", 0x26)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "Internal error: ", &var_230)
        *x0_37 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_37[1])
        
        if ((zx.d(var_200.b) & 1) != 0)
            operator delete(x8_12)
        
        *x0_37 = _vtable_for_Botan::Internal_Error + 0x10
        __cxa_throw(x0_37, _typeinfo_for_Botan::Internal_Error, Botan::Exception::~Exception)
        noreturn
    
    Botan::operator*(&var_110, &var_140)
    void* x0_10 = var_80.q
    void* x8_14 = var_70_1
    int64_t x11_3 = var_68
    var_70_1 = x8_12
    var_68 = x11_2
    int32_t x9_10 = var_60
    var_1f0_1 = x8_14
    var_1e8_1 = x11_3
    var_80 = var_200
    var_200.q = x0_10
    var_60 = x9_8
    var_1e0_1 = x9_10
    
    if (x0_10 != 0)
        var_200:8.q = x0_10
        Botan::deallocate_memory(x0_10, (x8_14 - x0_10) s>> 2, 4)
    
    x0_2 = Botan::BigInt::bits()
while (x0_2 != entry_x3)
var_230.d = 1
Botan::BigInt::add2(&var_110, &var_230, 1, 0)
uint32_t var_258 = 1
Botan::BigInt::add2(&var_140, &var_258, 1, 0)
Botan::lcm(&var_200, &var_230)
int128_t v0_4
int128_t v1
v0_4, v1 = Botan::inverse_mod(&var_b0, &var_258)
v1 = var_e0
uint64_t x0_15 = v1.q
int128_t var_280
var_e0 = var_280
int64_t var_268
int64_t var_c8_1 = var_268
int32_t var_260
int32_t var_c0_1 = var_260
int64_t var_d0

if (x0_15 != 0)
    Botan::deallocate_memory(x0_15, (var_d0 - x0_15) s>> 2, 4)

Botan::ct_modulo(&var_e0, &var_200)
void* x0_17 = var_170
int64_t var_158_1 = var_c8
var_170.o = v1
int128_t var_280_1
var_280_1.q = x0_17
int32_t var_150_1 = var_260
int64_t var_160

if (x0_17 != 0)
    var_280_1:8.q = x0_17
    Botan::deallocate_memory(x0_17, (var_160 - x0_17) s>> 2, 4)

Botan::ct_modulo(&var_e0, &var_230)
void* x0_19 = var_1a0
int64_t var_188_1 = var_158
var_1a0.o = var_280_1
var_280_1.q = x0_19
int32_t var_180_1 = var_150
int64_t var_190

if (x0_19 != 0)
    var_280_1:8.q = x0_19
    Botan::deallocate_memory(x0_19, (var_190 - x0_19) s>> 2, 4)

int128_t v0_7
int128_t v1_1
v0_7, v1_1 = Botan::inverse_mod(&var_140, &var_110)
v1_1 = var_1d0.o
uint64_t x0_21 = v1_1.q
var_1d0.o = var_280_1
int128_t var_280_2 = v1_1
int64_t var_1b8_1 = var_188
int64_t var_1c0
int64_t var_270_4 = var_1c0
int64_t var_268_4 = var_1b8
int32_t var_1b0_1 = var_180

if (x0_21 != 0)
    Botan::deallocate_memory(x0_21, (var_1c0 - x0_21) s>> 2, 4)

Botan::RSA_PublicKey::init(arg1 + 8, &var_80)
int64_t* x0_23 = operator new(0x1e8)
x0_23[2] = 0
*x0_23 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::RSA_Private_Data, std::__ndk1::allocator<Botan::RSA_Private_Data> >
    + 0x10
x0_23[1] = 0
Botan::RSA_Private_Data::RSA_Private_Data(&x0_23[3], &var_e0, &var_110, &var_140, &var_170, 
    &var_1a0)
int64_t* x20_1 = *(arg1 + 0x28)
*(arg1 + 0x20) = &x0_23[3]
*(arg1 + 0x28) = x0_23
int64_t x9_17

if (x20_1 != 0)
    int32_t i
    
    do
        x9_17 = __ldaxr(&x20_1[1])
        i = __stlxr(x9_17 - 1, &x20_1[1])
    while (i != 0)

void* var_250_1
int64_t var_248
void* x0_25

if (x20_1 != 0 && x9_17 == 0)
    (*(*x20_1 + 0x10))(x20_1)
    std::__ndk1::__shared_weak_count::__release_weak()
    x0_25 = var_258.q
    
    if (x0_25 != 0)
        var_250_1 = x0_25
        Botan::deallocate_memory(x0_25, (var_248 - x0_25) s>> 2, 4)
else
    x0_25 = var_258.q
    
    if (x0_25 != 0)
        var_250_1 = x0_25
        Botan::deallocate_memory(x0_25, (var_248 - x0_25) s>> 2, 4)
void* x0_26 = var_230.q

if (x0_26 != 0)
    var_230:8.q = x0_26
    int64_t var_220
    Botan::deallocate_memory(x0_26, (var_220 - x0_26) s>> 2, 4)

void* x0_27 = var_200.q

if (x0_27 != 0)
    var_200:8.q = x0_27
    Botan::deallocate_memory(x0_27, (var_1f0_1 - x0_27) s>> 2, 4)

void* x0_28 = var_1d0

if (x0_28 != 0)
    void* var_1c8_1 = x0_28
    Botan::deallocate_memory(x0_28, (var_190 - x0_28) s>> 2, 4)

void* x0_29 = var_1a0

if (x0_29 != 0)
    void* var_198_1 = x0_29
    Botan::deallocate_memory(x0_29, (var_160 - x0_29) s>> 2, 4)

void* x0_30 = var_170

if (x0_30 != 0)
    void* var_168_1 = x0_30
    Botan::deallocate_memory(x0_30, (var_d0 - x0_30) s>> 2, 4)

void* x0_31 = var_140.q

if (x0_31 != 0)
    void* var_138_1 = x0_31
    Botan::deallocate_memory(x0_31, (var_130_1 - x0_31) s>> 2, 4)

void* x0_32 = var_110.q

if (x0_32 != 0)
    void* var_108_1 = x0_32
    Botan::deallocate_memory(x0_32, (var_100 - x0_32) s>> 2, 4)

void* x0_33 = var_e0.q

if (x0_33 != 0)
    var_e0:8.q = x0_33
    int64_t var_270
    Botan::deallocate_memory(x0_33, (var_270 - x0_33) s>> 2, 4)

void* x0_34 = var_b0.q

if (x0_34 != 0)
    void* var_a8_1 = x0_34
    int64_t var_1f0
    Botan::deallocate_memory(x0_34, (var_1f0 - x0_34) s>> 2, 4)

void* result = var_80.q

if (result == 0)
    return result

var_80:8.q = result
return Botan::deallocate_memory(result, (var_70_1 - result) s>> 2, 4)
