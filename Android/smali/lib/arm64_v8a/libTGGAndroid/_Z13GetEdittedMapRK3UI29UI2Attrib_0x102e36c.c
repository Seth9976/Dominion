// 函数: _Z13GetEdittedMapRK3UI29UI2Attrib
// 地址: 0x102e36c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(arg2 - 0x64)

if (x8.d u> 0x27 || (1 << x8 & 0xe00000000d) == 0)
    int64_t x0_5 = TryGetEditorOverride(arg1)
    
    if (x0_5 != 0)
        return x0_5 + 0x18
    
    char* var_18
    
    if (LayerDivergence(arg1, &var_18) == 1)
        char var_28
        XString::XString(&var_28)
        int64_t x0_11 = UI2FindOverride(arg1, &var_28)
        XString::~XString()
        return x0_11 + 0x18

int64_t* x20 = *(arg1 + 0x1688)
int64_t* x8_2 = *x20

if (x8_2 == 0)
    if (x20[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x20, false, true)
    x8_2 = *x20

return **x8_2 + sx.q(*(arg1 + 0x1690)) * 0x18
