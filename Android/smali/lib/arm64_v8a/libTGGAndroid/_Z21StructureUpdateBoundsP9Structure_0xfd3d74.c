// 函数: _Z21StructureUpdateBoundsP9Structure
// 地址: 0xfd3d74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = *(arg1 + 8)
int64_t* x8

if (x20 == 0)
    x20 = AssetPtrGetNull(2)
    x8 = *x20
    
    if (x8 == 0)
        AssetCatalogLoadAsset(x20, false, true)
        x8 = *x20
else
    x8 = *x20
    
    if (x8 == 0)
        AssetCatalogLoadAsset(x20, false, true)
        x8 = *x20

*(x20 + 0x24) += 1
int64_t* x8_1 = *x8
void* x9_2 = *x8_1
float v0

if (x9_2 == 0)
    *(arg1 + 0x68) = 0x3f800000
    v0 = fconvert.s(1f)
else
    v0 = *(arg1 + 0x2c)
    *(arg1 + 0x68) = v0 * *(x9_2 + 0x58)
    v0 = v0 * *(*x8_1 + 0x5c)

*(arg1 + 0x6c) = v0
*(x20 + 0x24) -= 1
