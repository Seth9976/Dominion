// 函数: spAttachmentTimeline_setFrame
// 地址: 0xfafb54
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21 = sx.q(arg2)
*(*(arg1 + 0x18) + (sx.q(arg2) << 2)) = arg4
int64_t result = _spFree(*(*(arg1 + 0x28) + (sx.q(arg2) << 3)))

if (arg3 == 0)
    *(*(arg1 + 0x28) + (x21 << 3)) = 0
    return result

int64_t x0_4 =
    _spMalloc(strlen(arg3) + 1, "..\..\ExternalCode\spine-c\src\spine\spAnimation.c", 0x37d)
*(*(arg1 + 0x28) + (x21 << 3)) = x0_4
return strcpy(x0_4, arg3) __tailcall
