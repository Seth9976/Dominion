// 函数: sub_f0da90
// 地址: 0xf0da90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = _ReadMSR(tpidr_el0)
int64_t x8_1 = *(x20 + 0x28)
int16_t var_190 = 0
Botan::HashFunction::create_or_throw(arg1 + 0x18, &var_190)
void* var_180

if ((zx.d(var_190.b) & 1) != 0)
    operator delete(var_180)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "KDF2(", arg1 + 0x18)
char var_268[0x10]
int128_t* x0_3
int128_t v0
x0_3, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_268)
void* x8_3 = x0_3[1].q
var_190.o = *x0_3
__builtin_memset(x0_3, 0, 0x18)
int16_t var_d0 = 0
Botan::KDF::create_or_throw(&var_190, &var_d0)

if ((zx.d(var_d0.b) & 1) == 0)
    if ((zx.d(var_190.b) & 1) != 0)
        goto label_f0dc2c
    
    goto label_f0db5c

void* var_c0
operator delete(var_c0)
uint64_t var_368
int64_t var_360
void* var_258
int64_t x8

if ((zx.d(var_190.b) & 1) == 0)
label_f0db5c:
    var_368 = x20
    var_360 = x8
    
    if ((zx.d(var_268[0]) & 1) != 0)
        operator delete(var_258)
else
label_f0dc2c:
    operator delete(x8_3)
    var_368 = x20
    var_360 = x8
    
    if ((zx.d(var_268[0]) & 1) != 0)
        operator delete(var_258)
int64_t x19_1 = *(Botan::EC_Group::data() + 0x1e0)
Botan::EC_Group::random_scalar(arg1 + 8)
void* x0_10 = Botan::EC_Group::data()
void* var_108
Botan::PointGFp_Base_Point_Precompute::mul(x0_10 + 0x190, &var_108, arg4, x0_10 + 0xe8)
Botan::PointGFp::get_affine_x()
Botan::PointGFp::get_affine_y()
uint64_t x26_1 = (x19_1 + 7) u>> 3
uint8_t* var_350
void* x19_2
uint8_t* x20_1
void* fp

if (x26_1 == 0)
    x19_2 = nullptr
    x20_1 = nullptr
    var_350 = nullptr
    fp = nullptr
else
    uint8_t* x0_13 = operator new(x26_1)
    x20_1 = x0_13
    memset(x0_13, 0, x26_1)
    uint8_t* x0_15 = operator new(x26_1)
    x19_2 = &x20_1[x26_1]
    fp = &x0_15[x26_1]
    var_350 = x0_15
    memset(x0_15, 0, x26_1)

void* var_1b8
Botan::BigInt::encode_1363(x20_1, x19_2 - x20_1, &var_1b8)
void* var_1e0
Botan::BigInt::encode_1363(var_350, fp - var_350, &var_1e0)
Botan::PointGFp_Var_Point_Precompute::mul(arg1 + 0x48, &var_108, arg4, 
    Botan::EC_Group::data() + 0xe8)
Botan::PointGFp::get_affine_x()
Botan::PointGFp::get_affine_y()
uint8_t* var_2d0
__builtin_memset(&var_2d0, 0, 0x18)
uint8_t* var_2e8
void* var_2e0_1
void* var_2c8_1
uint8_t* x24_1
void* x25_1

if (x26_1 == 0)
    x25_1 = nullptr
    x24_1 = nullptr
    __builtin_memset(&var_2e8, 0, 0x18)
else
    uint8_t* x0_24 = operator new(x26_1)
    x25_1 = &x0_24[x26_1]
    x24_1 = x0_24
    var_2d0 = x0_24
    void* var_2c0_1 = x25_1
    memset(x0_24, 0, x26_1)
    var_2c8_1 = x25_1
    __builtin_memset(&var_2e8, 0, 0x18)
    uint8_t* x0_26 = operator new(x26_1)
    void* x19_3 = &x0_26[x26_1]
    var_2e8 = x0_26
    void* var_2d8_1 = x19_3
    memset(x0_26, 0, x26_1)
    var_2e0_1 = x19_3

void* var_290
Botan::BigInt::encode_1363(x24_1, x25_1 - x24_1, &var_290)
uint8_t* x0_28 = var_2e8
void* var_2b8
Botan::BigInt::encode_1363(x0_28, var_2e0_1 - x0_28, &var_2b8)
uint64_t var_300
__builtin_memset(&var_300, 0, 0x18)
Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, std::__ndk1::allocator<uint8_t> >(
    &var_300, &var_2d0)
Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, std::__ndk1::allocator<uint8_t> >(
    &var_300, &var_2e8)
