// 函数: _ZN5Botan14aont_unpackageEPNS_11BlockCipherEPKhmPh
// 地址: 0xca7d20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

size_t x0 = (*(*arg1 + 0x30))()
(*(*arg1 + 0x18))(arg1)
uint64_t var_f0
int64_t var_e8
void* var_e0

if (var_f0 u<= x0 && var_e8 u>= x0 && x0 u% var_e0 == 0)
    if (x0 u> arg3)
        void** x0_35 = __cxa_allocate_exception(0x20)
        int64_t x0_36
        int128_t v0_7
        x0_36, v0_7 = operator new(0x30)
        int64_t var_e0_2 = x0_36
        v0_7 = data_71bb40
        __builtin_strncpy(x0_36, "AONT::unpackage: Input too short", 0x21)
        var_f0.o = v0_7
        *x0_35 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_35[1])
        *x0_35 = _vtable_for_Botan::Invalid_Argument + 0x10
        __cxa_throw(x0_35, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
        noreturn
    
    int64_t x19_1 = x0 << 1
    
    if (x19_1 u>= -0x10)
        std::__ndk1::__basic_string_common<true>::__throw_length_error()
    label_ca86c4:
        Botan::assertion_failure("remaining == pipe.read(output, remaining)", "Expected read size", 
            "aont_unpackage", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x26ba)
    label_ca86cc:
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
    label_ca86f4:
        Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
    label_ca86fc:
        int64_t* x0_39 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        
        if ((zx.d(var_f0.b) & 1) != 0)
            operator delete(var_e0)
        
        sub_1101e04(x0_39)
        noreturn
    
    int64_t var_98
    char* var_88
    char* x25_1
    
    if (x19_1 u>= 0x17)
        uint64_t x26_1 = (x19_1 + 0x10) & 0xfffffffffffffff0
        char* x0_3 = operator new(x26_1)
        x25_1 = x0_3
        int64_t var_90_1 = x19_1
        var_88 = x0_3
        var_98 = x26_1 | 1
        memset(x25_1, 0x30, x19_1)
    else
        x25_1 = &var_98 | 1
        var_98.b = (x0.d << 2).b
        
        if (x19_1 != 0)
            memset(x25_1, 0x30, x19_1)
    
    x25_1[x19_1] = 0
    Botan::OctetString::OctetString(&var_f0)
    int128_t v0_1
    int128_t v1_1
    v0_1, v1_1 = Botan::SymmetricAlgorithm::set_key(arg1, var_f0)
    void* x0_7 = var_f0
    
    if (x0_7 != 0)
        void* var_e8_1 = x0_7
        v0_1, v1_1 = Botan::deallocate_memory(x0_7, var_e0 - x0_7, 1)
    
    void* result_1
    __builtin_memset(&result_1, 0, 0x18)
    int64_t var_170_1
    int64_t x8_14
    uint64_t var_188_1
    void* var_a8_1
    void* var_a0_1
    
    if (x0 == 0)
        var_170_1 = 0
        x19_1 = 0
        int64_t var_c8_2
        __builtin_memset(&var_c8_2, 0, 0x18)
        var_188_1 = arg3
        x8_14 = arg3 - 1
        
        if (x0 u> x8_14)
        label_ca7f00:
            Botan::StreamCipher* x0_11 = operator new(0x70)
            Botan::BlockCipher* x0_12 = operator new(0x78)
            Botan::CTR_BE::CTR_BE(x0_12)
            void* result_8 = result_1
            void* var_108_1
            __builtin_memset(&var_108_1, 0, 0x18)
            void* x26_2 = var_a8_1 - result_8
            void* var_f8_1
            
            if (var_a8_1 != result_8)
                if ((x26_2 & 0xffffffff80000000) != 0)
                    goto label_ca86fc
                
                void* x0_14 = Botan::allocate_memory(x26_2, 1)
                void* result_5 = result_1
                void* x22_1 = x0_14
                var_108_1 = x0_14
                void* var_100_1 = x0_14
                size_t x26_3 = var_a8_1 - result_5
                var_f8_1 = x0_14 + x26_2
                
                if (x26_3 s>= 1)
                    memcpy(x22_1, result_5, x26_3)
                    x22_1 += x26_3
                
                void* var_100_2 = x22_1
            
            Botan::StreamCipher_Filter::StreamCipher_Filter(x0_11, x0_12)
            Botan::StreamCipher* var_80_1 = x0_11
            int64_t var_78
            __builtin_memset(&var_78, 0, 0x18)
            Botan::Pipe::Pipe(&var_f0)
            void* x0_18 = var_108_1
            
            if (x0_18 != 0)
                void* var_100_3 = x0_18
                Botan::deallocate_memory(x0_18, var_f8_1 - x0_18, 1)
            
            Botan::Pipe::start_msg()
            Botan::Pipe::write(&var_f0, arg2)
            Botan::Pipe::end_msg()
            uint64_t x0_21 = Botan::Pipe::remaining(&var_f0)
            
            if (x0_21 != Botan::Pipe::read(&var_f0, arg4, x0_21))
                goto label_ca86c4
            
            Botan::Pipe::~Pipe()
            
            if (x19_1 != 0)
                int64_t var_c0_2 = x19_1
                Botan::deallocate_memory(x19_1, var_170_1 - x19_1, 1)
            
            void* result = result_1
            
            if (result != 0)
                void* result_2 = result
                result = Botan::deallocate_memory(result, var_a0_1 - result, 1)
            
            if ((zx.d(var_98.b) & 1) == 0)
                return result
            
            return operator delete(var_88)
    else
        if ((x0 & 0xffffffff80000000) != 0)
            goto label_ca86cc
        
        void* result_3 = Botan::allocate_memory(x0, 1)
        void* x19_2 = result_3 + x0
        result_1 = result_3
        var_a0_1 = x19_2
        memset(result_3, 0, x0)
        var_a8_1 = x19_2
        int64_t x0_10 = Botan::allocate_memory(x0, 1)
        int64_t x20_1 = x0_10 + x0
        x19_1 = x0_10
        int64_t var_c8_1 = x0_10
        int64_t var_b8_1 = x20_1
        memset(x0_10, 0, x0)
        var_170_1 = x20_1
        int64_t var_c0_1 = x20_1
        
        if (arg2 == 0)
            goto label_ca86f4
        
        void* result_4 = result_1
        
        if (result_4 == 0)
            goto label_ca86f4
        
        uint64_t x9_2 = arg3 - x0
        var_188_1 = x9_2
        v0_1, v1_1 = memmove(result_4, &arg2[x9_2], x0)
        x8_14 = arg3 - 1
        
        if (x0 u> x8_14)
            goto label_ca7f00
    uint64_t x8_21 = x8_14 u/ x0
    int64_t x20_2 = x0 & 0xffffffffffffffe0
    int64_t x9_4 = x0 & 0x1f
    int64_t x12_1 = x0 & 7
    size_t x26_4 = var_170_1 - x19_1
    int64_t* x11_1 = x19_1 + x20_2
    int64_t x8_24 = x19_1 + x0
    int64_t i_17 = x9_4 - x12_1
    int32_t x8_26 = (arg2 != 0 ? 1 : 0) & (x19_1 != 0 ? 1 : 0)
    int64_t i_16 = (((x20_2 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
    int64_t x8_28 = i_16 << 5
    int64_t x8_29 = x20_2 + i_17
    
    if (x26_4 == 0)
        int64_t x23_3 = 0
        
        while (true)
            int64_t x27_2 = x23_3 + 1
            size_t x8_41 = arg3 - x27_2 * x0
            size_t x2_12
            
            x2_12 = x8_41 u< x0 ? x8_41 : x0
            
            if (x2_12 != 0)
                if (x8_26 == 0)
                    break
                
                v0_1, v1_1 = memcpy(x19_1, arg2 + x23_3 * x0, x2_12)
            
            v0_1.d = float.s((x23_3 u>> 0x38).d)
            v0_1:1.b = (x23_3 u>> 0x30).d
            v0_1:2.b = (x23_3 u>> 0x28).d
            v0_1:3.b = (x23_3 u>> 0x20).d
            v0_1:4.b = (x23_3 u>> 0x18).d
            v1_1.q = *(x19_1 + x0 - 8)
            v0_1:5.b = (x23_3 u>> 0x10).d
            v0_1:6.b = (x23_3 u>> 8).d
            v0_1:7.b = x23_3.d
            *(x19_1 + x0 - 8) = v1_1.q ^ v0_1.q
            int128_t v2_2
            int128_t v3_2
            int128_t v4_2
            int128_t v5_2
            int128_t v6_2
            int128_t v7_2
            v0_1, v1_1, v2_2, v3_2, v4_2, v5_2, v6_2, v7_2 =
                (*(*arg1 + 0x48))(arg1, x19_1, x19_1, 1)
            void* result_7 = result_1
            
            if (x20_2 != 0)
                int64_t x9_17 = 0
                
                if (x20_2 == 0x20 || result_7 + 0x18 + x20_2 - 0x20 u< result_7 + 0x18
                        || result_7 + 0x10 + x20_2 - 0x20 u< result_7 + 0x10
                        || result_7 + 8 + x20_2 - 0x20 u< result_7 + 8
                        || result_7 + x20_2 - 0x20 u< result_7)
                    goto label_ca84a0
                
                if (result_7 u>= x11_1 || x19_1 u>= result_7 + x20_2)
                    int64_t i_10 = i_16
                    int64_t x10_15 = x19_1
                    void* result_10 = result_7
                    int64_t i
                    
                    do
                        v0_1.q = *result_10
                        v1_1.q = *(result_10 + 8)
                        v2_2.q = *(result_10 + 0x10)
                        v3_2.q = *(result_10 + 0x18)
                        v0_1:8.q = *(result_10 + 0x20)
                        v1_1:8.q = *(result_10 + 0x28)
                        v2_2:8.q = *(result_10 + 0x30)
                        v3_2:8.q = *(result_10 + 0x38)
                        v4_2.q = *x10_15
                        v5_2.q = *(x10_15 + 8)
                        v6_2.q = *(x10_15 + 0x10)
                        v7_2.q = *(x10_15 + 0x18)
                        v4_2:8.q = *(x10_15 + 0x20)
                        v5_2:8.q = *(x10_15 + 0x28)
                        v6_2:8.q = *(x10_15 + 0x30)
                        v7_2:8.q = *(x10_15 + 0x38)
                        x10_15 += 0x40
                        i = i_10
                        i_10 -= 2
                        int128_t v16_2 = v4_2 ^ v0_1
                        int128_t v17_2 = v5_2 ^ v1_1
                        int128_t v18_2 = v6_2 ^ v2_2
                        int128_t v19_2 = v7_2 ^ v3_2
                        *result_10 = v16_2.q
                        *(result_10 + 8) = v17_2.q
                        *(result_10 + 0x10) = v18_2.q
                        *(result_10 + 0x18) = v19_2.q
                        *(result_10 + 0x20) = v16_2:8.q
                        *(result_10 + 0x28) = v17_2:8.q
                        *(result_10 + 0x30) = v18_2:8.q
                        *(result_10 + 0x38) = v19_2:8.q
                        result_10 += 0x40
                    while (i != 2)
                    x9_17 = x8_28
                    
                    if (((x20_2 - 0x20) u>> 5) + 1 != i_16)
                        goto label_ca84a0
                else
                    x9_17 = 0
                label_ca84a0:
                    int64_t i_14 = neg.q(x20_2) + x9_17
                    void* x11_14 = x19_1 + 0x10 + x9_17
                    void* x9_22 = result_7 + x9_17 + 0x10
                    int64_t i_1
                    
                    do
                        v2_2 = *(x11_14 - 0x10)
                        v3_2 = *x11_14
                        i_1 = i_14
                        i_14 += 0x20
                        x11_14 += 0x20
                        v1_1 = v3_2 ^ *x9_22
                        *(x9_22 - 0x10) ^= v2_2
                        *x9_22 = v1_1
                        x9_22 += 0x20
                    while (i_1 != -0x20)
            
            if (x0 != x20_2)
                int64_t x10_17 = x20_2
                
                if (x9_4 u< 8)
                label_ca853c:
                    int64_t i_11 = x0 - x10_17
                    void* x8_47 = result_7 + x10_17
                    char* x10_20 = x19_1 + x10_17
                    int64_t i_2
                    
                    do
                        char x11_17 = *x10_20
                        x10_20 = &x10_20[1]
                        i_2 = i_11
                        i_11 -= 1
                        *x8_47 ^= x11_17
                        x8_47 += 1
                    while (i_2 != 1)
                else
                    void* x9_24 = result_7 + x20_2
                    
                    if (x9_24 u< x8_24)
                        x10_17 = x20_2
                    
                    if (x9_24 u< x8_24 && x11_1 u< result_7 + x0)
                        goto label_ca853c
                    
                    int64_t i_15 = i_17
                    int64_t* x11_16 = x11_1
                    int64_t i_3
                    
                    do
                        v0_1.q = *x11_16
                        x11_16 = &x11_16[1]
                        v1_1.q = *x9_24
                        i_3 = i_15
                        i_15 -= 8
                        *x9_24 = (v1_1 ^ v0_1).q
                        x9_24 += 8
                    while (i_3 != 8)
                    x10_17 = x8_29
                    
                    if (x12_1 != 0)
                        goto label_ca853c
            
            x23_3 = x27_2
            
            if (x27_2 == x8_21)
                goto label_ca7f00
    else
        int64_t x25_2 = 0
        
        while (true)
            int64_t x23_2 = x25_2 + 1
            size_t x8_33 = arg3 - x23_2 * x0
            size_t x27_1
            
            x27_1 = x8_33 u< x0 ? x8_33 : x0
            
            memset(x19_1, 0, x26_4)
            
            if (x27_1 != 0)
                if ((x8_26 & 1) == 0)
                    break
                
                memcpy(x19_1, arg2 + x25_2 * x0, x27_1)
            
            int64_t v0_2
            v0_2.d = float.s((x25_2 u>> 0x38).d)
            v0_2:1.b = (x25_2 u>> 0x30).d
            v0_2:2.b = (x25_2 u>> 0x28).d
            v0_2:3.b = (x25_2 u>> 0x20).d
            v0_2:4.b = (x25_2 u>> 0x18).d
            v0_2:5.b = (x25_2 u>> 0x10).d
            v0_2:6.b = (x25_2 u>> 8).d
            v0_2:7.b = x25_2.d
            *(x19_1 + x0 - 8) ^= v0_2
            int128_t v0_4
            int128_t v1_3
            int128_t v2_1
            int128_t v3_1
            int128_t v4_1
            int128_t v5_1
            int128_t v6_1
            int128_t v7_1
            v0_4, v1_3, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 =
                (*(*arg1 + 0x48))(arg1, x19_1, x19_1, 1)
            void* result_6 = result_1
            
            if (x20_2 != 0)
                int64_t x9_7 = 0
                
                if (x20_2 == 0x20 || result_6 + 0x18 + x20_2 - 0x20 u< result_6 + 0x18
                        || result_6 + 0x10 + x20_2 - 0x20 u< result_6 + 0x10
                        || result_6 + 8 + x20_2 - 0x20 u< result_6 + 8
                        || result_6 + x20_2 - 0x20 u< result_6)
                    goto label_ca827c
                
                if (result_6 u>= x11_1 || x19_1 u>= result_6 + x20_2)
                    int64_t i_8 = i_16
                    int64_t x10_5 = x19_1
                    void* result_9 = result_6
                    int64_t i_4
                    
                    do
                        v0_4.q = *result_9
                        v1_3.q = *(result_9 + 8)
                        v2_1.q = *(result_9 + 0x10)
                        v3_1.q = *(result_9 + 0x18)
                        v0_4:8.q = *(result_9 + 0x20)
                        v1_3:8.q = *(result_9 + 0x28)
                        v2_1:8.q = *(result_9 + 0x30)
                        v3_1:8.q = *(result_9 + 0x38)
                        v4_1.q = *x10_5
                        v5_1.q = *(x10_5 + 8)
                        v6_1.q = *(x10_5 + 0x10)
                        v7_1.q = *(x10_5 + 0x18)
                        v4_1:8.q = *(x10_5 + 0x20)
                        v5_1:8.q = *(x10_5 + 0x28)
                        v6_1:8.q = *(x10_5 + 0x30)
                        v7_1:8.q = *(x10_5 + 0x38)
                        x10_5 += 0x40
                        i_4 = i_8
                        i_8 -= 2
                        int128_t v16_1 = v4_1 ^ v0_4
                        int128_t v17_1 = v5_1 ^ v1_3
                        int128_t v18_1 = v6_1 ^ v2_1
                        int128_t v19_1 = v7_1 ^ v3_1
                        *result_9 = v16_1.q
                        *(result_9 + 8) = v17_1.q
                        *(result_9 + 0x10) = v18_1.q
                        *(result_9 + 0x18) = v19_1.q
                        *(result_9 + 0x20) = v16_1:8.q
                        *(result_9 + 0x28) = v17_1:8.q
                        *(result_9 + 0x30) = v18_1:8.q
                        *(result_9 + 0x38) = v19_1:8.q
                        result_9 += 0x40
                    while (i_4 != 2)
                    x9_7 = x8_28
                    
                    if (((x20_2 - 0x20) u>> 5) + 1 != i_16)
                        goto label_ca827c
                else
                    x9_7 = 0
                label_ca827c:
                    int64_t i_12 = neg.q(x20_2) + x9_7
                    void* x11_6 = x19_1 + 0x10 + x9_7
                    void* x9_12 = result_6 + x9_7 + 0x10
                    int64_t i_5
                    
                    do
                        v2_1 = *(x11_6 - 0x10)
                        v3_1 = *x11_6
                        i_5 = i_12
                        i_12 += 0x20
                        x11_6 += 0x20
                        v1_3 = v3_1 ^ *x9_12
                        *(x9_12 - 0x10) ^= v2_1
                        *x9_12 = v1_3
                        x9_12 += 0x20
                    while (i_5 != -0x20)
            
            if (x0 != x20_2)
                int64_t x10_8 = x20_2
                
                if (x9_4 u< 8)
                label_ca8318:
                    int64_t i_9 = x0 - x10_8
                    void* x8_39 = result_6 + x10_8
                    char* x10_11 = x19_1 + x10_8
                    int64_t i_6
                    
                    do
                        char x11_9 = *x10_11
                        x10_11 = &x10_11[1]
                        i_6 = i_9
                        i_9 -= 1
                        *x8_39 ^= x11_9
                        x8_39 += 1
                    while (i_6 != 1)
                else
                    int64_t* x9_14 = result_6 + x20_2
                    
                    if (x9_14 u< x8_24)
                        x10_8 = x20_2
                    
                    if (x9_14 u< x8_24 && x11_1 u< result_6 + x0)
                        goto label_ca8318
                    
                    int64_t i_13 = i_17
                    int64_t* x11_8 = x11_1
                    int64_t i_7
                    
                    do
                        v0_4.q = *x11_8
                        x11_8 = &x11_8[1]
                        v1_3.q = *x9_14
                        i_7 = i_13
                        i_13 -= 8
                        *x9_14 = (v1_3 ^ v0_4).q
                        x9_14 = &x9_14[1]
                    while (i_7 != 8)
                    x10_8 = x8_29
                    
                    if (x12_1 != 0)
                        goto label_ca8318
            
            x25_2 = x23_2
            
            if (x23_2 == x8_21)
                goto label_ca7f00
    
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)

void** x0_31 = __cxa_allocate_exception(0x20)
int64_t x0_32
int128_t v0_6
x0_32, v0_6 = operator new(0x20)
int64_t var_e0_1 = x0_32
var_f0.o = data_71b7d0
__builtin_strncpy(x0_32, "AONT::unpackage: Invalid cipher", 0x20)
*x0_31 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_31[1])
*x0_31 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_31, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
