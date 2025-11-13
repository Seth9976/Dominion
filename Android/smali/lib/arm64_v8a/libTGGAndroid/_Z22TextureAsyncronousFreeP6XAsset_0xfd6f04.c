// 函数: _Z22TextureAsyncronousFreeP6XAsset
// 地址: 0xfd6f04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg1

if (x8 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg1, false, true)
    x8 = *arg1

void* x20 = *x8
void* x19_2 = *(x20 + 0x18)
XFree(*(x19_2 + 0x10))
XFree(*(x19_2 + 8))
int64_t result = XPooledFree(x19_2, 0x30)
*(x20 + 0x18) = 0
return result
