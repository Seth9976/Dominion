// 函数: _Z16TTFontGetRuntimeP6XAsset
// 地址: 0x1003e64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* x19 = arg1
void* x22_1
bool cond:0_1

do
    void** x8_1 = *x19
    void** x8_2
    void*** x21_1
    
    if (x8_1 == 0)
        if (*(x19 + 8) == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        AssetCatalogLoadAsset(x19, false, true)
        x22_1 = **x19
        x21_1 = *(x22_1 + 0x20)
        x8_2 = *x21_1
        
        if (x8_2 != 0)
            goto label_1003e94
        
        goto label_1003ef0
    
    x22_1 = *x8_1
    x21_1 = *(x22_1 + 0x20)
    x8_2 = *x21_1
    XAsset* x9_1
    void* x8_7
    
    if (x8_2 == 0)
    label_1003ef0:
        
        if (x21_1[1].d == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        AssetCatalogLoadAsset(x21_1, false, true)
        x8_7 = **x21_1
        x9_1 = *(x8_7 + 0x20)
        
        if (x9_1 == 0)
            *(x8_7 + 0x20) = x19
            break
    else
    label_1003e94:
        x8_7 = *x8_2
        x9_1 = *(x8_7 + 0x20)
        
        if (x9_1 == 0)
            *(x8_7 + 0x20) = x19
            break
    cond:0_1 = x9_1 != x19
    x19 = x9_1
while (cond:0_1)
return *(x22_1 + 0x38)
