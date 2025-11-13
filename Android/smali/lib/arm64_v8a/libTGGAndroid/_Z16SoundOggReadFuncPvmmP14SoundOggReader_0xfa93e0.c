// 函数: _Z16SoundOggReadFuncPvmmP14SoundOggReader
// 地址: 0xfa93e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x23 = *(arg4 + 0x3b0)
void* x8_2

if (x23 == 0)
    x8_2 = *(arg4 + 0x3b8)
else
    void** x8 = *x23
    
    if (x8 == 0)
        AssetCatalogLoadAsset(x23, false, true)
        x8 = *x23
    
    int32_t x9_1 = *(x23 + 0x24)
    *(x23 + 0x24) = x9_1 + 1
    x8_2 = *(*x8 + 0x38)
    *(x23 + 0x24) = x9_1

uint64_t x2 = zx.q(*(arg4 + 0x3c0))
int32_t x10_2 = arg3.d * arg2.d
int32_t x9_3 = *(x8_2 + 0x14) - x2.d
int32_t x22_1

x22_1 = x10_2 s< x9_3 ? x10_2 : x9_3

if (x22_1 s< 1)
    return 0

XAsset* x0_1 = *(arg4 + 0x3b0)
void* x4 = *(x8_2 + 0x18)
size_t x23_1

if (x0_1 == 0)
    x23_1 = zx.q(x22_1)
    memcpy(arg1, x4 + x2, x23_1)
else
    AssetCatalogLoadHWBuffer(x0_1, arg1, x2.d, x22_1, x4)
    x23_1 = zx.q(x22_1)

*(arg4 + 0x3c0) += x22_1
return x23_1 u/ arg2
