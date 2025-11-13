// 函数: _Z23GetSortTypeFromMaterialP6XAsset
// 地址: 0xc932e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(gDraw3DData + 0x4b8)

if (x8 u<= 1)
    int64_t* x8_1 = *arg1
    
    if (x8_1 == 0)
        if (*(arg1 + 8) == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        AssetCatalogLoadAsset(arg1, false, true)
        x8_1 = *arg1
    
    void* x9_1 = *x8_1
    uint32_t x8_3 = zx.d(*(x9_1 + 0x10))
    uint32_t x9_2 = zx.d(*(x9_1 + 0x11))
    
    if ((x9_2 | x8_3) == 0)
        return 4
    
    if (x9_2 == 0)
        pthread_kill(pthread_self(), 6)
        return RenderQuadDataAlloc(XNoReturn()) __tailcall
    
    x8 = x8_3 == 0 ? 3 : 2

return zx.q(x8)
