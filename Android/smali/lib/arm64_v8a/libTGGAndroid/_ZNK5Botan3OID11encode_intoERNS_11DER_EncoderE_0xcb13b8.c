// 函数: _ZNK5Botan3OID11encode_intoERNS_11DER_EncoderE
// 地址: 0xcb13b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x19 = *(arg1 + 8)
void* x21 = *(arg1 + 0x10) - x19

if (x21 s>> 2 u<= 1)
    void** x0_18 = __cxa_allocate_exception(0x20)
    int64_t x0_19
    int128_t v0_1
    x0_19, v0_1 = operator new(0x30)
    int64_t var_70_1 = x0_19
    v0_1 = data_71bb40
    __builtin_strncpy(x0_19, "OID::encode_into: OID is invalid", 0x21)
    int128_t var_80_1 = v0_1
    *x0_18 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_18[1])
    *x0_18 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_18, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

int64_t var_98_1
__builtin_memset(&var_98_1, 0, 0x18)
int32_t x22 = *x19

if (x22 u<= 2)
    int32_t x23_1 = x19[1]
    
    if (x23_1 u< 0x28)
        char* result_1 = operator new(1)
        char* result_2 = result_1
        void* fp_1 = &result_1[1]
        char* result = result_1
        void* var_90_1 = fp_1
        *result_1 = x23_1.b + x22.b * 0x28
        void* var_88_1 = fp_1
        
        if (x21 == 8)
        label_cb16f8:
            int64_t entry_x1
            Botan::DER_Encoder::add_object(entry_x1, 6, nullptr, result_2)
            
            if (result == 0)
                return result
            
            return operator delete(result)
        
        int64_t x25_1 = 2
        
        while (true)
            uint64_t x8_6 = zx.q(x19[x25_1])
            void* var_90_2
            char* result_4
            void* x22_2
            int64_t x23_3
            char* result_6
            
            if (x8_6.d != 0)
                uint64_t x9_3 = zx.q(x8_6.d u>> 0x10 != 0 ? 1 : 0) << 4
                uint64_t x10_1 = x8_6 u>> x9_3
                uint64_t x11_1 = zx.q(x10_1.d u> 0xff ? 1 : 0)
                uint64_t x10_2 = x10_1 u>> x11_1 << 3
                uint64_t x11_2 = zx.q(x10_2.d u> 0xf ? 1 : 0)
                uint64_t x10_3 = x10_2 u>> x11_2 << 2
                uint64_t x11_3 = zx.q(x10_3.d u> 3 ? 1 : 0)
                uint64_t x10_4 = x10_3 u>> x11_3 << 1
                uint64_t x11_4 = zx.q(x10_4.d u> 1 ? 1 : 0)
                int64_t x9_8 = ((-3 & ((-5 & ((-9 & x9_3) | (1 & x11_1) << 3)) | (1 & x11_2) << 2))
                    | (1 & x11_3) << 1 | x11_4) + (x10_4 u>> x11_4)
                
                if (x9_8 == 0)
                label_cb1754:
                    Botan::assertion_failure("blocks > 0", "Math works", "encode_into", 
                        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x2d65)
                label_cb175c:
                    std::__ndk1::__vector_base_common<true>::__throw_length_error()
                    std::__ndk1::__vector_base_common<true>::__throw_length_error()
                    break
                
                uint64_t x9_12 = (x9_8 + 6) u/ 7
                int64_t x19_1 = x9_12 - 1
                
                if (x9_12 != 1)
                    int32_t x28_1 = x9_12.d * 7 - 7
                    
                    while (true)
                        char x26_1 = (x8_6.d u>> x28_1).b | 0x80
                        
                        if (fp_1 u< var_88_1)
                            *fp_1 = x26_1
                            fp_1 += 1
                            void* var_90_3 = fp_1
                        else
                            char* result_3 = result
                            size_t x22_1 = fp_1 - result_3
                            
                            if (x22_1 + 1 s< 0)
                                std::__ndk1::__vector_base_common<true>::__throw_length_error()
                                break
                            
                            void* x9_15 = var_88_1 - result_3
                            int64_t x10_8 = x9_15 << 1
                            int64_t x8_9
                            
                            if (x10_8 u< x22_1 + 1)
                                x8_9 = x22_1 + 1
                            else
                                x8_9 = x10_8
                            
                            int64_t x23_2
                            
                            x23_2 = x9_15 u< 0x3fffffffffffffff ? x8_9 : 0x7fffffffffffffff
                            
                            char* result_5
                            
                            if (x23_2 == 0)
                                result_5 = nullptr
                                *x22_1 = x26_1
                                fp_1 = x22_1 + 1
                                
                                if (x22_1 s>= 1)
                                    memcpy(result_5, result_3, x22_1)
                            else
                                result_5 = operator new(x23_2)
                                char* fp_2 = &result_5[x22_1]
                                *fp_2 = x26_1
                                fp_1 = &fp_2[1]
                                
                                if (x22_1 s>= 1)
                                    memcpy(result_5, result_3, x22_1)
                            
                            result = result_5
                            void* var_90_4 = fp_1
                            var_88_1 = &result_5[x23_2]
                            
                            if (result_3 != 0)
                                operator delete(result_3)
                        
                        x19_1 -= 1
                        x28_1 -= 7
                        x8_6 = zx.q(*(*(arg1 + 8) + (x25_1 << 2)))
                        
                        if (x19_1 == 0)
                            goto label_cb15d8
                    
                    goto label_cb1754
                
            label_cb15d8:
                char x19_2 = x8_6.b & 0x7f
                
                if (fp_1 u>= var_88_1)
                    result_4 = result
                    x22_2 = fp_1 - result_4
                    
                    if (x22_2 + 1 s< 0)
                        goto label_cb175c
                    
                    void* x9_17 = var_88_1 - result_4
                    int64_t x10_9 = x9_17 << 1
                    int64_t x8_12
                    
                    if (x10_9 u< x22_2 + 1)
                        x8_12 = x22_2 + 1
                    else
                        x8_12 = x10_9
                    
                    x23_3 = x9_17 u< 0x3fffffffffffffff ? x8_12 : 0x7fffffffffffffff
                    
                    if (x23_3 == 0)
                        result_6 = nullptr
                    else
                        result_6 = operator new(x23_3)
                    
                    void* fp_5 = result_6 + x22_2
                    *fp_5 = x19_2
                    fp_1 = fp_5 + 1
                    
                    if (x22_2 s< 1)
                        goto label_cb16b0
                    
                    goto label_cb16a8
                
                *fp_1 = x19_2
                fp_1 += 1
                var_90_2 = fp_1
            else if (fp_1 u>= var_88_1)
                result_4 = result
                x22_2 = fp_1 - result_4
                
                if (x22_2 + 1 s< 0)
                    std::__ndk1::__vector_base_common<true>::__throw_length_error()
                    break
                
                void* x8_14 = var_88_1 - result_4
                int64_t x10_10 = x8_14 << 1
                int64_t x9_19
                
                if (x10_10 u< x22_2 + 1)
                    x9_19 = x22_2 + 1
                else
                    x9_19 = x10_10
                
                x23_3 = x8_14 u< 0x3fffffffffffffff ? x9_19 : 0x7fffffffffffffff
                
                if (x23_3 != 0)
                    result_6 = operator new(x23_3)
                    char* fp_4 = result_6 + x22_2
                    *fp_4 = 0
                    fp_1 = &fp_4[1]
                    
                    if (x22_2 s>= 1)
                        goto label_cb16a8
                    
                    goto label_cb16b0
                
                result_6 = nullptr
                *x22_2 = 0
                fp_1 = x22_2 + 1
                
                if (x22_2 s< 1)
                    goto label_cb16b0
                
            label_cb16a8:
                memcpy(result_6, result_4, x22_2)
            label_cb16b0:
                result = result_6
                void* var_90_5 = fp_1
                var_88_1 = &result_6[x23_3]
                
                if (result_4 != 0)
                    operator delete(result_4)
            else
                *fp_1 = 0
                fp_1 += 1
                var_90_2 = fp_1
            x19 = *(arg1 + 8)
            x25_1 += 1
            
            if (x25_1 == (*(arg1 + 0x10) - x19) s>> 2)
                result_2 = result
                goto label_cb16f8

void** x0_12 = __cxa_allocate_exception(0x20)
int64_t x0_13
int128_t v0
x0_13, v0 = operator new(0x30)
int64_t var_a0 = x0_13
int128_t var_b0 = data_71c510
__builtin_strncpy(x0_13, "Invalid OID prefix, cannot encode", 0x22)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Encoding error: ", &var_b0)
*x0_12 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_12[1])
*x0_12 = _vtable_for_Botan::Invalid_Argument + 0x10
char var_80
void* var_70

if ((zx.d(var_80) & 1) != 0)
    operator delete(var_70)
*x0_12 = _vtable_for_Botan::Encoding_Error + 0x10
__cxa_throw(x0_12, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
noreturn
