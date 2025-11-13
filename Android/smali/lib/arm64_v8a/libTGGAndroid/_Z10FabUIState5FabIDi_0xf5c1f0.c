// 函数: _Z10FabUIState5FabIDi
// 地址: 0xf5c1f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = zx.q(arg1)
int64_t x21 = *gFabs
int64_t* x20 = *(x21 + mulu.dp.d(x22.d, 0x4e8))
int64_t* x8_1 = *x20
int128_t v0
int128_t v1

if (x8_1 == 0)
    if (x20[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    v0, v1 = AssetCatalogLoadAsset(x20, false, true)
    x8_1 = *x20

int64_t x20_1 = **x8_1
int32_t x9_1 = *(x21 + x22 * 0x4e8 + (sx.q(arg2) << 2) + 0x88)
void* x19_1
int32_t x8_4
uint64_t x26_1

if (x9_1 == 0)
    x8_4 = *(gFabs + 8)
    x26_1 = zx.q(*(gFabs + 0x10))
    uint64_t x8_5
    int64_t x9_2
    int32_t x10_3
    
    if (x26_1.d == x8_4)
    label_f5c2b8:
        x9_2 = *gFabs
        x10_3 = x8_4 + 1
        *(gFabs + 8) = x10_3
        x8_5 = zx.q(x8_4)
    else
    label_f5c2dc:
        x9_2 = *gFabs
        x10_3 = *(x9_2 + x26_1 * 0x4e8 + 0x4e0)
        x8_5 = x26_1
    
    *(gFabs + 0x10) = x10_3
    x19_1 = x9_2 + x8_5 * 0x4e8
    v0, v1 = memset(x19_1, 0, 0x4e0)
    *(x19_1 + 0x4e0) = x26_1.d | *(gFabs + 0x18) << 0x10
    int32_t x8_9 = *(gFabs + 0x18)
    int32_t x8_10
    
    if (x8_9 == 0xffff)
        x8_10 = 1
    else
        x8_10 = x8_9 + 1
    
    *(gFabs + 0x14) += 1
    *(gFabs + 0x18) = x8_10
    *(x21 + x22 * 0x4e8 + (sx.q(arg2) << 2) + 0x88) = *(x19_1 + 0x4e0)
else
    x8_4 = *(gFabs + 8)
    uint64_t x10_1 = zx.q(x9_1.w)
    
    if (x10_1.d u< x8_4)
        x19_1 = *gFabs + x10_1 * 0x4e8
    
    if (x10_1.d u>= x8_4 || *(x19_1 + 0x4e0) != x9_1)
        x26_1 = zx.q(*(gFabs + 0x10))
        
        if (x26_1.d != x8_4)
            goto label_f5c2dc
        
        goto label_f5c2b8
void* x8_12 = x21 + x22 * 0x4e8
v1 = *(x8_12 + 0x50)
XAsset* x8_13 = *(x19_1 + 0x68)
*(x19_1 + 0x40) = *(x8_12 + 0x40)
*(x19_1 + 0x50) = v1
uint32_t x0_4 = *(x19_1 + 8)
XAsset* x20_2

if (x8_13 == 0)
    x20_2 = *(x20_1 + sx.q(arg2) * 0xe0 + 0x88)
else
    x20_2 = x8_13

if (x0_4 != 0)
    if (UIStateAsset(x0_4) == x20_2)
        return zx.q(*(x19_1 + 8))
    
    UIStateDestroy(*(x19_1 + 8))
else if (x20_2 == 0)
    return 0

uint64_t result = UIStateLoad(x20_2)
*(x19_1 + 8) = result.d
return result
