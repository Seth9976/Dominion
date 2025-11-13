// 函数: _Z31FabDistributeOverrideDimensions5FabIDiRK5Vec3I
// 地址: 0xf6219c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = zx.q(arg1.d) & 0xffff
int64_t x21 = *gFabs
int32_t x9 = *(x21 + mulu.dp.d(x22.d, 0x4e8) + (sx.q(arg2) << 2) + 0x88)
void* x20_1
int128_t v0
int128_t v1
int32_t x8_1
uint64_t x25_1

if (x9 == 0)
    x8_1 = *(gFabs + 8)
    x25_1 = zx.q(*(gFabs + 0x10))
    uint64_t x8_2
    int32_t x9_1
    
    if (x25_1.d == x8_1)
    label_f62208:
        x9_1 = x8_1 + 1
        *(gFabs + 8) = x9_1
        x8_2 = zx.q(x8_1)
    else
    label_f62230:
        x9_1 = *(x21 + x25_1 * 0x4e8 + 0x4e0)
        x8_2 = x25_1
    
    *(gFabs + 0x10) = x9_1
    x20_1 = x21 + x8_2 * 0x4e8
    arg1, v0, v1 = memset(x20_1, 0, 0x4e0)
    *(x20_1 + 0x4e0) = x25_1.d | *(gFabs + 0x18) << 0x10
    int32_t x8_6 = *(gFabs + 0x18)
    int32_t x8_7
    
    if (x8_6 == 0xffff)
        x8_7 = 1
    else
        x8_7 = x8_6 + 1
    
    *(gFabs + 0x14) += 1
    *(gFabs + 0x18) = x8_7
    *(x21 + mulu.dp.d(x22.d, 0x4e8) + (sx.q(arg2) << 2) + 0x88) = *(x20_1 + 0x4e0)
else
    x8_1 = *(gFabs + 8)
    uint64_t x10_1 = zx.q(x9.w)
    
    if (x10_1.d u< x8_1)
        x20_1 = x21 + x10_1 * 0x4e8
    
    if (x10_1.d u>= x8_1 || *(x20_1 + 0x4e0) != x9)
        x25_1 = zx.q(*(gFabs + 0x10))
        
        if (x25_1.d != x8_1)
            goto label_f62230
        
        goto label_f62208
void* x8_9 = x21 + x22 * 0x4e8
v1 = *(x8_9 + 0x40)
v0 = *(x8_9 + 0x50)
*(x20_1 + 0x78) = *(x20_1 + 0x60) + 1
*(x20_1 + 0x40) = v1
*(x20_1 + 0x50) = v0
int64_t x9_5 = *arg3
*(x20_1 + 0x84) = *(arg3 + 8)
*(x20_1 + 0x7c) = x9_5
