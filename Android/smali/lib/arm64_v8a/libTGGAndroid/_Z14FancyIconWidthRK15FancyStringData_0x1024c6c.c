// 函数: _Z14FancyIconWidthRK15FancyStringData
// 地址: 0x1024c6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *(arg1 + 0x60)
FancyStringData const& x19 = arg1
float v0
float v2_1

if (x8 == 0)
    XAsset** x8_1 = *(x19 + 0x10)
    
    if (x8_1 == 0)
        pthread_kill(pthread_self(), 6)
        return FancyFontHeight(XNoReturn()) __tailcall
    
    XAsset* x20_1 = *x8_1
    float*** x8_2 = *x20_1
    
    if (x8_2 == 0)
        if (*(x20_1 + 8) == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        AssetCatalogLoadAsset(x20_1, false, true)
        x8_2 = *x20_1
    
    float* x8_5 = **x8_2
    *x8_5
    x8_5[3] * x8_5[2]
else
    arg1, v0, v2_1 = UI2SubBoundaryState(*x8, *(x19 + 0x68))
*(x19 + 0x2c)
