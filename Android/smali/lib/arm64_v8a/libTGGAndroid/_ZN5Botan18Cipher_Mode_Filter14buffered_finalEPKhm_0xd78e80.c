// 函数: _ZN5Botan18Cipher_Mode_Filter14buffered_finalEPKhm
// 地址: 0xd78e80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result_1
__builtin_memset(&result_1, 0, 0x18)
void* var_40_1
void* var_38_1
uint64_t entry_x2

if (entry_x2 != 0)
    if ((entry_x2 & 0xffffffff80000000) != 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    void* result_3 = Botan::allocate_memory(entry_x2, 1)
    void* x22_1 = result_3 + entry_x2
    result_1 = result_3
    var_38_1 = x22_1
    memcpy(result_3, arg2, entry_x2)
    var_40_1 = x22_1

int64_t* x0_1 = *(arg1 + 0x88)
(*(*x0_1 + 0x40))(x0_1, &result_1, 0)
void* result_4 = result_1
(*(*arg1 + 0x38))(arg1, result_4, var_40_1 - result_4)
void* result = result_1

if (result == 0)
    return result

void* result_2 = result
return Botan::deallocate_memory(result, var_38_1 - result, 1)
