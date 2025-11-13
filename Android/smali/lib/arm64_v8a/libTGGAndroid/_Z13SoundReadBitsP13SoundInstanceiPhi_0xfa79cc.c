// 函数: _Z13SoundReadBitsP13SoundInstanceiPhi
// 地址: 0xfa79cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = *arg1
void** x8

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
int32_t x9_2 = *(x8_2 + 0x10)
int64_t result

if (x9_2 == 2)
    result = SoundOggReadBits(arg1, arg2, arg3, arg4)
else
    if (x9_2 != 1)
        pthread_kill(pthread_self(), 6)
        int64_t* x0_5 = XNoReturn()
        *(x19 + 0x24) -= 1
        sub_1101e04(x0_5)
        noreturn
    
    result = AssetCatalogLoadHWBuffer(*arg1, arg3, arg2, arg4, *(x8_2 + 0x18))

*(x19 + 0x24) -= 1
return result
