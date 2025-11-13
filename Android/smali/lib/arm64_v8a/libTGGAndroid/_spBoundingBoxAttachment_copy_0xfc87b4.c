// 函数: _spBoundingBoxAttachment_copy
// 地址: 0xfc87b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = *arg1
int64_t result =
    _spCalloc(1, 0x60, "..\..\ExternalCode\spine-c\src\spine\BoundingBoxAttachment.c", 0x31)
_spVertexAttachment_init()
_spAttachment_init(result, x20, 1, _spBoundingBoxAttachment_dispose, _spBoundingBoxAttachment_copy)
spVertexAttachment_copyTo(arg1, result)
return result
