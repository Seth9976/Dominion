// 函数: sub_f00ce0
// 地址: 0xf00ce0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::EC_Group::random_scalar(arg1 + 0x30)
void* result_1
Botan::EC_Group::blinded_base_point_multiply_x(arg1 + 0x30, &result_1, arg4)
int64_t x0_2 = Botan::BigInt::bits()
int64_t x8_2

if ((x0_2 & 7) == 0)
    x8_2 = 0
else
    x8_2 = 8 - (x0_2 & 7)

uint64_t x20 = (x8_2 + x0_2) u>> 3
void* x19
void* x27

if (x20 == 0)
    x19 = nullptr
    x27 = nullptr
else
    void* x0_4 = Botan::allocate_memory(x20, 1)
    x19 = x0_4
    x27 = x0_4 + x20
    memset(x0_4, 0, x20)

int64_t x0_5 = Botan::BigInt::bits()
int64_t x8_6

if ((x0_5 & 7) == 0)
    x8_6 = 0
else
    x8_6 = 8 - (x0_5 & 7)

int64_t x12 = x8_6 + x0_5
uint64_t x9 = x12 u>> 5
uint64_t i = x12 u>> 3 & 3
void* var_b0
int64_t var_a8

if (x9 != 0)
    int64_t x10_1 = 0
    int32_t* x13_2 = (x12 u>> 3) + x19 - 4
    
    do
        int32_t x14_2
        
        if ((var_a8 - var_b0) s>> 2 u> x10_1)
            x14_2 = *(var_b0 + (x10_1 << 2))
        else
            x14_2 = 0
        
        x10_1 += 1
        *x13_2 = _byteswap(x14_2)
        x13_2 = &x13_2[-1]
    while (x9 != x10_1)

if (i != 0)
    int32_t x9_1
    
    if (x9 u>= (var_a8 - var_b0) s>> 2)
        x9_1 = 0
    else
        x9_1 = *(var_b0 + (x9 << 2))
    
    int32_t x11_4 = 0x18
    
    do
        *(x19 - 1 + i) = (x9_1 u>> (not.d(x11_4) & 0x18)).b
        i -= 1
        x11_4 -= 8
    while (i != 0)

int64_t* x0_7 = (*(**(arg1 + 8) + 0x38))()
uint64_t x23 = x27 - x19
(*(*x0_7 + 0x10))(x0_7, x19, x23)
(*(*x0_7 + 0x18))(x0_7)
void* var_c8
(*(*x0_7 + 0x20))(x0_7, &var_c8, *(Botan::EC_Group::data() + 0x1e8), arg4)
void* x0_12 = var_c8

if (x0_12 != 0)
    int128_t var_c0
    int64_t x8_13 = var_c0:8.q
    var_c0.q = x0_12
    Botan::deallocate_memory(x0_12, x8_13 - x0_12, 1)

void* var_f0
void* x1_5 = var_f0
var_c8 = x1_5
int128_t var_e8
int128_t var_c0_1 = var_e8
__builtin_memset(&var_f0, 0, 0x18)
int64_t var_d8 = -1
int32_t var_d0 = 1
int128_t v0_1
int128_t v1
int128_t v2
int128_t v3
int128_t v4
int128_t v5
int128_t v6
int128_t v7
v0_1, v1, v2, v3, v4, v5, v6, v7 = Botan::BigInt::binary_decode(&var_f0, x1_5)
void* x9_4 = var_c8
int64_t x8_15 = var_c0_1.q
void* x11_5 = x8_15 - x9_4
void* x10_4 = x11_5 & 0xffffffffffffffe0

