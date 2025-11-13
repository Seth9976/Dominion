// 函数: _ZNSt6__ndk112__deque_baseINS_10unique_ptrIN5Botan11SecureQueueENS_14default_deleteIS3_EEEENS_9allocatorIS6_EEE5clearEv
// 地址: 0xf444b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t* x8 = *(entry_x0 + 8)
int64_t x9 = *(entry_x0 + 0x10)
void* x21_1

if (x9 == x8)
    x21_1 = entry_x0 + 0x28
else
    int64_t x10_1 = *(entry_x0 + 0x20)
    int64_t* x22_1 = x8 + (x10_1 u>> 6 & 0x3fffffffffffff8)
    x21_1 = entry_x0 + 0x28
    int64_t x12_2 = *x21_1 + x10_1
    void** x24_1 = *x22_1 + ((x10_1 & 0x1ff) << 3)
    int64_t x23_1 = *(x8 + (x12_2 u>> 6 & 0x3fffffffffffff8)) + ((x12_2 & 0x1ff) << 3)
    
    if (x24_1 != x23_1)
        do
            void* x20_1 = *x24_1
            *x24_1 = nullptr
            
            if (x20_1 != 0)
                Botan::SecureQueue::~SecureQueue()
                operator delete(x20_1)
            
            x24_1 = &x24_1[1]
            
            if (x24_1 - *x22_1 == 0x1000)
                x22_1 = &x22_1[1]
                x24_1 = *x22_1
        while (x24_1 != x23_1)
        
        x8 = *(entry_x0 + 8)
        x9 = *(entry_x0 + 0x10)

int64_t i = (x9 - x8) s>> 3
*x21_1 = 0

if (i u>= 3)
    do
        operator delete(*x8)
        x8 = *(entry_x0 + 8) + 8
        i = (*(entry_x0 + 0x10) - x8) s>> 3
        *(entry_x0 + 8) = x8
    while (i u> 2)

if (i == 1)
    *(entry_x0 + 0x20) = 0x100
else if (i == 2)
    *(entry_x0 + 0x20) = 0x200
