// 函数: _ZN5Botan8SIV_ModeD1Ev
// 地址: 0xee48bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x20 = entry_x0[0xc]
*entry_x0 = _vtable_for_Botan::SIV_Mode + 0x10

if (x20 != 0)
    int64_t* x8_1 = entry_x0[0xd]
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
        
        x0_1 = entry_x0[0xc]
    
    entry_x0[0xd] = x20
    operator delete(x0_1)

void* x0_2 = entry_x0[9]

if (x0_2 != 0)
    int64_t x8_2 = entry_x0[0xb]
    entry_x0[0xa] = x0_2
    Botan::deallocate_memory(x0_2, x8_2 - x0_2, 1)

void* x0_3 = entry_x0[6]

if (x0_3 != 0)
    int64_t x8_3 = entry_x0[8]
    entry_x0[7] = x0_3
    Botan::deallocate_memory(x0_3, x8_3 - x0_3, 1)

int64_t* x0_4 = entry_x0[5]
entry_x0[5] = 0

if (x0_4 != 0)
    (*(*x0_4 + 0x10))()

int64_t* result = entry_x0[4]
entry_x0[4] = 0

if (result != 0)
    result = (*(*result + 8))()

if ((zx.d(entry_x0[1].b) & 1) != 0)
    return operator delete(entry_x0[3]) __tailcall

return result
