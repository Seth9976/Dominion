// 函数: _ZN5Botan19generate_dsa_primesERNS_21RandomNumberGeneratorERNS_6BigIntES3_mmRKNSt6__ndk16vectorIhNS4_9allocatorIhEEEEm
// 地址: 0xd17b54
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_1c8
int128_t var_1a0
int128_t var_170
int128_t var_140
int128_t var_d0
char var_80

if (arg5 == 0x100)
    if ((arg4 & 0xfffffffffffffbff) != 0x800)
    label_d17d60:
        void** x0_15 = __cxa_allocate_exception(0x20)
        std::__ndk1::to_string(arg4)
        int128_t* x0_18
        int128_t v0_1
        x0_18, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
            &var_1c8, nullptr)
        int64_t var_190_1 = x0_18[1].q
        var_1a0 = *x0_18
        __builtin_memset(x0_18, 0, 0x18)
        int128_t* x0_20
        int128_t v0_2
        x0_20, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_1a0)
        int64_t var_160_1 = x0_20[1].q
        var_170 = *x0_20
        __builtin_memset(x0_20, 0, 0x18)
        std::__ndk1::to_string(arg5)
        uint64_t x1_7
        uint64_t var_70
        
        if ((zx.d(var_80) & 1) == 0)
            x1_7 = &var_80 | 1
        else
            x1_7 = var_70
        int128_t* x0_23
        int128_t v0_3
        x0_23, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_170, x1_7)
        int64_t var_c0_1 = x0_23[1].q
        var_d0 = *x0_23
        __builtin_memset(x0_23, 0, 0x18)
        int128_t* x0_25
        int128_t v0_4
        x0_25, v0_4 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_d0)
        int64_t var_130_1 = x0_25[1].q
        var_140 = *x0_25
        __builtin_memset(x0_25, 0, 0x18)
        *x0_15 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_15[1])
        *x0_15 = _vtable_for_Botan::Invalid_Argument + 0x10
        __cxa_throw(x0_15, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
        noreturn
else if (arg5 == 0xe0)
    if (arg4 != 0x800)
        goto label_d17d60
else if (arg5 != 0xa0 || arg4 != 0x400)
    goto label_d17d60

if (arg5 u> (*(arg6 + 8) - *arg6) << 3)
    void** x0_61 = __cxa_allocate_exception(0x20)
    std::__ndk1::to_string(arg5)
    int128_t* x0_64
    int128_t v0_6
    x0_64, v0_6 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        &var_170, nullptr)
    int64_t var_c0_2 = x0_64[1].q
    var_d0 = *x0_64
    __builtin_memset(x0_64, 0, 0x18)
    int128_t* x0_66
    int128_t v0_7
    x0_66, v0_7 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_d0)
    int64_t var_130_2 = x0_66[1].q
    var_140 = *x0_66
    __builtin_memset(x0_66, 0, 0x18)
    *x0_61 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_61[1])
    *x0_61 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_61, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

std::__ndk1::to_string(arg5)
int128_t* x0_2
int128_t v0
x0_2, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_140, nullptr)
void* x8_3 = x0_2[1].q
var_80.o = *x0_2
__builtin_memset(x0_2, 0, 0x18)
void* var_130

if ((zx.d(var_140.b) & 1) != 0)
    operator delete(var_130)

var_140.w = 0
Botan::HashFunction::create_or_throw(&var_80, &var_140)

if ((zx.d(var_140.b) & 1) != 0)
    operator delete(var_130)

int64_t* var_88
int64_t x0_7 = (**var_88)()
char* var_a0_1
__builtin_memset(&var_a0_1, 0, 0x18)
int64_t x27 = *arg6
int64_t x8_8 = *(arg6 + 8)
uint64_t x28 = x8_8 - x27
void* var_1b8
void* var_190
void* var_160
void* var_c0
void* var_98_1
void* x22_1
char* x26_1

if (x8_8 == x27)
    x22_1 = nullptr
    x26_1 = nullptr
