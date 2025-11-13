// 函数: _Z21FabOverrideInnerScale5FabIDif
// 地址: 0xf624c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = zx.q(arg1.d) & 0xffff
float v8 = arg3
int64_t x20 = *gFabs
int32_t x9 = *(x20 + mulu.dp.d(x21.d, 0x4e8) + (sx.q(arg2) << 2) + 0x88)
void* x19_1
int128_t v1
int32_t x8_1
uint64_t x24_1

if (x9 == 0)
    x8_1 = *(gFabs + 8)
    x24_1 = zx.q(*(gFabs + 0x10))
    uint64_t x8_2
    int32_t x9_1
    
    if (x24_1.d == x8_1)
    label_f62538:
        x9_1 = x8_1 + 1
        *(gFabs + 8) = x9_1
        x8_2 = zx.q(x8_1)
    else
    label_f62560:
        x9_1 = *(x20 + x24_1 * 0x4e8 + 0x4e0)
        x8_2 = x24_1
    
    *(gFabs + 0x10) = x9_1
    x19_1 = x20 + x8_2 * 0x4e8
    arg1, v1 = memset(x19_1, 0, 0x4e0)
    *(x19_1 + 0x4e0) = x24_1.d | *(gFabs + 0x18) << 0x10
    int32_t x8_6 = *(gFabs + 0x18)
    int32_t x8_7
    
    if (x8_6 == 0xffff)
        x8_7 = 1
    else
        x8_7 = x8_6 + 1
    
    *(gFabs + 0x14) += 1
    *(gFabs + 0x18) = x8_7
    *(x20 + mulu.dp.d(x21.d, 0x4e8) + (sx.q(arg2) << 2) + 0x88) = *(x19_1 + 0x4e0)
else
    x8_1 = *(gFabs + 8)
    uint64_t x10_1 = zx.q(x9.w)
    
    if (x10_1.d u< x8_1)
        x19_1 = x20 + x10_1 * 0x4e8
    
    if (x10_1.d u>= x8_1 || *(x19_1 + 0x4e0) != x9)
        x24_1 = zx.q(*(gFabs + 0x10))
        
        if (x24_1.d != x8_1)
            goto label_f62560
        
        goto label_f62538
int32_t x9_4 = *(x19_1 + 0x60)
void* x8_9 = x20 + x21 * 0x4e8
v1 = *(x8_9 + 0x40)
arg3 = (*(x8_9 + 0x50)).d
*(x19_1 + 0x4b8) = v8
*(x19_1 + 0x4b4) = x9_4 + 1
*(x19_1 + 0x40) = v1
*(x19_1 + 0x50) = arg3.o
