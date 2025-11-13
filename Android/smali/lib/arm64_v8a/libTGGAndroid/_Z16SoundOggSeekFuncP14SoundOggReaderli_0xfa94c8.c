// 函数: _Z16SoundOggSeekFuncP14SoundOggReaderli
// 地址: 0xfa94c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2.d
int32_t x8_3

if (arg3 == 2)
    int64_t* x21_1 = *(arg1 + 0x3b0)
    void* x8_2
    
    if (x21_1 == 0)
        x8_2 = *(arg1 + 0x3b8)
    else
        int64_t* x8 = *x21_1
        
        if (x8 == 0)
            AssetCatalogLoadAsset(x21_1, false, true)
            x8 = *x21_1
        
        int32_t x9_1 = *(x21_1 + 0x24)
        *(x21_1 + 0x24) = x9_1 + 1
        x8_2 = *(*x8 + 0x38)
        *(x21_1 + 0x24) = x9_1
    
    x8_3 = *(x8_2 + 0x14)
else
    if (arg3 != 1)
        if (arg3 != 0)
            pthread_kill(pthread_self(), 6)
            return SoundOggCloseFunc(XNoReturn()) __tailcall
        
        *(arg1 + 0x3c0) = x19
        return 0
    
    x8_3 = *(arg1 + 0x3c0)

*(arg1 + 0x3c0) = x8_3 + x19
return 0
