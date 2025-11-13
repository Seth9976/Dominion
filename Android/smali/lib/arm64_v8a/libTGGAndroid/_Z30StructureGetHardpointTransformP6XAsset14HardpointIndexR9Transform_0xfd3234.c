// 函数: _Z30StructureGetHardpointTransformP6XAsset14HardpointIndexR9Transform
// 地址: 0xfd3234
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

*(x20 + 0x24) += 1
int128_t* x8_4 = *(**x8 + 0x28) + (arg3 << 0x20 s>> 0x1a)
int64_t x10 = x8_4[1].q
int32_t* entry_x3
entry_x3[7] = *(x8_4 + 0x18)
*(entry_x3 + 0x14) = x10
v0 = *x8_4
*entry_x3 = 0x3f800000
*(entry_x3 + 4) = v0
*(x20 + 0x24) -= 1
