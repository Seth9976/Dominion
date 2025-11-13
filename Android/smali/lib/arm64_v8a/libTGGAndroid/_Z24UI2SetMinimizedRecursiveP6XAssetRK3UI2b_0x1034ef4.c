// 函数: _Z24UI2SetMinimizedRecursiveP6XAssetRK3UI2b
// 地址: 0x1034ef4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x22 = *(arg2 + 0x1688)
int64_t* x8 = *x22

if (x8 == 0)
    if (x22[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x22, false, true)
    x8 = *x22

int64_t result =
    AttribMapSetBool(*gUI2AttribTable, **x8 + sx.q(*(arg2 + 0x1690)) * 0x18, 0x8b, arg3 & 1)
UI2 const& i = arg2

do
    *(i + 0x1378) = 2
    i = *(i + 0x17d0)
while (i != 0)

UI2 const& i_1 = arg2

do
    *(i_1 + 0x1370) = 0
    *(i_1 + 0x1710) = 0x3f800000
    i_1 = *(i_1 + 0x17d0)
while (i_1 != 0)

int32_t x22_1 = *(arg2 + 0x1970)

if (x22_1 != 0)
    uint64_t x25_1 = 0
    bool cond:0_1
    
    do
        uint64_t x8_7 = zx.q(*(arg2 + (x25_1 << 0x20 s>> 0x1e) + 0x1870))
        int64_t x9_1 = *gUI2
        
        if (*(x9_1 + x8_7 * 0x19a8 + 0x1688) == arg1)
            result = UI2SetMinimizedRecursive(arg1, x9_1 + x8_7 * 0x19a8, arg3 & 1)
        
        cond:0_1 = x22_1 == x25_1.d + 1
        x25_1 = zx.q(x25_1.d + 1)
    while (not(cond:0_1))

return result
