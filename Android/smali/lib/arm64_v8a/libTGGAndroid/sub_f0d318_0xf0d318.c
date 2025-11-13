// 函数: sub_f0d318
// 地址: 0xf0d318
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t var_b8
int64_t var_a8
uint32_t* result_1
int64_t var_80_1
uint32_t* result_3
int64_t x24
int32_t x25
int64_t x26
int64_t x27

if (*(arg1 + 0x58) == 0)
    uint64_t x1_3 = *(arg1 + 0x40)
    *(arg1 + 0x48)
    __builtin_memset(&result_1, 0, 0x18)
    int64_t var_78_2 = -1
    int32_t var_70_2 = 1
    Botan::BigInt::binary_decode(&result_1, x1_3)
    result_3 = result_1
    int64_t var_88_1
    x27 = var_88_1
    x26 = var_80_1
    x24 = var_78_2
    x25 = var_70_2
    *(arg1 + 0x48) = *(arg1 + 0x40)
else
    Botan::Buffered_Computation::final()
    uint64_t x1 = var_b8
    __builtin_memset(&result_1, 0, 0x18)
    int64_t var_78 = -1
    int32_t var_70 = 1
    Botan::BigInt::binary_decode(&result_1, x1)
    result_3 = result_1
    int64_t var_88
    x27 = var_88
    int64_t var_80
    x26 = var_80
    x24 = var_78
    uint64_t x0_2 = var_b8
    x25 = var_70
    __builtin_memset(&result_1, 0, 0x18)
    int64_t var_78_1 = -1
    int32_t var_70_1 = 1
    
    if (x0_2 != 0)
        uint64_t var_b0_1 = x0_2
        Botan::deallocate_memory(x0_2, var_a8 - x0_2, 1)
    
    int64_t* x0_3 = *(arg1 + 0x58)
    int64_t x1_2 = *(arg1 + 0x28)
    (*(*x0_3 + 0x18))(x0_3, x1_2, *(arg1 + 0x30) - x1_2)

Botan::EC_Group::random_scalar(arg1 + 8)
Botan::EC_Group::blinded_base_point_multiply_x(arg1 + 8, &result_1, arg2)

if (x24 == -1)
    void* x9_2 = x27 - result_3
    
    if (x27 == result_3)
        x24 = 0
    else
        void* x11_1
        
        x11_1 = x9_2 s>= 0 ? x9_2 : -ffffffffffffffff
        
        void* x10_1 = result_3 - x27
        void* x11_2
        
        x11_2 = x11_1 s< 1 ? x11_1 : 1
        
        x24 = x9_2 s>> 2
        void* x9_3
        
        x9_3 = x10_1 s> x9_2 ? x10_1 : x9_2
        
        int64_t i_2 = x11_2 * (x9_3 u>> 2)
        uint64_t x10_2 = 1
        int64_t i
        
        do
            int32_t x11_3 = *(result_3 - 4 + (i_2 << 2))
            i = i_2
            i_2 -= 1
            x10_2 = zx.q(x10_2.d) & zx.q(((x11_3 - 1) & not.d(x11_3)) s>> 0x1f)
            x24 -= x10_2
        while (i != 1)

void* var_108
Botan::BigInt::add2(&var_108, result_3, x24, zx.q(x25))
Botan::Modular_Reducer::reduce(Botan::EC_Group::data() + 0x138)
void* var_e0
void* x0_11 = var_e0
int64_t var_d0

if (x0_11 != 0)
    void* var_d8_1 = x0_11
    Botan::deallocate_memory(x0_11, (var_d0 - x0_11) s>> 2, 4)

void* x0_12 = var_108
int64_t var_f8

if (x0_12 != 0)
    void* var_100_1 = x0_12
    Botan::deallocate_memory(x0_12, (var_f8 - x0_12) s>> 2, 4)

Botan::BigInt* x23_1 = *(arg1 + 0x20)
Botan::operator*(&var_b8, *(arg1 + 0x18))
uint64_t var_140
uint64_t x2_5 = var_140
uint32_t* var_158

if (x2_5 == -1)
    int64_t var_150
    void* x9_5 = var_150 - var_158
    
    if (var_150 == var_158)
        x2_5 = 0
    else
        void* x11_5
        
        x11_5 = x9_5 s>= 0 ? x9_5 : -ffffffffffffffff
        
        void* x10_3 = var_158 - var_150
        void* x11_6
        
        x11_6 = x11_5 s< 1 ? x11_5 : 1
        
        x2_5 = x9_5 s>> 2
        void* x9_6
        
        x9_6 = x10_3 s> x9_5 ? x10_3 : x9_5
        
        int64_t i_3 = x11_6 * (x9_6 u>> 2)
        uint64_t x10_4 = 1
        int64_t i_1
        
        do
            int32_t x11_7 = *(var_158 - 4 + (i_3 << 2))
            i_1 = i_3
            i_3 -= 1
            x10_4 = zx.q(x10_4.d) & zx.q(((x11_7 - 1) & not.d(x11_7)) s>> 0x1f)
            x2_5 -= x10_4
        while (i_1 != 1)
    
    uint64_t var_140_1 = x2_5

int32_t var_138
Botan::BigInt::add2(&result_1, var_158, x2_5, zx.q(var_138 != 1 ? 1 : 0))
Botan::Modular_Reducer::reduce(Botan::EC_Group::data() + 0x138)
Botan::Modular_Reducer::multiply(Botan::EC_Group::data() + 0x138, x23_1)
void* x0_21 = var_108

if (x0_21 != 0)
    void* var_100_2 = x0_21
    Botan::deallocate_memory(x0_21, (var_f8 - x0_21) s>> 2, 4)

void* var_130

if (var_130 != 0)
    void* var_128_1 = var_130
    int64_t var_120
    Botan::deallocate_memory(var_130, (var_120 - var_130) s>> 2, 4)

if (var_158 != 0)
    uint32_t* var_150_1 = var_158
    int64_t var_148
    Botan::deallocate_memory(var_158, (var_148 - var_158) s>> 2, 4)

Botan::EC_Group::data()
int64_t x0_27 = Botan::BigInt::bits()
int64_t x8_22

if ((x0_27 & 7) == 0)
    x8_22 = 0
else
    x8_22 = 8 - (x0_27 & 7)

Botan::BigInt::encode_fixed_length_int_pair(&var_b8, &var_e0, (x8_22 + x0_27) u>> 3)
void* x0_29 = var_e0

if (x0_29 != 0)
    void* var_d8_2 = x0_29
    Botan::deallocate_memory(x0_29, (var_d0 - x0_29) s>> 2, 4)

uint64_t x0_30 = var_b8

if (x0_30 != 0)
    uint64_t var_b0_2 = x0_30
    Botan::deallocate_memory(x0_30, (var_a8 - x0_30) s>> 2, 4)

uint32_t* result = result_1

if (result != 0)
    uint32_t* result_2 = result
    result = Botan::deallocate_memory(result, (var_80_1 - result) s>> 2, 4)

if (result_3 == 0)
    return result

return Botan::deallocate_memory(result_3, (x26 - result_3) s>> 2, 4)
