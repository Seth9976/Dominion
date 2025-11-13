// 函数: spSkeletonBinary_dispose
// 地址: 0xfc0654
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x18) != 0)
    spAttachmentLoader_dispose(*(arg1 + 8))

_spFree(*(arg1 + 0x28))
_spFree(*(arg1 + 0x10))
return _spFree(arg1) __tailcall
