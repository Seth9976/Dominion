// 函数: _ZN5Botan15monty_multi_expENSt6__ndk110shared_ptrIKNS_17Montgomery_ParamsEEERKNS_6BigIntES7_S7_S7_
// 地址: 0xd1a9e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_4a0

if (*(arg3 + 0x20) == 0 || *(arg5 + 0x20) == 0)
    void** x0_81 = __cxa_allocate_exception(0x20)
    int64_t x0_82
    int128_t v0
    x0_82, v0 = operator new(0x30)
    (*"must be positive")[0].o
    int64_t var_490_1 = x0_82
    v0 = data_71ce10
    __builtin_strncpy(x0_82, "multi_exponentiate exponents must be positive", 0x2e)
    var_4a0 = v0
    *x0_81 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_81[1])
    *x0_81 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_81, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

int64_t* x23 = arg1
int64_t x0_1 = Botan::BigInt::bits()
int64_t x0_3 = Botan::BigInt::bits()
void* result_1
__builtin_memset(&result_1, 0, 0x18)
int64_t x8_2 = *x23
int64_t* x25 = x23[1]
int64_t x26_1

x26_1 = x0_1 u< x0_3 ? x0_3 : x0_1

int64_t var_b0 = x8_2
int64_t* var_a8 = x25

if (x25 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(&x25[1]) + 1, &x25[1])
    while (i != 0)
    x8_2 = *x23

Botan::BigInt* var_a0
Botan::Montgomery_Int::Montgomery_Int(&var_a0, &var_b0, x8_2.b + 0x28)

if (x25 != 0)
    int64_t x9_3
    int32_t i_1
    
    do
        x9_3 = __ldaxr(&x25[1])
        i_1 = __stlxr(x9_3 - 1, &x25[1])
    while (i_1 != 0)
    
    if (x9_3 == 0)
        (*(*x25 + 0x10))(x25)
        std::__ndk1::__shared_weak_count::__release_weak()

int64_t* x25_1 = x23[1]
int64_t var_f8 = *x23
int64_t* var_f0 = x25_1

if (x25_1 != 0)
    int32_t i_2
    
    do
        i_2 = __stxr(__ldxr(&x25_1[1]) + 1, &x25_1[1])
    while (i_2 != 0)

std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> > var_e8
Botan::Montgomery_Int::Montgomery_Int(&var_e8, &var_f8, arg2.b)

if (x25_1 != 0)
    int64_t x9_6
    int32_t i_3
    
    do
        x9_6 = __ldaxr(&x25_1[1])
        i_3 = __stlxr(x9_6 - 1, &x25_1[1])
    while (i_3 != 0)
    
    if (x9_6 == 0)
        (*(*x25_1 + 0x10))(x25_1)
        std::__ndk1::__shared_weak_count::__release_weak()

Botan::Montgomery_Int::square(&var_e8)
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> > var_130
Botan::Montgomery_Int::mul(&var_130, &var_e8)
int64_t* x23_1 = x23[1]
int64_t var_1b0 = *x23
int64_t* var_1a8 = x23_1

if (x23_1 != 0)
    int32_t i_4
    
    do
        i_4 = __stxr(__ldxr(&x23_1[1]) + 1, &x23_1[1])
    while (i_4 != 0)

Botan::Montgomery_Int var_1a0
Botan::Montgomery_Int::Montgomery_Int(&var_1a0, &var_1b0, arg4.b)

if (x23_1 != 0)
    int64_t x9_9
    int32_t i_5
    
    do
        x9_9 = __ldaxr(&x23_1[1])
        i_5 = __stlxr(x9_9 - 1, &x23_1[1])
    while (i_5 != 0)
    
    if (x9_9 == 0)
        (*(*x23_1 + 0x10))(x23_1)
        std::__ndk1::__shared_weak_count::__release_weak()

