// 函数: _Z9FabBoundsP6XAssetRK8FabState
// 地址: 0xf5b5c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0

if (arg1 != 0)
    int64_t* x8 = *arg1
    XAsset* x21_1 = arg1
    int64_t* x8_1
    
    if (x8 == 0)
        if (*(x21_1 + 8) == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        int128_t v1
        arg1, v0, v1 = AssetCatalogLoadAsset(x21_1, false, true)
        x8_1 = **x21_1
        
        if (x8_1[1].d != 0)
            return ElBox(*x8_1, arg2) __tailcall
    else
        x8_1 = *x8
        
        if (x8_1[1].d != 0)
            return ElBox(*x8_1, arg2) __tailcall

v0 = *(OBBOX_ONE + 0x10)
int128_t* entry_x8
entry_x8[2].q = *(OBBOX_ONE + 0x20)
*entry_x8 = *OBBOX_ONE
entry_x8[1] = v0
