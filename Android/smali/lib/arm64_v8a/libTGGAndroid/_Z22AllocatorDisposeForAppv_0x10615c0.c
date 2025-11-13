// 函数: _Z22AllocatorDisposeForAppv
// 地址: 0x10615c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x21 = *gAllocatorArray
int64_t* i_8 = *(x21 + 8)
void* x20 = x21

if (i_8 != 0)
    int64_t* i
    
    do
        i = *i_8
        XFree(i_8)
        i_8 = i
    while (i != 0)
    x20 = *gAllocatorArray

*(x21 + 8) = 0
int64_t* i_9 = *(x20 + 0x28)
void* x21_1 = x20

if (i_9 != 0)
    int64_t* i_1
    
    do
        i_1 = *i_9
        XFree(i_9)
        i_9 = i_1
    while (i_1 != 0)
    x21_1 = *gAllocatorArray

*(x20 + 0x28) = 0
int64_t* i_10 = *(x21_1 + 0x48)
void* x20_1 = x21_1

if (i_10 != 0)
    int64_t* i_2
    
    do
        i_2 = *i_10
        XFree(i_10)
        i_10 = i_2
    while (i_2 != 0)
    x20_1 = *gAllocatorArray

*(x21_1 + 0x48) = 0
int64_t* i_11 = *(x20_1 + 0x68)
void* x21_2 = x20_1

if (i_11 != 0)
    int64_t* i_3
    
    do
        i_3 = *i_11
        XFree(i_11)
        i_11 = i_3
    while (i_3 != 0)
    x21_2 = *gAllocatorArray

*(x20_1 + 0x68) = 0
int64_t* i_12 = *(x21_2 + 0x88)
void* x20_2 = x21_2

if (i_12 != 0)
    int64_t* i_4
    
    do
        i_4 = *i_12
        XFree(i_12)
        i_12 = i_4
    while (i_4 != 0)
    x20_2 = *gAllocatorArray

*(x21_2 + 0x88) = 0
int64_t* i_13 = *(x20_2 + 0xa8)
void* x21_3 = x20_2

if (i_13 != 0)
    int64_t* i_5
    
    do
        i_5 = *i_13
        XFree(i_13)
        i_13 = i_5
    while (i_5 != 0)
    x21_3 = *gAllocatorArray

*(x20_2 + 0xa8) = 0
int64_t* i_14 = *(x21_3 + 0xc8)
void* x20_3 = x21_3

if (i_14 != 0)
    int64_t* i_6
    
    do
        i_6 = *i_14
        XFree(i_14)
        i_14 = i_6
    while (i_6 != 0)
    x20_3 = *gAllocatorArray

*(x21_3 + 0xc8) = 0
int64_t* i_15 = *(x20_3 + 0xe8)
void* x0

if (i_15 == 0)
    x0 = x20_3
else
    int64_t* i_7
    
    do
        i_7 = *i_15
        XFree(i_15)
        i_15 = i_7
    while (i_7 != 0)
    x0 = *gAllocatorArray

*(x20_3 + 0xe8) = 0
int64_t result = XFree(x0)
*gAllocatorArray = 0
return result
