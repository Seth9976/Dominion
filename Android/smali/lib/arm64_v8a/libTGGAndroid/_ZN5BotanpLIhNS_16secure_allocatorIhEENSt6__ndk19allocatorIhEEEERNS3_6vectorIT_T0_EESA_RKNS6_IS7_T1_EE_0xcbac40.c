// 函数: _ZN5BotanpLIhNS_16secure_allocatorIhEENSt6__ndk19allocatorIhEEEERNS3_6vectorIT_T0_EESA_RKNS6_IS7_T1_EE
// 地址: 0xcbac40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *arg1
int64_t x21 = *(arg1 + 8)
int64_t x24 = x21 - x8
uint64_t x23 = *(arg2 + 8) - *arg2 + x24

if (*(arg1 + 0x10) - x8 u< x23)
    int64_t x0_1 = Botan::allocate_memory(x23, 1)
    void* x22_1 = *arg1
    x21 = x0_1 + x24
    size_t x2_1 = *(arg1 + 8) - x22_1
    int64_t x23_1 = x21 - x2_1
    
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
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
    arg1, x21, *arg2)
return arg1
