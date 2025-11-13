// 函数: _Z15UI2MergeAttribsR3UI2PK9AttribMapR8UI2PropsP6XAsset18UI2AttribTreeIndexRK16UI2StateBindings
// 地址: 0x1019424
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x1688) = arg4
*(arg1 + 0x1690) = arg5
int64_t* x8 = *arg4

if (x8 == 0)
    if (*(arg4 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg4, false, true)
    int64_t* x23_2 = *(arg1 + 0x1688)
    x8 = *x23_2
    
    if (x8 == 0)
        if (x23_2[1].d == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        AssetCatalogLoadAsset(x23_2, false, true)
        x8 = *x23_2

return UI2MergeAttribMap(arg1, arg2, arg3, arg1 + 0x1438, **x8 + sx.q(*(arg1 + 0x1690)) * 0x18, 
    arg6, false, nullptr) __tailcall
