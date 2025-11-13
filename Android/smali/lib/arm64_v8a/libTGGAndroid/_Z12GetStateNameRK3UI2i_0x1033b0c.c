// 函数: _Z12GetStateNameRK3UI2i
// 地址: 0x1033b0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x22 = *(arg1 + 0x1688)
int64_t* x8 = *x22
AttribTable* x20 = *gUI2AttribTable

if (x8 == 0)
    if (x22[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x22, false, true)
    x8 = *x22

int64_t* x0_4 =
    AttribMapGetDef(x20, **x8 + sx.q(*(arg1 + 0x1690)) * 0x18, *macro_ptr_UI2StateOverrides, 0x69)

if (x0_4 == 0)
    return &data_793a18

if ((arg2 & 0x80000000) == 0 && x0_4[1].d s> arg2)
    return *(*x0_4 + mulu.dp.d(arg2, 0x30))

return &data_793a18