if (x10_4 != 0)
    int64_t x12_7 = 0
    
    if (x10_4 == 0x20 || x9_4 + 0x18 + x10_4 - 0x20 u< x9_4 + 0x18
            || x9_4 + 0x10 + x10_4 - 0x20 u< x9_4 + 0x10 || x9_4 + 8 + x10_4 - 0x20 u< x9_4 + 8
            || x9_4 + x10_4 - 0x20 u< x9_4)
        goto label_f00fc4
    
    if (x9_4 u>= arg2 + x10_4 || x9_4 + x10_4 u<= arg2)
        int64_t i_16 = (((x10_4 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
        x12_7 = i_16 << 5
        int64_t i_13 = i_16
        void* x16_2 = arg2
        void* x17_2 = x9_4
        int64_t i_1
        
        do
            v0_1.q = *x17_2
            v1.q = *(x17_2 + 8)
            v2.q = *(x17_2 + 0x10)
            v3.q = *(x17_2 + 0x18)
            v0_1:8.q = *(x17_2 + 0x20)
            v1:8.q = *(x17_2 + 0x28)
            v2:8.q = *(x17_2 + 0x30)
            v3:8.q = *(x17_2 + 0x38)
            v4.q = *x16_2
            v5.q = *(x16_2 + 8)
            v6.q = *(x16_2 + 0x10)
            v7.q = *(x16_2 + 0x18)
            v4:8.q = *(x16_2 + 0x20)
            v5:8.q = *(x16_2 + 0x28)
            v6:8.q = *(x16_2 + 0x30)
            v7:8.q = *(x16_2 + 0x38)
            x16_2 += 0x40
            i_1 = i_13
            i_13 -= 2
            int128_t v16_1 = v4 ^ v0_1
            int128_t v17_1 = v5 ^ v1
            int128_t v18_1 = v6 ^ v2
            int128_t v19_1 = v7 ^ v3
            *x17_2 = v16_1.q
            *(x17_2 + 8) = v17_1.q
            *(x17_2 + 0x10) = v18_1.q
            *(x17_2 + 0x18) = v19_1.q
            *(x17_2 + 0x20) = v16_1:8.q
            *(x17_2 + 0x28) = v17_1:8.q
            *(x17_2 + 0x30) = v18_1:8.q
            *(x17_2 + 0x38) = v19_1:8.q
            x17_2 += 0x40
        while (i_1 != 2)
        
        if (((x10_4 - 0x20) u>> 5) + 1 != i_16)
            goto label_f00fc4
    else
        x12_7 = 0
    label_f00fc4:
        void* i_12 = x12_7 - x10_4
        void* x12_11 = arg2 + x12_7 + 0x10
        void* x14_7 = x9_4 + x12_7 + 0x10
        void* i_2
        
        do
            v2 = *(x12_11 - 0x10)
            v3 = *x12_11
            i_2 = i_12
            i_12 += 0x20
            x12_11 += 0x20
            v1 = v3 ^ *x14_7
            *(x14_7 - 0x10) ^= v2
            *x14_7 = v1
            x14_7 += 0x20
        while (i_2 != -0x20)

if (x10_4 != x11_5)
    int64_t x12_12 = x11_5 - x10_4
    
    if (x12_12 u< 8 || (x9_4 + x10_4 u< arg2 + x11_5 && arg2 + x10_4 u< x8_15))
        goto label_f010bc
    
    void* i_15
    
    if (x12_12 u>= 0x20)
        i_15 = x12_12 & 0xffffffffffffffe0
        int128_t* x13_6 = arg2 + x10_4 + 0x10
        int128_t* x14_9 = x9_4 + x10_4 + 0x10
        void* i_14 = i_15
        void* i_3
        
        do
            v0_1 = x13_6[-1]
            v1 = *x13_6
            x13_6 = &x13_6[2]
            i_3 = i_14
            i_14 -= 0x20
            v1 ^= *x14_9
            x14_9[-1] ^= v0_1
            *x14_9 = v1
            x14_9 = &x14_9[2]
        while (i_3 != 0x20)
        
        if (x12_12 != i_15)
            if ((x12_12 & 0x18) != 0)
                goto label_f0107c
            
            x10_4 += i_15
        label_f010bc:
            char* x9_5 = x10_4 + x9_4
            void* i_8 = x9_5 - x8_15
            char* x10_5 = arg2 + x10_4
            void* i_4
            
            do
                char x11_8 = *x10_5
                x10_5 = &x10_5[1]
                i_4 = i_8
                i_8 += 1
                *x9_5 ^= x11_8
                x9_5 = &x9_5[1]
            while (i_4 u< -1)
    else
        i_15 = nullptr
    label_f0107c:
        int64_t x13_7 = x12_12 & 0xfffffffffffffff8
        void* x15_3 = i_15 + x10_4
        x10_4 += x13_7
        int64_t* x14_10 = arg2 + x15_3
        int64_t* x15_4 = x9_4 + x15_3
        void* i_11 = i_15 - x13_7
        void* i_5
        
        do
            v0_1.q = *x14_10
            x14_10 = &x14_10[1]
            v1.q = *x15_4
            i_5 = i_11
            i_11 += 8
            *x15_4 = (v1 ^ v0_1).q
            x15_4 = &x15_4[1]
        while (i_5 != -8)
        
        if (x12_12 != x13_7)
            goto label_f010bc

void* x1_6 = var_c8
void* var_120
__builtin_memset(&var_120, 0, 0x18)
int64_t var_108 = -1
int32_t var_100 = 1
Botan::BigInt::binary_decode(&var_120, x1_6)
Botan::Modular_Reducer::reduce(Botan::EC_Group::data() + 0x138)
int128_t var_150
int128_t v0_2 = var_150
void* x0_19 = var_120
int64_t var_138
int64_t x2_6 = var_138
var_120.o = v0_2
var_150.q = x0_19
int32_t var_130_1 = var_100
int64_t var_110
void* x1_8

if (x0_19 == 0)
    x1_8 = v0_2.q
    
    if (x2_6 == -1)
    label_f01188:
        int64_t var_118
        void* x9_8 = var_118 - x1_8
        
        if (var_118 == x1_8)
            x2_6 = 0
        else
            void* x11_11
            
            x11_11 = x9_8 s>= 0 ? x9_8 : -ffffffffffffffff
            
            void* x10_7 = x1_8 - var_118
            void* x11_12
            
            x11_12 = x11_11 s< 1 ? x11_11 : 1
            
            x2_6 = x9_8 s>> 2
            void* x9_9
            
            x9_9 = x10_7 s> x9_8 ? x10_7 : x9_8
            
            int64_t i_9 = x11_12 * (x9_9 u>> 2)
            uint64_t x10_8 = 1
            int64_t i_6
            
            do
                int32_t x11_13 = *(x1_8 - 4 + (i_9 << 2))
                i_6 = i_9
                i_9 -= 1
                x10_8 = zx.q(x10_8.d) & zx.q(((x11_13 - 1) & not.d(x11_13)) s>> 0x1f)
                x2_6 -= x10_8
            while (i_6 != 1)
        
        int64_t var_108_2 = x2_6
else
    var_150:8.q = x0_19
    Botan::deallocate_memory(x0_19, (var_110 - x0_19) s>> 2, 4)
    x1_8 = var_120
    
    if (x2_6 == -1)
        goto label_f01188

Botan::BigInt* x24_1 = *(arg1 + 0x40)
int32_t var_130
Botan::BigInt::add2(&result_1, x1_8, x2_6, zx.q(var_130 != 1 ? 1 : 0))
Botan::Modular_Reducer::multiply(Botan::EC_Group::data() + 0x138, x24_1)
void* var_178
void* x0_24 = var_178
void* var_168

if (x0_24 != 0)
    void* var_170_1 = x0_24
    Botan::deallocate_memory(x0_24, (var_168 - x0_24) s>> 2, 4)

int64_t x8_24 = var_108

if (x8_24 == -1)
    int64_t x9_11 = var_150.q
    int64_t x11_15 = var_150:8.q
    int64_t x10_9 = x11_15 - x9_11
    
    if (x11_15 == x9_11)
        x8_24 = 0
    else
        int64_t x12_15
        
        x12_15 = x10_9 s>= 0 ? x10_9 : -1
        
        int64_t x11_16 = x9_11 - x11_15
        int64_t x12_16
        
        x12_16 = x12_15 s< 1 ? x12_15 : 1
        
        x8_24 = x10_9 s>> 2
        int64_t x10_10
        
        x10_10 = x11_16 s> x10_9 ? x11_16 : x10_9
        
        int64_t i_10 = x12_16 * (x10_10 u>> 2)
        uint64_t x11_17 = 1
        int64_t i_7
        
        do
            int32_t x12_17 = *(x9_11 - 4 + (i_10 << 2))
            i_7 = i_10
            i_10 -= 1
            x11_17 = zx.q(x11_17.d) & zx.q(((x12_17 - 1) & not.d(x12_17)) s>> 0x1f)
            x8_24 -= x11_17
        while (i_7 != 1)
    
    int64_t var_138_2 = x8_24

if (x8_24 == 0)
    void** x0_38 = __cxa_allocate_exception(0x20)
    int64_t x0_39
    int128_t v0_3
    x0_39, v0_3 = operator new(0x40)
    int64_t var_180 = x0_39
    int128_t var_190 = data_71ac10
    __builtin_strncpy(x0_39, "During ECKCDSA signature generation created zero s", 0x33)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Internal error: ", &var_190)
    *x0_38 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_38[1])
    
    if ((zx.d(var_178.b) & 1) != 0)
        operator delete(var_168)
    
    *x0_38 = _vtable_for_Botan::Internal_Error + 0x10
    __cxa_throw(x0_38, _typeinfo_for_Botan::Internal_Error, Botan::Exception::~Exception)
    noreturn

Botan::BigInt::encode_1363(&var_f0, var_c0_1.q - var_c8)
Botan::BigInt::encode_1363(&var_150, (*(Botan::EC_Group::data() + 0x1e8) + 7) u>> 3)
Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, Botan::secure_allocator<uint8_t> >(
    arg5, &var_178)
void* x0_30 = var_178

if (x0_30 != 0)
    void* var_170_2 = x0_30
    Botan::deallocate_memory(x0_30, var_168 - x0_30, 1)

void* x0_31 = var_150.q

if (x0_31 != 0)
    var_150:8.q = x0_31
    Botan::deallocate_memory(x0_31, (var_110 - x0_31) s>> 2, 4)

void* x0_32 = var_120

if (x0_32 != 0)
    void* var_118_1 = x0_32
    int64_t var_140
    Botan::deallocate_memory(x0_32, (var_140 - x0_32) s>> 2, 4)

void* x0_33 = var_f0

if (x0_33 != 0)
    int64_t x8_34 = var_e8:8.q
    var_e8.q = x0_33
    Botan::deallocate_memory(x0_33, (x8_34 - x0_33) s>> 2, 4)

void* x0_34 = var_c8

if (x0_34 != 0)
    int64_t x8_36 = var_c0_1:8.q
    var_c0_1.q = x0_34
    Botan::deallocate_memory(x0_34, x8_36 - x0_34, 1)

if (x0_7 != 0)
    (*(*x0_7 + 8))(x0_7)

if (x19 != 0)
    Botan::deallocate_memory(x19, x23, 1)

if (var_b0 != 0)
    void* var_a8_1 = var_b0
    int64_t var_a0
    Botan::deallocate_memory(var_b0, (var_a0 - var_b0) s>> 2, 4)

void* result = result_1

if (result == 0)
    return result

void* result_2 = result
int64_t var_78
return Botan::deallocate_memory(result, (var_78 - result) s>> 2, 4)
