// 函数: _Z16FabSubstateTable5FabIDii
// 地址: 0xf5e58c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = zx.q(arg1)
int64_t x22 = *gFabs
int64_t* x21 = *(x22 + mulu.dp.d(x23.d, 0x4e8))
int64_t* x8_1 = *x21
int128_t v0
int128_t v1

if (x8_1 == 0)
    if (x21[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    v0, v1 = AssetCatalogLoadAsset(x21, false, true)
    x8_1 = *x21

int64_t x21_1 = **x8_1
int32_t x9_1 = *(x22 + x23 * 0x4e8 + (sx.q(arg2) << 2) + 0x88)
FabState* x20_1
int32_t x8_4
uint64_t x27_1

if (x9_1 == 0)
    x8_4 = *(gFabs + 8)
    x27_1 = zx.q(*(gFabs + 0x10))
    uint64_t x8_5
    int64_t x9_2
    int32_t x10_3
    
    if (x27_1.d == x8_4)
    label_f5e65c:
        x9_2 = *gFabs
        x10_3 = x8_4 + 1
        *(gFabs + 8) = x10_3
        x8_5 = zx.q(x8_4)
    else
    label_f5e680:
        x9_2 = *gFabs
        x10_3 = *(x9_2 + x27_1 * 0x4e8 + 0x4e0)
        x8_5 = x27_1
    
    *(gFabs + 0x10) = x10_3
    x20_1 = x9_2 + x8_5 * 0x4e8
    v0, v1 = memset(x20_1, 0, 0x4e0)
    *(x20_1 + 0x4e0) = x27_1.d | *(gFabs + 0x18) << 0x10
    int32_t x8_9 = *(gFabs + 0x18)
    int32_t x8_10
    
    if (x8_9 == 0xffff)
        x8_10 = 1
    else
        x8_10 = x8_9 + 1
    
    *(gFabs + 0x14) += 1
    *(gFabs + 0x18) = x8_10
    *(x22 + x23 * 0x4e8 + (sx.q(arg2) << 2) + 0x88) = *(x20_1 + 0x4e0)
else
    x8_4 = *(gFabs + 8)
    uint64_t x10_1 = zx.q(x9_1.w)
    
    if (x10_1.d u< x8_4)
        x20_1 = *gFabs + x10_1 * 0x4e8
    
    if (x10_1.d u>= x8_4 || *(x20_1 + 0x4e0) != x9_1)
        x27_1 = zx.q(*(gFabs + 0x10))
        
        if (x27_1.d != x8_4)
            goto label_f5e680
        
        goto label_f5e65c
void* x8_12 = x22 + x23 * 0x4e8
v0 = *(x8_12 + 0x50)
FabEl* x0_4 = x21_1 + sx.q(arg2) * 0xe0
*(x20_1 + 0x40) = *(x8_12 + 0x40)
*(x20_1 + 0x50) = v0
int32_t x8_13 = *(x0_4 + 0x94)
int32_t x9_5 = *(x0_4 + 0x98)
uint64_t var_60 = zx.q(arg3 s% x8_13) | zx.q(arg3 s/ x8_13 s% x9_5) << 0x20
int32_t var_58 = arg3 s/ (x9_5 * x8_13)
FabSubstateTable(x0_4, x20_1, &var_60)
return zx.q(*(x20_1 + (sx.q(arg3) << 2) + 0x88))
