// 函数: _Z22DefParseTreeInitForAppv
// 地址: 0xc8ab74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x0 = XCalloc(0x30)
void* x19 = x0
*gpDefParseTreeAppData = x0
*(x0 + 0x18) = 0
*(x0 + 0x20) = 0
*(x0 + 0x28) = 0x400
int64_t* x0_1 = XMalloc(0xa008)
*x0_1 = *(x19 + 0x20)
int32_t x9 = *(x19 + 0x28)
*(x19 + 0x20) = x0_1
void* x8_1 = *(x0 + 0x18)

if (x9 s>= 1)
    int64_t i = 0
    void* x10_1 = &x0_1[1]
    
    do
        void* x11_1 = x10_1
        *x10_1 = x8_1
        x10_1 += 0x28
        i += 1
        x8_1 = x11_1
    while (i s< sx.q(*(x19 + 0x28)))
    
    x8_1 = x10_1 - 0x28

*(x0 + 0x18) = x8_1
int64_t* x19_1 = *gpDefParseTreeAppData
*x19_1 = 0
x19_1[1] = 0
x19_1[2] = 0x400
int64_t* result = XMalloc(0xc008)
*result = x19_1[1]
int32_t x9_1 = x19_1[2].d
void* x8_4 = *x19_1
x19_1[1] = result

if (x9_1 s>= 1)
    int64_t i_1 = 0
    void* x9_2 = &result[1]
    
    do
        void* x11_2 = x9_2
        *x9_2 = x8_4
        x9_2 += 0x30
        i_1 += 1
        x8_4 = x11_2
    while (i_1 s< sx.q(x19_1[2].d))
    
    x8_4 = x9_2 - 0x30

*x19_1 = x8_4
return result
