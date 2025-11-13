// 函数: _Z26NetworkMakeLocalConnectionP5NetIDS0_
// 地址: 0xf87d04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x9 = *gNetwork
uint64_t x10 = zx.q(x9[2].d)
int64_t x8_1
int32_t x11

if (x10.d != x9[1].d)
    x8_1 = *x9
    x11 = *(x8_1 + x10 * 0x90 + 0x88)
else
    x8_1 = *x9
    x11 = x10.d + 1
    x9[1].d = x11

x9[2].d = x11
int128_t* x22 = x8_1 + x10 * 0x90
__builtin_memset(&x22[3], 0, 0x58)
__builtin_memset(x22, 0, 0x20)
x22[2] = zx.o(0)
*(x22 + 0x88) = x10.d | x9[3].d << 0x10
int32_t x10_2 = x9[3].d
int32_t x10_3

if (x10_2 == 0xffff)
    x10_3 = 1
else
    x10_3 = x10_2 + 1

*(x9 + 0x14) += 1
x9[3].d = x10_3
*x22 = 0
x22[2].q = 0x5ffffffff
*(x22 + 0x3c) = 0x100000004
int64_t* x9_1 = *gNetwork
uint64_t x10_4 = zx.q(x9_1[2].d)
int64_t x11_6
int32_t x12_1

if (x10_4.d != x9_1[1].d)
    x11_6 = *x9_1
    x12_1 = *(x11_6 + x10_4 * 0x90 + 0x88)
else
    x11_6 = *x9_1
    x12_1 = x10_4.d + 1
    x9_1[1].d = x12_1

x9_1[2].d = x12_1
int128_t* x21 = x11_6 + x10_4 * 0x90
__builtin_memset(x21, 0, 0x88)
*(x21 + 0x88) = x10_4.d | x9_1[3].d << 0x10
int32_t x10_6 = x9_1[3].d
int32_t x10_7

if (x10_6 == 0xffff)
    x10_7 = 1
else
    x10_7 = x10_6 + 1

*(x9_1 + 0x14) += 1
x9_1[3].d = x10_7
int32_t x9_2 = *(x21 + 0x88)
x21[2].q = 0x5ffffffff
*x21 = 0
*(x21 + 0x3c) = 0x200000004
x22[2].d = x9_2
x21[2].d = *(x22 + 0x88)
*arg1 = *(x22 + 0x88)
*arg2 = *(x21 + 0x88)
uint64_t x8_7 = *gNetwork
int32_t x9_3 = *(x8_7 + 0x90)
int32_t* x19
int128_t v0
int128_t v1

if (x9_3 == 0)
    int32_t* x0_1
    x0_1, v0, v1 = XCalloc(0xed70)
    x19 = x0_1
else
    void* x0 = *(x8_7 + 0x88)
    void* x10_8 = *(x0 + 0x10)
    *(x8_7 + 0x88) = x10_8
    
    if (x10_8 == 0)
        *(x8_7 + 0x80) = 0
    else
        *(x10_8 + 8) = 0
        x9_3 = *(x8_7 + 0x90)
    
    x19 = *x0
    *(x8_7 + 0x90) = x9_3 - 1
    v0, v1 = XPooledFree(x0, 0x18)
x19[1] = 0x5dd
int32_t x8_8 = *(x22 + 0x88)
x19[2] = 0
*x19 = x8_8
v0 = x22[1]
*(x19 + 0xed48) = *x22
*(x19 + 0xed58) = v0
void* x22_1 = *gNetwork
void** x0_2 = XPooledCalloc(0x18)
*x0_2 = x19
x0_2[1] = 0
x0_2[2] = *(x22_1 + 0x58)
void* x8_11 = *(x22_1 + 0x58)
void* x8_12

if (x8_11 == 0)
    x8_12 = x22_1 + 0x50
else
    x8_12 = x8_11 + 8

*x8_12 = x0_2
int32_t x8_13 = *(x22_1 + 0x60)
*(x22_1 + 0x58) = x0_2
*(x22_1 + 0x60) = x8_13 + 1
uint64_t x8_15 = *gNetwork
int32_t x9_6 = *(x8_15 + 0x90)
int32_t* x19_1
int128_t v0_1
int128_t v1_1

if (x9_6 == 0)
    int32_t* x0_4
    x0_4, v0_1, v1_1 = XCalloc(0xed70)
    x19_1 = x0_4
else
    void* x0_3 = *(x8_15 + 0x88)
    void* x10_10 = *(x0_3 + 0x10)
    *(x8_15 + 0x88) = x10_10
    
    if (x10_10 == 0)
        *(x8_15 + 0x80) = 0
    else
        *(x10_10 + 8) = 0
        x9_6 = *(x8_15 + 0x90)
    
    x19_1 = *x0_3
    *(x8_15 + 0x90) = x9_6 - 1
    v0_1, v1_1 = XPooledFree(x0_3, 0x18)
x19_1[1] = 0x3ea
int32_t x8_16 = *(x21 + 0x88)
x19_1[2] = 0
*x19_1 = x8_16
v0_1 = x21[1]
*(x19_1 + 0xed48) = *x21
*(x19_1 + 0xed58) = v0_1
void* x20 = *gNetwork
void** result = XPooledCalloc(0x18)
*result = x19_1
result[1] = 0
result[2] = *(x20 + 0x58)
void* x8_19 = *(x20 + 0x58)
void* x8_20

if (x8_19 == 0)
    x8_20 = x20 + 0x50
else
    x8_20 = x8_19 + 8

*x8_20 = result
int32_t x8_21 = *(x20 + 0x60)
*(x20 + 0x58) = result
*(x20 + 0x60) = x8_21 + 1
return result
