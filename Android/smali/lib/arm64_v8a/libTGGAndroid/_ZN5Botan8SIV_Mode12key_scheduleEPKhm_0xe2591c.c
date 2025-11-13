// 函数: _ZN5Botan8SIV_Mode12key_scheduleEPKhm
// 地址: 0xe2591c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::SymmetricAlgorithm::set_key(*(arg1 + 0x28) + 8, arg2)
int64_t entry_x2
void* result = Botan::SymmetricAlgorithm::set_key(*(arg1 + 0x20), arg2 + (entry_x2 u>> 1))
int64_t x20_1 = *(arg1 + 0x60)
int64_t* x8_1 = *(arg1 + 0x68)

if (x8_1 != x20_1)
    int64_t* x21_1 = x8_1
    
    do
        x21_1 = &x21_1[-3]
        result = *x21_1
        
        if (result != 0)
            int64_t x9_1 = x8_1[-1]
            x8_1[-2] = result
            result = Botan::deallocate_memory(result, x9_1 - result, 1)
        
        x8_1 = x21_1
    while (x20_1 != x21_1)

*(arg1 + 0x68) = x20_1
return result
