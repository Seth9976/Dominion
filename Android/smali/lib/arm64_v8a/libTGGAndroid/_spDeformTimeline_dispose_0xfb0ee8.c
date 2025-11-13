// 函数: _spDeformTimeline_dispose
// 地址: 0xfb0ee8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

_spFree(*(arg1 + 8))
_spFree(*(arg1 + 0x10))

if (*(arg1 + 0x18) s>= 1)
    int64_t i = 0
    
    do
        _spFree(*(*(arg1 + 0x30) + (i << 3)))
        i += 1
    while (i s< sx.q(*(arg1 + 0x18)))

_spFree(*(arg1 + 0x30))
_spFree(*(arg1 + 0x20))
return _spFree(arg1) __tailcall
