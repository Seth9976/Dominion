// 函数: _Z19SoundOggReaderCloseP13SoundInstance
// 地址: 0xfa9780
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = *(arg1 + 0x68)

if (x20 == 0)
    return 

ov_clear(x20)
XPooledFree(x20, 0x3c8)
*(arg1 + 0x68) = 0