Botan::Montgomery_Int::square(&var_1a0)
Botan::Montgomery_Int var_1e8
Botan::Montgomery_Int::mul(&var_1e8, &var_1a0)
Botan::Montgomery_Int::mul(&var_1a0, &var_e8)
Botan::Montgomery_Int::mul(&var_1a0, &var_130)
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> > var_168
Botan::Montgomery_Int::mul(&var_1a0, &var_168)
Botan::Montgomery_Int::mul(&var_1e8, &var_e8)
Botan::Montgomery_Int::mul(&var_1e8, &var_130)
Botan::Montgomery_Int::mul(&var_1e8, &var_168)
Botan::Montgomery_Int var_220
Botan::Montgomery_Int::mul(&var_220, &var_e8)
Botan::Montgomery_Int::mul(&var_220, &var_130)
Botan::Montgomery_Int::mul(&var_220, &var_168)
var_4a0.q = &var_a0
var_4a0:8.q = &var_e8
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >* var_490 = &var_130
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >* var_488 = &var_168
Botan::Montgomery_Int* var_480 = &var_1a0
void var_258
void* var_478 = &var_258
Botan::Montgomery_Int* var_460 = &var_1e8
void var_300
void* var_458 = &var_300
void var_338
void* var_450 = &var_338
void var_370
void* var_448 = &var_370
Botan::Montgomery_Int* var_440 = &var_220
void var_3a8
void* var_438 = &var_3a8
Botan::BigInt* x11_4 = var_a0
void var_290
void* var_470 = &var_290
void var_2c8
void* var_468 = &var_2c8
void var_3e0
void* var_430 = &var_3e0
void var_418
void* var_428 = &var_418
int64_t* var_98

if (var_98 != 0)
    int32_t i_6
    
    do
        i_6 = __stxr(__ldxr(&var_98[1]) + 1, &var_98[1])
    while (i_6 != 0)

void* var_4c8
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&var_4c8)
int64_t x8_18 = (x26_1 & 1) << 0x3f s>> 0x3f & (2 - (x26_1 & 1))
int64_t var_78
int64_t var_4b0 = var_78
int32_t var_70
int32_t var_4a8 = var_70

if (x8_18 + x26_1 != 0)
    int64_t x23_2 = 0
    int64_t i_7 = x8_18 + x26_1 - 2
    
    do
        if (x23_2 != 0)
            Botan::Montgomery_Params::square_this(x11_4, &var_4c8)
            Botan::Montgomery_Params::square_this(x11_4, &var_4c8)
        
        int64_t x12_1 = *arg3
        uint64_t x8_20 = i_7 u>> 5
        int64_t x13_1 = (*(arg3 + 8) - x12_1) s>> 2
        int32_t x10_10
        
        if (x13_1 u<= x8_20)
            x10_10 = 0
        else
            x10_10 = *(x12_1 + (x8_20 << 2))
        
        int64_t x9_16 = i_7 & 0x1f
        int32_t x11_9 = (x9_16 == 0 ? 1 : 0) | (x8_20 == (i_7 + 2) u>> 5 ? 1 : 0)
        uint32_t x10_11
        
        if (x11_9 != 1)
            int32_t x12_2
            
            if (x13_1 u<= x8_20 + 1)
                x12_2 = 0
            else
                x12_2 = *(x12_1 + ((x8_20 + 1) << 2))
            
            x10_11 = x12_2 << 1 << not.d(i_7.d) | x10_10 u>> i_7.d
        else
            x10_11 = x10_10 u>> x9_16.d
        
        int64_t x13_3 = *arg5
        int64_t x14_3 = (*(arg5 + 8) - x13_3) s>> 2
        int32_t x8_23
        int32_t x12_7
        
        if (x14_3 u<= x8_20)
            x12_7 = 0
            
            if (x11_9 == 0)
            label_d1ae2c:
                int32_t x8_22
                
                if (x14_3 u<= x8_20 + 1)
                    x8_22 = 0
                else
                    x8_22 = *(x13_3 + ((x8_20 + 1) << 2))
                
                x8_23 = x8_22 << 1 << not.d(i_7.d) | x12_7 u>> i_7.d
            else
                x8_23 = x12_7 u>> x9_16.d
        else
            x12_7 = *(x13_3 + (x8_20 << 2))
            
            if (x11_9 == 0)
                goto label_d1ae2c
            
            x8_23 = x12_7 u>> x9_16.d
        Botan::Montgomery_Params::mul_by(x11_4, &var_4c8, 
            *(&var_4a0 + (((zx.q(x10_11) & 3) | zx.q((3 & x8_23) << 2)) << 3)) + 0x10)
        i_7 -= 2
        x23_2 -= 2
    while (i_7 != -2)

