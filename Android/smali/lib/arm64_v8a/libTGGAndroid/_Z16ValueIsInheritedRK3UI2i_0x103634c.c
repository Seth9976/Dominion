// 函数: _Z16ValueIsInheritedRK3UI2i
// 地址: 0x103634c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2

if (arg2 - 0x64 u> 0x11)
label_10363a0:
    
    if (x19 == 0x111)
        return 0
else
    int32_t x9_1 = 1 << (arg2 - 0x64)
    
    if ((x9_1 & 0x80d) != 0)
        return 0
    
    if ((x9_1 & 0x3c000) == 0)
        goto label_10363a0
    
    x19 = 0x71

void* x0_1 = TryGetEditorOverride(arg1)
AttribMap* x0_2

if (x0_1 == 0)
    int64_t* x21_1 = *(arg1 + 0x1688)
    int64_t* x8_1 = *x21_1
    
    if (x8_1 == 0)
        if (x21_1[1].d == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        AssetCatalogLoadAsset(x21_1, false, true)
        x8_1 = *x21_1
    
    x0_2 = **x8_1 + sx.q(*(arg1 + 0x1690)) * 0x18
else
    x0_2 = x0_1 + 0x18

return (zx.q(AttribMapTagExists(x0_2, x19)) ^ 1) & 1
