// 函数: _Z27StructureFindHardpointIndexP6XAssetPKc
// 地址: 0xfd3098
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* x19 = arg1
int64_t* x8

if (arg1 == 0)
    x19 = AssetPtrGetNull(2)
    x8 = *x19
    
    if (x8 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x8 = *x19
else
    x8 = *x19
    
    if (x8 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x8 = *x19

*(x19 + 0x24) += 1
int64_t* x21 = *x8
int32_t i = strcrc32(arg2, 0)
void* x10 = *x21
uint64_t x9_2

if (x10 != 0)
    x9_2 = zx.q(*(x10 + 0x20))

int64_t result

if (x10 == 0 || x9_2.d s< 1)
    result = 0xffffffff
else
    result = 0
    int32_t* x10_2 = *(x10 + 0x28) + 0x2c
    
    while (*x10_2 != i)
        result += 1
        x10_2 = &x10_2[0x10]
        
        if (x9_2 == result)
            result = 0xffffffff
            break
    
    if (x19 == 0)
        return result

*(x19 + 0x24) -= 1
return result
