// 函数: _spPointAttachment_copy
// 地址: 0xfc8ab8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = *arg1
void* result = _spCalloc(1, 0x48, "..\..\ExternalCode\spine-c\src\spine\PointAttachment.c", 0x32)
_spAttachment_init(result, x20, 5, _spPointAttachment_dispose, _spPointAttachment_copy)
*(result + 0x28) = arg1[5].d
*(result + 0x2c) = *(arg1 + 0x2c)
int32_t v0 = arg1[6].d
*(result + 0x30) = v0
spColor_setFromColor(result + 0x34, arg1 + 0x34, v0)
return result