Botan::Montgomery_Int::value()
void* x0_30 = var_4c8

if (x0_30 != 0)
    void* var_4c0_1 = x0_30
    int64_t var_4b8
    Botan::deallocate_memory(x0_30, (var_4b8 - x0_30) s>> 2, 4)

void* var_408
void* var_400_1
int64_t var_3f8

if (var_98 == 0)
label_d1aedc:
    
    if (var_408 != 0)
        var_400_1 = var_408
        Botan::deallocate_memory(var_408, (var_3f8 - var_408) s>> 2, 4)
else
    int64_t x9_20
    int32_t i_8
    
    do
        x9_20 = __ldaxr(&var_98[1])
        i_8 = __stlxr(x9_20 - 1, &var_98[1])
    while (i_8 != 0)
    
    if (x9_20 != 0)
        goto label_d1aedc
    
    (*(*var_98 + 0x10))(var_98)
    std::__ndk1::__shared_weak_count::__release_weak()
    
    if (var_408 != 0)
        var_400_1 = var_408
        Botan::deallocate_memory(var_408, (var_3f8 - var_408) s>> 2, 4)
int64_t* var_410
void* var_3d0
void* var_3c8_1
int64_t var_3c0

if (var_410 == 0)
label_d1af1c:
    
    if (var_3d0 != 0)
        var_3c8_1 = var_3d0
        Botan::deallocate_memory(var_3d0, (var_3c0 - var_3d0) s>> 2, 4)
else
    int64_t x9_21
    int32_t i_9
    
    do
        x9_21 = __ldaxr(&var_410[1])
        i_9 = __stlxr(x9_21 - 1, &var_410[1])
    while (i_9 != 0)
    
    if (x9_21 != 0)
        goto label_d1af1c
    
    (*(*var_410 + 0x10))(var_410)
    std::__ndk1::__shared_weak_count::__release_weak()
    
    if (var_3d0 != 0)
        var_3c8_1 = var_3d0
        Botan::deallocate_memory(var_3d0, (var_3c0 - var_3d0) s>> 2, 4)
int64_t* var_3d8
void* var_398
void* var_390_1
int64_t var_388

if (var_3d8 == 0)
label_d1af5c:
    
    if (var_398 != 0)
        var_390_1 = var_398
        Botan::deallocate_memory(var_398, (var_388 - var_398) s>> 2, 4)
else
    int64_t x9_22
    int32_t i_10
    
    do
        x9_22 = __ldaxr(&var_3d8[1])
        i_10 = __stlxr(x9_22 - 1, &var_3d8[1])
    while (i_10 != 0)
    
    if (x9_22 != 0)
        goto label_d1af5c
    
    (*(*var_3d8 + 0x10))(var_3d8)
    std::__ndk1::__shared_weak_count::__release_weak()
    
    if (var_398 != 0)
        var_390_1 = var_398
        Botan::deallocate_memory(var_398, (var_388 - var_398) s>> 2, 4)
int64_t* var_3a0
void* var_360
void* var_358_1
int64_t var_350

if (var_3a0 == 0)
label_d1af9c:
    
    if (var_360 != 0)
        var_358_1 = var_360
        Botan::deallocate_memory(var_360, (var_350 - var_360) s>> 2, 4)
