// 函数: _Z12TruetypeLoadPKcPv
// 地址: 0x10027ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = XCalloc(0x110)
int64_t x1 = *arg2
*(arg2 + 0x38) = x0
stbtt_InitFont(x0, x1, 0)
int64_t* x21 = *(arg2 + 0x20)
int64_t* x8 = *x21

if (x8 == 0)
    if (x21[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x21, false, true)
    x8 = *x21

int64_t var_38 = ***x8
int64_t x0_5
int64_t x1_3
x0_5, x1_3 = RectISet(V2I0, &var_38)
int32_t x8_5 = *(arg2 + 0x28)
int32_t x9 = *(arg2 + 0x2c)
int64_t x10 = *(arg2 + 0x30)
*(x0 + 0xa8) = x0_5
*(x0 + 0xb0) = x1_3
int32_t x22 = x9 * x8_5
*(x0 + 0xa0) = x10
int64_t x0_7 = RectISize(x0 + 0xa8)
int32_t x8_8 = (x0_7 u>> 0x20).d s/ *(x0 + 0xa4) * x0_7.d s/ *(x0 + 0xa0)
int32_t x9_3

x9_3 = x8_8 s> x22 ? x22 : x8_8

int32_t x22_1

x22_1 = x22 == 0 ? x8_8 : x9_3

int32_t x8_10 = (x22_1 - 1) | (x22_1 - 1) u>> 1
int32_t x8_11 = x8_10 | x8_10 u>> 2
int32_t x8_12 = x8_11 | x8_11 u>> 4
int32_t x8_13 = x8_12 | x8_12 u>> 8
int32_t x23 = x8_13 | x8_13 u>> 0x10
*(x0 + 0xe8) = XPooledCalloc((x23 << 3) + 8)
*(x0 + 0xf0) = x23
*(x0 + 0xc0) = XMalloc(x22_1 * 0xb0)
*(x0 + 0xcc) = x22_1 << 1
*(x0 + 0xe0) = "regions"
*(x0 + 0xd8) = 0xdf0c
RegionAllocator::Clear()
int32_t x8_16 = *(arg2 + 0x28) - 1
int32_t x8_17 = x8_16 | x8_16 u>> 1
int32_t x8_18 = x8_17 | x8_17 u>> 2
int32_t x8_19 = x8_18 | x8_18 u>> 4
int32_t x8_20 = x8_19 | x8_19 u>> 8
int32_t x20_1 = x8_20 | x8_20 u>> 0x10
int64_t result = XPooledCalloc((x20_1 << 3) + 8)
*(x0 + 0x100) = result
*(x0 + 0x108) = x20_1
return result
