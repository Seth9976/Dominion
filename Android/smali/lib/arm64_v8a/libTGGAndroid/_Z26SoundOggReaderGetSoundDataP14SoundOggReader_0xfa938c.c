// 函数: _Z26SoundOggReaderGetSoundDataP14SoundOggReader
// 地址: 0xfa938c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = *(arg1 + 0x3b0)

if (x19 == 0)
    return *(arg1 + 0x3b8)

int64_t* x8 = *x19

if (x8 == 0)
    AssetCatalogLoadAsset(x19, false, true)
    x8 = *x19

int32_t x9 = *(x19 + 0x24)
*(x19 + 0x24) = x9 + 1
int64_t result = *(*x8 + 0x38)
*(x19 + 0x24) = x9
return result
