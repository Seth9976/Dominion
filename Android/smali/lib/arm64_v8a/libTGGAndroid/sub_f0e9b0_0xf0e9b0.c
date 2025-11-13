// 函数: sub_f0e9b0
// 地址: 0xf0e9b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t* x19 = arg5
uint64_t x8 = _ReadMSR(tpidr_el0)
int64_t x8_1 = *(x8 + 0x28)
int64_t i_19 = arg4
uint64_t x26 = arg3
Botan::PointGFp* x21 = *(arg1 + 8) + 0x68
void* x0_1 = Botan::EC_Group::data()
int64_t x27 = *(Botan::EC_Group::data() + 0x1e0)
*arg2 = 0
int16_t var_f0 = 0
Botan::HashFunction::create_or_throw(arg1 + 0x18, &var_f0)
void* var_e0

if ((zx.d(var_f0.b) & 1) != 0)
    operator delete(var_e0)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "KDF2(", arg1 + 0x18)
char var_180
int128_t* x0_7
int128_t v0
x0_7, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_180)
void* x8_4 = x0_7[1].q
var_f0.o = *x0_7
__builtin_memset(x0_7, 0, 0x18)
int16_t var_1b8 = 0
Botan::KDF::create_or_throw(&var_f0, &var_1b8)

if ((zx.d(var_1b8.b) & 1) == 0)
    if ((zx.d(var_f0.b) & 1) != 0)
        goto label_f0eb00
    
    goto label_f0eaa4

void* var_1a8
operator delete(var_1a8)
void* var_170

if ((zx.d(var_f0.b) & 1) == 0)
label_f0eaa4:
    
    if ((zx.d(var_180) & 1) != 0)
        operator delete(var_170)
else
label_f0eb00:
    operator delete(x8_4)
    
    if ((zx.d(var_180) & 1) != 0)
        operator delete(var_170)

uint64_t x23_1 = (x27 + 7) u>> 3
int64_t* var_190
int64_t* result_1

