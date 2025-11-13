// 函数: _Z18GetCurrentStateIdxRK3UI2
// 地址: 0x1033bf4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x21 = *(arg1 + 0x1688)
int64_t* x8 = *x21
AttribTable* x20 = *gUI2AttribTable

if (x8 == 0)
    if (x21[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x21, false, true)
    x8 = *x21

int64_t* x0_4 =
    AttribMapGetDef(x20, **x8 + sx.q(*(arg1 + 0x1690)) * 0x18, *macro_ptr_UI2StateOverrides, 0x69)

if (x0_4 != 0 && x0_4[1].d != 0)
    int64_t* x22_1 = *(arg1 + 0x1688)
    AttribTable* x21_1 = *gUI2AttribTable
    int64_t* x8_5 = *x22_1
    
    if (x8_5 == 0)
        if (x22_1[1].d == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        AssetCatalogLoadAsset(x22_1, false, true)
        x8_5 = *x22_1
    
    char* s2 = AttribMapGetString(x21_1, **x8_5 + sx.q(*(arg1 + 0x1690)) * 0x18, 0x6f)
    int64_t x22_2 = sx.q(x0_4[1].d)
    
    if (x22_2.d s>= 1)
        int64_t* x20_2 = *x0_4
        int64_t x19_1 = 0
        
        do
            if (strcasecmp(*x20_2, s2) == 0)
                return zx.q(x19_1.d)
            
            x19_1 += 1
            x20_2 = &x20_2[6]
        while (x19_1 s< x22_2)

return zx.q(0xffffffff.d)
