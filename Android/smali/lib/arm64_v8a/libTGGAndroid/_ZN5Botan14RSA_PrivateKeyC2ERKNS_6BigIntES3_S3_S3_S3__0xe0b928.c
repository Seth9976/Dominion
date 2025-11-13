// 函数: _ZN5Botan14RSA_PrivateKeyC2ERKNS_6BigIntES3_S3_S3_S3_
// 地址: 0xe0b928
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
void* result_1
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&result_1)
int64_t var_60 = *(arg3 + 0x18)
int32_t var_58 = *(arg3 + 0x20)
void* var_a0
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&var_a0)
int64_t var_88 = *(arg4 + 0x18)
int32_t var_80 = *(arg4 + 0x20)
void* var_d0
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&var_d0)
void* entry_x6
int64_t x8_11 = *(entry_x6 + 0x18)
int64_t var_b8 = x8_11
int32_t x9_3 = *(entry_x6 + 0x20)
int128_t var_100
int64_t var_f0
int64_t var_c0

if (x8_11 == -1)
    void* x9_4 = var_d0
    int64_t var_c8
    void* x10_1 = var_c8 - x9_4
    
    if (var_c8 == x9_4)
        var_b8 = 0
    label_e0ba98:
        Botan::operator*(&result_1, &var_a0)
        void* x0_4 = var_d0
        var_d0.o = var_100
        int64_t x8_13 = var_c0
        var_c0 = var_f0
        int64_t var_e8
        int64_t var_b8_1 = var_e8
        int32_t var_e0
        int32_t var_b0_1 = var_e0
        var_100.q = x0_4
        var_f0 = x8_13
        int64_t var_e8_1 = var_b8
        int32_t var_e0_1 = x9_3
        
        if (x0_4 != 0)
            var_100:8.q = x0_4
            Botan::deallocate_memory(x0_4, (x8_13 - x0_4) s>> 2, 4)
    else
        void* x12_1
        
        x12_1 = x10_1 s>= 0 ? x10_1 : -ffffffffffffffff
        
        void* x11_2 = x9_4 - var_c8
        void* x12_2
        
        x12_2 = x12_1 s< 1 ? x12_1 : 1
        
        int64_t x8_12 = x10_1 s>> 2
        void* x10_2
        
        x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
        
        int64_t i_3 = x12_2 * (x10_2 u>> 2)
        uint64_t x11_3 = 1
        int32_t i
        
        do
            int32_t x12_3 = *(x9_4 - 4 + (i_3 << 2))
            i = i_3
            i_3 -= 1
            x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
            x8_12 -= x11_3
        while (i != 1)
        var_b8 = x8_12
        
        if (x8_12 == 0)
            goto label_e0ba98
else if (x8_11 == 0)
    goto label_e0ba98

std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&var_100)
int64_t var_e8_2 = *(arg5 + 0x18)
int32_t var_e0_2 = *(arg5 + 0x20)
void* var_130
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&var_130)
void* entry_x5
int64_t x8_17 = *(entry_x5 + 0x18)
int32_t x8_18 = *(entry_x5 + 0x20)
uint32_t var_180 = 1
int32_t var_110 = x8_18
Botan::BigInt::add2(&result_1, &var_180, 1, 0)
uint32_t var_1a8 = 1
Botan::BigInt::add2(&var_a0, &var_1a8, 1, 0)
int128_t var_1d0
int64_t var_1c0
int64_t var_198
void* var_158
int64_t var_120

if (x8_17 == -1)
    void* x9_8 = var_130
    int64_t var_128
    void* x10_5 = var_128 - x9_8
    
    if (var_128 == x9_8)
        int64_t var_118_2 = 0
    label_e0bbe8:
        Botan::lcm(&var_158, &var_180)
        Botan::inverse_mod(&var_100, &var_1a8)
        void* x0_11 = var_130
        var_130.o = var_1d0
        int64_t x8_21 = var_120
        var_120 = var_1c0
        int64_t var_1b8
        int64_t var_118_3 = var_1b8
        int32_t var_1b0
        int32_t var_110_1 = var_1b0
        
        if (x0_11 != 0)
            Botan::deallocate_memory(x0_11, (x8_21 - x0_11) s>> 2, 4)
        
        void* x0_12 = var_1a8.q
        
        if (x0_12 != 0)
            void* var_1a0_1 = x0_12
            Botan::deallocate_memory(x0_12, (var_198 - x0_12) s>> 2, 4)
    else
        void* x12_6
        
        x12_6 = x10_5 s>= 0 ? x10_5 : -ffffffffffffffff
        
        void* x11_6 = x9_8 - var_128
        void* x12_7
        
        x12_7 = x12_6 s< 1 ? x12_6 : 1
        
        int64_t x8_20 = x10_5 s>> 2
        void* x10_6
        
        x10_6 = x11_6 s> x10_5 ? x11_6 : x10_5
        
        int64_t i_4 = x12_7 * (x10_6 u>> 2)
        uint64_t x11_7 = 1
        int64_t i_1
        
        do
            int32_t x12_8 = *(x9_8 - 4 + (i_4 << 2))
            i_1 = i_4
            i_4 -= 1
            x11_7 = zx.q(x11_7.d) & zx.q(((x12_8 - 1) & not.d(x12_8)) s>> 0x1f)
            x8_20 -= x11_7
        while (i_1 != 1)
        int64_t var_118_1 = x8_20
        
        if (x8_20 == 0)
            goto label_e0bbe8
