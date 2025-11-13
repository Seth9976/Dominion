// 函数: _ZN5Botan4PSSR11encoding_ofERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEmRNS_21RandomNumberGeneratorE
// 地址: 0xd62308
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result_3 = *(arg1 + 0x10)
void* result_1
__builtin_memset(&result_1, 0, 0x18)
int64_t x8

if (result_3 == 0)
    x8 = 0
else
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&result_1)
    result_3 = result_1
    int64_t var_40
    x8 = var_40

int64_t* entry_x3
(*(*entry_x3 + 0x10))(entry_x3, result_3, x8 - result_3)
uint8_t** entry_x8
sub_d6240c(entry_x8, *(arg1 + 8), arg2, &result_1, arg3)
void* result = result_1

if (result == 0)
    return result

void* result_2 = result
int64_t var_38
return Botan::deallocate_memory(result, var_38 - result, 1)