label_d17cb0:
    (*(*var_88 + 0x18))(var_88, x26_1, x22_1 - x26_1)
    Botan::Buffered_Computation::final()
    Botan::BigInt::binary_decode(arg3, var_140.q)
    void* x0_13 = var_140.q
    
    if (x0_13 != 0)
        var_140:8.q = x0_13
        Botan::deallocate_memory(x0_13, var_130 - x0_13, 1)
    
    int64_t x8_13 = *arg3
    uint64_t x22_2 = (arg5 - 1) u>> 5
    int64_t x9_3 = (*(arg3 + 8) - x8_13) s>> 2
    int32_t x25_1 = 1 << (arg5 - 1).d
    
    if (x9_3 u<= x22_2)
        int64_t x10_2 = *(arg3 + 0x10)
        *(arg3 + 0x18) = -1
        
        if (x22_2 u< (x10_2 - x8_13) s>> 2)
            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg3)
        else if (((x22_2 + 1) & 0xffffffffffffff8) + 8 u> x9_3)
            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg3)
        else if (((x22_2 + 1) & 0xffffffffffffff8) + 8 u< x9_3)
            *(arg3 + 8) = x8_13 + ((((x22_2 + 1) & 0xffffffffffffff8) + 8) << 2)
    else
        int32_t x8_14 = *(x8_13 + (x22_2 << 2))
        *(arg3 + 0x18) = -1
        x25_1 |= x8_14
    
    *(*arg3 + (x22_2 << 2)) = x25_1
    int32_t* x8_25 = *arg3
    int32_t x22_3
    
    if (*(arg3 + 8) == x8_25)
        int64_t x10_9 = *(arg3 + 0x10)
        *(arg3 + 0x18) = -1
        
        if (x10_9 == x8_25)
            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg3)
            x22_3 = 1
        else
            x22_3 = 1
            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg3)
    else
        int32_t x8_26 = *x8_25
        *(arg3 + 0x18) = -1
        x22_3 = x8_26 | 1
    
    **arg3 = x22_3
    int32_t x19_1
    
    if ((Botan::is_prime(arg3, arg1, 0x80, true) & 1) == 0)
        x19_1 = 0
    label_d18350:
        char* x0_57 = var_a0_1
        
        if (x0_57 != 0)
            char* var_98_3 = x0_57
            operator delete(x0_57)
        
        int64_t var_88_1 = 0
        
        if (var_88 != 0)
            (*(*var_88 + 0x10))()
        
        if ((zx.d(var_80) & 1) != 0)
            operator delete(x8_3)
        
        return zx.q(x19_1)
    
    int64_t x27_2 = x0_7 << 3
    uint64_t x26_2 = (arg4 - 1) u/ x27_2
    int64_t var_b8_1 = -1
    uint64_t x25_2 = (x26_2 + 1) * x0_7
    int32_t var_b0_1 = 1
    void* var_e8_1
    __builtin_memset(&var_e8_1, 0, 0x30)
    
    if (x25_2 == 0)
        goto label_d17fa0
    
    if ((x25_2 & 0xffffffff80000000) == 0)
        void* x0_34 = operator new(x25_2)
        void* x28_1 = x0_34 + x25_2
        var_e8_1 = x0_34
        void* var_d8_1 = x28_1
        memset(x0_34, 0, x25_2)
        void* var_e0_1 = x28_1
    label_d17fa0:
        Botan::operator*(arg3, 2)
        Botan::Modular_Reducer::Modular_Reducer(&var_140)
        void* x0_37 = var_170.q
        
        if (x0_37 != 0)
            var_170:8.q = x0_37
            Botan::deallocate_memory(x0_37, (var_160 - x0_37) s>> 2, 4)
        
        uint64_t x28_2 = (arg4 - 1) u>> 5
        int64_t x24_1 = 0
        int32_t x22_5 = 1 << (arg4 - 1).d
        
        while (true)
            int64_t fp_1 = 0
            
            do
                void* i = not.q(var_a0_1) + var_98_1
                
                while (i != -1)
                    char* x9_11 = var_a0_1
                    int32_t x10_11 = zx.d(*(x9_11 + i)) + 1
                    *(x9_11 + i) = x10_11.b
                    i -= 1
                    
                    if ((x10_11 & 0x100) == 0)
                        break
                
                char* x1_15 = var_a0_1
                (*(*var_88 + 0x18))(var_88, x1_15, var_98_1 - x1_15)
                (*(*var_88 + 0x20))(var_88, var_e8_1 + (x26_2 - fp_1) * x0_7)
                fp_1 += 1
            while (x26_2 u>= fp_1)
            
            void* x0_53
            void* var_118
            
            if (x24_1 u< arg7)
            label_d18008:
                x24_1 += 1
                
                if (x24_1 == arg4 << 2)
                    x19_1 = 0
                    x0_53 = var_118
                    
                    if (x0_53 == 0)
                        break
                else
                    continue
            else
                Botan::BigInt::binary_decode(&var_d0, 
                    var_e8_1 + x0_7 + (-1 ^ ((arg4 - 1) u% x27_2) u>> 3))
                int64_t x8_42 = var_d0.q
                int64_t x9_17 = (var_d0:8.q - x8_42) s>> 2
                int32_t x9_18
                
                if (x9_17 u<= x28_2)
                    int64_t var_b8_3 = -1
                    
                    if (x28_2 u< (var_c0 - x8_42) s>> 2)
                        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                            &var_d0)
                        x9_18 = x22_5
                    else if (((x28_2 + 1) & 0xffffffffffffff8) + 8 u<= x9_17)
                        x9_18 = x22_5
                        
                        if (((x28_2 + 1) & 0xffffffffffffff8) + 8 u< x9_17)
                            x9_18 = x22_5
                            var_d0:8.q = x8_42 + ((((x28_2 + 1) & 0xffffffffffffff8) + 8) << 2)
                    else
                        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                            &var_d0)
                        x9_18 = x22_5
                else
                    int64_t var_b8_2 = -1
                    x9_18 = *(x8_42 + (x28_2 << 2)) | x22_5
                
                *(var_d0.q + (x28_2 << 2)) = x9_18
                Botan::Modular_Reducer::reduce(&var_140)
                uint32_t var_64 = 1
                Botan::BigInt::add2(&var_1c8, &var_64, 1, 0)
                int64_t var_188
                int64_t x2_10 = var_188
                uint32_t* x1_21 = var_1a0.q
                
                if (x2_10 == -1)
                    int64_t x8_47 = var_1a0:8.q
                    void* x9_20 = x8_47 - x1_21
                    
                    if (x8_47 == x1_21)
                        x2_10 = 0
                    else
                        void* x11_2
                        
                        x11_2 = x9_20 s>= 0 ? x9_20 : -ffffffffffffffff
                        
                        void* x10_16 = x1_21 - x8_47
                        void* x11_3
                        
                        x11_3 = x11_2 s< 1 ? x11_2 : 1
                        
                        x2_10 = x9_20 s>> 2
                        void* x9_21
                        
                        x9_21 = x10_16 s> x9_20 ? x10_16 : x9_20
                        
                        int64_t i_2 = x11_3 * (x9_21 u>> 2)
                        uint64_t x10_17 = 1
                        int64_t i_1
                        
                        do
                            int32_t x11_4 = *(x1_21 - 4 + (i_2 << 2))
                            i_1 = i_2
                            i_2 -= 1
                            x10_17 = zx.q(x10_17.d) & zx.q(((x11_4 - 1) & not.d(x11_4)) s>> 0x1f)
                            x2_10 -= x10_17
                        while (i_1 != 1)
                    
                    var_188 = x2_10
                
                int32_t var_180
                int128_t v0_5
                int128_t v1_1
                v0_5, v1_1 = Botan::BigInt::add2(&var_d0, x1_21, x2_10, zx.q(var_180 != 1 ? 1 : 0))
                uint64_t x0_46
                
                if (&var_170 == arg2)
                    x0_46 = var_170.q
                    
                    if (x0_46 != 0)
                        var_170:8.q = x0_46
                        Botan::deallocate_memory(x0_46, (var_160 - x0_46) s>> 2, 4)
                else
                    v1_1 = *arg2
                    *arg2 = var_170
                    var_170 = v1_1
                    void* x11_6 = *(arg2 + 0x10)
                    int64_t x9_23 = *(arg2 + 0x18)
                    x0_46 = v1_1.q
                    *(arg2 + 0x10) = var_160
                    int64_t var_158
                    *(arg2 + 0x18) = var_158
                    var_160 = x11_6
                    var_158 = x9_23
                    int32_t x9_24 = *(arg2 + 0x20)
                    int32_t var_150
                    *(arg2 + 0x20) = var_150
                    var_150 = x9_24
                    
                    if (x0_46 != 0)
                        var_170:8.q = x0_46
                        Botan::deallocate_memory(x0_46, (var_160 - x0_46) s>> 2, 4)
                void* x0_47 = var_1a0.q
                
                if (x0_47 != 0)
                    var_1a0:8.q = x0_47
                    Botan::deallocate_memory(x0_47, (var_190 - x0_47) s>> 2, 4)
                
                void* x0_48 = var_1c8.q
                
                if (x0_48 != 0)
                    void* var_1c0_1 = x0_48
                    Botan::deallocate_memory(x0_48, (var_1b8 - x0_48) s>> 2, 4)
                
                if (Botan::BigInt::bits() != arg4)
                    goto label_d18008
                
                if ((Botan::is_prime(arg2, arg1, 0x80, true) & 1) == 0)
                    goto label_d18008
                
                x19_1 = 1
                x0_53 = var_118
                
                if (x0_53 == 0)
                    break
            void* var_110_1 = x0_53
            int64_t var_108
            Botan::deallocate_memory(x0_53, (var_108 - x0_53) s>> 2, 4)
            break
        
        void* x0_54 = var_140.q
        
        if (x0_54 != 0)
            var_140:8.q = x0_54
            Botan::deallocate_memory(x0_54, (var_130 - x0_54) s>> 2, 4)
        
        void* x0_55 = var_e8_1
        
        if (x0_55 != 0)
            void* var_e0_2 = x0_55
            operator delete(x0_55)
        
        void* x0_56 = var_d0.q
        
        if (x0_56 != 0)
            var_d0:8.q = x0_56
            Botan::deallocate_memory(x0_56, (var_c0 - x0_56) s>> 2, 4)
        
        goto label_d18350
