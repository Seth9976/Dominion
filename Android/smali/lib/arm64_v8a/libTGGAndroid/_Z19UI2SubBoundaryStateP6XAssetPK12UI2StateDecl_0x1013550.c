// 函数: _Z19UI2SubBoundaryStateP6XAssetPK12UI2StateDecl
// 地址: 0x1013550
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* x19 = arg1
int128_t v0
int128_t v1
int128_t v2
int128_t v3

if (arg2 == 0)
    int64_t* x8_2 = *x19
    int64_t* x8_3
    
    if (x8_2 == 0)
        if (*(x19 + 8) == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        arg1, v0, v1, v2, v3 = AssetCatalogLoadAsset(x19, false, true)
        x8_3 = **x19
        
        if (x8_3[1].d != 0)
            UI2SubBoundaryItem(*x8_3, nullptr, 0)
            return 
    else
        x8_3 = *x8_2
        
        if (x8_3[1].d != 0)
            UI2SubBoundaryItem(*x8_3, nullptr, 0)
            return 
else
    UI2StateDecl const* var_40 = arg2
    int64_t var_38_1 = 0
    int32_t var_20_1 = 0
    AttribMap*** x8 = *x19
    AttribMap** x8_1
    
    if (x8 == 0)
        if (*(x19 + 8) == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        arg1, v0, v1, v2, v3 = AssetCatalogLoadAsset(x19, false, true)
        x8_1 = **x19
        
        if (x8_1[1].d != 0)
            UI2SubBoundaryItem(*x8_1, &var_40, 1)
            return 
    else
        x8_1 = *x8
        
        if (x8_1[1].d != 0)
            UI2SubBoundaryItem(*x8_1, &var_40, 1)
            return 

v0.d = *RECT1
v1.d = *(RECT1 + 4)
v2.d = *(RECT1 + 8)
v3.d = *(RECT1 + 0xc)
