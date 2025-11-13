// 函数: _Z20AnimationInitForGamev
// 地址: 0xc782f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(*gpGameData + 8) = XPooledCalloc(0x30)
int64_t* x19 = *(*gpGameData + 8)
*x19 = 0
x19[1] = 0
x19[2] = 0x40
int64_t* x0_1 = XMalloc(0x3008)
*x0_1 = x19[1]
int32_t x9 = x19[2].d
void* x8_2 = *x19
x19[1] = x0_1

if (x9 s>= 1)
    int64_t i = 0
    void* x9_1 = &x0_1[1]
    
    do
        void* x11_1 = x9_1
        *x9_1 = x8_2
        x9_1 += 0xc0
        i += 1
        x8_2 = x11_1
    while (i s< sx.q(x19[2].d))
    
    x8_2 = x9_1 - 0xc0

*x19 = x8_2
x19[4] = 0
x19[3] = 0
x19[5] = 0x40
int64_t* result = XMalloc(0xd408)
*result = x19[4]
int32_t x9_2 = x19[5].d
x19[4] = result
void* x8_5 = x19[3]

if (x9_2 s>= 1)
    int64_t i_1 = 0
    void* x10_1 = &result[1]
    
    do
        *x10_1 = x8_5
        i_1 += 1
        x8_5 = x10_1
        x10_1 += 0x350
    while (i_1 s< sx.q(x19[5].d))
    
    x8_5 = x10_1 - 0x350

x19[3] = x8_5
return result
