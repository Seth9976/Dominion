// 函数: _ZN5Botan8SIV_Mode5resetEv
// 地址: 0xe25840
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t x20 = *(entry_x0 + 0x60)
void** x8 = *(entry_x0 + 0x68)
int64_t x10 = *(entry_x0 + 0x48)
void* x19 = entry_x0
*(entry_x0 + 0x38) = *(entry_x0 + 0x30)
*(entry_x0 + 0x50) = x10

if (x8 != x20)
    void** x21_1 = x8
    
    do
        x21_1 = &x21_1[-3]
        entry_x0 = *x21_1
        
        if (entry_x0 != 0)
            int64_t x9_1 = x8[-1]
            x8[-2] = entry_x0
            Botan::deallocate_memory(entry_x0, x9_1 - entry_x0, 1)
        
        x8 = x21_1
    while (x20 != x21_1)

*(x19 + 0x68) = x20
