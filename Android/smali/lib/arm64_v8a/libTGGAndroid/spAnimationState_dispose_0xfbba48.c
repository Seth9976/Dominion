// 函数: spAnimationState_dispose
// 地址: 0xfbba48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 8) s>= 1)
    int64_t i = 0
    
    do
        _spAnimationState_disposeTrackEntries(arg1, *(*(arg1 + 0x10) + (i << 3)))
        i += 1
    while (i s< sx.q(*(arg1 + 8)))

_spFree(*(arg1 + 0x10))
void* x20_1 = *(arg1 + 0x48)
_spFree(*(x20_1 + 8))
_spFree(x20_1)
_spFree(*(arg1 + 0x40))
_spFree(*(arg1 + 0x50))
return _spFree(arg1) __tailcall