else
    if ((x28 & 0xffffffff80000000) == 0)
        char* x0_9 = operator new(x28)
        x22_1 = &x0_9[x28]
        x26_1 = x0_9
        var_a0_1 = x0_9
        char* var_98_2 = x0_9
        void* var_90_1 = x22_1
        memcpy(x0_9, x27, x28)
        var_98_1 = x22_1
        goto label_d17cb0
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
int64_t* x0_69 = std::__ndk1::__vector_base_common<true>::__throw_length_error()

if ((zx.d(var_140.b) & 1) == 0)
    if ((zx.d(var_d0.b) & 1) != 0)
        goto label_d184e8
    
    goto label_d184a0

operator delete(var_130)

if ((zx.d(var_d0.b) & 1) != 0)
label_d184e8:
    operator delete(var_c0)
    
    if ((zx.d(var_80) & 1) == 0)
        goto label_d184a8
    
    goto label_d1850c

label_d184a0:

if ((zx.d(var_80) & 1) == 0)
label_d184a8:
    
    if ((zx.d(var_170.b) & 1) != 0)
        goto label_d1857c
    
    goto label_d184b0

label_d1850c:
operator delete(x8_3)

if ((zx.d(var_170.b) & 1) != 0)
label_d1857c:
    operator delete(var_160)
    
    if ((zx.d(var_1a0.b) & 1) == 0)
        goto label_d184b8
    
    goto label_d185c4

label_d184b0:

if ((zx.d(var_1a0.b) & 1) != 0)
label_d185c4:
    operator delete(var_190)
    
    if ((zx.d(var_1c8) & 1) != 0)
        operator delete(var_1b8)
else
label_d184b8:
    
    if ((zx.d(var_1c8) & 1) != 0)
        operator delete(var_1b8)

sub_1101e04(x0_69)
noreturn
