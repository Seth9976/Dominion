// 函数: spDeformTimeline_create
// 地址: 0xfb0f50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* result = _spCalloc(1, 0x48, "..\..\ExternalCode\spine-c\src\spine\spAnimation.c", 0x46a)
*result = 6
void* x0 = _spCalloc(1, 0x18, "..\..\ExternalCode\spine-c\src\spine\spAnimation.c", 0x52)
*(result + 8) = x0
*(x0 + 0x10) = _spDeformTimeline_dispose
**(result + 8) = _spDeformTimeline_apply
*(*(result + 8) + 8) = _spDeformTimeline_getPropertyId
int64_t x0_2 = _spCalloc(sx.q(arg1 * 0x13 - 0x13), 4, 
    "..\..\ExternalCode\spine-c\src\spine\spAnimation.c", 0x75)
result[6] = arg1
int64_t x22_1 = sx.q(arg1)
*(result + 0x10) = x0_2
*(result + 0x20) = _spCalloc(x22_1, 4, "..\..\ExternalCode\spine-c\src\spine\spAnimation.c", 0x46d)
*(result + 0x30) = _spCalloc(x22_1, 8, "..\..\ExternalCode\spine-c\src\spine\spAnimation.c", 0x46e)
result[0xa] = arg2
return result
