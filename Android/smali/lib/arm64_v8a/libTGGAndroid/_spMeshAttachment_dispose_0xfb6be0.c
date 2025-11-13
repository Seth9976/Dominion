// 函数: _spMeshAttachment_dispose
// 地址: 0xfb6be0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

_spFree(*(arg1 + 0x98))
_spFree(*(arg1 + 0xa8))

if (*(arg1 + 0xd8) != 0)
    _spAttachment_deinit(arg1)
    return _spFree(arg1) __tailcall

_spVertexAttachment_deinit(arg1)
_spFree(*(arg1 + 0xa0))
_spFree(*(arg1 + 0xb8))
_spFree(*(arg1 + 0xe8))
return _spFree(arg1) __tailcall