else
    int64_t x9_23
    int32_t i_11
    
    do
        x9_23 = __ldaxr(&var_3a0[1])
        i_11 = __stlxr(x9_23 - 1, &var_3a0[1])
    while (i_11 != 0)
    
    if (x9_23 != 0)
        goto label_d1af9c
    
    (*(*var_3a0 + 0x10))(var_3a0)
    std::__ndk1::__shared_weak_count::__release_weak()
    
    if (var_360 != 0)
        var_358_1 = var_360
        Botan::deallocate_memory(var_360, (var_350 - var_360) s>> 2, 4)
int64_t* var_368
void* var_328
void* var_320_1
int64_t var_318

if (var_368 == 0)
label_d1afdc:
    
    if (var_328 != 0)
        var_320_1 = var_328
        Botan::deallocate_memory(var_328, (var_318 - var_328) s>> 2, 4)
else
    int64_t x9_24
    int32_t i_12
    
    do
        x9_24 = __ldaxr(&var_368[1])
        i_12 = __stlxr(x9_24 - 1, &var_368[1])
    while (i_12 != 0)
    
    if (x9_24 != 0)
        goto label_d1afdc
    
    (*(*var_368 + 0x10))(var_368)
    std::__ndk1::__shared_weak_count::__release_weak()
    
    if (var_328 != 0)
        var_320_1 = var_328
        Botan::deallocate_memory(var_328, (var_318 - var_328) s>> 2, 4)
int64_t* var_330
void* var_2f0
void* var_2e8_1
int64_t var_2e0

if (var_330 == 0)
label_d1b01c:
    
    if (var_2f0 != 0)
        var_2e8_1 = var_2f0
        Botan::deallocate_memory(var_2f0, (var_2e0 - var_2f0) s>> 2, 4)
else
    int64_t x9_25
    int32_t i_13
    
    do
        x9_25 = __ldaxr(&var_330[1])
        i_13 = __stlxr(x9_25 - 1, &var_330[1])
    while (i_13 != 0)
    
    if (x9_25 != 0)
        goto label_d1b01c
    
    (*(*var_330 + 0x10))(var_330)
    std::__ndk1::__shared_weak_count::__release_weak()
    
    if (var_2f0 != 0)
        var_2e8_1 = var_2f0
        Botan::deallocate_memory(var_2f0, (var_2e0 - var_2f0) s>> 2, 4)
int64_t* var_2f8
void* var_2b8
void* var_2b0_1
int64_t var_2a8

if (var_2f8 == 0)
label_d1b05c:
    
    if (var_2b8 != 0)
        var_2b0_1 = var_2b8
        Botan::deallocate_memory(var_2b8, (var_2a8 - var_2b8) s>> 2, 4)
else
    int64_t x9_26
    int32_t i_14
    
    do
        x9_26 = __ldaxr(&var_2f8[1])
        i_14 = __stlxr(x9_26 - 1, &var_2f8[1])
    while (i_14 != 0)
    
    if (x9_26 != 0)
        goto label_d1b05c
    
    (*(*var_2f8 + 0x10))(var_2f8)
    std::__ndk1::__shared_weak_count::__release_weak()
    
    if (var_2b8 != 0)
        var_2b0_1 = var_2b8
        Botan::deallocate_memory(var_2b8, (var_2a8 - var_2b8) s>> 2, 4)
int64_t* var_2c0
void* var_280
void* var_278_1
int64_t var_270

if (var_2c0 == 0)
label_d1b09c:
    
    if (var_280 != 0)
        var_278_1 = var_280
        Botan::deallocate_memory(var_280, (var_270 - var_280) s>> 2, 4)
else
    int64_t x9_27
    int32_t i_15
    
    do
        x9_27 = __ldaxr(&var_2c0[1])
        i_15 = __stlxr(x9_27 - 1, &var_2c0[1])
    while (i_15 != 0)
    
    if (x9_27 != 0)
        goto label_d1b09c
    
    (*(*var_2c0 + 0x10))(var_2c0)
    std::__ndk1::__shared_weak_count::__release_weak()
    
    if (var_280 != 0)
        var_278_1 = var_280
        Botan::deallocate_memory(var_280, (var_270 - var_280) s>> 2, 4)
