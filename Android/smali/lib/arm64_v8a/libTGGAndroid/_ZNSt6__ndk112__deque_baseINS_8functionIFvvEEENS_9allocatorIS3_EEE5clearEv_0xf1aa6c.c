// 函数: _ZNSt6__ndk112__deque_baseINS_8functionIFvvEEENS_9allocatorIS3_EEE5clearEv
// 地址: 0xf1aa6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
void** x8 = entry_x0[1]
int64_t x9 = entry_x0[2]
int64_t* x19 = entry_x0
void* x20_1

if (x9 == x8)
    x20_1 = &x19[5]
else
    int64_t x11_1 = x19[4]
    uint64_t x10_2 = x11_1 u/ 0x55
    x20_1 = &x19[5]
    int64_t x11_2 = *x20_1 + x11_1
    void* x22_1 = x8[x10_2] + x11_1 u% 0x55 * 0x30
    int64_t x21_1 = x8[x11_2 u/ 0x55] + x11_2 u% 0x55 * 0x30
    
    if (x22_1 != x21_1)
        void** x23_1 = &x8[x10_2]
        
        do
            entry_x0 = *(x22_1 + 0x20)
            
            if (x22_1 == entry_x0)
                (*(*entry_x0 + 0x20))()
            else if (entry_x0 != 0)
                (*(*entry_x0 + 0x28))()
            
            x22_1 += 0x30
            
            if (x22_1 - *x23_1 == 0xff0)
                x23_1 = &x23_1[1]
                x22_1 = *x23_1
        while (x22_1 != x21_1)
        
        x8 = x19[1]
        x9 = x19[2]

int64_t i = (x9 - x8) s>> 3
*x20_1 = 0

if (i u>= 3)
    do
        operator delete(*x8)
        x8 = x19[1] + 8
        i = (x19[2] - x8) s>> 3
        x19[1] = x8
    while (i u> 2)

if (i == 1)
    x19[4] = 0x2a
else if (i == 2)
    x19[4] = 0x55
