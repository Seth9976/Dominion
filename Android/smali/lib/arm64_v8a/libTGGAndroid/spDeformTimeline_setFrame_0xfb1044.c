// 函数: spDeformTimeline_setFrame
// 地址: 0xfb1044
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21 = sx.q(arg2)
*(*(arg1 + 0x20) + (sx.q(arg2) << 2)) = arg4
int64_t result = _spFree(*(*(arg1 + 0x30) + (sx.q(arg2) << 3)))

if (arg3 == 0)
    *(*(arg1 + 0x30) + (x21 << 3)) = 0
    return result

(*(arg1 + 0x30))[x21] = _spMalloc(sx.q(*(arg1 + 0x28)) << 2, 
    "..\..\ExternalCode\spine-c\src\spine\spAnimation.c", 0x47a)
return memcpy((*(arg1 + 0x30))[x21], arg3, sx.q(*(arg1 + 0x28)) << 2) __tailcall