else if (x8_17 == 0)
    goto label_e0bbe8

Botan::ct_modulo(&var_130, &var_158)
Botan::ct_modulo(&var_130, &var_180)
Botan::inverse_mod(&var_a0, &result_1)
Botan::RSA_PublicKey::init(arg1 + 8, &var_d0)
int64_t* x0_17 = operator new(0x1e8)
x0_17[2] = 0
*x0_17 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::RSA_Private_Data, std::__ndk1::allocator<Botan::RSA_Private_Data> >
    + 0x10
x0_17[1] = 0
Botan::RSA_Private_Data::RSA_Private_Data(&x0_17[3], &var_130, &result_1, &var_a0, &var_1a8, 
    &var_1d0)
int64_t* x20_1 = *(arg1 + 0x28)
*(arg1 + 0x20) = &x0_17[3]
*(arg1 + 0x28) = x0_17
int64_t x9_11

if (x20_1 != 0)
    int32_t i_2
    
    do
        x9_11 = __ldaxr(&x20_1[1])
        i_2 = __stlxr(x9_11 - 1, &x20_1[1])
    while (i_2 != 0)

void* var_1f8
void* var_1f0_1
int64_t var_1e8

if (x20_1 != 0 && x9_11 == 0)
    (*(*x20_1 + 0x10))(x20_1)
    std::__ndk1::__shared_weak_count::__release_weak()
    
    if (var_1f8 != 0)
        var_1f0_1 = var_1f8
        Botan::deallocate_memory(var_1f8, (var_1e8 - var_1f8) s>> 2, 4)
else if (var_1f8 != 0)
    var_1f0_1 = var_1f8
    Botan::deallocate_memory(var_1f8, (var_1e8 - var_1f8) s>> 2, 4)
void* x0_20 = var_1d0.q

if (x0_20 != 0)
    var_1d0:8.q = x0_20
    Botan::deallocate_memory(x0_20, (var_1c0 - x0_20) s>> 2, 4)

void* x0_21 = var_1a8.q

if (x0_21 != 0)
    void* var_1a0_2 = x0_21
    Botan::deallocate_memory(x0_21, (var_198 - x0_21) s>> 2, 4)

void* x0_22 = var_180.q

if (x0_22 != 0)
    void* var_178_1 = x0_22
    int64_t var_170
    Botan::deallocate_memory(x0_22, (var_170 - x0_22) s>> 2, 4)

void* x0_23 = var_158

if (x0_23 != 0)
    void* var_150_1 = x0_23
    int64_t var_148
    Botan::deallocate_memory(x0_23, (var_148 - x0_23) s>> 2, 4)

void* x0_24 = var_130

if (x0_24 != 0)
    void* var_128_1 = x0_24
    Botan::deallocate_memory(x0_24, (var_120 - x0_24) s>> 2, 4)

void* x0_25 = var_100.q

if (x0_25 != 0)
    var_100:8.q = x0_25
    Botan::deallocate_memory(x0_25, (var_f0 - x0_25) s>> 2, 4)

void* x0_26 = var_d0

if (x0_26 != 0)
    void* var_c8_1 = x0_26
    Botan::deallocate_memory(x0_26, (var_c0 - x0_26) s>> 2, 4)

void* x0_27 = var_a0

if (x0_27 != 0)
    void* var_98_1 = x0_27
    int64_t var_90
    Botan::deallocate_memory(x0_27, (var_90 - x0_27) s>> 2, 4)

void* result = result_1

if (result == 0)
    return result

void* result_2 = result
int64_t var_68
return Botan::deallocate_memory(result, (var_68 - result) s>> 2, 4)
