// 函数: _Z24UI2EditorSyncDisplayTreev
// 地址: 0x102cb30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
*(gUI2Editor + 0x6000) = 0
int32_t x8 = *(gUI2Editor + 0x6010)

if (x8 == 0)
    return 

uint64_t x23_1 = zx.q(x8.w)
int64_t x22_1 = *gUI2
int32_t x21_1 = *(x22_1 + x23_1 * 0x19a8 + 0x1970)

if (x21_1 == 0)
    return 

FlattenTreeRec(x22_1 + zx.q(*(x22_1 + x23_1 * 0x19a8 + 0x1870)) * 0x19a8, gUI2Editor, 
    gUI2Editor + 0x6000, 0)

if (x21_1 != 1)
    int32_t x8_2 = 1
    
    do
        uint64_t x23_2 = zx.q(x8_2)
        FlattenTreeRec(
            *gUI2 + zx.q(*(x22_1 + x23_1 * 0x19a8 + (x23_2 << 0x20 s>> 0x1e) + 0x1870)) * 0x19a8, 
            gUI2Editor, gUI2Editor + 0x6000, 0)
        x8_2 = x23_2.d + 1
    while (x21_1 != x8_2)

if (*(gUI2Editor + 0x6000) s< 1)
    return 

int64_t i = 0
int32_t x24_1 = 0
int32_t x20_1 = 0
int64_t (* x25_1)() = gUI2Editor + 0x10
int32_t x26_1 = -1

do
    UI2* x21_2 = *(x25_1 - 0x10)
    int32_t x8_6 = *(x25_1 - 8)
    *(x25_1 - 4) = 0xffffffff
    
    if ((x20_1 & 1) == 0 || x8_6 == x26_1)
        goto label_102cc84
    
    int64_t* x8_7
    int64_t* x22_3
    
    if (x8_6 s<= x26_1)
        x26_1 = -1
        *x25_1 = 0
    label_102cc84:
        uint32_t x9_6 = zx.d(*(x21_2 + 0x17))
        
        if (x9_6 != 0)
            x26_1 = x8_6
            *x25_1 = 1
        
        *(x25_1 - 4) = x24_1
        x20_1 = x9_6 != 0 ? 1 : 0
        x24_1 += 1
        *(gUI2Editor + 0x6004) += 1
        x22_3 = *(x21_2 + 0x1688)
        x8_7 = *x22_3
        
        if (x8_7 == 0)
            goto label_102ccc8
    else
        *(x25_1 - 4) = 0x2ffffffff
        x20_1 = 1
        x22_3 = *(x21_2 + 0x1688)
        x8_7 = *x22_3
        
        if (x8_7 == 0)
        label_102ccc8:
            
            if (x22_3[1].d == 0x15)
                XString::GetString()
                XTrace("Unpreloaded sound %s")
            
            AssetCatalogLoadAsset(x22_3, false, true)
            x8_7 = *x22_3
    void* x0 = AttribMapFindTag(**x8_7 + sx.q(*(x21_2 + 0x1690)) * 0x18, 0x6f)
    
    if (x0 != 0)
        AttribTagGetDefMap(*gUI2AttribTable, 0x6f)
        UI2SetStateByName(x21_2, *(x0 + 8))
    
    i += 1
    x25_1 += 0x18
while (i s< sx.q(*(gUI2Editor + 0x6000)))
