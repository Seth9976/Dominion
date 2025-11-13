// 函数: _Z17SpineGetAnimNamesP6XAssetPPKci
// 地址: 0xfac1a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** x8 = *arg1

if (x8 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg1, false, true)
    x8 = *arg1

void* x8_2 = *x8
void* x9 = *(x8_2 + 0x28)
int32_t result_1 = *(x9 + 0x78)
uint64_t result

if (result_1 s< arg3)
    result = zx.q(result_1)
else
    result = zx.q(arg3)

if (result.d s>= 1)
    *arg2 = ***(x9 + 0x80)
    
    if (result.d != 1)
        int64_t i = 1
        
        do
            i += 1
            arg2[i] = *(*(*(x8_2 + 0x28) + 0x80))[i]
        while (zx.q(result.d) != i)

return result
