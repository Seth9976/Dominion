// 函数: _ZNSt6__ndk112__deque_baseINS_7__stateIcEENS_9allocatorIS2_EEE5clearEv
// 地址: 0xf19bec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
void** x8 = *(entry_x0 + 8)
int64_t x9 = *(entry_x0 + 0x10)
void* x19 = entry_x0
void* x20_1

if (x9 == x8)
    x20_1 = x19 + 0x28
else
    int64_t x11_1 = *(x19 + 0x20)
    uint64_t x10_3 = x11_1 u/ 0x2a
    x20_1 = x19 + 0x28
    int64_t x11_2 = *x20_1 + x11_1
    void* x22_1 = x8[x10_3] + x11_1 u% 0x2a * 0x60
    int64_t x21_1 = x8[x11_2 u/ 0x2a] + x11_2 u% 0x2a * 0x60
    
    if (x22_1 != x21_1)
        void** x23_1 = &x8[x10_3]
        
        do
            void* x0 = *(x22_1 + 0x38)
            
            if (x0 != 0)
                *(x22_1 + 0x40) = x0
                operator delete(x0)
            
            entry_x0 = *(x22_1 + 0x20)
            
            if (entry_x0 != 0)
                *(x22_1 + 0x28) = entry_x0
                operator delete(entry_x0)
            
            x22_1 += 0x60
            
            if (x22_1 - *x23_1 == 0xfc0)
                x23_1 = &x23_1[1]
                x22_1 = *x23_1
        while (x22_1 != x21_1)
        
        x8 = *(x19 + 8)
        x9 = *(x19 + 0x10)

int64_t i = (x9 - x8) s>> 3
*x20_1 = 0

if (i u>= 3)
    do
        operator delete(*x8)
        x8 = *(x19 + 8) + 8
        i = (*(x19 + 0x10) - x8) s>> 3
        *(x19 + 8) = x8
    while (i u> 2)

if (i == 1)
    *(x19 + 0x20) = 0x15
else if (i == 2)
    *(x19 + 0x20) = 0x2a
