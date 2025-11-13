// 函数: _Z20StateEffectDefLookupR3UI2PKc
// 地址: 0x1042db0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x21 = *(arg1 + 0x1688)
UI2& result = arg1
int64_t* x8 = *x21

if (x8 == 0)
    if (x21[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x21, false, true)
    x8 = *x21

UI2** x0_4 = AttribMapGetDef(*gUI2AttribTable, **x8 + sx.q(*(result + 0x1690)) * 0x18, 
    *macro_ptr_UI2StateEffectDefs, 0x6e)

if (x0_4 != 0)
    int64_t x21_1 = sx.q(x0_4[1].d)
    
    if (x21_1.d s>= 1)
        result = *x0_4
        int64_t x22_1 = 0
        
        do
            if (strcasecmp(*result, arg2) == 0)
                return result
            
            x22_1 += 1
            result += 0x18
        while (x22_1 s< x21_1)

pthread_kill(pthread_self(), 6)
XNoReturn()
return result
