// 函数: _Z23UI2EditorSetEditorStateRK3UI2RK7XString
// 地址: 0x1033e7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x21 = *(arg1 + 0x1688)
int64_t* x8 = *x21

if (x8 == 0)
    if (x21[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x21, false, true)
    x8 = *x21

AttribMap* x21_1 = **x8 + sx.q(*(arg1 + 0x1690)) * 0x18

if ((operator==(arg2, &data_793a18) & 1) == 0)
    return AttribMapSetString(*gUI2AttribTable, x21_1, 0x6f, XString::operator char const*())
        __tailcall

XString::operator=(arg1 + 0x17e0)
return AttribMapRemoveTag(*gUI2AttribTable, x21_1, 0x6f) __tailcall
