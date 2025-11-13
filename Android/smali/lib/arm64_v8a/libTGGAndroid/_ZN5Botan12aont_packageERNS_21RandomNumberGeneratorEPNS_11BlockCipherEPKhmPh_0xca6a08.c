// 函数: _ZN5Botan12aont_packageERNS_21RandomNumberGeneratorEPNS_11BlockCipherEPKhmPh
// 地址: 0xca6a08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t var_e0
void* var_d0
int128_t var_80

if (arg4 u<= 1)
    void** x0_34 = __cxa_allocate_exception(0x20)
    int64_t x0_35
    int128_t v0_3
    x0_35, v0_3 = operator new(0x30)
    int64_t var_70_1 = x0_35
    var_80 = data_71abd0
    __builtin_strncpy(x0_35, "Package transform cannot encode small inputs", 0x2d)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Encoding error: ", &var_80)
    *x0_34 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_34[1])
    *x0_34 = _vtable_for_Botan::Invalid_Argument + 0x10
    
    if ((zx.d(var_e0) & 1) != 0)
        operator delete(var_d0)
    
    *x0_34 = _vtable_for_Botan::Encoding_Error + 0x10
    __cxa_throw(x0_34, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
    noreturn

uint64_t x0_1 = (*(*arg2 + 0x30))(arg2)
(*(*arg2 + 0x18))(arg2)
int64_t var_d8

if (var_e0.q u> x0_1 || var_d8 u< x0_1 || x0_1 u% var_d0 != 0)
label_ca74f8:
    void** x0_30 = __cxa_allocate_exception(0x20)
    int64_t x0_31
    int128_t v0_2
    x0_31, v0_2 = operator new(0x20)
    int64_t var_d0_1 = x0_31
    var_e0.o = data_71cd20
    __builtin_strncpy(x0_31, "AONT::package: Invalid cipher", 0x1e)
    *x0_30 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_30[1])
    *x0_30 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_30, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

int64_t x25_1 = x0_1 << 1
void* var_70

if (x25_1 u>= -0x10)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
    Botan::assertion_failure("remaining == pipe.read(output, remaining)", "Expected read size", 
        "aont_package", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x2667)
