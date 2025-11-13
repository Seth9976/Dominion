// 函数: _spAttachmentTimeline_dispose
// 地址: 0xfafa34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

_spFree(*(arg1 + 8))

if (*(arg1 + 0x10) s>= 1)
    int64_t i = 0
    
    do
        _spFree(*(*(arg1 + 0x28) + (i << 3)))
        i += 1
    while (i s< sx.q(*(arg1 + 0x10)))

_spFree(*(arg1 + 0x28))
_spFree(*(arg1 + 0x18))
return _spFree(arg1) __tailcall
