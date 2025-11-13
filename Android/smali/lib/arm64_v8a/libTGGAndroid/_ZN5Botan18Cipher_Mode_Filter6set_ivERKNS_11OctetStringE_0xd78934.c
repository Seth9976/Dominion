// 函数: _ZN5Botan18Cipher_Mode_Filter6set_ivERKNS_11OctetStringE
// 地址: 0xd78934
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* result_1
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(&result_1)
char* result_3 = result_1
char* var_48_1
__builtin_memset(&var_48_1, 0, 0x18)
int64_t var_58
uint64_t x20 = var_58 - result_3
char* x0_2
void* x9
char* x10
char* var_40_1
void* var_38_1
void* x8_1
void* __offset(Botan::OctetString, 0x90) x20_2

if (var_58 == result_3)
    x9 = nullptr
    x10 = nullptr
    x0_2 = nullptr
    x20_2 = arg1 + 0x90
    x8_1 = *x20_2
    
    if (x8_1 != 0)
    label_d78a2c:
        *(arg1 + 0x98) = x8_1
        operator delete(x8_1)
        __builtin_memset(x20_2, 0, 0x18)
        x0_2 = var_48_1
        x10 = var_40_1
        x9 = var_38_1
else
    if ((x20 & 0xffffffff80000000) != 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    int128_t v0_1
    int128_t v1_1
    x0_2, v0_1, v1_1 = operator new(x20)
    x9 = &x0_2[x20]
    x10 = x0_2
    var_48_1 = x0_2
    char* var_40_2 = x0_2
    var_38_1 = x9
    
    if (result_3 != var_58)
        if (x20 u>= 0x20)
            if (x0_2 u< var_58)
                x10 = x0_2
            
            if (x0_2 u< var_58 && result_3 u< var_58 + x0_2 - result_3)
                goto label_d78a14
            
            int64_t i_2 = x20 & 0xffffffffffffffe0
            void* x11_1 = &result_3[0x10]
            x10 = &x0_2[i_2]
            result_3 = &result_3[i_2]
            void* x12_1 = &x0_2[0x10]
            int64_t i_1 = i_2
            int64_t i
            
            do
                v0_1 = *(x11_1 - 0x10)
                v1_1 = *x11_1
                x11_1 += 0x20
                i = i_1
                i_1 -= 0x20
                *(x12_1 - 0x10) = v0_1
                *x12_1 = v1_1
                x12_1 += 0x20
            while (i != 0x20)
            
            if (x20 != i_2)
                goto label_d78a14
        else
            x10 = x0_2
        label_d78a14:
            
            do
                char x8_4 = *result_3
                result_3 = &result_3[1]
                *x10 = x8_4
                x10 = &x10[1]
            while (var_58 != result_3)
    
    var_40_1 = x10
    x20_2 = arg1 + 0x90
    x8_1 = *x20_2
    
    if (x8_1 != 0)
        goto label_d78a2c
*(arg1 + 0x90) = x0_2
*(arg1 + 0x98) = x10
*(arg1 + 0xa0) = x9
char* result = result_1
int64_t var_48_2
__builtin_memset(&var_48_2, 0, 0x18)

if (result == 0)
    return result

char* result_2 = result
int64_t var_50
return Botan::deallocate_memory(result, var_50 - result, 1)
