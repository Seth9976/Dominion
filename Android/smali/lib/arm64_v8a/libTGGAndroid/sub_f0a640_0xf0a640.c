// 函数: sub_f0a640
// 地址: 0xf0a640
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x19 + 0x28)
void* result_1
__builtin_memset(&result_1, 0, 0x18)
int64_t var_1f8 = -1
int32_t var_1f0 = 1
Botan::BigInt::binary_decode(&result_1, arg3)
int128_t var_a0

if ((Botan::BigInt::cmp(&result_1, (*arg2).b) & 0x80000000) == 0)
    void** x0_55 = __cxa_allocate_exception(0x20)
    int64_t x0_56
    int128_t v2
    x0_56, v2 = operator new(0x30)
    v2 = data_71b820
    int64_t var_90_2 = x0_56
    __builtin_strncpy(x0_56, "RSA private op - input is too large", 0x24)
    var_a0 = v2
    *x0_55 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_55[1])
    *x0_55 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_55, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

Botan::Blinder::blind(&arg2[4])
uint64_t x1_2 = arg2[0xf]
char x2_2 = (arg2[0x28]).b
int64_t var_b0 = -1
void* var_c8
__builtin_memset(&var_c8, 0, 0x18)
int32_t var_a8 = 1
Botan::BigInt::randomize(&var_c8, x1_2, x2_2)
void* var_288
int64_t var_270

if (var_270 == -1)
    void* x9_1 = var_288
    int64_t var_280
    void* x10_1 = var_280 - x9_1
    int64_t x8_2
    
    if (var_280 == x9_1)
        x8_2 = 0
    else
        void* x12_1
        
        x12_1 = x10_1 s>= 0 ? x10_1 : -ffffffffffffffff
        
        void* x11_2 = x9_1 - var_280
        void* x12_2
        
        x12_2 = x12_1 s< 1 ? x12_1 : 1
        
        x8_2 = x10_1 s>> 2
        void* x10_2
        
        x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
        
        int64_t i_16 = x12_2 * (x10_2 u>> 2)
        uint64_t x11_3 = 1
        int32_t i
        
        do
            int32_t x12_3 = *(x9_1 - 4 + (i_16 << 2))
            i = i_16
            i_16 -= 1
            x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
            x8_2 -= x11_3
        while (i != 1)
    
    int64_t var_270_1 = x8_2

Botan::Thread_Pool::global_instance()
int64_t* x0_5 = operator new(0x60)
x0_5[2] = 0
x0_5[1] = 0
*x0_5 = _vtable_for_std::__ndk1::__shared_ptr_emplace<std::__ndk1::packaged_task<Botan::BigInt ()>, std::__ndk1::allocator<std::__ndk1::packaged_task<Botan::BigInt ()> > >
    + 0x10
x0_5[8] = 0
struct std::__ndk1::__packaged_task_base<Botan::BigInt ()>::std::__ndk1::__packaged_task_func<std::__ndk1::__bind<Botan::(anonymous namespace)::RSA_Private_Operation::rsa_private_op(Botan::BigInt const&) const::'lambda'()>, std::__ndk1::allocator<std::__ndk1::__bind<Botan::(anonymous namespace)::RSA_Private_Operation::rsa_private_op(Botan::BigInt const&) const::'lambda'()> >, Botan::BigInt ()>::VTable
    ** x0_6 = operator new(0x28)
