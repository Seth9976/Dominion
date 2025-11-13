// 函数: _ZN5Botan11DER_Encoder12DER_Sequence9add_bytesEPKhmS3_m
// 地址: 0xcba4ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result_1
void* entry_x4

if (*arg1 != 0x11)
    result_1 = arg2
    uint8_t const* var_60_1 = arg3
    Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, uint64_t>(&arg1[8], &result_1)
    result_1 = arg4
    void* var_60_2 = entry_x4
    return Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, uint64_t>(&arg1[8], 
        &result_1)

void* x26_1 = entry_x4 + arg3
__builtin_memset(&result_1, 0, 0x18)
void* var_60
void* var_58

if (entry_x4 != neg.q(arg3))
    void* x0_1 = Botan::allocate_memory(x26_1, 1)
    uint64_t result_3 = result_1
    size_t x2 = var_60 - result_3
    void* result_4 = x0_1 - x2
    
    if (x2 s>= 1)
        memcpy(result_4, result_3, x2)
    
    void* x8_2 = var_58
    result_1 = result_4
    var_60 = x0_1
    var_58 = x0_1 + x26_1
    
    if (result_3 != 0)
        Botan::deallocate_memory(result_3, x8_2 - result_3, 1)

uint64_t var_78 = arg2
uint8_t const* var_70_1 = arg3
Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, uint64_t>(&result_1, &var_78)
var_78 = arg4
void* var_70_2 = entry_x4
void* result =
    Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, uint64_t>(&result_1, &var_78)
int64_t* x8_3 = *(arg1 + 0x28)

if (x8_3 u>= *(arg1 + 0x30))
    std::__ndk1::vector<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::allocator<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > > >::__push_back_slow_path<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > >(
        &arg1[0x20])
    result = result_1
    
    if (result != 0)
        void* result_2 = result
        return Botan::deallocate_memory(result, var_58 - result, 1)
else
    __builtin_memset(x8_3, 0, 0x18)
    *x8_3 = result_1
    x8_3[1] = var_60
    x8_3[2] = var_58
    *(arg1 + 0x28) = &x8_3[3]

return result
