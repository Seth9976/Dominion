// 函数: _ZN5Botan6BigInt9randomizeERNS_21RandomNumberGeneratorEmb
// 地址: 0xcde414
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x20) = 1
uint64_t result

if (arg3 == 0)
    int64_t x8_5 = *(arg1 + 0x10)
    result = *arg1
    size_t x9 = x8_5 - result
    size_t x2 = *(arg1 + 8) - result
    int64_t x10_2 = x9 s>> 2
    int64_t x11_1 = x2 s>> 2
    
    if (x10_2 u> x11_1)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg1)
        result = *arg1
        x2 = *(arg1 + 8) - result
    else if (x10_2 u< x11_1)
        x2 = x9
        *(arg1 + 8) = x8_5
    
    if (x2 != 0)
        result = memset(result, 0, x2)
    
    *(arg1 + 0x18) = 0
    *(arg1 + 0x20) = 1
else
    int64_t x22_1 = arg3 & 7
    int64_t x8_2
    
    if (x22_1 == 0)
        x8_2 = 0
    else
        x8_2 = 8 - (arg3 & 7)
    
    uint64_t result_3 = (x8_2 + arg3) u>> 3
    uint64_t result_1
    __builtin_memset(&result_1, 0, 0x18)
    int64_t x8_4
    
    if (result_3 == 0)
        x8_4 = 0
    else
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&result_1)
        result_3 = result_1
        int64_t var_40
        x8_4 = var_40
    
    (*(*arg2 + 0x10))(arg2, result_3, x8_4 - result_3)
    
    if (x22_1 != 0)
        uint64_t result_4 = result_1
        *result_4 &= (0xff u>> (8 - x22_1.d)).b
    
    int32_t entry_x3
    
    if ((entry_x3 & 1) != 0)
        uint64_t result_5 = result_1
        uint8_t x8_9
        
        if (x22_1 == 0)
            x8_9 = -0x80
        else
            x8_9 = (0x80 u>> (8 - x22_1.d)).b
        
        *result_5 |= x8_9
    
    Botan::BigInt::binary_decode(arg1, result_1)
    result = result_1
    
    if (result != 0)
        uint64_t result_2 = result
        int64_t var_38
        return Botan::deallocate_memory(result, var_38 - result, 1)

return result
