// 函数: _spAttachment_init
// 地址: 0xfb6afc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = _spCalloc(1, 0x10, "..\..\ExternalCode\spine-c\src\spine\spAttachment.c", 0x2a)
arg1[2] = x0
*x0 = arg4
*(arg1[2] + 8) = arg5
int64_t x0_4 =
    _spMalloc(strlen(arg2) + 1, "..\..\ExternalCode\spine-c\src\spine\spAttachment.c", 0x2e)
*arg1 = x0_4
int64_t result = strcpy(x0_4, arg2)
arg1[1].d = arg3
return result