*x0_6 = &_vtable_for_std::__ndk1::__packaged_task_func<std::__ndk1::__bind<Botan::(anonymous namespace)::RSA_Private_Operation::rsa_private_op(Botan::BigInt const&) const::'lambda'()>, std::__ndk1::allocator<std::__ndk1::__bind<Botan::(anonymous namespace)::RSA_Private_Operation::rsa_private_op(Botan::BigInt const&) const::'lambda'()> >, Botan::BigInt ()>{for `std::__ndk1::__packaged_task_base<Botan::BigInt ()>'}
x0_6[1] = arg2
x0_6[2] = &var_288
x0_6[3] = &var_c8
x0_5[8] = x0_6
struct std::__ndk1::__shared_count::std::__ndk1::__assoc_state<Botan::BigInt>::VTable** x0_7 =
    operator new(0xa0)
int64_t* x22 = x0_7
*(x0_7 + 8) = zx.o(0)
*(x0_7 + 0x18) = zx.o(0)
__builtin_memset(&x0_7[5], 0, 0x4c)
*x0_7 = &_vtable_for_std::__ndk1::__assoc_state<Botan::BigInt>{for `std::__ndk1::__shared_count'}
x0_5[0xa] = x0_7
std::__ndk1::mutex::lock()
int32_t x8_4 = x22[0xe].d

if ((x8_4 & 2) != 0)
    sub_f0bd18(1)
    noreturn

int32_t i_1

do
    i_1 = __stxr(__ldxr(&x0_7[1]) + 1, &x0_7[1])
while (i_1 != 0)
x22[0xe].d = x8_4 | 2
std::__ndk1::mutex::unlock()
int32_t i_2

do
    i_2 = __stxr(__ldxr(&x0_5[1]) + 1, &x0_5[1])
while (i_2 != 0)
var_a0.q = &_vtable_for_NSt6__ndk110__function6__funcIZN5Botan11Thread_Pool3runIZNKS2_12_GLOBAL__N_121RSA_Private_Operation14rsa_private_opERKNS2_6BigIntEEUlvE_JEEENS_6futureINS_9result_ofIFT_DpT0_EE4typeEEEOSD_DpOSE_EUlvE_NS_9allocatorISN_EEFvvEEE{for `std::__ndk1::__function::__base<void ()>'}
var_a0:8.q = &x0_5[4]
int64_t* var_90 = x0_5
int128_t* var_80 = &var_a0
Botan::Thread_Pool::queue_thunk(&data_23ed040)

if (&var_a0 == var_80)
    (*(*var_80 + 0x20))()
else if (var_80 != 0)
    (*(*var_80 + 0x28))()

int64_t x8_11
int32_t i_3

do
    x8_11 = __ldaxr(&x0_5[1])
    i_3 = __stlxr(x8_11 - 1, &x0_5[1])
while (i_3 != 0)

if (x8_11 == 0)
    (*(*x0_5 + 0x10))(x0_5)
    std::__ndk1::__shared_weak_count::__release_weak()

uint64_t x1_3 = arg2[0xf]
char x2_3 = (arg2[0x28]).b
__builtin_memset(&var_a0, 0, 0x18)
int64_t var_88 = -1
var_80.d = 1
Botan::BigInt::randomize(&var_a0, x1_3, x2_3)
void* x19_2 = arg2[2]
uint32_t var_170 = 1
Botan::BigInt::add2(x19_2 + 0x50, &var_170, 1, 0)
void* var_140
Botan::operator*(&var_a0, &var_140)
uint64_t var_100
uint64_t x2_4 = var_100
void* var_118
uint32_t* x1_6 = var_118
void* var_110

if (x2_4 == -1)
    void* x9_7 = var_110 - x1_6
    
    if (var_110 == x1_6)
        x2_4 = 0
    else
        void* x11_4
        
        x11_4 = x9_7 s>= 0 ? x9_7 : -ffffffffffffffff
        
        void* x10_6 = x1_6 - var_110
        void* x11_5
        
        x11_5 = x11_4 s< 1 ? x11_4 : 1
        
        x2_4 = x9_7 s>> 2
        void* x9_8
        
        x9_8 = x10_6 s> x9_7 ? x10_6 : x9_7
        
        int64_t i_13 = x11_5 * (x9_8 u>> 2)
        uint64_t x10_7 = 1
        int64_t i_4
        
        do
            int32_t x11_6 = *(x1_6 - 4 + (i_13 << 2))
            i_4 = i_13
            i_13 -= 1
            x10_7 = zx.q(x10_7.d) & zx.q(((x11_6 - 1) & not.d(x11_6)) s>> 0x1f)
            x2_4 -= x10_7
        while (i_4 != 1)
    
    var_100 = x2_4

int32_t var_f8
Botan::BigInt::add2(x19_2 + 0xa0, x1_6, x2_4, zx.q(var_f8))
void* x0_17 = var_118
int64_t var_108

if (x0_17 != 0)
    var_110 = x0_17
    Botan::deallocate_memory(x0_17, (var_108 - x0_17) s>> 2, 4)

void* x0_18 = var_140
int64_t var_130

if (x0_18 != 0)
    void* var_138_1 = x0_18
    Botan::deallocate_memory(x0_18, (var_130 - x0_18) s>> 2, 4)

void* x8_21 = arg2[2]
void* x19_3 = *(x8_21 + 0x1b0)
int64_t* x24_3 = *(x8_21 + 0x1b8)

if (x24_3 != 0)
    int32_t i_5
    
    do
        i_5 = __stxr(__ldxr(&x24_3[1]) + 1, &x24_3[1])
    while (i_5 != 0)
    x8_21 = arg2[2]

Botan::Modular_Reducer::reduce(x8_21 + 0x148)
int64_t* x0_20 = operator new(0x50)
x0_20[2] = 0
x0_20[1] = 0
*x0_20 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::Montgomery_Exponentation_State const, std::__ndk1::allocator<Botan::Montgomery_Exponentation_State const> >
    + 0x10
var_140 = x19_3

if (x24_3 != 0)
    int32_t i_6
    
    do
        i_6 = __stxr(__ldxr(&x24_3[1]) + 1, &x24_3[1])
    while (i_6 != 0)

Botan::Montgomery_Exponentation_State::Montgomery_Exponentation_State(&x0_20[3], &var_140, 
    &var_118, true)
int64_t x9_14

if (x24_3 != 0)
    int32_t i_7
    
    do
        x9_14 = __ldaxr(&x24_3[1])
        i_7 = __stlxr(x9_14 - 1, &x24_3[1])
    while (i_7 != 0)

void* x0_22

if (x24_3 != 0 && x9_14 == 0)
    (*(*x24_3 + 0x10))(x24_3)
    std::__ndk1::__shared_weak_count::__release_weak()
    x0_22 = var_118
    
    if (x0_22 != 0)
        var_110 = x0_22
        Botan::deallocate_memory(x0_22, (var_108 - x0_22) s>> 2, 4)
else
    x0_22 = var_118
    
    if (x0_22 != 0)
        var_110 = x0_22
        Botan::deallocate_memory(x0_22, (var_108 - x0_22) s>> 2, 4)

if (x24_3 != 0)
    int64_t x9_15
    int32_t i_8
    
    do
        x9_15 = __ldaxr(&x24_3[1])
        i_8 = __stlxr(x9_15 - 1, &x24_3[1])
    while (i_8 != 0)
    
    if (x9_15 == 0)
        (*(*x24_3 + 0x10))(x24_3)
        std::__ndk1::__shared_weak_count::__release_weak()

arg2[0x2a]
void* var_f0
Botan::Montgomery_Exponentation_State::exponentiation(&x0_20[3], &var_f0)
sub_f0c1d8(x22, &var_140)
int64_t x8_31
int32_t i_9

do
    x8_31 = __ldaxr(&x0_7[1])
    i_9 = __stlxr(x8_31 - 1, &x0_7[1])
while (i_9 != 0)

if (x8_31 == 0)
    (*(*x22 + 0x10))(x22)

int64_t var_128
int64_t x2_7 = var_128
void* x22_1 = arg2[2]
void* x1_12 = var_140

if (x2_7 == -1)
    void* x9_17 = x24_3 - x1_12
    
    if (x24_3 == x1_12)
        x2_7 = 0
    else
        void* x11_10
        
        x11_10 = x9_17 s>= 0 ? x9_17 : -ffffffffffffffff
        
        void* x10_13 = x1_12 - x24_3
        void* x11_11
        
        x11_11 = x11_10 s< 1 ? x11_10 : 1
        
        x2_7 = x9_17 s>> 2
        void* x9_18
        
        x9_18 = x10_13 s> x9_17 ? x10_13 : x9_17
        
        int64_t i_14 = x11_11 * (x9_18 u>> 2)
        uint64_t x10_14 = 1
        int64_t i_10
        
        do
            int32_t x11_12 = *(x1_12 - 4 + (i_14 << 2))
            i_10 = i_14
            i_14 -= 1
            x10_14 = zx.q(x10_14.d) & zx.q(((x11_12 - 1) & not.d(x11_12)) s>> 0x1f)
            x2_7 -= x10_14
        while (i_10 != 1)
    
    var_128 = x2_7

int32_t var_120
Botan::BigInt::add2(x22_1 + 0x28, x1_12, x2_7, zx.q(var_120))
uint64_t x2_8 = var_100
uint32_t* x1_13 = var_118

if (x2_8 == -1)
    void* x9_20 = var_110 - x1_13
    
    if (var_110 == x1_13)
        x2_8 = 0
    else
        void* x11_14
        
        x11_14 = x9_20 s>= 0 ? x9_20 : -ffffffffffffffff
        
        void* x10_15 = x1_13 - var_110
        void* x11_15
        
        x11_15 = x11_14 s< 1 ? x11_14 : 1
        
        x2_8 = x9_20 s>> 2
        void* x9_21
        
        x9_21 = x10_15 s> x9_20 ? x10_15 : x9_20
        
        int64_t i_15 = x11_15 * (x9_21 u>> 2)
        uint64_t x10_16 = 1
        int64_t i_11
        
        do
            int32_t x11_16 = *(x1_13 - 4 + (i_15 << 2))
            i_11 = i_15
            i_15 -= 1
            x10_16 = zx.q(x10_16.d) & zx.q(((x11_16 - 1) & not.d(x11_16)) s>> 0x1f)
            x2_8 -= x10_16
        while (i_11 != 1)
    
    uint64_t var_100_1 = x2_8

void* var_1e8
Botan::BigInt::add2(&var_1e8, x1_13, x2_8, zx.q(var_f8 != 1 ? 1 : 0))
Botan::Modular_Reducer::reduce(x22_1 + 0xf0)
arg2[2]
void* var_198
int128_t v0
int128_t v1
v0, v1 = Botan::Modular_Reducer::multiply(x22_1 + 0xf0, &var_198)
v1 = var_140.o
var_170.o = v1
var_140.o = var_170.o
int64_t var_158
int64_t var_128_1 = var_158
uint64_t x0_34 = v1.q
int64_t var_160_1 = var_130
int64_t var_158_1 = var_128
int32_t var_150
int32_t var_120_1 = var_150
int32_t var_150_1 = var_120

if (x0_34 != 0)
    uint64_t var_168_1 = x0_34
    Botan::deallocate_memory(x0_34, (var_130 - x0_34) s>> 2, 4)

void* x0_35 = var_198

if (x0_35 != 0)
    void* var_190_1 = x0_35
    int64_t var_188
    Botan::deallocate_memory(x0_35, (var_188 - x0_35) s>> 2, 4)

void* var_1c0

if (var_1c0 != 0)
    void* var_1b8_1 = var_1c0
    int64_t var_1b0
    Botan::deallocate_memory(var_1c0, (var_1b0 - var_1c0) s>> 2, 4)

void* x0_37 = var_1e8

if (x0_37 != 0)
    void* var_1e0_1 = x0_37
    int64_t var_1d8
    Botan::deallocate_memory(x0_37, (var_1d8 - x0_37) s>> 2, 4)

Botan::mul_add(&var_140, arg2[2] + 0x50, &var_118)
void* x0_39 = var_140

if (x0_39 != 0)
    void* var_138_3 = x0_39
    int64_t var_160
    Botan::deallocate_memory(x0_39, (var_160 - x0_39) s>> 2, 4)

void* x0_40 = var_118

if (x0_40 != 0)
    void* var_110_1 = x0_40
    Botan::deallocate_memory(x0_40, (var_108 - x0_40) s>> 2, 4)

int64_t x8_55
int32_t i_12

do
    x8_55 = __ldaxr(&x0_20[1])
    i_12 = __stlxr(x8_55 - 1, &x0_20[1])
while (i_12 != 0)
void* var_e8_1
int64_t var_e0
void* x0_41

if (x8_55 == 0)
    (*(*x0_20 + 0x10))(x0_20)
    std::__ndk1::__shared_weak_count::__release_weak()
    x0_41 = var_f0
    
    if (x0_41 != 0)
        var_e8_1 = x0_41
        Botan::deallocate_memory(x0_41, (var_e0 - x0_41) s>> 2, 4)
else
    x0_41 = var_f0
    
    if (x0_41 != 0)
        var_e8_1 = x0_41
        Botan::deallocate_memory(x0_41, (var_e0 - x0_41) s>> 2, 4)
void* x0_44 = var_a0.q
int64_t var_90_1

if (x0_44 != 0)
    var_a0:8.q = x0_44
    Botan::deallocate_memory(x0_44, (var_90_1 - x0_44) s>> 2, 4)

void* x0_45 = var_c8

if (x0_45 != 0)
    void* var_c0_1 = x0_45
    int64_t var_b8
    Botan::deallocate_memory(x0_45, (var_b8 - x0_45) s>> 2, 4)

Botan::Blinder::unblind(&arg2[4])
void* var_260

if (var_260 != 0)
    void* var_258_1 = var_260
    int64_t var_250
    Botan::deallocate_memory(var_260, (var_250 - var_260) s>> 2, 4)

void* x0_48 = var_288

if (x0_48 != 0)
    void* var_280_1 = x0_48
    int64_t var_278
    Botan::deallocate_memory(x0_48, (var_278 - x0_48) s>> 2, 4)

Botan::RSA_Public_Data::public_op(*arg2)
int32_t x0_51 = Botan::BigInt::is_equal(&result_1)
void* x8_68 = var_a0.q

if (x8_68 != 0)
    var_a0:8.q = x8_68
    Botan::deallocate_memory(x8_68, (var_90_1 - x8_68) s>> 2, 4)

if ((x0_51 & 1) == 0)
    Botan::assertion_failure("input_bn == m_public->public_op(recovered)", "RSA consistency check", 
        "raw_op", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1097e)
else
    void* var_238
    Botan::BigInt::encode_1363(&var_238, *(*arg2 + 0x68))
    void* x0_54 = var_238
    
    if (x0_54 != 0)
        void* var_230_1 = x0_54
        int64_t var_228
        Botan::deallocate_memory(x0_54, (var_228 - x0_54) s>> 2, 4)
    
    void* result = result_1
    
    if (result != 0)
        void* result_2 = result
        int64_t var_200
        result = Botan::deallocate_memory(result, (var_200 - result) s>> 2, 4)
    
    if (*(x19 + 0x28) == x8)
        return result

__stack_chk_fail()
noreturn
