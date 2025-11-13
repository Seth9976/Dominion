// 函数: _Z17UI2SubBoundaryIntP6XAssetPK8UI2Stateii
// 地址: 0x101335c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg1
int128_t v0
int128_t v1
int128_t v2
int128_t v3
AttribMap** x8_1

if (x8 == 0)
    AttribMap**** x21_1 = arg1
    
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    arg1, v0, v1, v2, v3 = AssetCatalogLoadAsset(x21_1, false, true)
    x8_1 = **x21_1
    
    if (x8_1[1].d != 0)
        UI2SubBoundaryItem(*x8_1, arg2, arg3)
        return 
else
    x8_1 = *x8
    
    if (x8_1[1].d != 0)
        UI2SubBoundaryItem(*x8_1, arg2, arg3)
        return 
v0.d = *RECT1
v1.d = *(RECT1 + 4)
v2.d = *(RECT1 + 8)
v3.d = *(RECT1 + 0xc)
