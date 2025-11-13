// 函数: spScaleTimeline_create
// 地址: 0xfaea0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* result = _spCalloc(1, 0x30, "..\..\ExternalCode\spine-c\src\spine\spAnimation.c", 0xeb)
*result = 2
void* x0 = _spCalloc(1, 0x18, "..\..\ExternalCode\spine-c\src\spine\spAnimation.c", 0x52)
*(result + 8) = x0
*(x0 + 0x10) = _spBaseTimeline_dispose
**(result + 8) = _spScaleTimeline_apply
*(*(result + 8) + 8) = _spScaleTimeline_getPropertyId
int32_t x8_2 = arg1 * 3
*(result + 0x10) = _spCalloc(sx.q(arg1 * 0x13 - 0x13), 4, 
    "..\..\ExternalCode\spine-c\src\spine\spAnimation.c", 0x75)
result[6] = x8_2
*(result + 0x20) =
    _spCalloc(sx.q(x8_2), 4, "..\..\ExternalCode\spine-c\src\spine\spAnimation.c", 0xef)
return result
