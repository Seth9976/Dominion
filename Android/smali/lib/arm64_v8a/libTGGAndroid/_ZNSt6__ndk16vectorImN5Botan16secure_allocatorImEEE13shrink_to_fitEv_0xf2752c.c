// 函数: _ZNSt6__ndk16vectorImN5Botan16secure_allocatorImEEE13shrink_to_fitEv
// 地址: 0xf2752c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
void* x20 = *entry_x0
void* x8_1 = entry_x0[1] - x20
int64_t x21 = x8_1 s>> 3

if (x21 u>= (entry_x0[2] - x20) s>> 3)
    return 

int64_t* x19_1 = entry_x0
int64_t x8_3

if (x8_1 == 0)
    int64_t x21_2 = x21 << 3
    x8_3 = x19_1[2]
    *x19_1 = x21_2
    x19_1[1] = x21_2
    x19_1[2] = x21_2
    
    if (x20 != 0)
        Botan::deallocate_memory(x20, (x8_3 - x20) s>> 3, 8)
else
    entry_x0 = Botan::allocate_memory(x21, 8)
    x20 = *x19_1
    void* x22_1 = &entry_x0[x21]
    size_t x2_1 = x19_1[1] - x20
    void* x21_1 = x22_1 - x2_1
    
    if (x2_1 s>= 1)
        memcpy(x21_1, x20, x2_1)
    
    x8_3 = x19_1[2]
    *x19_1 = x21_1
    x19_1[1] = x22_1
    x19_1[2] = x22_1
    
    if (x20 != 0)
        Botan::deallocate_memory(x20, (x8_3 - x20) s>> 3, 8)
