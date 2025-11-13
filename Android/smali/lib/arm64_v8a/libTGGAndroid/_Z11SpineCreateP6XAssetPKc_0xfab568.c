// 函数: _Z11SpineCreateP6XAssetPKc
// 地址: 0xfab568
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** x9 = *arg1
char const* x19 = arg2

if (x9 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg1, false, true)
    x9 = *arg1

void* x22 = *x9
uint64_t x23 = zx.q(*(gSpine + 0x10))
int32_t x9_1
int64_t x24

if (x23.d != *(gSpine + 8))
    x24 = *gSpine
    x9_1 = *(x24 + x23 * 0x28 + 0x20)
else
    x24 = *gSpine
    x9_1 = x23.d + 1
    *(gSpine + 8) = x9_1

*(gSpine + 0x10) = x9_1
int128_t v0
v0.q = 0
v0:8.q = 0
XAsset** x9_3 = x24 + x23 * 0x28
__builtin_memset(x9_3, 0, 0x20)
x9_3[4].d = x23.d | *(gSpine + 0x18) << 0x10
int32_t x10_3 = *(gSpine + 0x18)
int32_t x10_4

if (x10_3 == 0xffff)
    x10_4 = 1
else
    x10_4 = x10_3 + 1

*(gSpine + 0x14) += 1
*(gSpine + 0x18) = x10_4
uint64_t x21 = zx.q(x9_3[4].d)
*x9_3 = arg1

if (x19 == 0)
    void* x8_2 = *(x22 + 0x28)
    char** x9_4 = *(x8_2 + 0x60)
    
    if (x9_4 != 0)
        x19 = *x9_4
    else if (*(x8_2 + 0x50) == 0)
        x19 = nullptr
    else
        x19 = ***(x8_2 + 0x58)

void* x0_4 = spAnimationState_create(*(x22 + 0x30), v0)
void* x20_1 = x24 + x23 * 0x28
*(x20_1 + 0x10) = x0_4
*(x0_4 + 0x18) = SpineListener
*(*(x20_1 + 0x10) + 0x30) = x21
int64_t x0_6 = spSkeleton_create(*(x22 + 0x28))
*(x20_1 + 8) = x0_6

if (x19 != 0)
    spSkeleton_setSkinByName(x0_6, x19)

return zx.q(x21.d)
