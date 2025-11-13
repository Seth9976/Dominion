// 函数: sub_f230d4
// 地址: 0xf230d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = *(arg2 + 0x20)

if (x20 != 0)
    int64_t* x8_1 = *(arg2 + 0x28)
    void* x0_1
    
    if (x8_1 == x20)
        x0_1 = x20
    else
        int64_t* x21_1 = x8_1
        
        do
            x21_1 = &x21_1[-3]
            void* x0 = *x21_1
            
            if (x0 != 0)
                int64_t x9_1 = x8_1[-1]
                x8_1[-2] = x0
                Botan::deallocate_memory(x0, x9_1 - x0, 1)
            
            x8_1 = x21_1
        while (x20 != x21_1)
        
        x0_1 = *(arg2 + 0x20)
    
    *(arg2 + 0x28) = x20
    operator delete(x0_1)

void* result = *(arg2 + 8)

if (result == 0)
    return result

int64_t x8_2 = *(arg2 + 0x18)
*(arg2 + 0x10) = result
return Botan::deallocate_memory(result, x8_2 - result, 1)