uint64_t x2_10 = var_300
var_d0 = 0
int16_t var_330 = 0
int64_t var_2f8
uint64_t var_e0
int128_t v0_1
int128_t v1
int128_t v2
int128_t v3
v0_1, v1, v2, v3 =
    Botan::KDF::derive_key(var_e0, arg3, x2_10, var_2f8 - x2_10, &var_d0 | 1, nullptr, &var_330 | 1)

if ((zx.d(var_330.b) & 1) == 0)
    if ((zx.d(var_d0.b) & 1) != 0)
        goto label_f0df28
    
    goto label_f0ddb4

void* var_320
v0_1, v1, v2, v3 = operator delete(var_320)

if ((zx.d(var_d0.b) & 1) != 0)
label_f0df28:
    v0_1, v1, v2, v3 = operator delete(var_c0)
    __builtin_memset(&var_330, 0, 0x18)
    
    if (arg3 != 0)
        goto label_f0ddc0
    
    goto label_f0df38

label_f0ddb4:
__builtin_memset(&var_330, 0, 0x18)
void* var_320_1
void* var_318
void* x8_14
void* x9_1
void* const x24_2

if (arg3 == 0)
label_f0df38:
    x8_14 = var_318
    x9_1 = nullptr
    x24_2 = nullptr
    
    if (0 != arg3)
    label_f0df4c:
        int64_t x10_3 = arg3 - x9_1
        
        if (x10_3 u< 8)
            goto label_f0df58
        
        int64_t x11_5 = x24_2 + x9_1
        int64_t x12_11 = x24_2 + arg3
        
        if (((x11_5 u< arg2 + arg3 ? 1 : 0) & (arg2 + x9_1 u< x12_11 ? 1 : 0) & 1) != 0
                || ((x11_5 u< x8_14 + arg3 ? 1 : 0) & (x8_14 + x9_1 u< x12_11 ? 1 : 0) & 1) != 0)
            goto label_f0df58
        
        int64_t i_8
        
        if (x10_3 u>= 0x20)
            i_8 = x10_3 & 0xffffffffffffffe0
            void* x12_13 = arg2 + x9_1 + 0x10
            int128_t* x13_10 = x24_2 + x9_1 + 0x10
            void* x14_8 = x8_14 + x9_1 + 0x10
            int64_t i_7 = i_8
            int64_t i
            
            do
                v0_1 = *(x12_13 - 0x10)
                v1 = *x12_13
                v2 = *(x14_8 - 0x10)
                v3 = *x14_8
                i = i_7
                i_7 -= 0x20
                x12_13 += 0x20
                x14_8 += 0x20
                x13_10[-1] = v2 ^ v0_1
                *x13_10 = v3 ^ v1
                x13_10 = &x13_10[2]
            while (i != 0x20)
            
            if (x10_3 != i_8)
                if ((x10_3 & 0x18) != 0)
                    goto label_f0e390
                
                x9_1 += i_8
            label_f0df58:
                void* i_4 = arg3 - x9_1
                char* x11_4 = x24_2 + x9_1
                char* x8_16 = x8_14 + x9_1
                char* x9_2 = arg2 + x9_1
                void* i_1
                
                do
                    char x12_9 = *x9_2
                    x9_2 = &x9_2[1]
                    char x13_6 = *x8_16
                    x8_16 = &x8_16[1]
                    i_1 = i_4
                    i_4 -= 1
                    *x11_4 = x13_6 ^ x12_9
                    x11_4 = &x11_4[1]
                while (i_1 != 1)
        else
            i_8 = 0
        label_f0e390:
            int64_t x12_14 = x10_3 & 0xfffffffffffffff8
            void* x15_6 = x9_1 + i_8
            x9_1 += x12_14
            void* x13_11 = arg2 + x15_6
            void* x14_9 = x8_14 + x15_6
            int64_t* x15_7 = x24_2 + x15_6
            int64_t i_5 = i_8 - x12_14
            int64_t i_2
            
            do
                v0_1.q = *x13_11
                x13_11 += 8
                v1.q = *x14_9
                x14_9 += 8
                i_2 = i_5
                i_5 += 8
                *x15_7 = (v1 ^ v0_1).q
                x15_7 = &x15_7[1]
            while (i_2 != -8)
            
            if (x10_3 != x12_14)
                goto label_f0df58
        goto label_f0df84
    
