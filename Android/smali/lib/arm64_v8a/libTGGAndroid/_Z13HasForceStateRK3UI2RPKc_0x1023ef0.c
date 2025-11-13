// 函数: _Z13HasForceStateRK3UI2RPKc
// 地址: 0x1023ef0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x21 = *(arg1 + 0x1688)
int64_t* x8 = *x21

if (x8 == 0)
    if (x21[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x21, false, true)
    x8 = *x21

void* x0_4 = AttribMapFindTag(**x8 + sx.q(*(arg1 + 0x1690)) * 0x18, 0x70)

if (x0_4 != 0)
    AttribTagGetDefMap(*gUI2AttribTable, 0x70)
    *arg2 = *(x0_4 + 8)

return zx.q(x0_4 != 0 ? 1 : 0)
