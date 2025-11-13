// 函数: _ZN5BotanplERKNS_11OctetStringES2_
// 地址: 0xccf658
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __saved_x1_1
__builtin_memset(&__saved_x1_1, 0, 0x18)
void* result_1
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(&result_1)
Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, Botan::secure_allocator<uint8_t> >(
    &__saved_x1_1, &result_1)
void* result_4 = result_1
int64_t var_50

if (result_4 != 0)
    void* result_5 = result_4
    Botan::deallocate_memory(result_4, var_50 - result_4, 1)

std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(&result_1)
Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, Botan::secure_allocator<uint8_t> >(
    &__saved_x1_1, &result_1)
void* result = result_1

if (result != 0)
    void* result_2 = result
    result = Botan::deallocate_memory(result, var_50 - result, 1)

void* __saved_x1 = __saved_x1_1
void** entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int64_t var_40
uint64_t x22 = var_40 - __saved_x1

if (var_40 != __saved_x1)
    if ((x22 & 0xffffffff80000000) != 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    result = Botan::allocate_memory(x22, 1)
    __saved_x1 = __saved_x1_1
    void* result_3 = result
    *entry_x8 = result
    entry_x8[1] = result
    size_t x22_1 = var_40 - __saved_x1
    entry_x8[2] = result + x22
    
    if (x22_1 s>= 1)
        result = memcpy(result_3, __saved_x1, x22_1)
        result_3 += x22_1
    
    entry_x8[1] = result_3

if (__saved_x1 == 0)
    return result

void* __saved_x1_2 = __saved_x1
int64_t var_38
return Botan::deallocate_memory(__saved_x1, var_38 - __saved_x1, 1)
