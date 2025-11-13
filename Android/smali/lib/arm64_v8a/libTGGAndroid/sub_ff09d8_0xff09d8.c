// 函数: sub_ff09d8
// 地址: 0xff09d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x9 = *(arg1 + 0xb8)
void* x8 = *(arg1 + 0xc0)
void* x10_1
int128_t v0

if (x9 u>= x8)
    if (*(arg1 + 0x30) == 0)
        *(arg1 + 0xb8) = *(arg1 + 0xc8)
        return 0
    
    int32_t x0_1
    x0_1, v0 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
    
    if (x0_1 == 0)
        *(arg1 + 0x30) = 0
        *(arg1 + 0x38) = 0
        *(arg1 + 0xb8) = arg1 + 0x39
        *(arg1 + 0xc0) = arg1 + 0x39
        *(arg1 + 0xb8) = *(arg1 + 0xc8)
        return 0
    
    uint32_t x9_2 = zx.d(*(arg1 + 0x38))
    x8 = arg1 + 0x38 + sx.q(x0_1)
    x10_1 = arg1 + 0x39
    *(arg1 + 0xb8) = x10_1
    *(arg1 + 0xc0) = x8
    
    if (x9_2 != 0x47)
        *(arg1 + 0xb8) = *(arg1 + 0xc8)
        return 0
else
    x10_1 = &x9[1]
    *(arg1 + 0xb8) = x10_1
    
    if (zx.d(*x9) != 0x47)
        *(arg1 + 0xb8) = *(arg1 + 0xc8)
        return 0

void* x11_1

if (x10_1 u>= x8)
    if (*(arg1 + 0x30) == 0)
        *(arg1 + 0xb8) = *(arg1 + 0xc8)
        return 0
    
    int32_t x0_3
    x0_3, v0 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
    uint32_t x9_4
    
    if (x0_3 == 0)
        x9_4 = 0
        *(arg1 + 0x30) = 0
        x8 = arg1 + 0x39
        *(arg1 + 0x38) = 0
    else
        x9_4 = zx.d(*(arg1 + 0x38))
        x8 = arg1 + 0x38 + sx.q(x0_3)
    
    x11_1 = arg1 + 0x39
    *(arg1 + 0xb8) = x11_1
    *(arg1 + 0xc0) = x8
    
    if (x9_4 != 0x49)
        *(arg1 + 0xb8) = *(arg1 + 0xc8)
        return 0
else
    x11_1 = x10_1 + 1
    *(arg1 + 0xb8) = x11_1
    
    if (zx.d(*x10_1) != 0x49)
        *(arg1 + 0xb8) = *(arg1 + 0xc8)
        return 0

void* x10_2

if (x11_1 u>= x8)
    if (*(arg1 + 0x30) == 0)
        *(arg1 + 0xb8) = *(arg1 + 0xc8)
        return 0
    
    int32_t x0_5
    x0_5, v0 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
    uint32_t x9_6
    
    if (x0_5 == 0)
        x9_6 = 0
        *(arg1 + 0x30) = 0
        x8 = arg1 + 0x39
        *(arg1 + 0x38) = 0
    else
        x9_6 = zx.d(*(arg1 + 0x38))
        x8 = arg1 + 0x38 + sx.q(x0_5)
    
    x10_2 = arg1 + 0x39
    *(arg1 + 0xb8) = x10_2
    *(arg1 + 0xc0) = x8
    
    if (x9_6 != 0x46)
        *(arg1 + 0xb8) = *(arg1 + 0xc8)
        return 0
else
    x10_2 = x11_1 + 1
    *(arg1 + 0xb8) = x10_2
    
    if (zx.d(*x11_1) != 0x46)
        *(arg1 + 0xb8) = *(arg1 + 0xc8)
        return 0

void* x11_2

if (x10_2 u>= x8)
    if (*(arg1 + 0x30) == 0)
        *(arg1 + 0xb8) = *(arg1 + 0xc8)
        return 0
    
    int32_t x0_7
    x0_7, v0 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
    uint32_t x9_8
    
    if (x0_7 == 0)
        x9_8 = 0
        *(arg1 + 0x30) = 0
        x8 = arg1 + 0x39
        *(arg1 + 0x38) = 0
    else
        x9_8 = zx.d(*(arg1 + 0x38))
        x8 = arg1 + 0x38 + sx.q(x0_7)
    
    x11_2 = arg1 + 0x39
    *(arg1 + 0xb8) = x11_2
    *(arg1 + 0xc0) = x8
    
    if (x9_8 != 0x38)
        *(arg1 + 0xb8) = *(arg1 + 0xc8)
        return 0
else
    x11_2 = x10_2 + 1
    *(arg1 + 0xb8) = x11_2
    
    if (zx.d(*x10_2) != 0x38)
        *(arg1 + 0xb8) = *(arg1 + 0xc8)
        return 0

uint32_t x9_9
void* x10_3

if (x11_2 u>= x8)
    if (*(arg1 + 0x30) == 0)
        *(arg1 + 0xb8) = *(arg1 + 0xc8)
        return 0
    
    int32_t x0_9
    x0_9, v0 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
    
    if (x0_9 == 0)
        x9_9 = 0
        *(arg1 + 0x30) = 0
        x8 = arg1 + 0x39
        *(arg1 + 0x38) = 0
    else
        x9_9 = zx.d(*(arg1 + 0x38))
        x8 = &(arg1 + 0x38)[sx.q(x0_9)]
    
    x10_3 = arg1 + 0x39
    *(arg1 + 0xb8) = x10_3
    *(arg1 + 0xc0) = x8
else
    x10_3 = x11_2 + 1
    *(arg1 + 0xb8) = x10_3
    x9_9 = zx.d(*x11_2)

if (x9_9 != 0x39 && x9_9 != 0x37)
    *(arg1 + 0xb8) = *(arg1 + 0xc8)
    return 0

uint32_t x8_22

if (x10_3 u< x8)
    *(arg1 + 0xb8) = x10_3 + 1
    x8_22 = zx.d(*x10_3)
    *(arg1 + 0xb8) = *(arg1 + 0xc8)
    return zx.q(x8_22 == 0x61 ? 1 : 0)

if (*(arg1 + 0x30) == 0)
    *(arg1 + 0xb8) = *(arg1 + 0xc8)
    return 0

int32_t x0_11
x0_11, v0 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
void* x9_12

if (x0_11 == 0)
    x8_22 = 0
    *(arg1 + 0x30) = 0
    x9_12 = arg1 + 0x39
    *(arg1 + 0x38) = 0
else
    x8_22 = zx.d(*(arg1 + 0x38))
    x9_12 = &(arg1 + 0x38)[sx.q(x0_11)]

*(arg1 + 0xb8) = arg1 + 0x39
*(arg1 + 0xc0) = x9_12
*(arg1 + 0xb8) = *(arg1 + 0xc8)
return zx.q(x8_22 == 0x61 ? 1 : 0)
