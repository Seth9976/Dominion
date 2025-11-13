// 函数: sub_d37158
// 地址: 0xd37158
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0_1 = Botan::EC_Group::data()
int128_t var_160

if (*(x0_1 + 0x130) != 0)
    int64_t i_5 = *(x0_1 + 0x128)
    
    if (i_5 == -1)
        int64_t x9_1 = *(x0_1 + 0x110)
        int64_t x11_1 = *(x0_1 + 0x118)
        int64_t x10_1 = x11_1 - x9_1
        
        if (x11_1 == x9_1)
            i_5 = 0
        else
            int64_t x12_1
            
            x12_1 = x10_1 s>= 0 ? x10_1 : -1
            
            int64_t x11_2 = x9_1 - x11_1
            int64_t x12_2
            
            x12_2 = x12_1 s< 1 ? x12_1 : 1
            
            i_5 = x10_1 s>> 2
            int64_t x10_2
            
            x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
            
            int64_t i_9 = x12_2 * (x10_2 u>> 2)
            uint64_t x11_3 = 1
            int64_t i
            
            do
                int32_t x12_3 = *(x9_1 - 4 + (i_9 << 2))
                i = i_9
                i_9 -= 1
                x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
                i_5 -= x11_3
            while (i != 1)
        
        *(x0_1 + 0x128) = i_5
    
    if (i_5 u<= 1 && i_5 != 0)
        int32_t* x9_3 = *(x0_1 + 0x110)
        int32_t x10_4 = 0
        int64_t i_1
        
        do
            int32_t x11_4 = *x9_3
            x9_3 = &x9_3[1]
            i_1 = i_5
            i_5 -= 1
            int32_t x11_6 = (((x11_4 ^ 1) - 1) & not.d(x11_4)) s>> 0x1f
            x10_4 = (x10_4 & x11_6) | ((((x11_4 - 1) & not.d(x11_4)) s>> 0x1f | 1) & not.d(x11_6))
        while (i_1 != 1)
        
        if (x10_4 == 0)
            if ((arg6 & 0xff) u>= 5)
                void** x0_44 = __cxa_allocate_exception(0x20)
                int64_t x0_45
                int128_t v0_1
                x0_45, v0_1 = operator new(0x40)
                int64_t var_150_2 = x0_45
                var_160 = data_71b3f0
                __builtin_strncpy(x0_45, "Unexpected v param for ECDSA public key recovery", 0x31)
                *x0_44 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_44[1])
                *x0_44 = _vtable_for_Botan::Invalid_Argument + 0x10
                __cxa_throw(x0_44, _typeinfo_for_Botan::Invalid_Argument, 
                    Botan::Exception::~Exception)
                noreturn
            
            void* x0_3 = Botan::EC_Group::data()
            int64_t x28 = *(Botan::EC_Group::data() + 0x1e0)
            uint64_t x26 = *arg3
            int64_t x23_1 = arg3[1]
            int64_t fp = *(Botan::EC_Group::data() + 0x1e8)
            uint64_t x8_2 = x23_1 - x26
            int64_t var_78 = 0
            uint64_t var_70 = -1
            uint64_t x23_2
            
            if (fp u< x8_2 << 3)
                x23_2 = (fp + 7) u>> 3
            else
                x23_2 = x8_2
            
            uint32_t* result_1 = nullptr
            int64_t var_80 = 0
            int32_t var_68 = 1
            Botan::BigInt::binary_decode(&result_1, x26)
            
            if (fp u< x23_2 << 3)
                Botan::BigInt::operator>>=(&result_1)
            
            Botan::inverse_mod(arg4, Botan::EC_Group::data() + 0xe8)
            Botan::operator*(x0_3 + 0xe8, arg6 u>> 1 & 0x7f)
            int64_t var_148
            int64_t x2_1 = var_148
            uint32_t* x1_4 = var_160.q
            
            if (x2_1 == -1)
                int64_t x8_4 = var_160:8.q
                void* x9_6 = x8_4 - x1_4
                
                if (x8_4 == x1_4)
                    x2_1 = 0
                else
                    void* x11_7
                    
                    x11_7 = x9_6 s>= 0 ? x9_6 : -ffffffffffffffff
                    
                    void* x10_6 = x1_4 - x8_4
                    void* x11_8
                    
                    x11_8 = x11_7 s< 1 ? x11_7 : 1
                    
                    x2_1 = x9_6 s>> 2
                    void* x9_7
                    
                    x9_7 = x10_6 s> x9_6 ? x10_6 : x9_6
                    
                    int64_t i_6 = x11_8 * (x9_7 u>> 2)
                    uint64_t x10_7 = 1
                    int64_t i_2
                    
                    do
                        int32_t x11_9 = *(x1_4 - 4 + (i_6 << 2))
                        i_2 = i_6
                        i_6 -= 1
                        x10_7 = zx.q(x10_7.d) & zx.q(((x11_9 - 1) & not.d(x11_9)) s>> 0x1f)
                        x2_1 -= x10_7
                    while (i_2 != 1)
                
                int64_t var_148_1 = x2_1
            
            int32_t var_140
            Botan::BigInt::add2(arg4, x1_4, x2_1, zx.q(var_140))
            void* x0_15 = var_160.q
            
            if (x0_15 != 0)
                var_160:8.q = x0_15
                int64_t var_150
                Botan::deallocate_memory(x0_15, (var_150 - x0_15) s>> 2, 4)
            
            uint64_t x26_1 = (x28 + 7) u>> 3
            char* x0_17 = operator new(x26_1 + 1)
            memset(x0_17, 0, x26_1 + 1)
            *x0_17 = (arg6.b & 1) | 2
            void* var_d8
            Botan::BigInt::encode_1363(&x0_17[1], x26_1, &var_d8)
            Botan::OS2ECP(x0_17, x26_1 + 1, Botan::EC_Group::data())
            Botan::operator*(x0_3 + 0xe8, &var_160)
            int64_t var_178
            int64_t x24_2 = var_178
            
            if (x24_2 == -1)
                int64_t var_190
                int64_t var_188
                int64_t x9_9 = var_188 - var_190
                
                if (var_188 == var_190)
                    x24_2 = 0
                else
                    int64_t x11_11
                    
                    x11_11 = x9_9 s>= 0 ? x9_9 : -1
                    
                    int64_t x10_9 = var_190 - var_188
                    int64_t x11_12
                    
                    x11_12 = x11_11 s< 1 ? x11_11 : 1
                    
                    x24_2 = x9_9 s>> 2
                    int64_t x9_10
                    
                    x9_10 = x10_9 s> x9_9 ? x10_9 : x9_9
                    
                    int64_t i_7 = x11_12 * (x9_10 u>> 2)
                    uint64_t x10_10 = 1
                    int64_t i_3
                    
                    do
                        int32_t x11_13 = *(var_190 - 4 + (i_7 << 2))
                        i_3 = i_7
                        i_7 -= 1
                        x10_10 = zx.q(x10_10.d) & zx.q(((x11_13 - 1) & not.d(x11_13)) s>> 0x1f)
                        x24_2 -= x10_10
                    while (i_3 != 1)
                
                int64_t var_178_1 = x24_2
            
            Botan::PointGFp::~PointGFp()
            int128_t var_1f0
            
            if (x24_2 != 0)
                void** x0_48 = __cxa_allocate_exception(0x20)
                int64_t x0_49
                int128_t v0_2
                x0_49, v0_2 = operator new(0x30)
                v0_2 = data_71d3f0
                int64_t var_1e0_1 = x0_49
                __builtin_strncpy(x0_49, "Unable to recover ECDSA public key", 0x23)
                var_1f0 = v0_2
                *x0_48 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_48[1])
                *x0_48 = _vtable_for_Botan::Decoding_Error + 0x10
                __cxa_throw(x0_48, _typeinfo_for_Botan::Decoding_Error, 
                    Botan::Exception::~Exception)
                noreturn
            
            Botan::EC_Group::data()
            void* var_210
            Botan::PointGFp_Multi_Point_Precompute::PointGFp_Multi_Point_Precompute(&var_210, 
                &var_160)
            uint64_t x2_6 = var_70
            uint32_t* result_3 = result_1
            
            if (x2_6 == -1)
                void* x9_12 = var_80 - result_3
                
                if (var_80 == result_3)
                    x2_6 = 0
                else
                    void* x11_15
                    
                    x11_15 = x9_12 s>= 0 ? x9_12 : -ffffffffffffffff
                    
                    void* x10_11 = result_3 - var_80
                    void* x11_16
                    
                    x11_16 = x11_15 s< 1 ? x11_15 : 1
                    
                    x2_6 = x9_12 s>> 2
                    void* x9_13
                    
                    x9_13 = x10_11 s> x9_12 ? x10_11 : x9_12
                    
                    int64_t i_8 = x11_16 * (x9_13 u>> 2)
                    uint64_t x10_12 = 1
                    int64_t i_4
                    
                    do
                        int32_t x11_17 = *(result_3 - 4 + (i_8 << 2))
                        i_4 = i_8
                        i_8 -= 1
                        x10_12 = zx.q(x10_12.d) & zx.q(((x11_17 - 1) & not.d(x11_17)) s>> 0x1f)
                        x2_6 -= x10_12
                    while (i_4 != 1)
                
                uint64_t var_70_1 = x2_6
            
            Botan::BigInt::add2(x0_3 + 0xe8, result_3, x2_6, zx.q(var_68 != 1 ? 1 : 0))
            Botan::Modular_Reducer::reduce(Botan::EC_Group::data() + 0x138)
            void* x0_31 = var_1f0.q
            
            if (x0_31 != 0)
                var_1f0:8.q = x0_31
                int64_t var_1e0
                Botan::deallocate_memory(x0_31, (var_1e0 - x0_31) s>> 2, 4)
            
            Botan::PointGFp_Multi_Point_Precompute::multi_exp(&var_210, arg5)
            void* var_b0
            Botan::operator*(&var_b0, &var_1f0)
            Botan::PointGFp::~PointGFp()
            void* var_238
            
            if (var_238 != 0)
                void* var_230_1 = var_238
                int64_t var_228
                Botan::deallocate_memory(var_238, (var_228 - var_238) s>> 2, 4)
            
            void* x21_1 = var_210
            
            if (x21_1 != 0)
                int64_t var_208
                int64_t x20_1 = var_208
                void* x0_36
                
                if (x20_1 == x21_1)
                    x0_36 = x21_1
                else
                    do
                        x20_1 -= 0x88
                        Botan::PointGFp::~PointGFp()
                    while (x21_1 != x20_1)
                    
                    x0_36 = var_210
                
                void* var_208_1 = x21_1
                operator delete(x0_36)
            
            Botan::PointGFp::~PointGFp()
            operator delete(x0_17)
            void* x0_38 = var_d8
            
            if (x0_38 != 0)
                void* var_d0_1 = x0_38
                int64_t var_c8
                Botan::deallocate_memory(x0_38, (var_c8 - x0_38) s>> 2, 4)
            
            void* x0_39 = var_b0
            int64_t var_a0
            
            if (x0_39 != 0)
                Botan::deallocate_memory(x0_39, (var_a0 - x0_39) s>> 2, 4)
            uint32_t* result = result_1
            
            if (result == 0)
                return result
            
            uint32_t* result_2 = result
            return Botan::deallocate_memory(result, (var_78 - result) s>> 2, 4)

void** x0_40 = __cxa_allocate_exception(0x20)
int64_t x0_41
int128_t v0
x0_41, v0 = operator new(0x40)
int64_t var_150_1 = x0_41
var_160 = data_71a920
__builtin_strncpy(x0_41, "ECDSA public key recovery only supported for prime order groups", 0x40)
*x0_40 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_40[1])
*x0_40 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_40, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
