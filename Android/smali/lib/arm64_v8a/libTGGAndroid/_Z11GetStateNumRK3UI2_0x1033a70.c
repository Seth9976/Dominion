// 函数: _Z11GetStateNumRK3UI2
// 地址: 0x1033a70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x21 = *(arg1 + 0x1688)
int64_t* x8 = *x21
AttribTable* x19 = *gUI2AttribTable

if (x8 == 0)
    if (x21[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x21, false, true)
    x8 = *x21

uint64_t result =
    AttribMapGetDef(x19, **x8 + sx.q(*(arg1 + 0x1690)) * 0x18, *macro_ptr_UI2StateOverrides, 0x69)

if (result == 0)
    return result

return zx.q(*(result + 8))
