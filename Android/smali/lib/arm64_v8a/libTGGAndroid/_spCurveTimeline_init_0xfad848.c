// 函数: _spCurveTimeline_init
// 地址: 0xfad848
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = arg2
void* x0 = _spCalloc(1, 0x18, "..\..\ExternalCode\spine-c\src\spine\spAnimation.c", 0x52)
*(arg1 + 8) = x0
*(x0 + 0x10) = arg4
**(arg1 + 8) = arg5
*(*(arg1 + 8) + 8) = arg6
int64_t result = _spCalloc(sx.q(arg3 * 0x13 - 0x13), 4, 
    "..\..\ExternalCode\spine-c\src\spine\spAnimation.c", 0x75)
*(arg1 + 0x10) = result
return result
