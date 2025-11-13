// 函数: spAttachmentTimeline_create
// 地址: 0xfafa94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* result = _spCalloc(1, 0x30, "..\..\ExternalCode\spine-c\src\spine\spAnimation.c", 0x36e)
*result = 4
void* x0 = _spCalloc(1, 0x18, "..\..\ExternalCode\spine-c\src\spine\spAnimation.c", 0x52)
*(result + 8) = x0
*(x0 + 0x10) = _spAttachmentTimeline_dispose
**(result + 8) = _spAttachmentTimeline_apply
*(*(result + 8) + 8) = _spAttachmentTimeline_getPropertyId
result[4] = arg1
int64_t x19_1 = sx.q(arg1)
*(result + 0x18) = _spCalloc(x19_1, 4, "..\..\ExternalCode\spine-c\src\spine\spAnimation.c", 0x372)
*(result + 0x28) = _spCalloc(x19_1, 8, "..\..\ExternalCode\spine-c\src\spine\spAnimation.c", 0x373)
return result
