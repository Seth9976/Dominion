// 函数: _Z18DoIHaveEditorStateRK3UI2PKc
// 地址: 0x102df10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x21 = *(arg1 + 0x1688)
int64_t* x8 = *x21

if (x8 == 0)
    if (x21[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x21, false, true)
    x8 = *x21

char*** result = AttribMapGetDef(*gUI2AttribTable, **x8 + sx.q(*(arg1 + 0x1690)) * 0x18, 
    *macro_ptr_UI2StateOverrides, 0x69)

if (result != 0)
    int64_t x20_1 = sx.q(result[1].d)
    
    if (x20_1.d s< 1)
        return 0
    
    char** x21_1 = *result
    int64_t x22_1 = 1
    int32_t i
    
    do
        char* s1 = *x21_1
        x21_1 = &x21_1[6]
        i = strcasecmp(s1, arg2)
        result = zx.q(i == 0 ? 1 : 0)
        
        if (x22_1 s>= x20_1)
            break
        
        x22_1 += 1
    while (i != 0)

return result
