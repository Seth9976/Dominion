// 函数: _Z28UI2EditorSetEditorStateByIdxRK3UI2i
// 地址: 0x1033d48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = *(arg1 + 0x1688)
int64_t* x8 = *x19

if (x8 == 0)
    if (x19[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x19, false, true)
    x8 = *x19

AttribMap* x19_1 = **x8 + sx.q(*(arg1 + 0x1690)) * 0x18

if (arg2 == 0xffffffff)
    XString::operator=(arg1 + 0x17e0)
    return AttribMapRemoveTag(*gUI2AttribTable, x19_1, 0x6f) __tailcall

GetStateName(arg1, arg2)
char var_28
XString::XString(&var_28)
XString::GetString()
XTrace("set state %s")
AttribMapSetString(*gUI2AttribTable, x19_1, 0x6f, XString::operator char const*())
return XString::~XString()
