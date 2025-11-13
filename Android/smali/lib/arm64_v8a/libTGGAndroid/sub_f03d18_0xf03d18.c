// 函数: sub_f03d18
// 地址: 0xf03d18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result_1
__builtin_memset(&result_1, 0, 0x18)
void* var_38_1
uint64_t result_4

if (arg3 == 0)
    result_4 = 0
else
    if ((arg3 & 0xffffffff80000000) != 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    void* result_3 = Botan::allocate_memory(arg3, 1)
    void* x23_1 = result_3 + arg3
    result_4 = result_3
    result_1 = result_3
    var_38_1 = x23_1
    memcpy(result_3, arg2, arg3)
    void* x2_1 = x23_1 - result_4
    
    if (x2_1 u>= 2)
        int64_t i = 0
        int64_t x9_1 = -1
        
        do
            void* x10_1 = result_4 + x2_1
            char x12_1 = *(result_4 + i)
            *(result_4 + i) = *(x10_1 + x9_1)
            *(x10_1 + x9_1) = x12_1
            result_4 = result_1
            i += 1
            x9_1 -= 1
            x2_1 = x23_1 - result_4
        while (i != x2_1 u>> 1)

__builtin_memset(arg1, 0, 0x18)
*(arg1 + 0x18) = -1
*(arg1 + 0x20) = 1
Botan::BigInt::binary_decode(arg1, result_4)
void* result = result_1

if (result == 0)
    return result

void* result_2 = result
return Botan::deallocate_memory(result, var_38_1 - result, 1)
