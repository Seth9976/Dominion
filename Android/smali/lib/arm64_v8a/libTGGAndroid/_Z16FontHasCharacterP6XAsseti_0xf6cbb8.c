// 函数: _Z16FontHasCharacterP6XAsseti
// 地址: 0xf6cbb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* x19 = arg1
int64_t* x9

if (arg1 == 0)
    x19 = AssetPtrGetNull(0x12)
    x9 = *x19
    
    if (x9 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x9 = *x19
else
    x9 = *x19
    
    if (x9 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x9 = *x19

int32_t x8 = *(x19 + 0x24)
*(x19 + 0x24) = x8 + 1
void* x9_1 = *x9
uint64_t result

if (arg2 s> 0x7f)
    uint64_t x11_1 = zx.q(arg2)
    int32_t* i = *(*(x9_1 + 0x38) + ((zx.q(*(x9_1 + 0x40)) & (x11_1 | x11_1 u>> 4)) << 3))
    
    if (i == 0)
        result = 0
    else
        do
            int32_t x10_3 = *i
            result = zx.q(x10_3 == arg2 ? 1 : 0)
            
            if (x10_3 == arg2)
                break
            
            i = *(i + 8)
        while (i != 0)
        
        if (x19 == 0)
            return result
else
    result = zx.q(*(x9_1 + (sx.q(arg2) << 2) + 0x48) != 0xffffffff ? 1 : 0)

*(x19 + 0x24) = x8
return result
