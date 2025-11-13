// 函数: _Z15LayerDivergenceRK3UI2RPKc
// 地址: 0x102e0dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x0 = FindParentEditorState(arg1)
*arg2 = x0
int32_t x20_1
char* x1_2
char* s2

if (*(arg1 + 0x17d0) == 0)
    x1_2 = x0
    s2 = nullptr
    
    if (x1_2 == 0 || zx.d(*x1_2) == 0)
        x20_1 = 0
    else
    label_102e190:
        
        if ((DoIHaveEditorState(arg1, x1_2) & 1) == 0)
            x20_1 = 0
        else
            if (s2 == 0)
                return 1
            
            x20_1 = 1
            
            if (zx.d(*s2) != 0)
                if (strcasecmp(*arg2, s2) != 0)
                    return 2
                
                return 1
else
    int64_t* x21 = *(arg1 + 0x1688)
    int64_t* x8_1 = *x21
    
    if (x8_1 == 0)
        if (x21[1].d == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        AssetCatalogLoadAsset(x21, false, true)
        x8_1 = *x21
    
    char* s2_1 = AttribMapGetString(*gUI2AttribTable, **x8_1 + sx.q(*(arg1 + 0x1690)) * 0x18, 0x6f)
    x1_2 = *arg2
    s2 = s2_1
    
    if (x1_2 != 0 && zx.d(*x1_2) != 0)
        goto label_102e190
    
    x20_1 = 0
return zx.q(x20_1)
