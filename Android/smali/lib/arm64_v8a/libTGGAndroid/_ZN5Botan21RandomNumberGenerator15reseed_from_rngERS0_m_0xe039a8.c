// 函数: _ZN5Botan21RandomNumberGenerator15reseed_from_rngERS0_m
// 地址: 0xe039a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = (*(*arg1 + 0x18))()

if ((result.d & 1) != 0)
    int64_t entry_x2
    uint64_t x22_1 = entry_x2 u>> 3
    void* x19_1
    void* x23_1
    
    if (x22_1 == 0)
        x19_1 = nullptr
        x23_1 = nullptr
    else
        void* x0_1 = Botan::allocate_memory(x22_1, 1)
        x19_1 = x0_1
        x23_1 = x0_1 + x22_1
        memset(x0_1, 0, x22_1)
    
    uint64_t x22_2 = x23_1 - x19_1
    (*(*arg2 + 0x10))(arg2, x19_1, x22_2)
    result = (*(*arg1 + 0x20))(arg1, x19_1, x22_2)
    
    if (x19_1 != 0)
        return Botan::deallocate_memory(x19_1, x22_2, 1)

return result
