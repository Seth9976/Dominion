// 函数: _Z19UI2GetScrollExtentsR3UI2R5RectFPK5Vec2I
// 地址: 0x104129c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *(arg1 + 0x167c)

if (x9 == 3)
    UI2GetScrollExtentsText(arg1, arg2)
    return 1

if (x9 == 2)
    return UI2GetScrollExtentsTable(arg1, arg3, arg2) __tailcall

pthread_kill(pthread_self(), 6)
int64_t x0_3
RectF* x1_3
x0_3, x1_3 = XNoReturn()
return UI2GetScrollExtents(x0_3, x1_3) __tailcall
