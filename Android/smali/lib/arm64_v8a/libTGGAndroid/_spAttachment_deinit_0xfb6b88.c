// 函数: _spAttachment_deinit
// 地址: 0xfb6b88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = arg1[4]

if (x0 != 0)
    spAttachmentLoader_disposeAttachment(x0, arg1)

_spFree(arg1[2])
return _spFree(*arg1) __tailcall
