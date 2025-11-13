// 函数: _Z35StructureAssetGetHardpointTransformP6XAsseti
// 地址: 0xfd317c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* x20 = arg1
int64_t* x8
int128_t v0

if (arg1 == 0)
    arg1, v0 = AssetPtrGetNull(2)
    x20 = arg1
    x8 = *x20
    
    if (x8 == 0)
        arg1, v0 = AssetCatalogLoadAsset(x20, false, true)
        x8 = *x20
else
    x8 = *x20
    
    if (x8 == 0)
        arg1, v0 = AssetCatalogLoadAsset(x20, false, true)
        x8 = *x20

int32_t x9 = *(x20 + 0x24)
*(x20 + 0x24) = x9 + 1
int128_t* x8_4 = *(**x8 + 0x28) + (sx.q(arg2) << 6)
int64_t x11 = x8_4[1].q
int32_t* entry_x8
entry_x8[7] = *(x8_4 + 0x18)
*(entry_x8 + 0x14) = x11
*(entry_x8 + 4) = *x8_4
v0.d = *(x8_4 + 0x1c)
v0.d = v0.d f+ x8_4[2].d
v0.d = v0.d f+ *(x8_4 + 0x24)
v0.d = v0.d f* float.s(0x3eaaaaab)
*entry_x8 = v0.d
*(x20 + 0x24) = x9
