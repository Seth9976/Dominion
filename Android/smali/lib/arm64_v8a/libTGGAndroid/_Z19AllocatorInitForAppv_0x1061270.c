// 函数: _Z19AllocatorInitForAppv
// 地址: 0x1061270
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*gAllocatorArray != 0)
    return 

int64_t* x0 = XCalloc(0x100)
*gAllocatorArray = x0
*x0 = 0
x0[1] = 0
x0[3].d = 0x10
x0[2] = 0x1000
int64_t* x0_1 = XMalloc(0x10008)
*x0_1 = x0[1]
int32_t x9 = x0[2].d
void* x8_2 = *x0
x0[1] = x0_1

if (x9 s>= 1)
    int64_t i = 0
    void* x9_1 = &x0_1[1]
    
    do
        void* x11_1 = x9_1
        *x9_1 = x8_2
        x9_1 += 0x10
        i += 1
        x8_2 = x11_1
    while (i s< sx.q(x0[2].d))
    
    x8_2 = x9_1 - 0x10

*x0 = x8_2
uint64_t x21 = *gAllocatorArray
*(x21 + 0x20) = 0
*(x21 + 0x38) = 0x20
*(x21 + 0x28) = 0
*(x21 + 0x30) = 0x800
int64_t* x0_2 = XMalloc(0x10008)
*x0_2 = *(x21 + 0x28)
int32_t x9_2 = *(x21 + 0x30)
*(x21 + 0x28) = x0_2
void* x8_5 = *(x21 + 0x20)

if (x9_2 s> 0)
    int64_t i_1 = 0
    void* x10_1 = &x0_2[1]
    
    do
        void* x11_2 = x10_1
        *x10_1 = x8_5
        x10_1 += 0x20
        i_1 += 1
        x8_5 = x11_2
    while (i_1 s< sx.q(*(x21 + 0x30)))
    
    x8_5 = x10_1 - 0x20

*(x21 + 0x20) = x8_5
uint64_t x21_1 = *gAllocatorArray
*(x21_1 + 0x40) = 0
*(x21_1 + 0x58) = 0x40
*(x21_1 + 0x48) = 0
*(x21_1 + 0x50) = 0x400
int64_t* x0_3 = XMalloc(0x10008)
*x0_3 = *(x21_1 + 0x48)
int32_t x9_3 = *(x21_1 + 0x50)
*(x21_1 + 0x48) = x0_3
void* x8_8 = *(x21_1 + 0x40)

if (x9_3 s>= 1)
    int64_t i_2 = 0
    void* x10_2 = &x0_3[1]
    
    do
        void* x11_3 = x10_2
        *x10_2 = x8_8
        x10_2 += 0x40
        i_2 += 1
        x8_8 = x11_3
    while (i_2 s< sx.q(*(x21_1 + 0x50)))
    
    x8_8 = x10_2 - 0x40

*(x21_1 + 0x40) = x8_8
uint64_t x21_2 = *gAllocatorArray
*(x21_2 + 0x60) = 0
*(x21_2 + 0x78) = 0x80
*(x21_2 + 0x68) = 0
*(x21_2 + 0x70) = 0x200
int64_t* x0_4 = XMalloc(0x10008)
*x0_4 = *(x21_2 + 0x68)
int32_t x9_4 = *(x21_2 + 0x70)
*(x21_2 + 0x68) = x0_4
void* x8_11 = *(x21_2 + 0x60)

if (x9_4 s>= 1)
    int64_t i_3 = 0
    void* x10_3 = &x0_4[1]
    
    do
        void* x11_4 = x10_3
        *x10_3 = x8_11
        x10_3 += 0x80
        i_3 += 1
        x8_11 = x11_4
    while (i_3 s< sx.q(*(x21_2 + 0x70)))
    
    x8_11 = x10_3 - 0x80

*(x21_2 + 0x60) = x8_11
uint64_t x21_3 = *gAllocatorArray
*(x21_3 + 0x80) = 0
*(x21_3 + 0x98) = 0x100
*(x21_3 + 0x88) = 0
*(x21_3 + 0x90) = 0x100
int64_t* x0_5 = XMalloc(0x10008)
*x0_5 = *(x21_3 + 0x88)
int32_t x9_5 = *(x21_3 + 0x90)
*(x21_3 + 0x88) = x0_5
void* x8_14 = *(x21_3 + 0x80)

if (x9_5 s>= 1)
    int64_t i_4 = 0
    void* x10_4 = &x0_5[1]
    
    do
        *x10_4 = x8_14
        i_4 += 1
        x8_14 = x10_4
        x10_4 += 0x100
    while (i_4 s< sx.q(*(x21_3 + 0x90)))
    
    x8_14 = x10_4 - 0x100

*(x21_3 + 0x80) = x8_14
uint64_t x21_4 = *gAllocatorArray
*(x21_4 + 0xa0) = 0
*(x21_4 + 0xb8) = 0x200
*(x21_4 + 0xa8) = 0
*(x21_4 + 0xb0) = 0x80
int64_t* x0_6 = XMalloc(0x10008)
*x0_6 = *(x21_4 + 0xa8)
int32_t x9_6 = *(x21_4 + 0xb0)
*(x21_4 + 0xa8) = x0_6
void* x8_17 = *(x21_4 + 0xa0)

if (x9_6 s>= 1)
    int64_t i_5 = 0
    void* x10_5 = &x0_6[1]
    
    do
        *x10_5 = x8_17
        i_5 += 1
        x8_17 = x10_5
        x10_5 += 0x200
    while (i_5 s< sx.q(*(x21_4 + 0xb0)))
    
    x8_17 = x10_5 - 0x200

*(x21_4 + 0xa0) = x8_17
uint64_t x21_5 = *gAllocatorArray
*(x21_5 + 0xc0) = 0
*(x21_5 + 0xd8) = 0x400
*(x21_5 + 0xc8) = 0
*(x21_5 + 0xd0) = 0x40
int64_t* x0_7 = XMalloc(0x10008)
*x0_7 = *(x21_5 + 0xc8)
int32_t x9_7 = *(x21_5 + 0xd0)
*(x21_5 + 0xc8) = x0_7
void* x8_20 = *(x21_5 + 0xc0)

if (x9_7 s>= 1)
    int64_t i_6 = 0
    void* x10_6 = &x0_7[1]
    
    do
        *x10_6 = x8_20
        i_6 += 1
        x8_20 = x10_6
        x10_6 += 0x400
    while (i_6 s< sx.q(*(x21_5 + 0xd0)))
    
    x8_20 = x10_6 - 0x400

*(x21_5 + 0xc0) = x8_20
*(*gAllocatorArray + 0xf8) = 0xffffffff
