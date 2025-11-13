// 函数: _Z23UI2EditorChangeStateIdxi
// 地址: 0x103cae4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(gUI2Editor + 0x704c) == 0 || *(gUI2Editor + 0x6000) == 0)
    return 

int32_t x19_1 = arg1
UI2* x0_1 = UI2GetIndex(zx.q(*(gUI2Editor + 0x604c)))
int64_t* x22_1 = *(x0_1 + 0x1688)
int64_t* x8_1 = *x22_1
AttribTable* x21_1 = *gUI2AttribTable

if (x8_1 == 0)
    if (x22_1[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x22_1, false, true)
    x8_1 = *x22_1

arg1 = AttribMapGetDef(x21_1, **x8_1 + sx.q(*(x0_1 + 0x1690)) * 0x18, *macro_ptr_UI2StateOverrides, 
    0x69)

if (arg1 == 0)
    return 

int32_t x21_2 = *(arg1 + 8)

if (x21_2 == 0)
    return 

int32_t x8_5 = GetCurrentStateIdx(x0_1) + x19_1
int32_t x10

x10 = x8_5 != x21_2 ? x8_5 : -1

int32_t x1_3

if (x8_5 == 0xfffffffe)
    x1_3 = x21_2 - 1
else
    x1_3 = x10

UI2EditorSetEditorStateByIdx(x0_1, x1_3)
return UI2CreateUndoCheckpoint(false) __tailcall
