// 函数: spDrawOrderTimeline_create
// 地址: 0xfb14b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* result = _spCalloc(1, 0x30, "..\..\ExternalCode\spine-c\src\spine\spAnimation.c", 0x501)
*result = 8
void* x0 = _spCalloc(1, 0x18, "..\..\ExternalCode\spine-c\src\spine\spAnimation.c", 0x52)
*(result + 8) = x0
*(x0 + 0x10) = _spDrawOrderTimeline_dispose
**(result + 8) = _spDrawOrderTimeline_apply
*(*(result + 8) + 8) = _spDrawOrderTimeline_getPropertyId
result[4] = arg1
int64_t x20_1 = sx.q(arg1)
*(result + 0x18) = _spCalloc(x20_1, 4, "..\..\ExternalCode\spine-c\src\spine\spAnimation.c", 0x505)
*(result + 0x20) = _spCalloc(x20_1, 8, "..\..\ExternalCode\spine-c\src\spine\spAnimation.c", 0x506)
result[0xa] = arg2
return result
