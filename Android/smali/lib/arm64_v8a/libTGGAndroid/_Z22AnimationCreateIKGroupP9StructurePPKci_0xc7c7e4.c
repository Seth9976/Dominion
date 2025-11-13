// 函数: _Z22AnimationCreateIKGroupP9StructurePPKci
// 地址: 0xc7c7e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg1 + 0x38)
char const** x21 = arg2
int64_t x19 = sx.q(*(x8 + 0x348))
*(x8 + 0x348) = x19.d + 1
int64_t* x20 = *(arg1 + 8)
int64_t x23 = *(arg1 + 0x38)
DefStructureImportData*** x8_1

if (x20 == 0)
    x20 = AssetPtrGetNull(2)
    x8_1 = *x20
    
    if (x8_1 == 0)
        AssetCatalogLoadAsset(x20, false, true)
        x8_1 = *x20
else
    x8_1 = *x20
    
    if (x8_1 == 0)
        AssetCatalogLoadAsset(x20, false, true)
        x8_1 = *x20

*(x20 + 0x24) += 1
DefStructureImportData** x24 = *x8_1
*(x23 + x19 * 0x130 + 0x1ec) = arg3

if (arg3 s<= 0)
    *(x23 + x19 * 0x130 + 0xe8) = 0
    *(x20 + 0x24) -= 1
else
    uint64_t i_1 = zx.q(arg3)
    int32_t* x25_1 = x23 + x19 * 0x130 + 0xec
    uint64_t i
    
    do
        *x25_1 = FindBoneIndexByName(*x24, *x21)
        x25_1 = &x25_1[1]
        i = i_1
        i_1 -= 1
        x21 = &x21[1]
    while (i != 1)
    *(x23 + x19 * 0x130 + 0xe8) = 0
    
    if (x20 != 0)
        *(x20 + 0x24) -= 1

return zx.q(x19.d)