else
    void* result_1
    int64_t var_98
    char* var_88
    void* result_3
    int64_t x8_8
    char* x26_1
    
    if (x25_1 u>= 0x17)
        uint64_t x27_1 = (x25_1 + 0x10) & 0xfffffffffffffff0
        char* x0_5 = operator new(x27_1)
        x26_1 = x0_5
        int64_t var_90_1 = x25_1
        var_88 = x0_5
        var_98 = x27_1 | 1
    label_ca6b08:
        memset(x26_1, 0x30, x25_1)
        x26_1[x25_1] = 0
        __builtin_memset(&result_1, 0, 0x18)
        
        if (x0_1 != 0)
        label_ca6ad0:
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&result_1)
            result_3 = result_1
            int64_t var_a8
            x8_8 = var_a8
        else
            result_3 = nullptr
            x8_8 = 0
    else
        x26_1 = &var_98 | 1
        var_98.b = (x0_1.d << 2).b
        
        if (x25_1 != 0)
            goto label_ca6b08
        
        x26_1[x25_1] = 0
        __builtin_memset(&result_1, 0, 0x18)
        
        if (x0_1 != 0)
            goto label_ca6ad0
        
        result_3 = nullptr
        x8_8 = 0
    (*(*arg1 + 0x10))(arg1, result_3, x8_8 - result_3)
    Botan::StreamCipher* x0_8 = operator new(0x70)
    Botan::BlockCipher* x0_9 = operator new(0x78)
    Botan::CTR_BE::CTR_BE(x0_9)
    Botan::StreamCipher_Filter::StreamCipher_Filter(x0_8, x0_9)
    var_80.q = x0_8
    __builtin_memset(&var_80:8, 0, 0x18)
    Botan::Pipe::Pipe(&var_e0)
    Botan::Pipe::start_msg()
    Botan::Pipe::write(&var_e0, arg3)
    Botan::Pipe::end_msg()
    uint64_t x0_14 = Botan::Pipe::remaining(&var_e0)
    
    if (x0_14 != Botan::Pipe::read(&var_e0, arg5, x0_14))
        Botan::assertion_failure("remaining == pipe.read(output, remaining)", "Expected read size", 
            "aont_package", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x2667)
    else
        Botan::OctetString::OctetString(&var_80)
        int128_t v0_1
        int128_t v1_1
        int128_t v2_1
        int128_t v3_1
        int128_t v4_1
        int128_t v5_1
        int128_t v6_1
        int128_t v7_1
        v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 =
            Botan::SymmetricAlgorithm::set_key(arg2, var_80.q)
        void* x0_19 = var_80.q
        
        if (x0_19 != 0)
            var_80:8.q = x0_19
            v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 =
                Botan::deallocate_memory(x0_19, var_70 - x0_19, 1)
        
        __builtin_memset(&var_80, 0, 0x18)
        int64_t x8_13
        void* x19_1
        void* x23_2
        
        if (x0_1 == 0)
            x19_1 = nullptr
            x23_2 = nullptr
            x8_13 = arg4 - 1 + x0_1
            void* result_4
            void* x25_3
            
            if (arg4 - 1 + x0_1 u< arg4 - 1)
            label_ca6c58:
                x25_3 = x0_1 & 0xffffffffffffffe0
                result_4 = result_1
                
                if (x25_3 != 0)
                label_ca7264:
                    int64_t x9_63 = 0
                    
                    if (x25_3 == 0x20)
                        goto label_ca7320
                    
                    void* x12_4 = &arg5[arg4]
                    void* x10_36 = &arg5[arg4]
                    
                    if (x12_4 + 0x18 + x25_3 - 0x20 u< x12_4 + 0x18
                            || x12_4 + 0x10 + x25_3 - 0x20 u< x12_4 + 0x10
                            || x12_4 + 8 + x25_3 - 0x20 u< x12_4 + 8
                            || x10_36 + x25_3 - 0x20 u< x10_36)
                        goto label_ca7320
                    
                    if (x10_36 u>= result_4 + x25_3 || result_4 u>= arg5 + x25_3 + arg4)
                        int64_t i_27 = (((x25_3 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                        x9_63 = i_27 << 5
                        int64_t i_24 = i_27
                        void* result_5 = result_4
                        int64_t i
                        
                        do
                            v0_1.q = *x10_36
                            v1_1.q = *(x10_36 + 8)
                            v2_1.q = *(x10_36 + 0x10)
                            v3_1.q = *(x10_36 + 0x18)
                            v0_1:8.q = *(x10_36 + 0x20)
                            v1_1:8.q = *(x10_36 + 0x28)
                            v2_1:8.q = *(x10_36 + 0x30)
                            v3_1:8.q = *(x10_36 + 0x38)
                            v4_1.q = *result_5
                            v5_1.q = *(result_5 + 8)
                            v6_1.q = *(result_5 + 0x10)
                            v7_1.q = *(result_5 + 0x18)
                            v4_1:8.q = *(result_5 + 0x20)
                            v5_1:8.q = *(result_5 + 0x28)
                            v6_1:8.q = *(result_5 + 0x30)
                            v7_1:8.q = *(result_5 + 0x38)
                            result_5 += 0x40
                            i = i_24
                            i_24 -= 2
                            int128_t v16_3 = v4_1 ^ v0_1
                            int128_t v17_3 = v5_1 ^ v1_1
                            int128_t v18_3 = v6_1 ^ v2_1
                            int128_t v19_3 = v7_1 ^ v3_1
                            *x10_36 = v16_3.q
                            *(x10_36 + 8) = v17_3.q
                            *(x10_36 + 0x10) = v18_3.q
                            *(x10_36 + 0x18) = v19_3.q
                            *(x10_36 + 0x20) = v16_3:8.q
                            *(x10_36 + 0x28) = v17_3:8.q
                            *(x10_36 + 0x30) = v18_3:8.q
                            *(x10_36 + 0x38) = v19_3:8.q
                            x10_36 += 0x40
                        while (i != 2)
                        
                        if (((x25_3 - 0x20) u>> 5) + 1 != i_27)
                            goto label_ca7320
                    else
                        x9_63 = nullptr
                    label_ca7320:
                        void* i_22 = x25_3 - x9_63
                        void* x9_66 = x9_63 + arg4 + arg5 + 0x10
                        void* x11_9 = x9_63 + result_4 + 0x10
                        void* i_1
                        
                        do
                            v2_1 = *(x11_9 - 0x10)
                            v3_1 = *x11_9
                            i_1 = i_22
                            i_22 -= 0x20
                            x11_9 += 0x20
                            v1_1 = v3_1 ^ *x9_66
                            *(x9_66 - 0x10) ^= v2_1
                            *x9_66 = v1_1
                            x9_66 += 0x20
                        while (i_1 != 0x20)
            else
            label_ca6c78:
                uint64_t x9_4 = x8_13 u/ x0_1
                x25_3 = x0_1 & 0xffffffffffffffe0
                void* x12_1 = &arg5[arg4]
                void* x8_18 = &arg5[x0_1 + arg4]
                void* x16_1 = &arg5[arg4 + 0x10]
                int64_t x10_3 = arg5 + x25_3 + arg4
                int64_t x13_1 = x0_1 & 0x1f
                int64_t x14_1 = x0_1 & 7
                int64_t i_28 = x13_1 - x14_1
                int32_t x8_22 = (x12_1 + 0x18 + x25_3 - 0x20 u< x12_1 + 0x18 ? 1 : 0)
                    | (x16_1 + x25_3 - 0x20 u< x16_1 ? 1 : 0)
                    | (x12_1 + 8 + x25_3 - 0x20 u< x12_1 + 8 ? 1 : 0)
                int64_t i_29 = (((x25_3 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                int32_t x8_23 = x8_22 | (x12_1 + x25_3 - 0x20 u< x12_1 ? 1 : 0)
                int64_t x10_6 = i_29 << 5
                void* x8_24 = x25_3 + i_28
                
                if (arg5 == 0)
                    int64_t x24_3 = 0
                    
                    while (true)
                        uint64_t x8_57 = arg4 - x24_3 * x0_1
                        uint64_t x20_2
                        
                        x20_2 = x8_57 u< x0_1 ? x8_57 : x0_1
                        
                        if (x19_1 != x23_2)
                            memset(x23_2, 0, x19_1 - x23_2)
                        
                        if (x20_2 != 0)
                            goto label_ca74f0
                        
                        char* x8_58 = var_80.q
                        x8_58[x0_1 - 1] ^= x24_3.b
                        char* x8_59 = var_80.q
                        x8_59[x0_1 - 2] ^= (x24_3.d u>> 8).b
                        char* x8_60 = var_80.q
                        x8_60[x0_1 - 3] ^= (x24_3.d u>> 0x10).b
                        char* x8_61 = var_80.q
                        x8_61[x0_1 - 4] ^= (x24_3.d u>> 0x18).b
                        char* x8_62 = var_80.q
                        x8_62[x0_1 - 5] ^= (x24_3 u>> 0x20).b
                        char* x8_63 = var_80.q
                        x8_63[x0_1 - 6] ^= (x24_3 u>> 0x28).b
                        char* x8_64 = var_80.q
                        x8_64[x0_1 - 7] ^= (x24_3 u>> 0x30).b
                        char* x8_65 = var_80.q
                        x8_65[x0_1 - 8] ^= (x24_3 u>> 0x38).b
                        int64_t x1_10 = var_80.q
                        v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 =
                            (*(*arg2 + 0x48))(arg2, x1_10, x1_10, 1)
                        x23_2 = var_80.q
                        
                        if (x25_3 != 0)
                            int64_t x10_29
                            
                            if ((((x25_3 == 0x20 ? 1 : 0) | x8_23) & 1) != 0
                                    || (x12_1 u< x23_2 + x25_3 && x23_2 u< x10_3))
                                x10_29 = 0
                            label_ca7134:
                                int64_t i_16 = neg.q(x25_3) + x10_29
                                void* x9_53 = x16_1 + x10_29
                                void* x10_31 = x23_2 + x10_29 + 0x10
                                int64_t i_2
                                
                                do
                                    v2_1 = *(x10_31 - 0x10)
                                    v3_1 = *x10_31
                                    i_2 = i_16
                                    i_16 += 0x20
                                    x10_31 += 0x20
                                    v1_1 = v3_1 ^ *x9_53
                                    *(x9_53 - 0x10) ^= v2_1
                                    *x9_53 = v1_1
                                    x9_53 += 0x20
                                while (i_2 != -0x20)
                            else
                                int64_t i_18 = i_29
                                void* x10_35 = x12_1
                                void* x9_58 = x23_2
                                int64_t i_3
                                
                                do
                                    v0_1.q = *x10_35
                                    v1_1.q = *(x10_35 + 8)
                                    v2_1.q = *(x10_35 + 0x10)
                                    v3_1.q = *(x10_35 + 0x18)
                                    v0_1:8.q = *(x10_35 + 0x20)
                                    v1_1:8.q = *(x10_35 + 0x28)
                                    v2_1:8.q = *(x10_35 + 0x30)
                                    v3_1:8.q = *(x10_35 + 0x38)
                                    v4_1.q = *x9_58
                                    v5_1.q = *(x9_58 + 8)
                                    v6_1.q = *(x9_58 + 0x10)
                                    v7_1.q = *(x9_58 + 0x18)
                                    v4_1:8.q = *(x9_58 + 0x20)
                                    v5_1:8.q = *(x9_58 + 0x28)
                                    v6_1:8.q = *(x9_58 + 0x30)
                                    v7_1:8.q = *(x9_58 + 0x38)
                                    x9_58 += 0x40
                                    i_3 = i_18
                                    i_18 -= 2
                                    int128_t v16_2 = v4_1 ^ v0_1
                                    int128_t v17_2 = v5_1 ^ v1_1
                                    int128_t v18_2 = v6_1 ^ v2_1
                                    int128_t v19_2 = v7_1 ^ v3_1
                                    *x10_35 = v16_2.q
                                    *(x10_35 + 8) = v17_2.q
                                    *(x10_35 + 0x10) = v18_2.q
                                    *(x10_35 + 0x18) = v19_2.q
                                    *(x10_35 + 0x20) = v16_2:8.q
                                    *(x10_35 + 0x28) = v17_2:8.q
                                    *(x10_35 + 0x30) = v18_2:8.q
                                    *(x10_35 + 0x38) = v19_2:8.q
                                    x10_35 += 0x40
                                while (i_3 != 2)
                                x10_29 = x10_6
                                
                                if (((x25_3 - 0x20) u>> 5) + 1 != i_29)
                                    goto label_ca7134
                        
                        if (x0_1 != x25_3)
                            void* x10_32 = x25_3
                            
                            if (x13_1 u< 8)
                            label_ca71d4:
                                void* i_17 = x0_1 - x10_32
                                void* x9_57 = x12_1 + x10_32
                                void* x10_34 = x23_2 + x10_32
                                void* i_4
                                
                                do
                                    char x11_4 = *x10_34
                                    x10_34 += 1
                                    i_4 = i_17
                                    i_17 -= 1
                                    *x9_57 ^= x11_4
                                    x9_57 += 1
                                while (i_4 != 1)
                            else
                                int64_t* x8_76 = x23_2 + x25_3
                                
                                if (x10_3 u< x23_2 + x0_1)
                                    x10_32 = x25_3
                                
                                if (x10_3 u< x23_2 + x0_1 && x8_76 u< x8_18)
                                    goto label_ca71d4
                                
                                int64_t i_20 = i_28
                                int64_t* x10_33 = arg5 + arg4 + x25_3
                                int64_t i_5
                                
                                do
                                    v0_1.q = *x8_76
                                    x8_76 = &x8_76[1]
                                    v1_1.q = *x10_33
                                    i_5 = i_20
                                    i_20 -= 8
                                    *x10_33 = (v1_1 ^ v0_1).q
                                    x10_33 = &x10_33[1]
                                while (i_5 != 8)
                                x10_32 = x8_24
                                
                                if (x14_1 != 0)
                                    goto label_ca71d4
                        
                        x24_3 += 1
                        
                        if (x24_3 == x9_4)
                            break
                        
                        x19_1 = var_80:8.q
                    
                    result_4 = result_1
                    
                    if (x25_3 != 0)
                        goto label_ca7264
                else
                    int64_t fp_1 = 0
                    
                    while (true)
                        int64_t x20_1 = fp_1 * x0_1
                        uint64_t x8_29 = arg4 - x20_1
                        uint64_t x24_2
                        
                        x24_2 = x8_29 u< x0_1 ? x8_29 : x0_1
                        
                        if (x19_1 != x23_2)
                            memset(x23_2, 0, x19_1 - x23_2)
                            x23_2 = var_80.q
                        
                        if (x24_2 != 0)
                            if (x23_2 == 0)
                            label_ca74f0:
                                Botan::assertion_failure(
                                    "n > 0 implies in != nullptr && out != nullptr", 
                                    "If n > 0 then args are not null", "copy_mem", 
                                    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 
                                    0x401)
                                goto label_ca74f8
                            
                            memmove(x23_2, &arg5[x20_1], x24_2)
                            x23_2 = var_80.q
                        
                        *(x23_2 + x0_1 - 1) ^= fp_1.b
                        char* x8_33 = var_80.q
                        x8_33[x0_1 - 2] ^= (fp_1.d u>> 8).b
                        char* x8_34 = var_80.q
                        x8_34[x0_1 - 3] ^= (fp_1.d u>> 0x10).b
                        char* x8_35 = var_80.q
                        x8_35[x0_1 - 4] ^= (fp_1.d u>> 0x18).b
                        char* x8_36 = var_80.q
                        x8_36[x0_1 - 5] ^= (fp_1 u>> 0x20).b
                        char* x8_37 = var_80.q
                        x8_37[x0_1 - 6] ^= (fp_1 u>> 0x28).b
                        char* x8_38 = var_80.q
                        x8_38[x0_1 - 7] ^= (fp_1 u>> 0x30).b
                        char* x8_39 = var_80.q
                        x8_39[x0_1 - 8] ^= (fp_1 u>> 0x38).b
                        int64_t x1_9 = var_80.q
                        v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 =
                            (*(*arg2 + 0x48))(arg2, x1_9, x1_9, 1)
                        x23_2 = var_80.q
                        
                        if (x25_3 != 0)
                            int64_t x10_14
                            
                            if ((((x25_3 == 0x20 ? 1 : 0) | x8_23) & 1) != 0
                                    || (x12_1 u< x23_2 + x25_3 && x23_2 u< x10_3))
                                x10_14 = 0
                            label_ca6ebc:
                                int64_t i_13 = neg.q(x25_3) + x10_14
                                void* x9_27 = x16_1 + x10_14
                                void* x10_16 = x23_2 + x10_14 + 0x10
                                int64_t i_6
                                
                                do
                                    v2_1 = *(x10_16 - 0x10)
                                    v3_1 = *x10_16
                                    i_6 = i_13
                                    i_13 += 0x20
                                    x10_16 += 0x20
                                    v1_1 = v3_1 ^ *x9_27
                                    *(x9_27 - 0x10) ^= v2_1
                                    *x9_27 = v1_1
                                    x9_27 += 0x20
                                while (i_6 != -0x20)
                            else
                                int64_t i_15 = i_29
                                void* x10_20 = x12_1
                                void* x9_32 = x23_2
                                int64_t i_7
                                
                                do
                                    v0_1.q = *x10_20
                                    v1_1.q = *(x10_20 + 8)
                                    v2_1.q = *(x10_20 + 0x10)
                                    v3_1.q = *(x10_20 + 0x18)
                                    v0_1:8.q = *(x10_20 + 0x20)
                                    v1_1:8.q = *(x10_20 + 0x28)
                                    v2_1:8.q = *(x10_20 + 0x30)
                                    v3_1:8.q = *(x10_20 + 0x38)
                                    v4_1.q = *x9_32
                                    v5_1.q = *(x9_32 + 8)
                                    v6_1.q = *(x9_32 + 0x10)
                                    v7_1.q = *(x9_32 + 0x18)
                                    v4_1:8.q = *(x9_32 + 0x20)
                                    v5_1:8.q = *(x9_32 + 0x28)
                                    v6_1:8.q = *(x9_32 + 0x30)
                                    v7_1:8.q = *(x9_32 + 0x38)
                                    x9_32 += 0x40
                                    i_7 = i_15
                                    i_15 -= 2
                                    int128_t v16_1 = v4_1 ^ v0_1
                                    int128_t v17_1 = v5_1 ^ v1_1
                                    int128_t v18_1 = v6_1 ^ v2_1
                                    int128_t v19_1 = v7_1 ^ v3_1
                                    *x10_20 = v16_1.q
                                    *(x10_20 + 8) = v17_1.q
                                    *(x10_20 + 0x10) = v18_1.q
                                    *(x10_20 + 0x18) = v19_1.q
                                    *(x10_20 + 0x20) = v16_1:8.q
                                    *(x10_20 + 0x28) = v17_1:8.q
                                    *(x10_20 + 0x30) = v18_1:8.q
                                    *(x10_20 + 0x38) = v19_1:8.q
                                    x10_20 += 0x40
                                while (i_7 != 2)
                                x10_14 = x10_6
                                
                                if (((x25_3 - 0x20) u>> 5) + 1 != i_29)
                                    goto label_ca6ebc
                        
                        if (x0_1 != x25_3)
                            void* x10_17 = x25_3
                            
                            if (x13_1 u< 8)
                            label_ca6f5c:
                                void* i_14 = x0_1 - x10_17
                                void* x9_31 = x12_1 + x10_17
                                char* x10_19 = x23_2 + x10_17
                                void* i_8
                                
                                do
                                    char x11_2 = *x10_19
                                    x10_19 = &x10_19[1]
                                    i_8 = i_14
                                    i_14 -= 1
                                    *x9_31 ^= x11_2
                                    x9_31 += 1
                                while (i_8 != 1)
                            else
                                int64_t* x8_50 = x23_2 + x25_3
                                
                                if (x10_3 u< x23_2 + x0_1)
                                    x10_17 = x25_3
                                
                                if (x10_3 u< x23_2 + x0_1 && x8_50 u< x8_18)
                                    goto label_ca6f5c
                                
                                int64_t i_19 = i_28
                                int64_t* x10_18 = arg5 + arg4 + x25_3
                                int64_t i_9
                                
                                do
                                    v0_1.q = *x8_50
                                    x8_50 = &x8_50[1]
                                    v1_1.q = *x10_18
                                    i_9 = i_19
                                    i_19 -= 8
                                    *x10_18 = (v1_1 ^ v0_1).q
                                    x10_18 = &x10_18[1]
                                while (i_9 != 8)
                                x10_17 = x8_24
                                
                                if (x14_1 != 0)
                                    goto label_ca6f5c
                        
                        fp_1 += 1
                        
                        if (fp_1 == x9_4)
                            break
                        
                        x19_1 = var_80:8.q
                    
                    result_4 = result_1
                    
                    if (x25_3 != 0)
                        goto label_ca7264
            
            void* x9_67 = x0_1 - x25_3
            
            if (x0_1 != x25_3)
                if (x9_67 u< 8 || (arg5 + x25_3 + arg4 u< result_4 + x0_1
                        && result_4 + x25_3 u< &arg5[x0_1 + arg4]))
                    goto label_ca7438
                
                void* i_26
                
                if (x9_67 u>= 0x20)
                    i_26 = x9_67 & 0xffffffffffffffe0
                    void* x11_13 = x25_3 + result_4 + 0x10
                    int128_t* x12_10 = x25_3 + arg4 + arg5 + 0x10
                    void* i_25 = i_26
                    void* i_10
                    
                    do
                        v0_1 = *(x11_13 - 0x10)
                        v1_1 = *x11_13
                        i_10 = i_25
                        i_25 -= 0x20
                        x11_13 += 0x20
                        v1_1 ^= *x12_10
                        x12_10[-1] ^= v0_1
                        *x12_10 = v1_1
                        x12_10 = &x12_10[2]
                    while (i_10 != 0x20)
                    
                    if (x9_67 != i_26)
                        if ((x9_67 & 0x18) != 0)
                            goto label_ca73f0
                        
                        x25_3 += i_26
                    label_ca7438:
                        void* i_21 = x0_1 - x25_3
                        char* x10_42 = arg5 + x25_3 + arg4
                        char* x8_80 = result_4 + x25_3
                        void* i_11
                        
                        do
                            char x11_15 = *x8_80
                            x8_80 = &x8_80[1]
                            i_11 = i_21
                            i_21 -= 1
                            *x10_42 ^= x11_15
                            x10_42 = &x10_42[1]
                        while (i_11 != 1)
                else
                    i_26 = nullptr
                label_ca73f0:
                    void* x13_4 = x25_3 + i_26
                    void* x11_14 = x9_67 & 0xfffffffffffffff8
                    int64_t* x12_11 = result_4 + x13_4
                    x25_3 += x11_14
                    void* x13_6 = arg5 + x13_4 + arg4
                    void* i_23 = i_26 - x11_14
                    void* i_12
                    
                    do
                        v0_1.q = *x12_11
                        x12_11 = &x12_11[1]
                        v1_1.q = *x13_6
                        i_12 = i_23
                        i_23 += 8
                        *x13_6 = (v1_1 ^ v0_1).q
                        x13_6 += 8
                    while (i_12 != -8)
                    
                    if (x9_67 != x11_14)
                        goto label_ca7438
            
            if (x23_2 != 0)
                var_80:8.q = x23_2
                Botan::deallocate_memory(x23_2, var_70 - x23_2, 1)
            
            Botan::Pipe::~Pipe()
            void* result = result_1
            
            if (result != 0)
                void* result_2 = result
                int64_t var_a0
                result = Botan::deallocate_memory(result, var_a0 - result, 1)
            
            if ((zx.d(var_98.b) & 1) == 0)
                return result
            
            return operator delete(var_88)
        
        if ((x0_1 & 0xffffffff80000000) == 0)
            void* x0_21 = Botan::allocate_memory(x0_1, 1)
            x19_1 = x0_21 + x0_1
            x23_2 = x0_21
            var_80.q = x0_21
            var_70 = x19_1
            memset(x0_21, 0, x0_1)
            var_80:8.q = x19_1
            v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 = memset(&arg5[arg4], 0, x0_1)
            x8_13 = arg4 - 1 + x0_1
            
            if (arg4 - 1 + x0_1 u>= arg4 - 1)
                goto label_ca6c78
            
            goto label_ca6c58

int64_t* x0_40 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
std::exception::~exception()

if ((zx.d(var_e0) & 1) != 0)
    operator delete(var_d0)

if ((zx.d(var_80.b) & 1) != 0)
    operator delete(var_70)

__cxa_free_exception(arg5)
sub_1101e04(x0_40)
noreturn
