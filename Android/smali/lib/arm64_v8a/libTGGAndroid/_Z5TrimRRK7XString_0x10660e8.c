// 函数: _Z5TrimRRK7XString
// 地址: 0x10660e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x9 = *arg1
char* x20

x20 = x9 == 0 ? &data_793a18 : x9

uint32_t i_1 = zx.d(*x20)
char* x8
int32_t x16_10

if (i_1 != 0)
    x8 = nullptr
    uint32_t i = i_1
    char* x13_1 = x20
    
    do
        int32_t x14_1 = i & 0xff
        int32_t x15_1 = i & 0xf0
        uint64_t x16_1 = zx.q(x14_1)
        
        if ((i & 0x80) != 0)
            if ((x14_1 & 0xe0) == 0xc0)
                x16_1 = (zx.q(x13_1[1]) & 0x3f) | zx.q((0x1f & x14_1) << 6)
            else if (x15_1 != 0xe0)
                x16_1 = zx.q(x14_1)
                
                if ((x14_1 & 0xf8) == 0xf0)
                    x16_1 = (zx.q(x13_1[3]) & 0x3f) | zx.q((0x3f & zx.d(x13_1[2])) << 6)
            else
                x16_1 = (zx.q(x13_1[2]) & 0x3f) | zx.q((0x3f & zx.d(x13_1[1])) << 6)
        
        x16_10 = ((x16_1.d & 0xff) u> 0x3f ? 1 : 0) | ((1 << x16_1 & 0x100002601) == 0 ? 1 : 0)
        char* x8_1
        
        x8_1 = x8 == 0 ? x13_1 : x8
        
        x8 = x16_10 != 0 ? nullptr : x8_1
        
        if ((x14_1 & 0x80) != 0)
            if ((x14_1 & 0xe0) == 0xc0)
                x13_1 = &x13_1[1]
            else if (x15_1 == 0xe0)
                x13_1 = &x13_1[2]
            else if ((x14_1 & 0xf8) == 0xf0)
                x13_1 = &x13_1[3]
        
        x13_1 = &x13_1[1]
        i = zx.d(*x13_1)
    while (i != 0)

int64_t* entry_x8

if (i_1 == 0 || x16_10 != 0)
    *entry_x8 = x9
    
    if (x9 != 0 && zx.d(*x9) != 0)
        *(x9 - 0xc) += 1
    
    return 

int32_t x22_1 = x8.d - x20.d
void* const x21_1 = &data_793a18

if (x22_1 != 0 && i_1 != 0)
    int64_t* x0_1 = XPooledMalloc(x22_1 + 0x11)
    x21_1 = &x0_1[2]
    x0_1[1].d = x22_1
    *(x0_1 + 0xc) = x22_1 + 1
    size_t x22_2 = sx.q(x22_1)
    *x0_1 = 0x1fafafafa
    memcpy(x21_1, x20, x22_2)
    *(x21_1 + x22_2) = 0

*entry_x8 = x21_1

if (zx.d(*x21_1) == 0)
    return 

*(x21_1 - 0xc) += 1

if (*gAllocatorArray == 0)
    return 

int32_t x8_9 = *(x21_1 - 0xc)
*(x21_1 - 0xc) = x8_9 - 1

if (x8_9 == 1)
    XPooledFree(x21_1 - 0x10, *(x21_1 - 4) + 0x10)
