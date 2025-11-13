// 函数: _ZN5BotanpLIhNS_16secure_allocatorIhEEmEERNSt6__ndk16vectorIT_T0_EES8_RKNS3_4pairIPKS5_T1_EE
// 地址: 0xcba42c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *arg1
uint8_t* x21 = *(arg1 + 8)
void* x24 = x21 - x8
uint64_t x23 = x24 + *(arg2 + 8)

if (*(arg1 + 0x10) - x8 u< x23)
    void* x0_1 = Botan::allocate_memory(x23, 1)
    void* x22_1 = *arg1
    x21 = x0_1 + x24
    size_t x2_1 = *(arg1 + 8) - x22_1
    void* x23_1 = x21 - x2_1
    
    if (x2_1 s>= 1)
        memcpy(x23_1, x22_1, x2_1)
    
    int64_t x8_3 = *(arg1 + 0x10)
    *arg1 = x23_1
    *(arg1 + 8) = x21
    *(arg1 + 0x10) = x0_1 + x23
    
    if (x22_1 != 0)
        Botan::deallocate_memory(x22_1, x8_3 - x22_1, 1)
        x21 = *(arg1 + 8)

*(arg2 + 8)
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::insert<uint8_t const*>(arg1, x21, 
    *arg2)
return arg1
