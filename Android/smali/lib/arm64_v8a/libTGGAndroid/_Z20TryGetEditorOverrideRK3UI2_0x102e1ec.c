// 函数: _Z20TryGetEditorOverrideRK3UI2
// 地址: 0x102e1ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = *(arg1 + 0x1688)
int64_t* x8 = *x20

if (x8 == 0)
    if (x20[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x20, false, true)
    x8 = *x20

void* x0_4 = AttribMapFindTag(**x8 + sx.q(*(arg1 + 0x1690)) * 0x18, 0x6f)
char* var_18 = nullptr

if (x0_4 == 0)
    if (LayerDivergence(arg1, &var_18) != 1)
        return 0
else
    AttribTagGetDefMap(*gUI2AttribTable, 0x6f)
    *(x0_4 + 8)

char var_28
XString::XString(&var_28)
int64_t result = UI2FindOverride(arg1, &var_28)
XString::~XString()
return result
