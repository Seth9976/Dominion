// 函数: _Z19UI2GetScrollExtents9UI2HandleR5RectF
// 地址: 0x10412ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

UI2* x0 = *gUI2 + mulu.dp.d(zx.d(arg1), 0x19a8)
int32_t x8_1 = *(x0 + 0x167c)

if (x8_1 == 3)
    UI2GetScrollExtentsText(x0, arg2)
    return 1

if (x8_1 == 2)
    return UI2GetScrollExtentsTable(x0, nullptr, arg2) __tailcall

pthread_kill(pthread_self(), 6)
return UI2GetScrollExtentsTable(XNoReturn()) __tailcall
