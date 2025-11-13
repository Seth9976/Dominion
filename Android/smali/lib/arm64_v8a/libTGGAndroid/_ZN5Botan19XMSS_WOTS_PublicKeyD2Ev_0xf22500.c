// 函数: _ZN5Botan19XMSS_WOTS_PublicKeyD2Ev
// 地址: 0xf22500
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
void* x8 = *entry_x1
int64_t* entry_x0
*entry_x0 = x8
*(entry_x0 + *(x8 - 0x88)) = entry_x1[1]
void* x0 = entry_x0[0x1b]

if (x0 != 0)
    int64_t x8_2 = entry_x0[0x1d]
    entry_x0[0x1c] = x0
    Botan::deallocate_memory(x0, x8_2 - x0, 1)

void* x20 = entry_x0[0x18]

if (x20 != 0)
    int64_t* x8_3 = entry_x0[0x19]
    void* x0_2
    
    if (x8_3 == x20)
        x0_2 = x20
    else
        int64_t* x21_1 = x8_3
        
        do
            x21_1 = &x21_1[-3]
            void* x0_1 = *x21_1
            
            if (x0_1 != 0)
                int64_t x9_1 = x8_3[-1]
                x8_3[-2] = x0_1
                Botan::deallocate_memory(x0_1, x9_1 - x0_1, 1)
            
            x8_3 = x21_1
        while (x20 != x21_1)
        
        x0_2 = entry_x0[0x18]
    
    entry_x0[0x19] = x20
    operator delete(x0_2)

if ((zx.d(entry_x0[0x15].b) & 1) != 0)
    operator delete(entry_x0[0x17])

void* x0_4 = entry_x0[0x11]

if (x0_4 != 0)
    entry_x0[0x12] = x0_4
    operator delete(x0_4)

int64_t* x0_5 = entry_x0[0x10]
entry_x0[0x10] = 0

if (x0_5 != 0)
    (*(*x0_5 + 0x10))()

int64_t* result = entry_x0[0xf]
entry_x0[0xf] = 0

if (result != 0)
    result = (*(*result + 0x10))()

if ((zx.d(entry_x0[5].b) & 1) != 0)
    result = operator delete(entry_x0[7])

if ((zx.d(entry_x0[2].b) & 1) != 0)
    return operator delete(entry_x0[4]) __tailcall

return result
