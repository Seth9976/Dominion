// 函数: _Z19UI2ApplyScrollDeltaR3UI2RK4Vec2
// 地址: 0x1041434
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(arg1 + 0x1528))

if (x8.d u> 3)
    pthread_kill(pthread_self(), 6)
    int64_t x0_2
    Vec2* x1
    x0_2, x1 = XNoReturn()
    return UI2ApplyScrollDelta(x0_2, x1) __tailcall

UI2& i = arg1

switch (x8)
    case 1
        *(i + 0x13ac) = *(i + 0x13ac) - *(arg2 + 4)
    case 2
        *(i + 0x13a8) = *arg2 + *(i + 0x13a8)
    case 3
        *(i + 0x13ac) = *(arg2 + 4) + *(i + 0x13ac)

int64_t result = UI2ClampScrollDelta(i, nullptr)

do
    *(i + 0x1378) = 2
    i = *(i + 0x17d0)
while (i != 0)

return result
