// 函数: _ZN5Botan14Output_Buffers6retireEv
// 地址: 0xd7b4f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t x8 = *(entry_x0 + 0x28)

if (x8 == 0)
    return 

int64_t x21_1 = 0

do
    int64_t x11_1 = *(entry_x0 + 0x20) + x21_1
    int64_t x9_4 = *(*(entry_x0 + 8) + (x11_1 u>> 6 & 0x3fffffffffffff8))
    int64_t x10_2 = x11_1 & 0x1ff
    void* x20_1 = *(x9_4 + (x10_2 << 3))
    
    if (x20_1 != 0)
        void** i = *(x20_1 + 0x60)
        
        if (i == 0)
        label_d7b518:
            *(x9_4 + (x10_2 << 3)) = 0
            Botan::SecureQueue::~SecureQueue()
            operator delete(x20_1)
            x8 = *(entry_x0 + 0x28)
        else
            int64_t x12_1 = 0
            
            do
                int64_t x14_1 = i[4]
                int64_t x13_1 = i[5]
                i = *i
                x12_1 = x13_1 + x12_1 - x14_1
            while (i != 0)
            
            if (x12_1 == 0)
                goto label_d7b518
    
    x21_1 += 1
while (x21_1 != x8)

if (x8 == 0)
    return 

int64_t x8_1 = *(entry_x0 + 0x20)
int64_t i_1

do
    int64_t x8_2 = x8_1 & 0x1ff
    int64_t x9_6 = *(*(entry_x0 + 8) + (x8_1 u>> 6 & 0x3fffffffffffff8))
    
    if (*(x9_6 + (x8_2 << 3)) != 0)
        break
    
    *(x9_6 + (x8_2 << 3)) = 0
    i_1 = *(entry_x0 + 0x28) - 1
    x8_1 = *(entry_x0 + 0x20) + 1
    *(entry_x0 + 0x20) = x8_1
    *(entry_x0 + 0x28) = i_1
    
    if (x8_1 u>= 0x400)
        operator delete(**(entry_x0 + 8))
        i_1 = *(entry_x0 + 0x28)
        x8_1 = *(entry_x0 + 0x20) - 0x200
        *(entry_x0 + 8) += 8
        *(entry_x0 + 0x20) = x8_1
    
    *(entry_x0 + 0x30) += 1
while (i_1 != 0)
