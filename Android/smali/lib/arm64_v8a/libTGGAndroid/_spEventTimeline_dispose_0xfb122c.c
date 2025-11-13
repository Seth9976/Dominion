// 函数: _spEventTimeline_dispose
// 地址: 0xfb122c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

_spFree(*(arg1 + 8))

if (*(arg1 + 0x10) s>= 1)
    int64_t i = 0
    
    do
        spEvent_dispose(*(*(arg1 + 0x20) + (i << 3)))
        i += 1
    while (i s< sx.q(*(arg1 + 0x10)))

_spFree(*(arg1 + 0x20))
_spFree(*(arg1 + 0x18))
return _spFree(arg1) __tailcall
