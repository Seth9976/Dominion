// 函数: spEventTimeline_create
// 地址: 0xfb128c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* result = _spCalloc(1, 0x28, "..\..\ExternalCode\spine-c\src\spine\spAnimation.c", 0x4b6)
*result = 7
void* x0 = _spCalloc(1, 0x18, "..\..\ExternalCode\spine-c\src\spine\spAnimation.c", 0x52)
*(result + 8) = x0
*(x0 + 0x10) = _spEventTimeline_dispose
**(result + 8) = _spEventTimeline_apply
*(*(result + 8) + 8) = _spEventTimeline_getPropertyId
result[4] = arg1
int64_t x19_1 = sx.q(arg1)
*(result + 0x18) = _spCalloc(x19_1, 4, "..\..\ExternalCode\spine-c\src\spine\spAnimation.c", 0x4ba)
*(result + 0x20) = _spCalloc(x19_1, 8, "..\..\ExternalCode\spine-c\src\spine\spAnimation.c", 0x4bb)
return result
