// 函数: _spAnimationState_disposeTrackEntry
// 地址: 0xfbb7dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

spIntArray_dispose(*(arg1 + 0x80))
void* x20 = *(arg1 + 0x88)
_spFree(*(x20 + 8))
_spFree(x20)
_spFree(*(arg1 + 0x90))
return _spFree(arg1) __tailcall