int64_t* var_288
void* var_248
void* var_240_1
int64_t var_238

if (var_288 == 0)
label_d1b0dc:
    
    if (var_248 != 0)
        var_240_1 = var_248
        Botan::deallocate_memory(var_248, (var_238 - var_248) s>> 2, 4)
else
    int64_t x9_28
    int32_t i_16
    
    do
        x9_28 = __ldaxr(&var_288[1])
        i_16 = __stlxr(x9_28 - 1, &var_288[1])
    while (i_16 != 0)
    
    if (x9_28 != 0)
        goto label_d1b0dc
    
    (*(*var_288 + 0x10))(var_288)
    std::__ndk1::__shared_weak_count::__release_weak()
    
    if (var_248 != 0)
        var_240_1 = var_248
        Botan::deallocate_memory(var_248, (var_238 - var_248) s>> 2, 4)
int64_t* var_250
void* var_210
void* var_208_1
int64_t var_200

if (var_250 == 0)
label_d1b11c:
    
    if (var_210 != 0)
        var_208_1 = var_210
        Botan::deallocate_memory(var_210, (var_200 - var_210) s>> 2, 4)
else
    int64_t x9_29
    int32_t i_17
    
    do
        x9_29 = __ldaxr(&var_250[1])
        i_17 = __stlxr(x9_29 - 1, &var_250[1])
    while (i_17 != 0)
    
    if (x9_29 != 0)
        goto label_d1b11c
    
    (*(*var_250 + 0x10))(var_250)
    std::__ndk1::__shared_weak_count::__release_weak()
    
    if (var_210 != 0)
        var_208_1 = var_210
        Botan::deallocate_memory(var_210, (var_200 - var_210) s>> 2, 4)
int64_t* var_218
void* var_1d8
void* var_1d0_1
int64_t var_1c8

if (var_218 == 0)
label_d1b15c:
    
    if (var_1d8 != 0)
        var_1d0_1 = var_1d8
        Botan::deallocate_memory(var_1d8, (var_1c8 - var_1d8) s>> 2, 4)
else
    int64_t x9_30
    int32_t i_18
    
    do
        x9_30 = __ldaxr(&var_218[1])
        i_18 = __stlxr(x9_30 - 1, &var_218[1])
    while (i_18 != 0)
    
    if (x9_30 != 0)
        goto label_d1b15c
    
    (*(*var_218 + 0x10))(var_218)
    std::__ndk1::__shared_weak_count::__release_weak()
    
    if (var_1d8 != 0)
        var_1d0_1 = var_1d8
        Botan::deallocate_memory(var_1d8, (var_1c8 - var_1d8) s>> 2, 4)
int64_t* var_1e0
void* var_190
void* var_188_1
int64_t var_180

if (var_1e0 == 0)
label_d1b19c:
    
    if (var_190 != 0)
        var_188_1 = var_190
        Botan::deallocate_memory(var_190, (var_180 - var_190) s>> 2, 4)
else
    int64_t x9_31
    int32_t i_19
    
    do
        x9_31 = __ldaxr(&var_1e0[1])
        i_19 = __stlxr(x9_31 - 1, &var_1e0[1])
    while (i_19 != 0)
    
    if (x9_31 != 0)
        goto label_d1b19c
    
    (*(*var_1e0 + 0x10))(var_1e0)
    std::__ndk1::__shared_weak_count::__release_weak()
    
    if (var_190 != 0)
        var_188_1 = var_190
        Botan::deallocate_memory(var_190, (var_180 - var_190) s>> 2, 4)
int64_t* var_198
void* var_158
void* var_150_1
int64_t var_148

if (var_198 == 0)
label_d1b1dc:
    
    if (var_158 != 0)
        var_150_1 = var_158
        Botan::deallocate_memory(var_158, (var_148 - var_158) s>> 2, 4)