label_f0df84:
    uint8_t* x1_14 = var_2d0
    int64_t* result_1
    (*(*result_1 + 0x18))(result_1, x1_14, var_2c8_1 - x1_14)
    (*(*result_1 + 0x18))(result_1, arg2, arg3)
    uint8_t* x1_16 = var_2e8
    (*(*result_1 + 0x18))(result_1, x1_16, var_2e0_1 - x1_16)
    uint64_t x0_40 = (**result_1)()
    uint64_t var_348_1
    __builtin_memset(&var_348_1, 0, 0x18)
    uint64_t x23_1
    
    if (x0_40 == 0)
        x23_1 = 0
    label_f0e02c:
        (*(*result_1 + 0x20))(result_1, x23_1)
        int128_t var_90
        __builtin_memset(&var_90, 0, 0x20)
        int64_t var_a0_1 = (zx.o(0)).q
        __builtin_memset(&var_d0, 0, 0x28)
        Botan::DER_Encoder::start_cons(&var_d0, 0x10)
        Botan::DER_Encoder::add_object(
            Botan::DER_Encoder::add_object(
                Botan::DER_Encoder::encode(Botan::DER_Encoder::encode(&var_d0, &var_1b8, 2), 
                    &var_1e0, 2), 
                4, nullptr, var_348_1), 
            4, nullptr, var_330.q)
        Botan::DER_Encoder::end_cons()
        Botan::DER_Encoder::get_contents()
        void* x23_2 = var_90:8.q
        
        if (x23_2 != 0)
            int128_t var_80
            void* x21_1 = var_80.q
            void* x0_50
            
            if (x21_1 == x23_2)
                x0_50 = x23_2
            else
                do
                    x21_1 -= 0x38
                    sub_f230d4(&var_80:8, x21_1)
                while (x23_2 != x21_1)
                
                x0_50 = var_90:8.q
            
            var_80.q = x23_2
            operator delete(x0_50)
        
        int64_t x0_51 = var_a0_1
        
        if (x0_51 != 0)
            var_a0_1 = x0_51
            Botan::deallocate_memory(x0_51, var_90.q - x0_51, 1)
        
        int64_t* var_b0
        
        if (&var_d0 == var_b0)
            (*(*var_b0 + 0x20))()
        else if (var_b0 != 0)
            (*(*var_b0 + 0x28))()
        
        uint64_t x0_53 = var_348_1
        
        if (x0_53 != 0)
            uint64_t var_340_2 = x0_53
            operator delete(x0_53)
        
        void* x0_54 = var_330.q
        
        if (x0_54 != 0)
            void* var_328_2 = x0_54
            Botan::deallocate_memory(x0_54, var_320_1 - x0_54, 1)
        
        if (var_318 != 0)
            void* var_310_1 = var_318
            int64_t var_308
            Botan::deallocate_memory(var_318, var_308 - var_318, 1)
        
        uint64_t x0_56 = var_300
        
        if (x0_56 != 0)
            uint64_t var_2f8_1 = x0_56
            int64_t var_2f0
            Botan::deallocate_memory(x0_56, var_2f0 - x0_56, 1)
        
        uint8_t* x0_57 = var_2e8
        
        if (x0_57 != 0)
            uint8_t* var_2e0_2 = x0_57
            operator delete(x0_57)
        
        uint8_t* x0_58 = var_2d0
        
        if (x0_58 != 0)
            uint8_t* var_2c8_2 = x0_58
            operator delete(x0_58)
        
        void* x0_59 = var_2b8
        
        if (x0_59 != 0)
            void* var_2b0_1 = x0_59
            int64_t var_2a8
            Botan::deallocate_memory(x0_59, (var_2a8 - x0_59) s>> 2, 4)
        
        void* x0_60 = var_290
        
        if (x0_60 != 0)
            void* var_288_1 = x0_60
            int64_t var_280
            Botan::deallocate_memory(x0_60, (var_280 - x0_60) s>> 2, 4)
        
        Botan::PointGFp::~PointGFp()
        
        if (var_350 != 0)
            operator delete(var_350)
        
        if (x20_1 != 0)
            operator delete(x20_1)
        
        void* x0_63 = var_1e0
        
        if (x0_63 != 0)
            void* var_1d8_1 = x0_63
            int64_t var_1d0
            Botan::deallocate_memory(x0_63, (var_1d0 - x0_63) s>> 2, 4)
        
        void* x0_64 = var_1b8
        
        if (x0_64 != 0)
            void* var_1b0_1 = x0_64
            int64_t var_1a8
            Botan::deallocate_memory(x0_64, (var_1a8 - x0_64) s>> 2, 4)
        
        Botan::PointGFp::~PointGFp()
        void* x0_65 = var_108
        
        if (x0_65 != 0)
            void* var_100_1 = x0_65
            int64_t var_f8
            Botan::deallocate_memory(x0_65, (var_f8 - x0_65) s>> 2, 4)
        
        int64_t var_e0_1 = 0
        
        if (var_e0 != 0)
            (*(*var_e0 + 8))()
        
        int64_t* result = result_1
        int64_t var_d8 = 0
        
        if (result != 0)
            result = (*(*result + 0x10))()
        
        if (*(var_368 + 0x28) == x8_1)
            return result
    else
        if ((x0_40 & 0xffffffff80000000) == 0)
            uint64_t x0_42 = operator new(x0_40)
            uint64_t x19_5 = x0_42 + x0_40
            x23_1 = x0_42
            var_348_1 = x0_42
            uint64_t var_338_1 = x19_5
            memset(x0_42, 0, x0_40)
            uint64_t var_340_1 = x19_5
            goto label_f0e02c
        
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
label_f0ddc0:
    
    if ((arg3 & 0xffffffff80000000) == 0)
        void* x0_33 = Botan::allocate_memory(arg3, 1)
        void* x19_4 = x0_33 + arg3
        x24_2 = x0_33
        var_330.q = x0_33
        var_320_1 = x19_4
        int128_t v4_1
        int128_t v5_1
        int128_t v6_1
        int128_t v7_1
        v0_1, v1, v2, v3, v4_1, v5_1, v6_1, v7_1 = memset(x0_33, 0, arg3)
        x8_14 = var_318
        x9_1 = arg3 & 0xffffffffffffffe0
        void* var_328_1 = x19_4
        
        if (x9_1 != 0)
            int64_t x10_1 = 0
            
            if (x9_1 == 0x20 || x24_2 + 0x10 + x9_1 - 0x20 u< x24_2 + 0x10
                || x24_2 + 0x18 + x9_1 - 0x20 u< x24_2 + 0x18
                || x24_2 + 8 + x9_1 - 0x20 u< x24_2 + 8 || x24_2 + x9_1 - 0x20 u< x24_2)
            label_f0df04:
                
                do
                    void* x12_8 = arg2 + 0x10 + x10_1
                    void* x13_5 = x8_14 + x10_1
                    void* x14_4 = x24_2 + x10_1
                    x10_1 += 0x20
                    v1 = *(x13_5 + 0x10) ^ *x12_8
                    *x14_4 = *x13_5 ^ *(x12_8 - 0x10)
                    *(x14_4 + 0x10) = v1
                while (x9_1 != x10_1)
            else
                int64_t x13_3 = x24_2 + x9_1
                x10_1 = 0
                
                if (((x24_2 u< arg2 + x9_1 ? 1 : 0) & (x13_3 u> arg2 ? 1 : 0) & 1) != 0
                        || ((x24_2 u< x8_14 + x9_1 ? 1 : 0) & (x8_14 u< x13_3 ? 1 : 0) & 1) != 0)
                    goto label_f0df04
                
                int64_t i_9 = (((x9_1 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                int64_t x12_7 = 0
                x10_1 = i_9 << 5
                int64_t i_6 = i_9
                int64_t i_3
                
                do
                    void* x15_3 = arg2 + x12_7
                    void* x16_2 = x8_14 + x12_7
                    v0_1.q = *x15_3
                    v1.q = *(x15_3 + 8)
                    v2.q = *(x15_3 + 0x10)
                    v3.q = *(x15_3 + 0x18)
                    v0_1:8.q = *(x15_3 + 0x20)
                    v1:8.q = *(x15_3 + 0x28)
                    v2:8.q = *(x15_3 + 0x30)
                    v3:8.q = *(x15_3 + 0x38)
                    v4_1.q = *x16_2
                    v5_1.q = *(x16_2 + 8)
                    v6_1.q = *(x16_2 + 0x10)
                    v7_1.q = *(x16_2 + 0x18)
                    v4_1:8.q = *(x16_2 + 0x20)
                    v5_1:8.q = *(x16_2 + 0x28)
                    v6_1:8.q = *(x16_2 + 0x30)
                    v7_1:8.q = *(x16_2 + 0x38)
                    void* x15_4 = x24_2 + x12_7
                    i_3 = i_6
                    i_6 -= 2
                    x12_7 += 0x40
                    int128_t v16_1 = v4_1 ^ v0_1
                    int128_t v17_1 = v5_1 ^ v1
                    int128_t v18_1 = v6_1 ^ v2
                    int128_t v19_1 = v7_1 ^ v3
                    *x15_4 = v16_1.q
                    *(x15_4 + 8) = v17_1.q
                    *(x15_4 + 0x10) = v18_1.q
                    *(x15_4 + 0x18) = v19_1.q
                    *(x15_4 + 0x20) = v16_1:8.q
                    *(x15_4 + 0x28) = v17_1:8.q
                    *(x15_4 + 0x30) = v18_1:8.q
                    *(x15_4 + 0x38) = v19_1:8.q
                while (i_3 != 2)
                
                if (((x9_1 - 0x20) u>> 5) + 1 != i_9)
                    goto label_f0df04
        
        if (x9_1 != arg3)
            goto label_f0df4c
        
        goto label_f0df84
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
__stack_chk_fail()
noreturn
