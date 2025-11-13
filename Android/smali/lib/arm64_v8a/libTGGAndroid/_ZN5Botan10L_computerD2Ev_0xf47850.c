// 函数: _ZN5Botan10L_computerD2Ev
// 地址: 0xf47850
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
void* x0 = *(entry_x0 + 0x70)

if (x0 != 0)
    int64_t x8_1 = *(entry_x0 + 0x80)
    *(entry_x0 + 0x78) = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

void* x20 = *(entry_x0 + 0x58)

if (x20 != 0)
    int64_t* x8_2 = *(entry_x0 + 0x60)
    void* x0_2
    
    if (x8_2 == x20)
        x0_2 = x20
    else
        int64_t* x21_1 = x8_2
        
        do
            x21_1 = &x21_1[-3]
            void* x0_1 = *x21_1
            
            if (x0_1 != 0)
                int64_t x9_1 = x8_2[-1]
                x8_2[-2] = x0_1
                Botan::deallocate_memory(x0_1, x9_1 - x0_1, 1)
            
            x8_2 = x21_1
        while (x20 != x21_1)
        
        x0_2 = *(entry_x0 + 0x58)
    
    *(entry_x0 + 0x60) = x20
    operator delete(x0_2)

void* x0_3 = *(entry_x0 + 0x40)

if (x0_3 != 0)
    int64_t x8_3 = *(entry_x0 + 0x50)
    *(entry_x0 + 0x48) = x0_3
    Botan::deallocate_memory(x0_3, x8_3 - x0_3, 1)

void* x0_4 = *(entry_x0 + 0x28)

if (x0_4 != 0)
    int64_t x8_4 = *(entry_x0 + 0x38)
    *(entry_x0 + 0x30) = x0_4
    Botan::deallocate_memory(x0_4, x8_4 - x0_4, 1)

void* result = *(entry_x0 + 0x10)

if (result == 0)
    return result

int64_t x8_5 = *(entry_x0 + 0x20)
*(entry_x0 + 0x18) = result
return Botan::deallocate_memory(result, x8_5 - result, 1)