else
    int64_t x9_32
    int32_t i_20
    
    do
        x9_32 = __ldaxr(&var_198[1])
        i_20 = __stlxr(x9_32 - 1, &var_198[1])
    while (i_20 != 0)
    
    if (x9_32 != 0)
        goto label_d1b1dc
    
    (*(*var_198 + 0x10))(var_198)
    std::__ndk1::__shared_weak_count::__release_weak()
    
    if (var_158 != 0)
        var_150_1 = var_158
        Botan::deallocate_memory(var_158, (var_148 - var_158) s>> 2, 4)
int64_t* var_160
void* var_120
void* var_118_1
int64_t var_110

if (var_160 == 0)
label_d1b21c:
    
    if (var_120 != 0)
        var_118_1 = var_120
        Botan::deallocate_memory(var_120, (var_110 - var_120) s>> 2, 4)
else
    int64_t x9_33
    int32_t i_21
    
    do
        x9_33 = __ldaxr(&var_160[1])
        i_21 = __stlxr(x9_33 - 1, &var_160[1])
    while (i_21 != 0)
    
    if (x9_33 != 0)
        goto label_d1b21c
    
    (*(*var_160 + 0x10))(var_160)
    std::__ndk1::__shared_weak_count::__release_weak()
    
    if (var_120 != 0)
        var_118_1 = var_120
        Botan::deallocate_memory(var_120, (var_110 - var_120) s>> 2, 4)
int64_t* var_128
void* var_d8
void* var_d0_1
int64_t var_c8

if (var_128 == 0)
label_d1b25c:
    
    if (var_d8 != 0)
        var_d0_1 = var_d8
        Botan::deallocate_memory(var_d8, (var_c8 - var_d8) s>> 2, 4)
else
    int64_t x9_34
    int32_t i_22
    
    do
        x9_34 = __ldaxr(&var_128[1])
        i_22 = __stlxr(x9_34 - 1, &var_128[1])
    while (i_22 != 0)
    
    if (x9_34 != 0)
        goto label_d1b25c
    
    (*(*var_128 + 0x10))(var_128)
    std::__ndk1::__shared_weak_count::__release_weak()
    
    if (var_d8 != 0)
        var_d0_1 = var_d8
        Botan::deallocate_memory(var_d8, (var_c8 - var_d8) s>> 2, 4)
int64_t* var_e0
void* var_90
void* var_88_1
int64_t var_80

if (var_e0 == 0)
label_d1b29c:
    
    if (var_90 != 0)
        var_88_1 = var_90
        Botan::deallocate_memory(var_90, (var_80 - var_90) s>> 2, 4)
else
    int64_t x9_35
    int32_t i_23
    
    do
        x9_35 = __ldaxr(&var_e0[1])
        i_23 = __stlxr(x9_35 - 1, &var_e0[1])
    while (i_23 != 0)
    
    if (x9_35 != 0)
        goto label_d1b29c
    
    (*(*var_e0 + 0x10))(var_e0)
    std::__ndk1::__shared_weak_count::__release_weak()
    
    if (var_90 != 0)
        var_88_1 = var_90
        Botan::deallocate_memory(var_90, (var_80 - var_90) s>> 2, 4)
void* result
void* result_2
int64_t var_58

if (var_98 == 0)
label_d1b2dc:
    result = result_1
    
    if (result != 0)
        result_2 = result
        return Botan::deallocate_memory(result, (var_58 - result) s>> 2, 4)
else
    int64_t x9_36
    int32_t i_24
    
    do
        x9_36 = __ldaxr(&var_98[1])
        i_24 = __stlxr(x9_36 - 1, &var_98[1])
    while (i_24 != 0)
    
    if (x9_36 != 0)
        goto label_d1b2dc
    
    (*(*var_98 + 0x10))(var_98)
    std::__ndk1::__shared_weak_count::__release_weak()
    result = result_1
    
    if (result != 0)
        result_2 = result
        return Botan::deallocate_memory(result, (var_58 - result) s>> 2, 4)
return result
