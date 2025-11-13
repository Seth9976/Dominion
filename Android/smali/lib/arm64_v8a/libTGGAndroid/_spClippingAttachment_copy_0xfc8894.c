// 函数: _spClippingAttachment_copy
// 地址: 0xfc8894
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = *arg1
void* result = _spCalloc(1, 0x68, "..\..\ExternalCode\spine-c\src\spine\ClippingAttachment.c", 0x32)
_spVertexAttachment_init()
_spAttachment_init(result, x20, 6, _spClippingAttachment_dispose, _spClippingAttachment_copy)
*(result + 0x60) = 0
spVertexAttachment_copyTo(arg1, result)
*(result + 0x60) = arg1[0xc]
return result