if ((1 | (0x1fffffffffffffff & x23_1) << 1) + (**result_1)() u<= i_19)
    __builtin_memset(&var_1b8, 0, 0x18)
    int32_t var_198_1 = 1
    int32_t var_1c0_1 = 1
    uint64_t var_210
    __builtin_memset(&var_210, 0, 0x48)
    int64_t var_1a0_1 = -1
    int64_t var_1c8_1 = -1
    Botan::BER_Decoder::BER_Decoder(&var_180, x26)
    Botan::BER_Decoder::start_cons(&var_180, 0x10)
    Botan::BER_Decoder::decode(&var_f0, &var_1b8, 2)
    void* var_1e0
    Botan::BER_Decoder::decode(&var_f0, &var_1e0, 2)
    uint64_t var_1f8
    Botan::BER_Decoder::decode(&var_f0, &var_1f8, 4, 4)
    Botan::BER_Decoder::decode(&var_f0, &var_210, 4, 4)
    Botan::BER_Decoder::end_cons()
    Botan::BER_Decoder::verify_end()
    void* var_c0_1 = nullptr
    int64_t* var_c0
    
    if (var_c0 != 0)
        (*(*var_c0 + 0x38))()
    
    if (x8_4 != 0)
        void* var_d8_1 = x8_4
        int64_t var_d0
        Botan::deallocate_memory(x8_4, var_d0 - x8_4, 1)
    
    int64_t var_150_1 = 0
    int64_t* var_150
    
    if (var_150 != 0)
        (*(*var_150 + 0x38))()
    
    if (var_170 != 0)
        void* var_168_1 = var_170
        int64_t var_160
        Botan::deallocate_memory(var_170, var_160 - var_170, 1)
    
    char* var_228
    __builtin_memset(&var_228, 0, 0x18)
    int64_t* var_d0_1 = nullptr
    __builtin_memset(&var_c0_1, 0, 0x30)
    var_180.q = &_vtable_for_std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>{for `std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>'}
    int64_t* var_178_1 = &var_228
    char* var_160_1 = &var_180
    sub_f2410c(&var_180, &var_f0)
    
    if (&var_180 == var_160_1)
        (*(*var_160_1 + 0x20))()
    else if (var_160_1 != 0)
        (*(*var_160_1 + 0x28))()
    
    Botan::DER_Encoder::start_cons(&var_f0, 0x10)
    Botan::DER_Encoder::add_object(
        Botan::DER_Encoder::add_object(
            Botan::DER_Encoder::encode(Botan::DER_Encoder::encode(&var_f0, &var_1b8, 2), &var_1e0, 
                2), 
            4, nullptr, var_1f8), 
        4, nullptr, var_210)
    Botan::DER_Encoder::end_cons()
    int128_t var_b0
    void* x20_1 = var_b0:8.q
    
    if (x20_1 != 0)
        int128_t var_a0
        void* x27_1 = var_a0.q
        void* x0_32
        
        if (x27_1 == x20_1)
            x0_32 = x20_1
        else
            do
                x27_1 -= 0x38
                sub_f230d4(&var_a0:8, x27_1)
            while (x20_1 != x27_1)
            
            x0_32 = var_b0:8.q
        
        var_a0.q = x20_1
        operator delete(x0_32)
    
    void* x0_33 = var_c0_1
    
    if (x0_33 != 0)
        void* var_b8_1 = x0_33
        Botan::deallocate_memory(x0_33, var_b0.q - x0_33, 1)
    
    if (&var_f0 == var_d0_1)
        (*(*var_d0_1 + 0x20))()
    else if (var_d0_1 != 0)
        (*(*var_d0_1 + 0x28))()
    
    char* x0_35 = var_228
    int64_t var_220
    int64_t var_200
    char* var_220_1
    
    if (var_220 - x0_35 != i_19)
    label_f0edcc:
        __builtin_memset(x19, 0, 0x18)
        
        if (x0_35 != 0)
            var_220_1 = x0_35
            operator delete(x0_35)
    else
        var_f0.b = 0
        
        if (i_19 != 0)
            char* x8_32 = x0_35
            int64_t i
            
            do
                char x9_1 = *x8_32
                x8_32 = &x8_32[1]
                char x10_1 = *x26
                x26 += 1
                i = i_19
                i_19 -= 1
                var_f0.b |= x10_1 ^ x9_1
            while (i != 1)
        
        if (zx.d(var_f0.b) != 0)
            goto label_f0edcc
        
        Botan::PointGFp::PointGFp(&var_f0, Botan::EC_Group::data(), &var_1b8)
        *(arg1 + 0x10)
        Botan::PointGFp::randomize_repr(&var_f0)
        
        if ((Botan::PointGFp::on_the_curve() & 1) == 0)
            __builtin_memset(x19, 0, 0x18)
        else if (*(x0_1 + 0x130) == 0)
        label_f0f054:
            *(arg1 + 8)
            Botan::EC_Group::blinded_var_point_multiply(x21, &var_f0, 
                Botan::EC_PrivateKey::private_value(), *(arg1 + 0x10))
            Botan::PointGFp::get_affine_x()
            Botan::PointGFp::get_affine_y()
            uint8_t* var_290
            __builtin_memset(&var_290, 0, 0x18)
            uint8_t* var_2a8
            void* var_2a0_1
            void* var_298_1
            void* var_288_1
            void* var_280_1
            uint8_t* x0_54
            void* x8_50
            
            if (x23_1 == 0)
                x8_50 = nullptr
                x0_54 = nullptr
                __builtin_memset(&var_2a8, 0, 0x18)
            else
                uint8_t* x0_51 = Botan::allocate_memory(x23_1, 1)
                void* x20_3 = &x0_51[x23_1]
                var_290 = x0_51
                var_280_1 = x20_3
                memset(x0_51, 0, x23_1)
                var_288_1 = x20_3
                __builtin_memset(&var_2a8, 0, 0x18)
                uint8_t* x0_53 = Botan::allocate_memory(x23_1, 1)
                void* x20_4 = &x0_53[x23_1]
                var_2a8 = x0_53
                var_298_1 = x20_4
                memset(x0_53, 0, x23_1)
                x0_54 = var_290
                x8_50 = var_288_1
                var_2a0_1 = x20_4
            
            void* var_250
            Botan::BigInt::encode_1363(x0_54, x8_50 - x0_54, &var_250)
            uint8_t* x0_55 = var_2a8
            void* var_278
            Botan::BigInt::encode_1363(x0_55, var_2a0_1 - x0_55, &var_278)
            uint64_t var_2c0
            __builtin_memset(&var_2c0, 0, 0x18)
            Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, Botan::secure_allocator<uint8_t> >(
                &var_2c0, &var_290)
            Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, Botan::secure_allocator<uint8_t> >(
                &var_2c0, &var_2a8)
            uint64_t x2_9 = var_2c0
            int64_t var_208
            uint8_t* x1_28 = var_208 - var_210
            int16_t var_2f0 = 0
            int16_t var_308 = 0
            int64_t var_2b8
            int128_t v0_1
            int128_t v1_1
            int128_t v2_1
            int128_t v3_1
            int128_t v4_1
            int128_t v5_1
            int128_t v6_1
            int128_t v7_1
            v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 = Botan::KDF::derive_key(var_190, x1_28, 
                x2_9, var_2b8 - x2_9, &var_2f0 | 1, nullptr, &var_308 | 1)
            void* var_2f8
            
            if ((zx.d(var_308.b) & 1) != 0)
                v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 = operator delete(var_2f8)
            void* var_2e0
            
            if ((zx.d(var_2f0.b) & 1) != 0)
                v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 = operator delete(var_2e0)
            
            void* var_2d8
            void* x9_12 = var_2d8
            uint64_t x8_55 = var_210
            int64_t var_2d0
            void* x12_11 = var_2d0 - x9_12
            void* x11_12 = x12_11 & 0xffffffffffffffe0
            
            if (x11_12 != 0)
                int64_t x13_4 = 0
                
                if (x11_12 == 0x20 || x8_55 + 0x18 + x11_12 - 0x20 u< x8_55 + 0x18
                        || x8_55 + 0x10 + x11_12 - 0x20 u< x8_55 + 0x10
                        || x8_55 + 8 + x11_12 - 0x20 u< x8_55 + 8
                        || x8_55 + x11_12 - 0x20 u< x8_55)
                    goto label_f0f274
                
                if (x8_55 u>= x9_12 + x11_12 || x9_12 u>= x8_55 + x11_12)
                    int64_t i_21 = (((x11_12 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                    x13_4 = i_21 << 5
                    int64_t i_17 = i_21
                    void* x17_2 = x9_12
                    uint64_t x0_62 = x8_55
                    int64_t i_1
                    
                    do
                        v0_1.q = *x0_62
                        v1_1.q = *(x0_62 + 8)
                        v2_1.q = *(x0_62 + 0x10)
                        v3_1.q = *(x0_62 + 0x18)
                        v0_1:8.q = *(x0_62 + 0x20)
                        v1_1:8.q = *(x0_62 + 0x28)
                        v2_1:8.q = *(x0_62 + 0x30)
                        v3_1:8.q = *(x0_62 + 0x38)
                        v4_1.q = *x17_2
                        v5_1.q = *(x17_2 + 8)
                        v6_1.q = *(x17_2 + 0x10)
                        v7_1.q = *(x17_2 + 0x18)
                        v4_1:8.q = *(x17_2 + 0x20)
                        v5_1:8.q = *(x17_2 + 0x28)
                        v6_1:8.q = *(x17_2 + 0x30)
                        v7_1:8.q = *(x17_2 + 0x38)
                        x17_2 += 0x40
                        i_1 = i_17
                        i_17 -= 2
                        int128_t v16_1 = v4_1 ^ v0_1
                        int128_t v17_1 = v5_1 ^ v1_1
                        int128_t v18_1 = v6_1 ^ v2_1
                        int128_t v19_1 = v7_1 ^ v3_1
                        *x0_62 = v16_1.q
                        *(x0_62 + 8) = v17_1.q
                        *(x0_62 + 0x10) = v18_1.q
                        *(x0_62 + 0x18) = v19_1.q
                        *(x0_62 + 0x20) = v16_1:8.q
                        *(x0_62 + 0x28) = v17_1:8.q
                        *(x0_62 + 0x30) = v18_1:8.q
                        *(x0_62 + 0x38) = v19_1:8.q
                        x0_62 += 0x40
                    while (i_1 != 2)
                    
                    if (((x11_12 - 0x20) u>> 5) + 1 != i_21)
                        goto label_f0f274
                else
                    x13_4 = 0
                label_f0f274:
                    void* i_16 = x13_4 - x11_12
                    void* x13_8 = x9_12 + x13_4 + 0x10
                    void* x15_4 = x8_55 + x13_4 + 0x10
                    void* i_2
                    
                    do
                        v2_1 = *(x13_8 - 0x10)
                        v3_1 = *x13_8
                        i_2 = i_16
                        i_16 += 0x20
                        x13_8 += 0x20
                        v1_1 = v3_1 ^ *x15_4
                        *(x15_4 - 0x10) ^= v2_1
                        *x15_4 = v1_1
                        x15_4 += 0x20
                    while (i_2 != -0x20)
            
            if (x11_12 != x12_11)
                void* x13_9 = x12_11 - x11_12
                
                if (x13_9 u< 8 || (x8_55 + x11_12 u< var_2d0 && x9_12 + x11_12 u< x8_55 + x12_11))
                    goto label_f0f384
                
                void* i_20
                
                if (x13_9 u>= 0x20)
                    i_20 = x13_9 & 0xffffffffffffffe0
                    void* x14_5 = x9_12 + x11_12 + 0x10
                    void* x15_6 = x8_55 + x11_12 + 0x10
                    void* i_18 = i_20
                    void* i_3
                    
                    do
                        v0_1 = *(x14_5 - 0x10)
                        v1_1 = *x14_5
                        x14_5 += 0x20
                        i_3 = i_18
                        i_18 -= 0x20
                        v1_1 ^= *x15_6
                        *(x15_6 - 0x10) ^= v0_1
                        *x15_6 = v1_1
                        x15_6 += 0x20
                    while (i_3 != 0x20)
                    
                    if (x13_9 != i_20)
                        if ((x13_9 & 0x18) != 0)
                            goto label_f0f344
                        
                        x11_12 += i_20
                    label_f0f384:
                        void* x9_13 = x11_12 + x9_12
                        void* i_14 = x9_13 - var_2d0
                        void* x8_56 = x8_55 + x11_12
                        void* i_4
                        
                        do
                            char x11_13 = *x9_13
                            x9_13 += 1
                            i_4 = i_14
                            i_14 += 1
                            *x8_56 ^= x11_13
                            x8_56 += 1
                        while (i_4 u< -1)
                else
                    i_20 = nullptr
                label_f0f344:
                    void* x14_6 = x13_9 & 0xfffffffffffffff8
                    void* x16_3 = i_20 + x11_12
                    x11_12 += x14_6
                    void* x15_7 = x9_12 + x16_3
                    int64_t* x16_4 = x8_55 + x16_3
                    void* i_15 = i_20 - x14_6
                    void* i_5
                    
                    do
                        v0_1.q = *x15_7
                        x15_7 += 8
                        v1_1.q = *x16_4
                        i_5 = i_15
                        i_15 += 8
                        *x16_4 = (v1_1 ^ v0_1).q
                        x16_4 = &x16_4[1]
                    while (i_5 != -8)
                    
                    if (x13_9 != x14_6)
                        goto label_f0f384
            
            uint8_t* x1_30 = var_290
            (*(*result_1 + 0x18))(result_1, x1_30, var_288_1 - x1_30)
            uint64_t x1_31 = var_210
            (*(*result_1 + 0x18))(result_1, x1_31, var_208 - x1_31)
            uint8_t* x1_32 = var_2a8
            (*(*result_1 + 0x18))(result_1, x1_32, var_2a0_1 - x1_32)
            Botan::Buffered_Computation::final()
            char* x21_1 = var_2f0.q
            uint64_t x22_1 = var_1f8
            int64_t i_10
            int128_t v0_2
            i_10, v0_2 = (**result_1)()
            var_308.b = 0
            
            if (i_10 != 0)
                int64_t i_6
                
                do
                    char x8_65 = *x21_1
                    x21_1 = &x21_1[1]
                    char x9_17 = *x22_1
                    x22_1 += 1
                    i_6 = i_10
                    i_10 -= 1
                    var_308.b |= x9_17 ^ x8_65
                while (i_6 != 1)
            
            uint32_t x8_68 = zx.d(var_308.b)
            
            if (((x8_68 - 1) & not.d(x8_68) & 0x80) != 0)
                *arg2 = 0xff
                *x19 = var_210.o
                x19[2] = var_200
                x19 = &var_210
            
            void* x0_68 = var_2f0.q
            __builtin_memset(x19, 0, 0x18)
            
            if (x0_68 != 0)
                void* var_2e8_1 = x0_68
                Botan::deallocate_memory(x0_68, var_2e0 - x0_68, 1)
            
            if (var_2d8 != 0)
                void* var_2d0_1 = var_2d8
                int64_t var_2c8
                Botan::deallocate_memory(var_2d8, var_2c8 - var_2d8, 1)
            
            uint64_t x0_70 = var_2c0
            
            if (x0_70 != 0)
                uint64_t var_2b8_1 = x0_70
                int64_t var_2b0
                Botan::deallocate_memory(x0_70, var_2b0 - x0_70, 1)
            
            uint8_t* x0_71 = var_2a8
            
            if (x0_71 != 0)
                uint8_t* var_2a0_2 = x0_71
                Botan::deallocate_memory(x0_71, var_298_1 - x0_71, 1)
            
            uint8_t* x0_72 = var_290
            
            if (x0_72 != 0)
                uint8_t* var_288_2 = x0_72
                Botan::deallocate_memory(x0_72, var_280_1 - x0_72, 1)
            
            void* x0_73 = var_278
            
            if (x0_73 != 0)
                void* var_270_1 = x0_73
                int64_t var_268
                Botan::deallocate_memory(x0_73, (var_268 - x0_73) s>> 2, 4)
            
            void* x0_74 = var_250
            
            if (x0_74 != 0)
                void* var_248_1 = x0_74
                int64_t var_240
                Botan::deallocate_memory(x0_74, (var_240 - x0_74) s>> 2, 4)
            
            Botan::PointGFp::~PointGFp()
        else
            int64_t i_11 = *(x0_1 + 0x128)
            
            if (i_11 == -1)
                int64_t x9_5 = *(x0_1 + 0x110)
                int64_t x11_2 = *(x0_1 + 0x118)
                int64_t x10_2 = x11_2 - x9_5
                
                if (x11_2 == x9_5)
                    i_11 = 0
                else
                    int64_t x12_1
                    
                    x12_1 = x10_2 s>= 0 ? x10_2 : -1
                    
                    int64_t x11_3 = x9_5 - x11_2
                    int64_t x12_2
                    
                    x12_2 = x12_1 s< 1 ? x12_1 : 1
                    
                    i_11 = x10_2 s>> 2
                    int64_t x10_3
                    
                    x10_3 = x11_3 s> x10_2 ? x11_3 : x10_2
                    
                    int64_t i_13 = x12_2 * (x10_3 u>> 2)
                    uint64_t x11_4 = 1
                    int64_t i_7
                    
                    do
                        int32_t x12_3 = *(x9_5 - 4 + (i_13 << 2))
                        i_7 = i_13
                        i_13 -= 1
                        x11_4 = zx.q(x11_4.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
                        i_11 -= x11_4
                    while (i_7 != 1)
                
                *(x0_1 + 0x128) = i_11
            
            if (i_11 u<= 1)
                if (i_11 == 0)
                    goto label_f0f054
                
                int32_t* x9_7 = *(x0_1 + 0x110)
                int32_t x10_5 = 0
                int64_t i_8
                
                do
                    int32_t x11_5 = *x9_7
                    x9_7 = &x9_7[1]
                    i_8 = i_11
                    i_11 -= 1
                    int32_t x11_7 = (((x11_5 ^ 1) - 1) & not.d(x11_5)) s>> 0x1f
                    x10_5 = (x10_5 & x11_7)
                        | ((((x11_5 - 1) & not.d(x11_5)) s>> 0x1f | 1) & not.d(x11_7))
                while (i_8 != 1)
                
                if (x10_5 s< 1)
                    goto label_f0f054
                
                goto label_f0efc8
            
        label_f0efc8:
            Botan::operator*(x0_1 + 0x110, &var_f0)
            int64_t var_108
            
            if (var_108 == -1)
                int64_t var_120
                int64_t var_118
                int64_t x9_8 = var_118 - var_120
                
                if (var_118 == var_120)
                    int64_t var_108_2 = 0
                    Botan::PointGFp::~PointGFp()
                    __builtin_memset(x19, 0, 0x18)
                else
                    int64_t x11_8
                    
                    x11_8 = x9_8 s>= 0 ? x9_8 : -1
                    
                    int64_t x10_8 = var_120 - var_118
                    int64_t x11_9
                    
                    x11_9 = x11_8 s< 1 ? x11_8 : 1
                    
                    int64_t x24_2 = x9_8 s>> 2
                    int64_t x9_9
                    
                    x9_9 = x10_8 s> x9_8 ? x10_8 : x9_8
                    
                    int64_t i_12 = x11_9 * (x9_9 u>> 2)
                    uint64_t x10_9 = 1
                    int64_t i_9
                    
                    do
                        int32_t x11_10 = *(var_120 - 4 + (i_12 << 2))
                        i_9 = i_12
                        i_12 -= 1
                        x10_9 = zx.q(x10_9.d) & zx.q(((x11_10 - 1) & not.d(x11_10)) s>> 0x1f)
                        x24_2 -= x10_9
                    while (i_9 != 1)
                    int64_t var_108_1 = x24_2
                    Botan::PointGFp::~PointGFp()
                    
                    if (x24_2 != 0)
                        goto label_f0f054
                    
                    __builtin_memset(x19, 0, 0x18)
            else
                Botan::PointGFp::~PointGFp()
                
                if (var_108 != 0)
                    goto label_f0f054
                
                __builtin_memset(x19, 0, 0x18)
        
        Botan::PointGFp::~PointGFp()
        x0_35 = var_228
        
        if (x0_35 != 0)
            var_220_1 = x0_35
            operator delete(x0_35)
    uint64_t x0_36 = var_210
    
    if (x0_36 != 0)
        uint64_t var_208_1 = x0_36
        Botan::deallocate_memory(x0_36, var_200 - x0_36, 1)
    
    uint64_t x0_37 = var_1f8
    
    if (x0_37 != 0)
        uint64_t var_1f0_1 = x0_37
        int64_t var_1e8
        Botan::deallocate_memory(x0_37, var_1e8 - x0_37, 1)
    
    void* x0_38 = var_1e0
    
    if (x0_38 != 0)
        void* var_1d8_1 = x0_38
        int64_t var_1d0
        Botan::deallocate_memory(x0_38, (var_1d0 - x0_38) s>> 2, 4)
    
    void* x0_39 = var_1b8.q
    
    if (x0_39 != 0)
        void* var_1b0_1 = x0_39
        int64_t var_1a8_1
        Botan::deallocate_memory(x0_39, (var_1a8_1 - x0_39) s>> 2, 4)
else
    __builtin_memset(x19, 0, 0x18)

int64_t var_190_1 = 0

if (var_190 != 0)
    (*(*var_190 + 8))()

int64_t* result = result_1
int64_t var_188 = 0

if (result != 0)
    result = (*(*result + 0x10))()

if (*(x8 + 0x28) == x8_1)
    return result

__stack_chk_fail()
noreturn
