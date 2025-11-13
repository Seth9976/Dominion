// 函数: _Z17SoundInstanceFreeP13SoundInstance
// 地址: 0xfa6038
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = *arg1
int64_t* x8

if (x19 == 0)
    x19 = AssetPtrGetNull(0x15)
    x8 = *x19
    
    if (x8 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x8 = *x19
else
    x8 = *x19
    
    if (x8 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x8 = *x19

*(x19 + 0x24) += 1
void* x8_2 = *(*x8 + 0x38)

if (x8_2 != 0 && *(x8_2 + 0x10) == 2)
    SoundOggReaderClose(arg1)

int64_t* x0_1 = *gSoundInterface
int64_t result = (*(*x0_1 + 0x68))(x0_1, arg1)
void* x8_6 = *gpSoundGlobals
int32_t x10 = *(x8_6 + 0x10)
*(x8_6 + 0x10) = zx.d(*(arg1 + 0x78))
*(arg1 + 0x78) = x10
*(x8_6 + 0x14) -= 1
*(x19 + 0x24) -= 1
return result
